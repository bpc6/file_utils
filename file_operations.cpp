#include "file_operations.h"
#include <iostream>
#include <fstream>


int copy(const std::string& path_in, const std::string& path_out) {
    std::ifstream  src(path_in, std::ios::binary);
    if (!src.is_open()) {
        std::cerr << "Error: Cannot open the source file." << std::endl;
        return 0;
    }
    std::ofstream  dst(path_out, std::ios::binary);
    if (!dst.is_open()) {
        std::cerr << "Error: Cannot open the destination file." << std::endl;
        return 0;
    }
    dst << src.rdbuf();
    if (!dst) {
        std::cerr << "Error: Copy operation failed." << std::endl;
        return 0;
    }
    return 1;
}
