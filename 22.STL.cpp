#include <iostream>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	
	/*queue<int> q1;
	q1.swap(q); // swap element of q in q2 and make q empty 
	cout<<"size of queue q is "<<q.size()<<endl;
	cout<<"size of queue q1 is "<<q1.size()<<endl;*/
	
	/*
	while(!q.empty()){
	    cout<<q.front()<<" ";
	    q.pop();
	}
	cout<<endl;
	*/
	queue<int> q2;
	q2.swap(q);  
	while(!q2.empty()){
	    cout<<q2.front()<<" ";
	    q2.pop();
	}
	cout<<endl;
	
	/*
	In priroty queue :
	-> Elements are automatically sorted internally
    -> By default, the largest element comes first
    */
	
	priority_queue<int> pq;
	pq.push(5);
	pq.push(3);
	pq.push(10);
	pq.push(4);
	//in pq largest element on the top
	//pq = 3->4->5->10 
	while(!pq.empty()){ //output : 10 5 4 3
	    cout<<pq.top()<<" ";
	    pq.pop();
	}
	cout<<endl;
	
	//reverse order priority queue 
	
	priority_queue<int, vector<int>, greater<int>> pq2;
	pq2.push(5);
	pq2.push(3);
	pq2.push(10);
	pq2.push(4);
	//in pq2 smallest element on the top
	//pq = 10->5->4->3  
	while(!pq2.empty()){ //output : 3 4 5 10
	    cout<<pq2.top()<<" ";
	    pq2.pop();
	}
	cout<<endl;
	







	//map<key, value>
	//sort according to the key 
	map<string, int> m;
	m["tv"]=100;
	m["Laptop"]=150;
	m["tablet"]=300;
	m["watch"]=200;
	m["headphone"]=120;
	for( auto p : m){ //sort the map lexographically key value 
	    cout<<p.first<<" "<<p.second<<"\n";
	}
	
	cout<<"*******************"<<endl;
	m["tv"]=200; //update the value of tv 
	m.insert({"Camera", 25}); //insert and emplace both work to add key and value
	m.emplace("Mobile", 40);
	
	for( auto p : m){ //sort the map lexographically key value 
	    cout<<p.first<<" "<<p.second<<"\n";
	}
	cout<<"*******************"<<endl; 
	cout<<"count = "<< m.count("Laptop")<<endl; //give as laptop comes only single time 
	cout<<"count of laptop = "<< m["Laptop"]<< endl; // give value associated with key laptop
	
	m.erase("tv"); //erase the key value tv
	
	for( auto p : m){ //sort the map lexographically key value 
	    cout<<p.first<<" "<<p.second<<"\n";
	}
	cout<<"*******************"<<endl; 
	
	if(m.find("Camera")!=m.end()){ //check camera key exist or not 
	    cout<<"Found"<<endl;
	} else{
	    cout<<"Not Found"<<endl;
	}
	
	
	if(m.find("tv")!=m.end()){
	    cout<<"Found"<<endl;
	} else{
	    cout<<"Not Found"<<endl;
	}
	cout<<"*******************"<<endl;
	
	//MultiMap
	//store more than one same key
	multimap<string, int> mm;
	mm.emplace("tv", 100); //mm.insert({"tv", 100})
	mm.emplace("tv", 100);
	mm.emplace("tv", 100);
	mm.emplace("tv", 100); //insert 4times tv in mm. incase of map, it insert only one time and further update the value 
	
	for(auto p : mm){
	    cout<<p.first<<" "<<p.second<<endl;
	}
	cout<<"*******************"<<endl;
//	mm.erase("tv"); // delete all value of tv
	mm.erase(mm.find("tv")); // delete one value of tv
	
	for(auto p : mm){
	    cout<<p.first<<" "<<p.second<<endl;
	}
	
	cout<<"*******************"<<endl;
	
	
	//unordered map 
	//donot sort
	unordered_map<string, int> um; // store only unique value and key 
	um.emplace("tv", 100);
	um.emplace("laptop", 200);
	um.emplace("mobile", 300);
	um.emplace("headphone",400);
	
	for(auto p : um){
	    cout<<p.first<<" "<<p.second<<endl;
	}

	unordered_map<string, int> ud;
	ud["Ramesh"]++;
	ud["Ramesh"]++;
	ud["Anu"]++;
	
	for(auto entry : ud){
	    cout<<entry.first<<" | "<<entry.second<<endl;
	}
	

	unordered_map<string, int> ud;
	ud["Ramesh"]++;
	ud["Ramesh"]++;
	ud["Anu"]++;
	
	for(auto entry : ud){
	    cout<<entry.first<<" | "<<entry.second<<endl;
	}
	
	
	string str = "rajkishor, ranjan, iitp, cse,";
	int count2 = count(str.begin(), str.end(),',');
	cout<<count2<<endl;
	
	
	return 0;
	
	

}


/*

| Feature                            | `map`                                                | `unordered_map`                          |
| ---------------------------------- | ---------------------------------------------------- | ---------------------------------------- |
| **Header file                      | `<map>`                                              | `<unordered_map>`                        |
| **Order**                          | **Sorted** by key (ascending by default)             | **Unordered**, no guaranteed order       |
| **Underlying data structure**      | Balanced Binary Search Tree (usually Red-Black Tree) | Hash Table                               |
| **Time complexity (average case)** | O(log n) for insert, find, erase                     | O(1) average case (amortized)            |
| **Time complexity (worst case)**   | O(log n)                                             | O(n) in worst case (hash collisions)     |
| **Allows custom comparison?**      | Yes (via comparator)                                 | No (but allows custom hash and equality) |
| **Performance**                    | Slower for large datasets                            | Faster for lookup-heavy operations       |
| **Key uniqueness**                 | Keys must be unique                                  | Keys must be unique                      |


Use map when:

   You need the keys in sorted order.
   You rely on ordered traversal.
   You want to perform range queries (like all keys between A and D).

Use unordered_map when:

   You need fast access and don’t care about key order.
   You're doing lots of insert/find/erase operations.
   You want better average-case performance.

*/