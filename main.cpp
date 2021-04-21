#include <iostream>
#include <fstream>
#include <string>

/**
 *
 * @param file
 */
void myRead(std::ifstream *file) {
    std::string line;
    while (getline(*file, line)) {
        std::cout << line << std::endl;
    }
}

/**
 *
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {

    for (int i = 1; i < argc; i++) {

        std::ifstream file(argv[i]);

        //if command has just its name without doc name Or file does'nt exist
        if (argc == 1 || !file) {
            std::cerr << "No such file or directory " << argv[i] << std::endl;
        } else {
            myRead(&file);
        }
    }
    return 0;
}
