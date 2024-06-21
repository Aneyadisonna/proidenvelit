#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("test.txt");
    if (inputFile.is_open()) {
        std::string line;
        int lineCount = 0;
        while (std::getline(inputFile, line)) {
            lineCount++;
        }
        inputFile.close();
        std::cout << "Number of lines in the file: " << lineCount << std::endl;
    }
    return 0;
}
