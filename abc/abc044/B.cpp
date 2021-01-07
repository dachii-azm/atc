#include <bits/stdc++.h>

using namespace std;

int main(){
	string w;
	cin>>w;
	bool judge = true;

	for(char i = 'a'; i<='z'; i++){
		int cnt = 0;
		for(int j = 0; j<w.size(); j++){
			if(w[j] == i) cnt++;
		}
		if(cnt%2!=0){
			judge = false;
			break;
		}
	}

	if(judge) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
