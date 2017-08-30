#pragma once

#include <fstream>
#include <string>
#include <cstdint>

class FileReader {
public:
	FileReader(const std::string fileName);
	~FileReader();

	std::string getLine();

	std::string readAll();

private:
	static const uint16_t kBufferSize = 1024;
	char buffer[kBufferSize];
	std::ifstream file;
};