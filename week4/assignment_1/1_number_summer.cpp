#include <iostream>

int main() {
    int n;
    std::cout<<"Input value of n for additioning from 1 to n: ";
    std::cin>>n;
    std::cout<<"For n value of "<<n<<" ...\n";
    long long int counter, n_value;
    n_value = 1;
    counter = 1;

    for (int i = 1; i < n; i++) {
        counter += 1;
        n_value += counter;
    }
    std::cout<<"The value of n summed is: "<<n_value<<"\n";
    return 0;
}
