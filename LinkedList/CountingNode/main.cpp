#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node * next;
};

struct Node * first =nullptr;
void create (int A[], int n){
    int i;
    struct Node *t, *last;
    //First Node
    first= new Node();
    first->data=A[0];
    first->next=nullptr;
    last=first;

    //all next node will b created
    for (i=1; i<n; i++){
        t=new Node();
        t->data=A[i];
        t->next=nullptr;
        last->next=t;
        last=t;
    }
};

//using loop
int Count(struct Node * p){
    int C=0;
    while(p!=nullptr){
        C++;
        p=p->next;
    }
    return C;
};

int main(){

    int A[]={3,5,7,10,15};
    create(A,5);
    cout<<Count(first);
    return 0;
}