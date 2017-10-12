//
// Created by Tom Guo on 12/10/2017.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("/Users/tom/Documents/Programming/Cpp-Primer-Plus/Chapter 6/carinfo.txt");

    cout<<"Enter the make and model of aotomible: ";
    cin.getline(automobile, 50);
    cout<<"Enter the model year: ";
    cin>>year;
    cout<<"Enter the original asking price: ";
    cin>>a_price;
    d_price = 0.913 * a_price;

    cout<<fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout<<"Make and model: "<<automobile<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Was asking $"<<a_price<<endl;
    cout<<"Now asking $"<<d_price<<endl;

    outFile<<fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile<<"Make and model: "<<automobile<<endl;
    outFile<<"Year: "<<year<<endl;
    outFile<<"Was asking $"<<a_price<<endl;
    outFile<<"Now asking $"<<d_price<<endl;

    outFile.close();
    return 0;
}