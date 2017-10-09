//
// Created by Tom Guo on 09/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    // 使用大括号初始化时，不允许narrow操作
    const int code = 66;
    int x = 66;
//    char c1 {31325};
    char c2 = {66};
    char c3 = {code};
//    char c4 = {x};
    x = 31325;
    char c5 = x;

    return 0;
}