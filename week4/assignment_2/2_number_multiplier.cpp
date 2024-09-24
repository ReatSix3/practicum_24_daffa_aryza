#include <iostream>

int main() {
    int n;
    std::cout<<"Input the value of n for multiplication of n by 1 to 10: ";
    std::cin>>n;
    std::cout<<"For n value of "<<n<<"...\n";
    long long int multi_val;
    std::string result;
    for (long long int i = 1; i <= 10; i++) {
        multi_val = n * i;
        result += "The result of multiplication of " + std::to_string(n) + " X " + std::to_string(i) + " is " + std::to_string(multi_val) + "\n";
        std::cout<<"The result of multiplication of "<<n<<" X "<<i<<" is "<<multi_val<<"\n";   
    }
    return 0;
}
