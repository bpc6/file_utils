#ifndef FILE_UTILS_FILE_OPERATIONS_H
#define FILE_UTILS_FILE_OPERATIONS_H

#include <string>
#include <vector>

int copy(const std::string& path_in, const std::string& path_out);
int remove_all(const std::vector<std::string>& files);
int move(const std::string& path_in, const std::string& path_out);

#endif //FILE_UTILS_FILE_OPERATIONS_H
