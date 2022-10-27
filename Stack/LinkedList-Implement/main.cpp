#include <iostream>
using namespace std;

class Node {
        public:
            int data;
            Node *next;
};

class Stack{
        public:
            Node * top;
            Stack(){
                top=NULL;
            }
        void push(int data);
        int pop();
        int peek();
        void display();
};

void Stack::push(int data){
    Node * newNode= new Node();
    newNode->data=data;
    if (top==NULL){
        newNode->next=NULL;
    }else{
        newNode->next=top;
    }
    top=newNode;

    
}

int Stack::pop(){
    Node * temp;
    if (top==NULL){
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    temp=top;
    top=top->next;
    int data=temp->data;
    delete temp;
    return data;
}

int Stack::peek(){
    if (top==NULL){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    return top->data;
}

int main(){
    Stack stack;
    stack.push(23);
    stack.push(21);
    stack.push(34);
    cout<<stack.peek();

    return 0;
}