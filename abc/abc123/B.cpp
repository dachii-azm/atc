#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int time[5];
	for(int i=0; i<5; i++) cin>>time[i];
	
	int max_diff = 0;
	int index = 1000;
	for(int i=0; i<5; i++){
		int rounding;
		if(time[i]%10 != 0) rounding = ((time[i]/10) + 1) * 10;
		else rounding = time[i];
		max_diff = max(max_diff, abs(rounding - time[i]));
		if(max_diff == abs(rounding - time[i])){
			index = i;
		}
	}
	
	int ans = 0;
	for(int i=0; i<5; i++){
		if(i != index){
			int rounding;
			if(time[i]%10 != 0) rounding = ((time[i]/10) + 1) * 10;
			else rounding = time[i];
			
			ans += rounding;
		}
	}

	ans += time[index];

	cout<<ans<<endl;
}
