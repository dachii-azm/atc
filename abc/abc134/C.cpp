#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;

	vector<pair<int, int>> arr;


	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		arr.push_back({a, i});
	}
	
	sort(arr.begin(), arr.end(), greater<>());
	
	for(int i=0; i<n; i++){
		if(arr[0].second == i) cout<<arr[1].first<<endl;
		else cout<<arr[0].first<<endl;
	}

	
}
