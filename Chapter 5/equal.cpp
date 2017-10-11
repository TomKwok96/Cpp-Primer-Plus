//
// Created by Tom Guo on 11/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    int quizscores[20] = {20, 20, 20, 20 ,20, 19, 20, 18, 20, 20};
    cout<<"Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout<<"quiz "<<i<<" is a 20\n";

    // 错误
    /*for (i = 0; quizscores[i] = 20; i++)
        cout<<"quiz "<<i<<" is a 20\n";*/
}