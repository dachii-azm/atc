#include <bits/stdc++.h>

using namespace std;

int main(){
		int a, b, k;
		cin>>a>>b>>k;

		int num = 0;
		int cnt = 1;
		vector<int> w;

		while(cnt <= a or cnt <= b){

			if(a%cnt == 0 and b%cnt == 0){
				w.push_back(cnt);
				cnt++;
				num++;
			}else{
				cnt++;
			}
		}

		cout<<w[w.size() - k]<<endl;
}
