#pragma once
#include <string>
#include <iostream>
#include <fstream>

namespace zm
{
	int getLastNumber(std::fstream& file_read);
	std::string currentDateTime();

}