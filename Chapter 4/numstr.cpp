//
// Created by Tom Guo on 10/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    cout<<"What year was your house build?\n";
    int year;
    cin>>year; // 无法正常运行
    // (cin>>year).get(); // 使用get()吸收换行符后，正常运行
    cout<<"What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout<<"Year built: "<<year<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Done!\n";

    return 0;
}