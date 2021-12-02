#include <iostream>
#include <istream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int countChar(string text){
    cout << "Testing " << text << endl;
    int charcount = 0;
    for(int i = 0; i < text.size(); i++){
        if(text.at(i) != ' '){
            charcount++;
        }
    }
    

    return charcount;
}

int countLine(string text){
    cout << "Testing " << text << endl;
    int linecount = 0;
    for(int i = 0; i < text.size(); i++){
        if(text.at(i) == '\n'){
            linecount++;
        }
    }
    
    return linecount;

}

int main(){
    string inputstring;
    string examstring;

    ifstream thefile;
    

    int charcount=0;
    int linecount=0; 

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