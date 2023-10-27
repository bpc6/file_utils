#include <iostream>
#include <vector>
#include "file_operations.h"
#include "user_input.h"


int main() {
    std::string input = collect_input();
    std::string cmd;
    std::vector<std::string> args;
    parse_input(input, cmd, args);

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
