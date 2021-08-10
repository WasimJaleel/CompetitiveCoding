#include<iostream>
using namespace std;

int main(){
    string needle = "studio";
    string haystack = "visualstudistudstudio";
      if(needle.length() == 0)
            cout<<0;
        int j,i, savei, flag = 0;
        for(i = 0 ; i< haystack.length(); i++){
            j = 0;
            savei = i;
            while(haystack[i] == needle[j]){
                i++;
                j++;
                if(j == needle.length()){
                     i = savei;
                     flag = 1;
                     break;
                }
                if(i == haystack.length()){
                    break;
                }
            }
            if(flag == 1){
                break;
            }else{
                i = savei;
            }
        }
        
        if(flag == 0)
            cout<<-1;
        cout<<i;
}