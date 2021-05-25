#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m;
	cin>>n>>m;

	vector<pair<int, int>> E[101010];
	string ans[101010];

	for(int i=0; i<m; i++){
		int p, y;
		cin>>p>>y;

		E[p].push_back({y, i});
	}
	
	for(int i=0; i<n; i++){
		sort(all(E[i]));
		for(int j=0; j<E[i].size())
	}
}
