#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	cin>>n>>k;
	
	int h[n];
	for(int i=0; i<n; i++) cin>>h[i];
	
	//int h_max = 0;
	//int h_min = 1000000010;
	int ans = 1000000010;
	
	sort(h, h+n);

	for(int i=0; i<n-k+1; i++){
		//int k_max = 0;
		//int k_min = 1000000010;
		
		/*for(int j=i; j<i+k; j++){
			k_max = max(k_max, h[j]);
			k_min = min(k_min, h[j]);
		}
		*/
		
		int k_max = h[i+k-1];
		int k_min = h[i];
		
		if(ans > abs(k_max - k_min)){
			ans = abs(k_max - k_min);
		}
		
	}

	cout<<ans<<endl;

}
