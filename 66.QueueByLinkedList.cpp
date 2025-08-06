#include <iostream>
using namespace std;
//Queue using linkedlist

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data=val;
        next= NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    
    public:
        Queue(){
            head=tail=NULL;
        }
        
        void push(int val){
            Node* newnode = new Node(val);
            
            if(empty()){
                head=tail=newnode;
            }else{
                tail->next = newnode;
                tail=newnode;
            }
            
        }
        
        void pop(){
            if(empty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            Node* temp = head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            
        }
        
        int front(){
            if(head==NULL){
                cout<<"Queue is empty"<<endl;
                return -1;
            }else{
                return head->data;
            }
            
            
        }
        
        bool empty(){
            return head==NULL;
        }
};


int main() {
	// your code goes here
	
	    Queue q;
	    q.push(1);
	    q.push(2);
	    q.push(3);
	    q.push(4);
	    while(!q.empty()){
	        cout<<q.front()<<" ";
	        q.pop();
	    }
	    cout<<endl;

}
