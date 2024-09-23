#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

std::string fizzbuzz() {
    std::vector<std::string> output;
    std::string result = "{";
    
    for(int i = 1; i <= 100; i++) {
        if(i % 15 == 0) {
            output.push_back("FizzBuzz");
        }
        else if(i % 5 == 0) {
            output.push_back("Buzz");
        }
        else if(i % 3 == 0) {
            output.push_back("Fizz");
        }
        else {
            output.push_back(std::to_string(i));
        }
    }

    for(int x = 0; x < output.size(); x++) {
        result += output[x];
        if(x != output.size() - 1) {
            result += ", ";
        }
    }
    result += "}";

    return result;
}

int main() {
    std::ifstream testFile("test.txt");
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    // Read the expected output from the file
    std::getline(testFile, expected_output);

    // Generate FizzBuzz output
    std::string output = fizzbuzz();

    // Compare the result with the expected output
    if (output == expected_output) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed. Expected: \"" 
                  << expected_output << "\", Got: \"" 
                  << output << "\"" << std::endl;
    }

    testFile.close();
    return 0;
}
