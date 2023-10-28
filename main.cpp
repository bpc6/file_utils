#include <iostream>
#include <vector>
#include "file_operations.h"
#include "user_input.h"


bool process_command(const std::string& cmd, const std::vector<std::string>& args);


int main() {
    bool cont = true;
    while (cont) {
        std::string input = collect_input();
        std::string cmd;
        std::vector<std::string> args;
        parse_input(input, cmd, args);
        cont = process_command(cmd, args);
    }
    return EXIT_SUCCESS;
}


bool process_command(const std::string& cmd, const std::vector<std::string>& args) {
    if (cmd == "exit") {
        return false;
    }

    if (cmd == "cp") {
        if (args.size() == 2) {
            copy(args[0], args[1]);
        } else {
            std::cout << "Expected exactly 2 args" << std::endl;
        }
    } else if (cmd == "mv") {
        if (args.size() == 2) {
            move(args[0], args[1]);
        } else {
            std::cout << "Expected exactly 2 args" << std::endl;
        }
    } else if (cmd == "rm") {
        if (!args.empty()) {
            remove_all(args);
        } else {
            std::cout << "Expected at least 1 arg" << std::endl;
        }
    } else {
        std::cout << "Unknown command: " << cmd << std::endl;
    }
    return true;
}
