#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
      
      Node(int val){
          data = val;
          next=NULL;
      }
};

class CircularList{
    Node* head;
    Node* tail;
    public:
      CircularList(){
          head=tail=NULL;
      }
      
      void insertHead(int val){
          Node* newNode = new Node(val);
          if(tail==NULL){
              head = tail =newNode;
              tail->next = head;
          }else{
              newNode->next = head;
              head= newNode;
              tail->next = head;
          }
      }
      
      
      void insertTail(int val){
          Node* newNode = new Node(val);
          if(tail==NULL){
              head = tail =newNode;
              tail->next = head;
          }else{
              tail->next=newNode;
              newNode->next =head;
              tail=newNode;
          }
          
      }
      
      void print(){
          if(head==NULL){
              cout<<"CLL is empty"<<endl;
              return;
          }
          
          cout<<head->data<<" -> ";
          Node* temp = head->next;
          
          while(temp!=head){
              cout<<temp->data<<" -> ";
              temp=temp->next;
          }
          cout<<temp->data<<endl;
      }
      
      void deleteAtHead(){
          if(head == NULL){
              cout<<"CLL is empty"<<endl;
              return;
          }else if(head == tail){
              Node* temp = head;
              head=tail=NULL;
              delete temp;
              return;
          }else{
              Node* temp=head;
          head=head->next;
          tail->next= head;
          temp->next =NULL;
          delete temp;
              
          }
          
        }
        
        void delteAtTail(){
            if(head == NULL){
              cout<<"CLL is empty"<<endl;
              return;
          }else if(head == tail){
              Node* temp = head;
              head=tail=NULL;
              delete temp;
              return;
          }else{
              Node* temp=head;
              while(temp->next!=tail){
                  temp=temp->next;
                  
              }
              Node* end=tail;
              end->next=NULL;
              tail=temp;
              tail->next=head;
              delete end;
          }
            
        }
};

int main() {
	// your code goes here
	CircularList cll;
	cll.insertHead(1);
	cll.insertHead(2);
	cll.insertHead(3);
	cll.insertTail(4);
	cll.insertTail(5);
	
	cll.print();
	cll.deleteAtHead();
	cll.print();
	cll.deleteAtHead();
	cll.print();
	//cll.deleteAtHead();
	//cll.print();
	cll.deleteAtHead();
	cll.print();
	cll.delteAtTail();
	cll.print();
	cll.delteAtTail();
	cll.print();

}
