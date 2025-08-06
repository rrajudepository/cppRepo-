#include <bits/stdc++.h>
using namespace std;
//Binary search TREE
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


Node* insert(Node* root, int val){
    Node* newNode = new Node(val);
    if(root==NULL){
        return newNode;
        
    }
    if(root->data>val){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBST(vector<int> arr){
    Node* root=NULL;
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}

bool search(Node* root, int val){
    if(root ==NULL){
        return false;
        
    }
    if(root->data==val){
        return true;
    }
    if(root->data>val){
        return search(root->left, val);
    }else{
        return search(root->right, val);
    }
}

Node* getInorderSuccessor(Node* root){
    while(root!= NULL && root->left != NULL){
        root=root->left;
    }
    return root;
}

Node* delNode(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left=delNode(root->left,key);
    }
    else if(key>root->data){
        root->right=delNode(root->right, key);
    }else{
        //key ==root
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }else if(root->right ==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }else{//2 children
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
        }
    }
    return root;
    
}


int main() {
	// your code goes here 
	vector<int> arr={3,2,1,5,6,4};
	
	Node* root= buildBST(arr);
	inorder(root);
	cout<<endl;
	cout<<search(root, 1)<<endl;
	
	cout<<"after deleting nodes"<<endl;
	delNode(root, 6);
	inorder(root);
	cout<<endl;
	
	return 0;

}
