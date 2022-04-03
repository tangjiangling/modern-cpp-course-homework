#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc != 3) {
        std::cout << "Unexpected argument count: " << argc << std::endl;
        return EXIT_FAILURE;
    }

    int first_file_number = 0;
    std::string first_file_extension;
    int second_file_number = 0;
    std::string second_file_extension;

    std::stringstream first_file_name;
    std::stringstream second_file_name;

    first_file_name << argv[1];
    second_file_name << argv[2];

    first_file_name >> first_file_number >> first_file_extension;
    second_file_name >> second_file_number >> second_file_extension;

    if (first_file_extension == ".txt" && second_file_extension == ".txt") {
        std::cout << (first_file_number + second_file_number) / 2 << std::endl;
    }
    else if (first_file_extension == ".png" && second_file_extension == ".png") {
        std::cout << first_file_number + second_file_number << std::endl;
    }
    else if (first_file_extension == ".txt" && second_file_extension == ".png") {
        std::cout << first_file_number % second_file_number << std::endl;
    }
    else {
        std::cerr << "Unexpected arguments" << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
