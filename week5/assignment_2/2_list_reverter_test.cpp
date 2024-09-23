#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Function to generate the Fibonacci sequence as a string
std::string fibonacci(int n) {
    std::vector<int> old_vektor{5,4,3,2,1};
    int vk_size = old_vektor.size();
    std::vector<int> new_vektor;
    for(int i = (vk_size-1);i >= 0;i-=1){
        new_vektor.push_back(old_vektor[i]);
    }
    
    std::cout << '[';
    for(int x = 0;x < vk_size;x ++){
        std::cout<<new_vektor[x];
        
        if (x != vk_size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    return std::to_string(new_vektor[vk_size-1]);
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
        std::string output = fibonacci(input);
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