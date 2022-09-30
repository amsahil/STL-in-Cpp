#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int>pq; //max heap
	priority_queue<int,vector<int>, greater<int>>pq; //based on max heap and can be used in min heap by passing the default cpmprator using "greater<>"

     int n;
     cin>>n;
	for(int i=0; i<n;i++)
	{

		int no;
	    cin>>no;

	    pq.push(no); //O(Log N)
	}

	//Remove the elements from the heap || Top

	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}  







	





	return 0;
}