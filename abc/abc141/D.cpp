#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n, m;
	cin>>n>>m;

	priority_queue<int> q;
	long long int sum = 0;

	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		q.push(num);
		sum+=num;
	}

	while(m--){
		int x=q.top();
		q.pop();
		
		sum-=(x-x/2);
		x/=2;
		q.push(x);
	}

	cout<<sum<<endl;




}
