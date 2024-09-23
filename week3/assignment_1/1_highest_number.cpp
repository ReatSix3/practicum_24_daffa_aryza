#include <iostream>
#include <fstream>
#include <string>

std::string find_highest(double number_1, double number_2, double number_3) {
    if (number_1 >= number_2) {
        if (number_1 > number_3) {
            return std::to_string(number_1) + " is the HIGHEST number";
        } else if (number_3 > number_1) {
            return std::to_string(number_3) + " is the HIGHEST number";
        }
    } else if (number_2 > number_1) {
        if (number_2 > number_3) {
            return std::to_string(number_2) + " is the HIGHEST number";
        } else if (number_3 > number_2) {
            return std::to_string(number_3) + " is the HIGHEST number";
        }
    }
    return "";
}

int main() {
    std::ifstream testFile("test.txt");
    long double num1, num2, num3;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> num1 >> num2 >> num3 && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = find_highest(num1, num2, num3);
        if (output == expected_output) {
            std::cout << "Test " << test_num << " passed!" << std::endl;
        } else {
            std::cout << "Test " << test_num << " failed. Expected: \"" 
                      << expected_output << "\", Got: \"" << output << "\"" << std::endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
