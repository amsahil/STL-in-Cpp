//MultiMap in STL
//can be used in array,LL,Vector

#include<bits/stdc++.h>
#include<map>

using namespace std;

int main(){

	multimap<char,string>mp;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char ch;
		string s;
		cin>>ch>>s;

		mp.insert(make_pair(ch,s));

	}
	//erease the paricular key

	auto it = mp.begin();
	mp.erease(it);

	auto it2 = mp.lower_bound('b');
	auto it3 = mp.upper_bound('d');

	//search and delete the element

	auto f = mp.find('c');
	if(f->second == "cat"){
		mp.erease(f);
	}



	//try to print entire map

	for(auto p:mp){

		cout<<p.first<<" and "<<p.second<<endl;
	}

	return 0;

}