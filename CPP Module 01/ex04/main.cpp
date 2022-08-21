#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void read_and_replace(std::string filename, std::string find, std::string replace)
{
	std::ifstream file(filename);
	if (file.is_open())
	{
		std::cout << "File opened successfully" << std::endl;
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
		exit(0);
	}
	std::string line;
	std::string line2;

	std::string replace_filename = filename + ".replace";
	std::ofstream replace_file(replace_filename);
	std::size_t loc;
	while (!file.eof() && find.size())
	{
		line2 = "";
		std::cout << "hi" << std::endl;
		std::getline (file, line);
		loc = line.find(find);
		while (loc != 0xFFFFFFFFFFFFFFFF)
		{
			line.erase(loc, find.size());
			line2 = line2 + line.substr(0, loc);
			line2 = line2 + replace;
			line = line.substr (loc);
			loc = line.find(find);
			std::cout << "hi: " << loc << " " << line.size() << std::endl;
		}
		if (line.size() && loc == 0xFFFFFFFFFFFFFFFF)
		{
			line2 = line2 + line.substr(0, loc);
		}
		replace_file << line2;
		if (!file.eof())
			replace_file << "\n";
	}
	file.close();
	replace_file.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
		read_and_replace(argv[1], argv[2], argv[3]);
	else
	{
		std::cout << "Wrong number of arguements" << std::endl;
		std::cout << "Please follow the format below" << std::endl;
		std::cout << "./main <filename> <word1> <word2>" << std::endl;
	}
	return 0;
}