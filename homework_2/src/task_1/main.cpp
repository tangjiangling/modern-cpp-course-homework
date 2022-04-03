#include <cstdlib>
#include <iostream>
#include <random>
#include <limits>

int main()
{
    int min_number = 0;
    int max_number = 99;
    std::random_device rd;
    std::uniform_int_distribution<int> dist(min_number, max_number);
    int target_number = target_number = dist(rd);

    int user_input_number;
    bool started = true;
    while (started) {
        std::cin >> user_input_number;
        if (std::cin.bad() || std::cin.eof()) {
            std::cerr << "Error encountered, exiting..." << std::endl;
            if (std::cin.eof()) {
                std::cout << target_number << std::endl;
            }
            started = false;
            return EXIT_FAILURE;
        }
        if (std::cin.fail() || user_input_number < 0 || user_input_number > 99) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "[WARNING] : Number must be between " << min_number << " and " << max_number << std::endl;
            continue;
        }

        if (user_input_number > target_number) {
            std::cout << "Target number is smaller." << std::endl;
        }
        else if (user_input_number < target_number) {
            std::cout << "Target number is larger." << std::endl;
        }
        else {
            std::cout << "Bingo." << std::endl;
            started = false;
        }
    }

    return EXIT_SUCCESS;
}
