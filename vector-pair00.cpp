#include<iostream>
#include<vector>
#include<utility>
int main(){
    std::vector<std::pair<int,int>> a(10,make_pair(1,2));
    for(const auto &i:a){
        std::cout << i.first << i.second << std::endl;
    }
}