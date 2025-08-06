#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isFreqSame(vector<int> freq, vector<int> windowFreq){
    bool check=true;
    int i=0,j=0;
    while(i<26 && j<26){
        //cout<<freq[i]<<" "<<windowFreq[j]<<endl;
        if(freq[i]!=windowFreq[j]){
            check = false;
            break;
        }
        i++;
        j++;
    }
    return check;
}


bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        
        for(int i=0;i<s1.size();i++){
            int idx =s1[i]-'a';
            freq[idx]++;
            
        }
        for(int i : freq){
            cout<<i<<" ";
        }
        cout<<"\n";
        
        
        //int windSize = s2.size();
        
        bool check = false;
        for(int i=0;i<=s2.size(); i++){
            int idx=i;
            int windowIdx=0;
            int windowSize = s1.size();
            vector<int> windowFreq(26,0);
            while(windowIdx < windowSize && idx < s2.size()){
                windowFreq[s2[idx]-'a']++;
                idx++;
                windowIdx++;
            }
            
           /* for(int i: windowFreq){
                cout<<i<<" ";
            }
            cout<<"\n";*/
            
            
            if(isFreqSame(freq, windowFreq)){
                check = true;
                break;
            }
        }
        return check;
    }
int main() {
	// your code goes here
	string s2="eidbcdaooo";
	string s1="abdc";
	if(checkInclusion(s1, s2)){
	    cout<<"Yes\n";
	}else{
	    cout<<"No\n";
	}
	

}
