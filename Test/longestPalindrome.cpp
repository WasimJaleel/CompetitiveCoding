#include<iostream>
using namespace std;

void longpalindrome(string s){

    int flag = 1, start = 0, maxlength = 1;

    for(int i = 0 ; i<s.length()-1; i++){
        for(int j = i+1; j<s.length(); j++){
            flag = 1;
            for(int k = 0; k<(j-i+1)/2; k++){
                if(s[i+k] != s[j-k])
                    flag = 0;

            }

            if(flag == 1 && (j-i+1) > maxlength){
                maxlength = j-i+1;
                start = i;
            }
        }
    }

    for(int i = start; i<maxlength+start; i++)
        cout<<s[i];
}
int main(){
    string s = "forgeeksskeegfor";
    longpalindrome(s);
    return 0;
}