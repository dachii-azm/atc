#include <bits/stdc++.h>

using namespace std;

int main(){

		int n, q;
		cin>>n>>q;

		string s;
		cin>>s;
		
		vector<int> ac;
		vector<int> ac_r;

		vector<int>::iterator iter_lower, iter_upper;
		long idx_lower, idx_upper;

		for(int i=0; i<n-1; i++){
			if(s[i] == 'A' and s[i+1] == 'C'){
					ac.push_back(i);
					ac_r.push_back(i+1);
			}
		}

		for(int i=0; i<q; i++){
			int l, r;
			cin>>l>>r;
			
			iter_lower = lower_bound(ac.begin(), ac.end(), l-1);
			idx_lower = distance(ac.begin(), iter_lower);
			
			iter_upper = upper_bound(ac_r.begin(), ac_r.end(), r-1);
			idx_upper = distance(ac_r.begin(), iter_upper);
			
			cout<<idx_upper - idx_lower<<endl;
		}
}
