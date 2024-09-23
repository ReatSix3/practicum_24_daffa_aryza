#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string num_multi(int n) {
    long long int multi_val;
    std::string result;
    for (long long int i = 1; i <= 10; i++) {
        multi_val = n * i;
        result += "The result of multiplication of " + std::to_string(n) + " X " + std::to_string(i) + " is " + std::to_string(multi_val) + "\n";
    }
    return result;
}

int main() {
    std::ifstream testFile("test.txt");
    int input;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = num_multi(input);

        // Split the output string into lines
        std::stringstream ss(output);
        std::string line;
        bool test_passed = true;
        int i = 1;

        // Compare each line
        while (std::getline(ss, line)) {
            if (i == 1 && line != expected_output) {
                std::cout << "Test " << test_num << " failed at line " << i << ". Expected: \"" 
                          << expected_output << "\", Got: \"" << line << "\"" << std::endl;
                test_passed = false;
                break;
            }
            i++;
        }

        if (test_passed) {
            std::cout << "Test " << test_num << " passed!" << std::endl;
        }

        test_num++;
    }

    testFile.close();
    return 0;
}
