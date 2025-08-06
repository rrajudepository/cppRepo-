#include <iostream>
using namespace std;

class Node{
    public: 
       int data;
       Node* next;
       
       //constructor
       Node(int val){
           data = val;
           next = NULL;
       }
       
};

class List{
    Node* head; // by defualt, it is private.
    Node* tail;
    
    public:
       List(){
           head = tail = NULL;
       }
       
       // Insert at the beggining 
       void push_front(int val){//O(1)
           Node* newNode = new Node(val); //creating a dynamic memory for new keyword
           if(head == NULL){
               head = tail =newNode;
               return;
           }else{
               newNode->next = head;
               head = newNode;
           }
       }
       //insert at the end 
       void push_back(int val){//O(1)
           Node* newNode =new Node(val); //creating a dynamic memory for new keyword
           
           if(head==NULL){
               head = tail = newNode;
               return ;
           }else{
               tail->next = newNode;
               tail = newNode;
           }
       }
       
       //delete the front value
       void pop_front(){//O(1)
           if(head == NULL){
               cout<<"LL is empty\n";
               return;
           }
              
           Node* temp = head;
           head = head->next;
           temp->next = NULL;
           delete temp;
       }
       
       //delete the last value
       void pop_back(){//O(n)
           if(head==NULL){
               cout<<"LL is empty\n";
               return;
           }
           Node* temp = head;
           while(temp->next != tail){ //OR use temp->next->next !=NULL
               temp = temp->next;
           }
           
           temp->next = NULL;
           delete tail;
           tail=temp;
       }
       
       //Insert between the middle of LL 
       void insert(int val, int pos){//O(n)
           if(pos<0){
               cout<<"Invalid Position\n";
               return;
           }
           if(pos==0){
               push_front(val);
               return;
           }
           
           Node* temp = head;
           for(int i=0;i<pos-1;i++){
               if(temp == NULL){
                   cout<<"Invalid Position\n";
                   return;
               }
               temp = temp->next;
           }
           Node* newNode = new Node(val);
           newNode->next = temp->next;
           temp->next = newNode;
       }
       
       //Search a value in linked List
       int search(int key){//O(n)
           Node* temp = head;
           int idx=0;
           while(temp!=NULL){
               if(temp->data == key){
                   return idx;
               }
               temp=temp->next;
               idx++;
           }
           return -1;
       }
       
       void reverseList(){
           Node* prev=NULL;
           Node* curr=head;
           Node* next = NULL;
           Node* tail2=head;
          while(curr!=NULL){
              next = curr->next;
              curr->next= prev;
              
              prev=curr;
              curr=next;
          }
          head=prev;
          tail=tail2;
       }
       
     int MiddleNode(){
         Node* slow=head;
         Node* fast=head;
         while(fast!=NULL && fast->next!=NULL){
            // cout<<slow->data<<" "<<fast->data<<endl;
             slow=slow->next;
             fast=fast->next->next;
             
         }
         //cout<<slow->data<<endl;
       return slow->data;
     }
      
       
      void printLL(){//O(n)
           Node* temp = head;
           while(temp!=NULL){
               cout<<temp->data<<"->";
               temp = temp->next;
           }
           cout<<"NULL"<<endl;
       }
};
int main() {
    // your code goes here
    
    List ll; //create a linked list 
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    //3->2->1->NULL 
    ll.printLL();
    
    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();
    
    ll.pop_front();
    ll.printLL();
    
    ll.pop_back();
    ll.printLL();
    
    ll.insert(7,1);
    ll.printLL();
    ll.insert(5,0);
    ll.printLL();
    ll.insert(6,-2);
    ll.printLL();
    
    
    cout<<ll.search(2)<<endl;
    cout<<ll.search(7)<<endl;
    cout<<ll.search(4)<<endl;
    cout<<ll.search(6)<<endl;
    ll.reverseList();
    ll.printLL();
    
    ll.push_front(6);
    ll.push_back(8);
    ll.push_back(9);
    ll.printLL();
    cout<<"Middle of the node is :"<<ll.MiddleNode()<<endl;
    //ll.MiddleNode();
    ll.push_back(10);
    cout<<"Middle of the node is :"<<ll.MiddleNode()<<endl;
    return 0;

}
