#include<iostream>
#include<vector>
using namespace std;

int main(){

 vector<char> par;
        string s = "{[]}";
          
        for(int i=0; i< s.length(); i++){
            if(s[i] == '(' || s[i] == '[' ||s[i] == '{'){
                par.push_back(s[i]);
            }else{
            if(par.size() != 0){
                if((par.back() == '(' && s[i] == ')' )|| (par.back() == '[' && s[i] == ']' )||(par.back() == '{' &&s[i] == '}') ){
                    par.pop_back();
                }else{
                par.push_back(s[i]);
            }
            }else{
                par.push_back(s[i]);
            }
            }
        }
        
        if(par.size()){
            cout<<"false";
        }
        
        cout<<"true";
    
}
