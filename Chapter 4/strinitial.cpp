//
// Created by Tom Guo on 09/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    char dog[4] = {'d', 'o', 'g', 's'};
    char cat[4] = {'c', 'a', 't', '\0'};
    cout<<dog<<endl<<cat<<endl;

     char ant[4] = "ant";
     // char ant[4] = "ants"; // 初始化要把结束符计算在内
    cout<<ant<<endl;

}