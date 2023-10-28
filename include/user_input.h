#ifndef FILE_UTILS_USER_INPUT_H
#define FILE_UTILS_USER_INPUT_H

#include <string>
#include <vector>

std::string collect_input();
void parse_input(std::string& input, std::string& cmd, std::vector<std::string>& args);

#endif //FILE_UTILS_USER_INPUT_H
