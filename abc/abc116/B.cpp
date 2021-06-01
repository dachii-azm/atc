#include <bits/stdc++.h>

using namespace std;

int main(){
	int s;
	cin>>s;

	bool is_existed = false;
	int cnt[1000010];
	memset(cnt, 0, sizeof(cnt));
	cnt[s]++;
	int index = 1;

	while(is_existed == false){
		index++;

		if(s%2 == 0) s = s/2;
		else if(s%2 != 0) s = 3*s + 1;

		if(cnt[s] >= 1){
                        cout<<index<<endl;
			is_existed = true;
			break;
                }else{
			cnt[s]++;
		}
	}
}
