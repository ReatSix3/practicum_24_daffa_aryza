#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
#include <string>

std::string quadratic_solver(double a, double b, double c) {
    std::stringstream result;
    double discriminant = (pow(b, 2)) - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        result << "The roots of the equation are " << x1 << " and " << x2 << ".";
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        result << "The root of the equation is " << x << ".";
    } else {
        result << "There are no real roots.";
    }

    return result.str();
}

int main() {
    std::ifstream testFile("test.txt");
    double a, b, c;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> a >> b >> c && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = quadratic_solver(a, b, c);

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
