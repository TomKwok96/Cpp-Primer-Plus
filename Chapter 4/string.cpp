//
// Created by Tom Guo on 09/10/2017.
//

#include <iostream>
#include <cstring>

int main(){

    using namespace std;

    // 拼接字符串
    cout<<"I'd give my right arm to be" " a great violinist.\n";
    cout<<"I'd give my right arm to be a great violinist.\n";
    cout<<"I'd give my right ar"
        "m to be a great violinist.\n";

    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout<<"Howdy! I'm "<<name2<<"! What's your name?\n";
    cin>>name1;
    cout<<"Well, "<<name1<<", your name has "<<strlen(name1)<<" letters and is stored in an array of "<<sizeof(name1)<<" bytes.\n";
    cout<<"Your initial is "<<name1[0]<<".\n";
    name2[3] = '\0';
    cout<<"Here are the first 3 characters of my name: "<<name2<<endl;

    return 0;
}