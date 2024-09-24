#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

std::string find_roots(long double a, long double b, long double c) {
    std::cout<<"For a value of: "<<a<<" , b value of: "<<b<<" ,and c value of: "<<c<<"...\n";
    long double D = (pow(b, 2)) - (4 * a * c);  
    if (D > 0) {
        long double x1 = (-b + sqrt(D)) / (2 * a);
        long double x2 = (-b - sqrt(D)) / (2 * a);
        std::cout<<"The roots of the equation are: " + std::to_string(x1) + " and " + std::to_string(x2) + "\n";
        return "The roots of the equation are: " + std::to_string(x1) + " and " + std::to_string(x2);
    } else if (D == 0) {
        long double x_root = -b / (2 * a);
        std::cout<<"The roots are real and equal which is: " + std::to_string(x_root) + "\n";
        return "The roots are real and equal which is: " + std::to_string(x_root);
    } else {
        std::cout<<"The roots are imaginary.\n";
        return "The roots are imaginary.";
    }
}

int main() {
    std::ifstream testFile("test.txt");
    long double a, b, c;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> a >> b >> c && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = find_roots(a, b, c);
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
