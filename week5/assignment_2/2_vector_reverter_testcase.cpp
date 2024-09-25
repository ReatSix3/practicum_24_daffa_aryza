#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> old_vector{"5","4","Three","Two","1"};
    int vk_size = old_vector.size();
    std::vector<std::string> new_vector{};
    for(int i = (vk_size-1);i >= 0;i-=1){
        new_vector.push_back(old_vector[i]);
    }
    std::cout << "Input: [";
    for(int x = 0;x < vk_size;x ++){
        std::cout<<old_vector[x];
        
        if (x != vk_size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "Output:[";
    std::string result;
    for(int x = 0;x < vk_size;x ++){
        std::cout<<new_vector[x];
        result += new_vector[x]+" ";
        if (x != vk_size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    if(result == ("1 Two Three 4 5 ")){
        std::cout<<"Test case succeed..";
    }
    else{
        std::cout<<"Test case failed..";
    }
    return 0;
}