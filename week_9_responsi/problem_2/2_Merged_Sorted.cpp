#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int> v1= {10,30,60,70,100};
    vector<int> v2 = {20,40,50,80,90};
    vector<int> v3 = {};
    int v3_len = v1.size() + v2.size();
    int v1_i = 0;
    int v2_i = 0;
    for(int i = 0;i<v3_len;i++){
        if(v1_i == v1.size()){
            v3.push_back(v2[v2_i]);
        }
        else if(v2_i == v2.size()){
            v3.push_back(v1[v1_i]);
        }
        else if(v1[v1_i]>v2[v2_i]){
            v3.push_back(v2[v2_i]);
            v2_i += 1;
        }
        else if(v1[v1_i]<=v2[v2_i]){
            v3.push_back(v1[v1_i]);
            v1_i += 1;
        }
    }
    for(int i = 0;i<v3_len;i++){
        cout<<v3[i]<<" ";
    }   
    return 0;
}