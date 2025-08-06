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

void inorder2(Node* root, vector<int> &arr){
    if(root==NULL){
        return;
    }
    inorder2(root->left, arr);
    arr.push_back(root->data);
    inorder2(root->right, arr);
}

Node* buildBSTFromSorted(vector<int> arr, int st, int end){
    if(st>end){
        return NULL;
    }
    int mid = st+(end-st)/2;
    
    Node* root = new Node(arr[mid]);
    root->left = buildBSTFromSorted(arr, st, mid-1);
    root->right = buildBSTFromSorted(arr, mid+1, end);
    
    return root;
}

Node* merge2BST(Node* root1, Node* root2){
    vector<int> arr1, arr2;
    inorder2(root1, arr1);
    inorder2(root2, arr2);
    
    vector<int> temp; //final BST inorder sorted
    int i=0, j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }else{
            temp.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        temp.push_back(arr1[i++]);
    }
    while(j<arr2.size()){
        temp.push_back(arr2[j++]);
    }
    
    return buildBSTFromSorted(temp, 0, temp.size()-1);
}


int main() {
	// your code goes here 
	vector<int> arr1={8,2,1,10};
    vector<int> arr2 ={5,3,0};
    
    Node* root1 = buildBST(arr1);
    Node* root2 = buildBST(arr2);
    
    Node* root = merge2BST(root1, root2);
    vector<int> seq;
    inorder2(root, seq);
    
    for(int val : seq){
        cout<<val<<" ";
    }
    cout<<endl;
	
	return 0;

}
