#include <bits/stdc++.h>

using namespace std;

int main(){
	
		long long int n;
		cin>>n;

		long long int h[n];
		for(int i=0; i<n; i++) cin>>h[i];

		string ans = "Yes";
		long long int max_h = 0;
		for(long long int i=0; i<n-1; i++){

			if(h[i] - 1<=h[i+1] and h[i] - 1>=max_h){
					max_h = max(max_h, h[i] - 1);
					continue;
			}else if(h[i] <= h[i+1] and h[i] >= max_h){ 
					max_h = max(max_h, h[i]);
					continue;
			}
			else{
				ans = "No";
				break;
			}

			//if(h[i]-1>h[i+1] or h[i]-1 < max_h){
				//ans = "No";
				//break;
			//}
						
		}

		cout<<ans<<endl;
}
