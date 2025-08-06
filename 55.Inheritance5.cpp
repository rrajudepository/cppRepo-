#include <bits/stdc++.h>
using namespace std;

//function overloading(compile time overloading)
class Print{
    public:
       void show(int x){
           cout<<"int :"<<x<<endl;
       }
       
       void show(char ch){
           cout<<"char :"<<ch<<endl;
       }
    
int main() {
	// your code goes here
	Print p1;
	p1.show('A');
    Print p2;
    p2.show(10);
	retrun 0;

}
