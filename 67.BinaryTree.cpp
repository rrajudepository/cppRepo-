#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
      int data;
      Node* left;
      Node* right;
      
      Node(int val){
          data = val;
          left=right=NULL;
      }
};

static int idx = -1;

Node* buildTree(vector<int> preorder){//O(n) time
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root= new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

void preorderTraversal(Node* root){ //O(n) 
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    return;
}

void postorderTraversal(Node* root){ //O(n) 
    if(root==NULL){
        return;
    }
    
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    cout<<root->data<<" ";
    return;
}

void inorderTraversal(Node* root){ //O(n) 
    if(root==NULL)
    return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
    return;
}

void levelorderTraversal(Node* root){//O(n) concept of bfs
    if(root==NULL)
    return;
    queue<Node*> Q;
    Q.push(root);
    while(Q.size()>0){
        Node* curr= Q.front();
        Q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            Q.push(curr->left);
        }
        if(curr->right!=NULL){
            Q.push(curr->right);
        }
    }
}
//Level Wise levelorderTraversal  
void levelorderTraversal2(Node* root){//O(n) 
    if(root==NULL)
    return;
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);
    
    while(Q.size()>0){
        Node* curr= Q.front();
        Q.pop();
        if(curr==NULL){
            if(!Q.empty()){
               cout<<endl;  
               Q.push(NULL);
               continue;
            }else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            Q.push(curr->left);
        }
        if(curr->right!=NULL){
            Q.push(curr->right);
        }
    }
}

void topView(Node* root){//O(n) 
    if(root==NULL)
    return;
    queue<pair<Node*,int>> Q;
    map<int, int> m;
    
    
    Q.push({root,0});
    while(Q.size()>0){
        Node* curr= Q.front().first;
        int  currHD = Q.front().second; // HD = horizontal distance
        Q.pop();
        
        if(m.find(currHD)==m.end()){
            m[currHD] =curr->data;
        }
        //cout<<curr->data<<" ";
        if(curr->left!=NULL){
            Q.push({curr->left, currHD-1});
        }
        if(curr->right!=NULL){
            Q.push({curr->right, currHD+1});
        }
        
    }
    
    for(auto i : m){
        cout<<i.second<<" ";
    }
    cout<<endl;
}


void kthLevel(Node* root, int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right, k-1);
    return;
}

int sumTree(Node* root){//O(n)
    if(root ==NULL){
        return 0;
    }
    int leftsum=sumTree(root->left);
    int rightsum= sumTree(root->right);
    root->data += leftsum+rightsum;
    return root->data;
}

int heightBT(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(heightBT(root->left), heightBT(root->right));
}

int leftHeight(Node* root){
    if(root==NULL)
    return 0;
    return heightBT(root->left);
    
}

int rightHeight(Node* root){
    if(root==NULL)
    return 0;
    return heightBT(root->right);
    
}

int countNodes(Node* root){
    if(root==NULL)
    return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}

int sumNodes(Node* root){
    if(root==NULL)
    return 0;
    int leftSum = sumNodes(root->left);
    int rightSum = sumNodes(root->right);
    return (root->data) + leftSum + rightSum;
}
int main() {
    // your code goes here
    vector<int> preorder={1,2,4,-1,-1,5,-1,-1,3,7,-1,8,-1,-1,6,9,-1,-1,-1}; 
    Node* root = buildTree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    
    cout<<"Preorder Traversal of tree is : \n";
    preorderTraversal(root);
    cout<<endl;
    cout<<"Inorder Traversal of tree is : \n";
    inorderTraversal(root);
    cout<<endl;
    cout<<"Postorder Traversal of tree is : \n";
    postorderTraversal(root);
    cout<<endl;
    cout<<"Levelorder Traversal of tree is : \n";
    levelorderTraversal(root);
    cout<<endl;
    cout<<"Level wise Levelorder Traversal of tree is : \n";
    levelorderTraversal2(root);
    cout<<endl; 
    
    int height= heightBT(root);
    cout<<"Height of tree is : "<<height<<endl;
    
    int leftheight= leftHeight(root);
    cout<<"Left height of tree is : "<<leftheight<<endl;
    
    int rightheight= rightHeight(root);
    cout<<"Right height of tree is : "<<rightheight<<endl;
    
    int count = countNodes(root);
    cout<<"Number of nodes in tree is : "<<count<<endl;
    
    int sum = sumNodes(root);
    cout<<"Sum of all nodes in tree is : "<<sum<<endl;
    
    cout<<"Top View of binary tree is : ";
    topView(root);
    int k=4;
    cout<<k<<"th level of tree nodes are : ";
    kthLevel(root, k);
    cout<<endl;
    
    cout<<"Before coversion into sum tree : ";
    preorderTraversal(root);
    cout<<endl;
    
    sumTree(root);
    cout<<"After coversion into sum tree : "; 
    preorderTraversal(root);
    cout<<endl;
    
    return 0;

}
