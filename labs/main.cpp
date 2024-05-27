#include <func.hpp>
#include <iostream>
#include <fstream>

int main()
{
	std::string path(PATH);
	path += "/file/file.txt";
	std::fstream out(path);
	if (out.is_open())
	{
		int last_number = zm::getLastNumber(out);
		std::string time = zm::currentDateTime();
		std::fstream out(path, std::ios::app);
		std::cout << last_number + 1 << " - " << time;
		out << "\n";
		out << last_number + 1 << " - " << time;
		out.close();
	}
	else
		std::cout << ("File is not open!") << std::endl;
	std::cout << std::endl;
	system("pause");
	return 0;
}