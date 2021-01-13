#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, t;
	cin>>n>>t;
	
	long long int min_a;
	long long int max_diff = 0;
	long long int cnt = 1;
	for(int i = 0; i < n; i++){
		long long int a;
		cin>>a;
		if(i == 0) min_a = a;
		else{
			if(min_a >= a) min_a = min(min_a, a);
			else{
				long long int diff = a - min_a;
				if(diff == max_diff) cnt++;
				else if(diff > max_diff){
					max_diff = max(diff, max_diff);
					cnt = 1;
				}	
			}
		}

	}

	cout<<cnt<<endl;
}
