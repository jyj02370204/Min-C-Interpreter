#include "Stable.h"
#include "Script.h"
#include "Utils/FileReader.h"

int main(int argc, char *argv[]) {
	if (argc == 1) {
		return 0;
	}

	const char *fileName = argv[1];
	FileReader reader{ fileName };
	std::string source = reader.readAll();

	Script script = Script::Compile(source);
	std::string result = script.Run();
	std::cout << result;

	DBG_PRINT << source;
	system("pause");
    return 0;
}
