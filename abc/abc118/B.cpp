#include <bits/stdc++.h>

using namespace std;

int main(){
	
		int n, m;
		cin>>n>>m;

		int fav[40];
		memset(fav, 0, sizeof(fav));

		for(int i=0; i<n; i++){
			int k;
			cin>>k;

			for(int j=0; j<k; j++){
				int a;
				cin>>a;
				fav[a]++;
			}
		}
		
		int ans = 0;
		for(int i=0; i<40; i++){
			if(fav[i] >=n) ans++;
		}

		cout<<ans<<endl;
}
