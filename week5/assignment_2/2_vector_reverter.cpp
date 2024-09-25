#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> old_vector{};
    while(true){
        std::string element;
        std::cout<<"Insert element that want to be added to 'old_vector' vector\n(type exit to quit this 'while loop')\n";
        std::getline(std::cin,element);
        if(element != "exit"){
            old_vector.push_back(element);
        }
        else{
            break;
        }
    }
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
    for(int x = 0;x < vk_size;x ++){
        std::cout<<new_vector[x];
        
        if (x != vk_size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    return 0;
}