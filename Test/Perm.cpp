#include<iostream>
using namespace std;

void permutate(string s, int left, int right){
    if(left == right)
        cout<<s<<endl;
    else{
        for(int i = left; i<= right; i++){
            swap(s[i], s[left]);
            permutate(s, left+1, right);
            swap(s[i], s[left]);
        }
    }
}
int main(){
    
    string s;
    cout<<"Enter String"<<endl;
    cin>>s;
    permutate(s, 0, s.length()-1);
    return 0;
}

