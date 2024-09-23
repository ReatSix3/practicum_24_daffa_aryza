#include <iostream>
#include <fstream>
#include <string>

// Function to generate the Fibonacci sequence as a string
std::string fibonacci(int n) {
    long long int counter,n_value;
    n_value = 1;
    counter = 1;
    for(int i = 1;i<n;i++){
        counter += 1;
        std::cout<<"The value of counter is: "<<counter<<"\n";
        n_value += counter;
        std::cout<<"The value of i is: "<<n_value<<"\n";
        if(i == (n-1)){
            std::cout<<"The sum of the value is "<<n_value<<"\n";
        }
    }

    return std::to_string(n_value);
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