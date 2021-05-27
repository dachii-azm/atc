#include <bits/stdc++.h>

using namespace std;

int main(){
	
		int n;
		cin>>n;

		vector<int> a(n);
		for(int i=0; i<n; i++) cin>>a[i];
		
		int ans;
		bool alive = true;

		sort(a.begin(), a.end());
		

		while(alive == true){
			
			for(int i=0; i<n; i++){
				if(a[i] % a[0] != 0){
					int new_a = a[i] % a[0];
					a.erase(a.begin() + i);
					a.insert(a.begin(), new_a);
					alive = false;
					break;
				}
			}

			if(alive == false) alive = true;
			else {
					alive = false;
					ans = a[0];
					break;
			}
			
			if(a[0] == 1){
				ans = 1;
				alive = false;
				break;
			}
		}

		cout<<ans<<endl;
}
