//
// Created by Tom Guo on 11/10/2017.
//

#include <iostream>

union one4all{
    int int_value;
    long long_value;
    double double_value;
};

struct widget{
    char brand[20];
    int type;
    union id{
        long id_num;
        char id_char[20];
    }id_val;
};

int main(){

    using namespace std;

    one4all pail;
    pail.int_value = 12;
    cout<<pail.int_value<<endl;
    pail.double_value = 1.38;
    cout<<pail.double_value<<end;
}