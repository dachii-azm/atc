#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  cin>>n>>k;

  vector<int> d;
  for(int i=0; i<k; i++){
    int ele;
    cin>>ele;
    d.push_back(ele);
  }

  unordered_set<int> h(d.begin(), d.end());
  bool fin = false;
  
  while(fin==false){
    fin=true;
    string st_n = to_string(n);
    for(int i=0; i<st_n.size(); i++){
      int ele_n = st_n[i] - '0';
      if(h.count(ele_n)){
        fin=false;
        break;
      }
    }

    if(fin){
      cout<<n<<endl;
      break;
    }else n++;

  }


}
