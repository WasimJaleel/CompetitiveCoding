#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* top;

void push(int data){

    struct Node* temp = new Node();

    temp ->data = data;
    temp ->next = top;
    top = temp;

}

void display(){
    struct Node* temp;

    temp = top;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void pop(){

    struct Node* temp;
    temp = top;
    top = top ->next;
    temp->next = NULL;
    cout<<temp->data<<endl;
    free(temp);
}

void peek(){
    
    cout<<top->data<<endl;
}
int main(){

  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  push(60);
  push(70);

cout<<"display"<<endl;
  display();  
  cout<<"pop"<<endl; 
  pop();
  cout<<"peek"<<endl;
  peek();
  cout<<"pop"<<endl;
  pop();
  cout<<"peek"<<endl;
  peek();
  cout<<"pop"<<endl;
  pop();
  cout<<"pop"<<endl;
  pop();
  cout<<"peek"<<endl;
  peek();
cout<<"display"<<endl;
  display();
}