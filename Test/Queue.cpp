#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* first= NULL;
struct Node* last = NULL;

void enqueue(int data){
    struct Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(first == NULL){
        first = temp;
        last = temp;
    }else{
        last->next = temp;
        last = temp;
    }

}

void dequeue(){
    struct Node* temp;
    temp = first;
    first = temp->next;
    temp->next = NULL;
    cout<<temp->data<<endl;
    free(temp);
}

void display(){
    struct Node* temp;
    temp = first;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
void firstnode(){
cout<<first->data<<endl;
}

void lastnode(){
cout<<last->data<<endl;
}
int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);

    cout<<"dequeue"<<endl;
    dequeue();
    cout<<"firstnode"<<endl;
    firstnode();
    cout<<"lastnode"<<endl;
    lastnode();
    cout<<"display"<<endl;
    display();
        cout<<"dequeue"<<endl;
    dequeue();
        cout<<"dequeue"<<endl;
    dequeue();
        cout<<"dequeue"<<endl;
    dequeue();
        cout<<"dequeue"<<endl;
    dequeue();
      cout<<"firstnode"<<endl;
    firstnode();
    cout<<"lastnode"<<endl;
    lastnode();
    cout<<"display"<<endl;
    display();



}