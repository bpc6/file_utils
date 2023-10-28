#include "../include/user_input.h"
#include <sstream>
#include <iostream>


std::string collect_input() {
    std::cout << ">> ";
    std::string usr_input;
    getline(std::cin, usr_input);
    return usr_input;
}


void parse_input(std::string& input, std::string& cmd, std::vector<std::string>& args) {
    std::string token;
    std::istringstream iss(input);

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
}
