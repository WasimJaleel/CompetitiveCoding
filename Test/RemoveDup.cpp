#include<iostream>
using namespace std;

int main(){

     int index = 0;  
    string str= "geeksforgeeks";
   int n = str.length();
   // Traverse through all characters
   for (int i=0; i<n; i++) {
        
     // Check if str[i] is present before it 
     int j; 
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   cout<<str;

}