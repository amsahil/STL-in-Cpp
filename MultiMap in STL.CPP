//MultiMap in STL

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

	//try to print entire map

	for(auto p:mp){

		cout<<p.first<<" and "<<p.second<<endl;
	}

	return 0;

}