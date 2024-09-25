#include <iostream>

int main() {
    int n = 5;
    std::cout<<"For n value of "<<n<<" ...\n";
    long long int counter, n_value;
    n_value = 1;
    counter = 1;

    for (int i = 1; i < n; i++) {
        counter += 1;
        n_value += counter;
    }
    std::cout<<"The value of n summed is: "<<n_value<<"\n";
    if(n_value != 15){
        std::cout<<"Test case failed..";
        std::cout<<"Expected result: "<<"15";
    }
    else{
        std::cout<<"Test case succeed..";
    }
    return 0;
}
