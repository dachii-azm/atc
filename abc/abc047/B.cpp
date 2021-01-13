#include <bits/stdc++.h>

using namespace std;

int main(){
	int w, h, n;
	cin>>w>>h>>n;

	int min_x = 0, max_x = w;
	int min_y = 0, max_y = h;

	for(int i=0; i<n; i++){
		int x, y, a;
		cin>>x>>y>>a;

		if(a == 1) min_x = max(min_x, x);
		else if(a == 2) max_x = min(max_x, x);
		else if(a == 3) min_y = max(min_y, y);
		else if(a == 4) max_y = min(max_y, y);
	}
	
	int ans_x = max_x - min_x;
	int ans_y = max_y - min_y;
	
	if(ans_x >= 0 and ans_y >= 0){
		int ans = ans_x * ans_y;
		cout<<ans<<endl;
	}else cout<<0<<endl;

}
