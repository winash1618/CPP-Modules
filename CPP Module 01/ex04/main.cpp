#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void read_and_replace(std::string filename, std::string find, std::string replace)
{
	std::ifstream file(filename);
	if (file.is_open())
	{
		std::cout << "Opened successfully" << std::endl;
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
		exit(0);
	}
	std::string line;
	std::string replace_filename = filename + ".replace";
	std::ofstream replace_file(replace_filename);
	std::size_t loc;
	while (!file.eof())
	{
		std::getline (file, line);
		loc = line.find(find);
		while (loc != 0xFFFFFFFFFFFFFFFF)
		{
			
			line.erase(loc, find.size());
			line.insert(loc,replace);
			loc = line.find(find);
		}
		replace_file << line;
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
	return 0;
}