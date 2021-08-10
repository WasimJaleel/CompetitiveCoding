#include<iostream>
using namespace std;

int main(){
string s = "00110011";
   string save = s;
        string substring;
        int count0,count1,totcount = 0, flag0, flag1, flag;
        int strlen = s.length();
        
        for(int i = 0; i< strlen-1; i++){
            for(int j = i+1; j<= strlen; j++){
                 substring = s.substr(i,j-i);
                cout<<substring<<endl;
            count0 = 0;
                count1 = 0;
                flag0 = 0;
                flag1 = 0;
                flag = 1;
                for(int k = 0; k< j-i ; k++){
                    if(substring[k] == '0'){
                        if(k!=0 && substring[k-1] == '1' && flag0){
                            flag = 0;
                            break;
                        }
                        count0++;
                        flag0 = 1;
                    }
                    if(substring[k] == '1'){
                         if(k!=0 && substring[k-1] == '0' && flag1){
                            flag = 0;
                            break;
                        }
                        count1++;
                        flag1 = 1;
                    }
                }
                if(count0 == count1 && flag){
                    totcount++;
                }    
            } 
        }
    cout<<totcount;
}