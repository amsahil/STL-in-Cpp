#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
	list<int>l;

	//initialization

	list<int> l1{1,2,3,10,8};

	//Different Datatype
	list<string> l2{"apple","banana","guava"};
	l2.push_back("pine");

	//sort funtion
	l2.sort();

	//reverse
	l2.reverse();


	


	//Iterate over the list and print the data

	for(auto s:l2){
		cout<<s<<"-->";
	}

	return 0;



}