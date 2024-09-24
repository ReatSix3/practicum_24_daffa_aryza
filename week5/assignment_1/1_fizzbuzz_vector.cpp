#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> output{};
    for(int i = 1;i<=100;i++){
        if(i % 15 == 0){
            output.push_back("FizzBuzz");
        }
        else if(i % 5 == 0){
            output.push_back("Buzz");
        }
        else if(i % 3 == 0){
            output.push_back("Fizz");
        }
        else{
            std::string i_string = std::to_string(i);
            output.push_back(i_string);
        }
    }
    std::cout<<"\n \n{";
    for(int x = 0;x<100;x += 1){
        std::cout<<output[x];
        if(x != 99){
            std::cout<<", ";
    }
    }
    std::cout<<"}";
    return 0;
}
