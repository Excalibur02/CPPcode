#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data; 
    Node* next;

    // constructor node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(Node * &head , int d){
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
}

void printn(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void insertattail(Node * &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertinmiddle(Node * &tail ,Node* &head, int position, int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertattail(tail,d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void deletenode( Node * &head , int position ){
    int cnt = 1;
    Node* temp = head;
    while(cnt!=position-1){
        temp = temp->next;
        cnt++;
    }
    temp->next = temp->next->next;
    temp->next->next = NULL;
}

int main(){
    
    Node* node1 = new Node(10);
    //  cout<<node1->data <<endl;
    //  cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    // printn(head);
    insertattail(tail,12);
    insertattail(tail,15);
    insertinmiddle(tail,head,2,22);
    insertathead(head,8);
    // deletenode(3,head);
    printn(head);
    
}