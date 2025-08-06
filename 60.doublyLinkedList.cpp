#include <bits/stdc++.h>
using namespace std;
class Node{
    
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int val){
        data = val;
        next=prev=NULL;
    }
    
};


class DoublyList{
    Node* head;
    Node* tail;
    
    public:
       DoublyList(){
           head=tail =NULL;
       }
       
       void push_front(int val){
           Node* newNode = new Node(val);
           if(head ==NULL){
               head=tail=newNode;
               head->prev=NULL;
               tail->next=NULL;
              // tail->prev=head;
              // head->next=tail;
               return;
           }else{
               newNode->next = head;
               head->prev= newNode;
               head=newNode;
               head->prev=NULL;
           }
       }
       
       void push_back(int val){
           Node* newNode= new Node(val);
           if(head==NULL){
               head=tail=newNode;
               head->prev=NULL;
               tail->next=NULL;
               return;
           }else{
               newNode->next=NULL;
               tail->next=newNode;
               newNode->prev=tail;
               tail=newNode;
           }
       }
       void pop_front(){
           if(head==NULL){
               cout<<"Doubly-List is empty."<<endl;
           }else{
               Node* temp=head;
               head= head->next;
               temp->next=NULL;
               delete temp;
               
           }
           
           return;
         
       }
       
      void pop_back(){
          if(head==NULL){
              cout<<"DLL is empty"<<endl;
              return;
          }
          if(head==tail){
              pop_front();
              return;
          }
          Node* temp = tail;
          tail=tail->prev;
          if(tail!=NULL){
              tail->next=NULL;
          }
          temp->prev=NULL;
          delete temp;
          return;
      }
       
       void printList(){
           Node* temp = head;
           while(temp!=NULL){
               cout<<temp->data<<" <=> ";
               temp=temp->next;
           }
           cout<<"NULL"<<endl;
       }
};



int main() {
    // your code goes here
    
    DoublyList dl;
    dl.push_front(1);
    dl.push_front(2);
    dl.push_front(3);
    dl.push_back(4);
    dl.push_back(5);
    dl.printList();
    dl.pop_front();
    dl.printList();
    dl.pop_back();
    dl.printList();
    dl.pop_back();
    dl.pop_back();
    dl.printList();
    dl.pop_back();
    dl.printList();
    
}
