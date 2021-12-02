#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int countChar(string text){
    int charcount = 0;
    for(int i = 0; i < text.size(); i++){
        if(text.at(i) != ' '){
            charcount++;
        }
    }
    

    return charcount;
}

int countLine(string text){
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

    int charcount;
    int linecount; 

    cin >> inputstring;
    charcount = countChar(inputstring);
    linecount = countLine(inputstring);

    cout << charcount << " Characters" << endl;
    cout << linecount << " Lines" << endl;

}