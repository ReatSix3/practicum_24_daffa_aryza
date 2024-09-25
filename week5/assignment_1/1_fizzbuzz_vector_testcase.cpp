#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> output{};
    std::string result;
    for(int i = 1;i<=100;i++){
        if(i % 15 == 0){
            output.push_back("FizzBuzz");
            result += "FizzBuzz ";
        }
        else if(i % 5 == 0){
            output.push_back("Buzz");
            result += "Buzz ";
        }
        else if(i % 3 == 0){
            output.push_back("Fizz");
            result += "Fizz ";
        }
        else{
            std::string i_string = std::to_string(i);
            output.push_back(i_string);
            result += (std::to_string(i)+" ");
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
    if(result == "1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz "){
        std::cout<<"Test case succeed..";
    }
    else{
        std::cout<<"Test case failed..";
    }
    return 0;
}
