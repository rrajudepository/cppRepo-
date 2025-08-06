#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string part){
    int i=0, j=part.size()-1;
    while(i<=j){
        if(part[i]!=part[j]){
            cout<<"Not Palindrome\n";
            return false;
            //break;
        }
        i++;
        j--;
    }
    cout<<"Palindrom\n";
    return true;
   }
    void getAllPart(string s, vector<string> &partitions, vector<vector<string>> &ans){
        if(s.size()==0){
            cout<<"Storing Partitions\n";
            ans.push_back(partitions);
            return;
        }


        for(int i=0;i<s.length();i++){
            string part=s.substr(0,i+1);
            cout<<"Part : "<<part<<endl;
            if(isPalindrome(part)){
                 cout<<"Part : "<<part<<endl;
                partitions.push_back(part);
                getAllPart(s.substr(i+1,s.length()),partitions, ans);
                partitions.pop_back();
            }
            

        }
        return ;
    }
  
  
   vector<vector<string>> partition(string s) {
        vector<string> partitions;
        vector<vector<string>> ans;
        getAllPart(s,partitions, ans);
        for(auto i : ans){
            for(auto j : i){
                cout<<j<<"|";
            }
            cout<<endl;
        }
        return ans;
        
    }

int main() {
    // your code goes here
    //string s ="Rajkishor Ranjan";
    //string s1 =s.substr(0,1);
    //string s2= s.substr(4, s.size());
    //cout<<s1<<" "<<s2<<endl;
    
    string word ="aaabb";
    partition(word);
/*  if(isPalindrome("ab")){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
*/  

}
