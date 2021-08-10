#include<iostream>
using namespace std;

string reverseword(string s){
    string ret = "";
    for(int j = s.length()-1; j>=0; j--)
        ret += s[j];
    
    return ret;
}

void reverseMiddle(string s){

    int i = 0;
    string word = "";
    for(i = 0 ; i< s.length() && s[i] != ' ' ; i++){
        word += s[i];
    }
    cout<<word;
    word = "";
    for(; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }else{
           
            cout<<" "<<reverseword(word);
            word = "";
        }
    }

    cout<<" "<<word;
}

void reverseLast(string s){
     
     string lastWord = "";
     for(int i = 0; i <= s.length()-1;i++){
         if(s[i] != ' '){
             lastWord += s[i];
         }
         else{
             cout<<lastWord<<" ";
             lastWord = "";
         }
     }
     cout<<reverseword(lastWord);
}

int main(){
    string s = "I studied in S.S.N College of Engineering";
    reverseMiddle(s);
    cout<<endl;
    reverseLast(s);
    return 0;
}