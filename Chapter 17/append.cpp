//
// Created by Tom Guo on 15/10/2017.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

const char* file = "guests.txt";

int main(){

    using namespace std;

    char ch;
    ifstream fin;
    fin.open(file);
    if(fin.is_open())
    {
        cout<<"Here are the current contetns of the "<<file<<" file:\n";
        while(fin.get(ch))
            cout<<ch;
        fin.close();
    }

    ofstream names;
    ofstream fout(file, ios::out | ios::app);
        if(!fout.is_open())
        {
            cerr<<"Cant't open "<<file<<" file for output.\n";
            exit(EXIT_FAILURE);
    }
    cout<<"Enter guest names (enter a blank line to quit):\n";
    string name;
    while(getline(cin, name) && name.size() > 0)
        fout<<name<<endl;
    fout.close();

    fin.clear();
    fin.open(file);
    if(fin.is_open())
    {
        cout<<"Here are the new contents of the file "<<file<<" file:\n";
        while(fin.get(ch))
            cout<<ch;
        fin.close();
    }
    cout<<"Dnoe.\n";

    return 0;
}
