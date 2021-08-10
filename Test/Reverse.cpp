#include<iostream>
using namespace std;

void reverse(string s, int n){
    if(n == s.length()){
        return;
    }
    reverse(s, n+1);
    cout<<s[n];
}

void substring(string s){
    int n = s.length();
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<=n;  j++){
            for(int k = i; k<j; k++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }
}

int main(){

    string s = "MISAW";
    reverse(s, 0);
    cout<<endl;
    substring(s);
}