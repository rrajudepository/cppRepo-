#include <bits/stdc++.h>
using namespace std;

//method first (Give TLE)
void threeSum1(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> trip={nums[i], nums[j], nums[k]};
                        sort(trip.begin(), trip.end());


                        
                        if(s.find(trip)==s.end()){ //incase of set it takes O(logn) time but incase unrdered set , it takes O(1) time
                            s.insert(trip);
                            ans.push_back(trip);
                        }
                    }
                }
            }
        }
        for(auto i : ans){
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        //return ans;
    }


//method 2 (Give TLE)
void threeSum2(vector<int> &nums){
    int n=nums.size();
    vector<vector<int>> ans;
    set<vector<int>> uniqueTriplet;
    // set<int> s1;
    for(int i=0;i<n;i++){
       set<int> s1;
        int target1=-nums[i];
        for(int j=i+1;j<n;j++){
            int target2 =nums[j];
            int c=target1-target2;
            
            
            //cout<<nums[i]<<" "<<nums[j]<<endl;
            
            
            if(s1.find(c)!=s1.end()){
               /* cout<<"Finding element in given s1\n";
                for(int k : s1){
                    cout<<" "<<k<<" ";
                }
                cout<<"Triplet :"<<nums[i]<<" "<<nums[j]<<" "<<c<<endl;
                cout<<"\nRajkishor\n";*/
                vector<int> trip = {nums[i],nums[j],c};
                sort(trip.begin(), trip.end());
                uniqueTriplet.insert(trip);
            }else{
                //cout<<"Adding element to s1\n";
                s1.insert(nums[j]);
                /*for(int k : s1){
                    cout<<k<<" ";
                }
                cout<<"\n Rajksihor2\n";*/
            }
            
            
           /* for(int k : s){
                cout<<k<<" ";
            }
            cout<<"Rajkishor\n";*/
        }
        
        
    }
    int idx=0;
    for(auto i : uniqueTriplet){
          // cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
           vector<int> trip={i[0],i[1],i[2]};
            ans.push_back(trip);
            
        }
        for(auto i : ans){
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
}

void threeSum3(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> uniqueTriplet;
        vector<vector<int>> ans;


        for(int i=0;i<nums.size();i++){
            
            int start =i+1;
            int end=nums.size()-1;
            while(start<end && start<nums.size()-1){
                if(nums[i]+nums[start]+nums[end]==0){
                     vector<int> trip = {nums[i],nums[start],nums[end]};
                     sort(trip.begin(), trip.end());
                     uniqueTriplet.insert(trip);
                     start++;
                     end--;
                     continue;
                    }else if(nums[start]+nums[end]>-nums[i]){
                        end--;
                    }else{
                        start++;
                    }
            }

        }

        for(auto i : uniqueTriplet){
           cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
           vector<int> trip={i[0],i[1],i[2]};
            ans.push_back(trip);
         }
        //return ans;
        
    }

int main() {
    // your code goes here
    vector<int> input={-1,0,1,2,-1,-4};
    threeSum3(input);

}
