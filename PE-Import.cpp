#include<fstream>
#include<iostream>
#include<string>
#include <stdio.h> 
#include <string.h>
#include <windows.h> 
#include <malloc.h>
using namespace std;
int main()
{
    fstream _file;
    _file.open("PE-1.txt",ios::in);
    //cout<< !_file <<endl;
    if(!_file)
    {
        ofstream inFile;
        inFile.open("PE-1.txt");
        if(inFile.is_open())
            inFile << "I want to learn PE file format" <<endl; //
        inFile.close();
        //cout<<"file written in ";
    }
    else
    {
        //cout<<"file exists";
        //cout<<"have it";
        ifstream file("PE-1.txt");
        char aWord[50];
        printf("I want to learn PE file format");
        //cout<<"I want to learn PE file format"<<endl;
        while (file.good()) {
            //cout << "1";
            file>>aWord;
            //if conatins the word
            if (file.good() && strcmp(aWord, "I want to learn PE file format") == 0) {
                std::cout<<"I want to learn PE file format"<<endl;
                //cout << "file written" <<endl;
            }else {
                ofstream file1;
                file1.open("PE-1.txt");
                if (file1.is_open()) {
                    file1 << "I want to learn PE file format" << endl;
                }
                file1.close();
            }
            //cout<<"I want to learn PE file format"<<endl;
        }
        //cout<<"I want to learn PE file format"<<endl;
        file.close();
    }
    //cout<<"3";
    return 0;
}
