#include "file_operations.h"
#include <iostream>
#include <fstream>


int copy(const std::string& path_in, const std::string& path_out) {
    std::ifstream  src(path_in, std::ios::binary);
    if (!src.is_open()) {
        std::cerr << "Error: Cannot open the source file." << std::endl;
        return EXIT_FAILURE;
    }
    std::ofstream  dst(path_out, std::ios::binary);
    if (!dst.is_open()) {
        std::cerr << "Error: Cannot open the destination file." << std::endl;
        return EXIT_FAILURE;
    }
    dst << src.rdbuf();
    if (!dst) {
        std::cerr << "Error: Copy operation failed." << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}


int remove_all(const std::vector<std::string>& files) {
    for (const std::string& f : files) {
        if (std::remove(f.c_str())) {
            std::cerr << "Error: Remove operation failed for " << f  << std::endl;
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}


int move(const std::string& path_in, const std::string& path_out) {
    if (copy(path_in, path_out)) {
        return EXIT_FAILURE;
    }
    remove_all(std::vector<std::string>{path_in});
    return EXIT_SUCCESS;
}
