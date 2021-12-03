#include <iostream>
#include <istream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int countChar(string text){
    //cout << "Testing " << text << endl;
    int charcount = 0;
    for(int i = 0; i < text.size(); i++){
        if(text.at(i) != '\n'){
            charcount++;
        }
    }
    

    return charcount;
}

int countLine(string text){
    //cout << "Testing " << text << endl;
    int linecount = 0;
    for(int i = 0; i < text.size(); i++){
        if(text.at(i) == '\n'){
            linecount++;
        }
    }
    
    return linecount;

}

int main(){
char a[10];
a[10] = 0;


    string inputstring;
    string examstring;

    ifstream thefile;

    ifstream test1;
    ifstream test2;
    ifstream test3;
    

    int charcount=0;
    int linecount=0; 

    test1.open("test.txt");
    if(test1.is_open()){
        while(!test1.eof()){
            examstring = test1.get();
            charcount += countChar(examstring);
        }
    }
    if(charcount == 13){
        cout << "Test 1 passed" << endl;
    }
    charcount = 0;

    test2.open("test2.txt");
    if(test2.is_open()){
        while(!test2.eof()){
            examstring = test2.get();
            charcount += countChar(examstring);
        }
    }
    if(charcount == 142){
        cout << "Test 2 passed" << endl;
    }
    charcount = 0;

    test3.open("test3.txt");
    if(test3.is_open()){
        while(!test3.eof()){
            examstring = test3.get();
            charcount += countChar(examstring);
        }
    }
    if(charcount == 16){
        cout << "Test 3 passed" << endl;
    }

    charcount = 0;

    cin >> inputstring;

    thefile.open(inputstring);
    if(thefile.is_open()){
        while(!thefile.eof()){
            examstring = thefile.get();
            charcount += countChar(examstring);
            linecount += countLine(examstring);
        }
        

    }else{
        charcount += countChar("Ohio University");
        linecount += countLine("Athens");
    }
    

    cout << charcount << " Characters" << endl;
    cout << linecount << " Lines" << endl;

}