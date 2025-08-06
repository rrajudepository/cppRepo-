#include <bits/stdc++.h>
using namespace std;
//check compress string problem once 
int compress(vector<char>& chars) {
        string compressed ="";
        for(int i=0; i<chars.size();){
            int count=0;
            char ch=chars[i];
            cout<<i<<"\n";
            while(ch == chars[i] && i<chars.size()){
                count++;
                i++;
            }
            cout<<i<<" "<<ch<<" "<<count<<endl;
            if(count>1) compressed+=ch+to_string(count);
            else compressed +=ch;
        }
        cout<<compressed<<"\n";
        return compressed.length();
        
    }


//Done 
string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string ans="";
        
        for(int i=0;i<s.length();i++){
            string word="";
            while(s[i]!=' ' && i<s.length()){
                word+=s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if(word.length()>0){
               ans+=word+" "; 
            }
        }
        return ans;
    }
int main() {
	// your code goes here
	string s ="Hello world   ";
	string s2=reverseWords(s);
	int n = s2.length();
	cout<<s2.substr(0,n-2)<<"\n";
	
	int count =20;
	string s3= to_string(count); //convert the integer into string;
	cout<<s3<<"\n";
	string s4=" ";
	char ch='a';
	s4+=s3+s;
	s4+=ch;
	cout<<s4<<"\n";
	
	vector<char> chars={'a','b','b','b','b','b','b','b','b','b','b','b','b'};
	cout<<compress(chars)<<"\n";

}
