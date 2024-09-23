#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <algorithm> 

std::string dot_adder(long int x) {
    std::string x_str = std::to_string(x);
    int n = x_str.length();

    int start = 0;
    if (x_str[0] == '-') {
        start = 1;
    }

    for (int i = n - 3; i > start; i -= 3) {
        x_str.insert(i, ".");
    }

    x_str.append(",00");
    
    return x_str;
}

std::string trim(const std::string& str) {
    std::string trimmed = str;
    trimmed.erase(trimmed.begin(), std::find_if(trimmed.begin(), trimmed.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
    trimmed.erase(std::find_if(trimmed.rbegin(), trimmed.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), trimmed.end());
    return trimmed;
}

int main() {
    std::ifstream testFile("test.txt");
    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    std::stringstream captured_output;
    std::streambuf* original_cout_buffer = std::cout.rdbuf(); 
    std::cout.rdbuf(captured_output.rdbuf()); 

    long int gross_salary, tax, net_salary, fixed_installment, fixed_insurance;
    std::string name, expected_output;

    std::getline(testFile, name); 
    testFile >> gross_salary >> fixed_installment >> fixed_insurance;
    std::getline(testFile >> std::ws, expected_output); 

    tax = gross_salary * 0.2;
    net_salary = gross_salary - (tax + fixed_installment + fixed_insurance);

    std::cout << "Name: " << name;
    std::cout << "\nGross Salary : Rp" << dot_adder(gross_salary);
    std::cout << "\nTax (20%)    : Rp" << dot_adder(tax);
    std::cout << "\nInstallment  : Rp" << dot_adder(fixed_installment);
    std::cout << "\nInsurance    : Rp" << dot_adder(fixed_insurance);
    std::cout << "\nNet Salary   : Rp" << dot_adder(net_salary) << std::endl;

    std::cout.rdbuf(original_cout_buffer);

    std::string actual_output = captured_output.str();


    actual_output = trim(actual_output);
    expected_output = trim(expected_output);

    if (actual_output == expected_output) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed.\nExpected:\n" << expected_output
                  << "\nGot:\n" << actual_output << std::endl;
    }

    testFile.close();
    return 0;
}
