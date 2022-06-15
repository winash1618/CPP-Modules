#include <iostream>
#include <fstream>
#include <string>

void read_and_replace(std::string filename, std::string find, std::string replace)
{
	// std::fstream file;
	std::ifstream file(filename);
	
	// std::fstream replace_file;
	std::string line;
	std::string replace_filename = filename + ".replace";
	std::ofstream replace_file(replace_filename);
	std::size_t loc;
	// std::cout << "HI" << std::endl;
	// file.open(filename.c_str());
	// file.open(filename);
	while (!file.eof())
	{
		std::getline (file, line);
		loc = line.find(find);
		// std::cout << line << std::endl;
		while (loc != 0xFFFFFFFFFFFFFFFF)
		{
			
			line.erase(loc, find.size());
			line.insert(loc,replace);
			// std::cout << word << std::endl;
			loc = line.find(find);
			// word.erase(loc, find.size());
		}
		replace_file << line;
		if (!file.eof())
			replace_file << "\n";
	}
	// std::cout << line << std::endl;
	// replace_file.open(replace_filename, std::ios::out);
	// std::cout << find.size() << std::endl;
	// while(file >> word)
	// {
	// 	// std::cout << word << std::endl;
	// 	loc = word.find(find);
	// 	while (loc != 0xFFFFFFFFFFFFFFFF)
	// 	{
			
	// 		word.erase(loc, find.size());
	// 		word.insert(loc,replace);
	// 		std::cout << word << std::endl;
	// 		loc = word.find(find);
	// 		// word.erase(loc, find.size());
	// 	}
	// 	replace_file << word;
	// 	replace_file << " ";
	// 	// std::cout << word << std::endl;
	// 	// while (loc != std::string::npos)
	// 	// {
	// 	// 	loc = word.find(find);
	// 	// 	word.erase(loc, find.size());
	// 	// 	std::cout << loc << std::endl;
	// 	// 	// word.insert(loc,replace);
	// 	// }
	// }
	file.close();
	replace_file.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
		read_and_replace(argv[1], argv[2], argv[3]);
	return 0;
}