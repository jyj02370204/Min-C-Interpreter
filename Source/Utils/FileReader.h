#pragma once

#include "Stable.h"
#include <fstream>
#include <string>

class FileReader {
public:
	FileReader(const std::string fileName);
	~FileReader();

	// Max length of a line is kBufferSize(default is 1024).
	std::string readLine();

	// Returns the string of file without '\n'.
	std::string readAll();

	uint16_t bufferSize() const { return kBufferSize; }

private:
	static const uint16_t kBufferSize = 1024;
	char buffer_[kBufferSize];
	std::ifstream file_;
};
