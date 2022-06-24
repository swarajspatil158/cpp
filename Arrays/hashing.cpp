#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	map<int, int>hash;
	hash.insert({1,20});
	hash.insert({2,30});
	hash.insert({3,40});
	hash.insert({4,50});
	hash.insert({5,60});
	hash.insert({6,70});

	auto it = hash.begin();
	while(it != hash.end()){
		if(it -> first == 9) break;
		it++;
	}
	if(it == hash.end()){
		cout<<"not found";
	}
	// for(auto it = hash.find(3);
 //         it != hash.end(); ++it){
	// 	cout<<it->first<<" ";
	// 	cout<<it->second<<endl;
	// }
	return 0;
}