#include <iostream>

int main() {
    int n = 5;
    std::cout<<"For n value of "<<n<<"...\n";
    long long int multi_val;
    std::string result;
    for (long long int i = 1; i <= 10; i++) {
        multi_val = n * i;
        std::cout<<"The result of multiplication of "<<n<<" X "<<i<<" is "<<multi_val<<"\n";
        result += (std::to_string(multi_val)+" ");
    }
    std::cout<<result;
    if(result == "5 10 15 20 25 30 35 40 45 50 "){
        std::cout<<"Test Case Succeed";
    }
    else{
        std::cout<<"Test Case Failed";
    }
    return 0;
}
