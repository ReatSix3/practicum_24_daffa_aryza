#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> reverse_vector(const std::vector<std::string>& old_vector) {
    std::vector<std::string> new_vector;
    int vk_size = old_vector.size();
    
    for(int i = (vk_size - 1); i >= 0; i--) {
        new_vector.push_back(old_vector[i]);
    }
    
    return new_vector;
}

std::string vector_to_string(const std::vector<std::string>& vec) {
    std::string result = "[";
    for (int x = 0; x < vec.size(); x++) {
        result += vec[x];
        if (x != vec.size() - 1) {
            result += ", ";
        }
    }
    result += "]";
    return result;
}

int main() {
    std::ifstream testFile("test.txt");
    std::vector<std::string> old_vektor;
    std::string input;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    while (testFile >> input) {
        if (input == "exit") {
            break;
        }
        old_vektor.push_back(input);
    }

    std::string expected_output;
    std::getline(testFile >> std::ws, expected_output); 

    std::vector<std::string> new_vektor = reverse_vector(old_vektor);

    std::string output = vector_to_string(new_vektor);

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
