#include <iostream>
#include <sstream>
#include <vector>
#include "file_operations.h"


int main() {
    std::cout << ">> ";
    std::string usr_input;
    getline(std::cin, usr_input);
    std::istringstream iss(usr_input);
    std::string token, cmd;
    std::vector<std::string> args;

    int count = 0;
    while (iss >> token) {
        if (count == 0) {
            cmd = token;
        }
        else {
            args.push_back(token);
        }
        count++;
    }

    if (cmd == "cp") {
        if (args.size() == 2) {
            copy(args[0], args[1]);
        }
        else {
            std::cout << "expected 2 args" << std::endl;
        }
    }

    return 0;
}
