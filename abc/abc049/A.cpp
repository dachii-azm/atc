#include <bits/stdc++.h>

using namespace std;

int main(){
    char list_char[] = {'a', 'e', 'i', 'o', 'u'};

    char s;
    cin>>s;
    string ans = "consonant";

    for(int i = 0; i < sizeof(list_char); i++){
        if(s==list_char[i]){
            ans = "vowel";
            break;
        }
    }

    cout<<ans<<endl;

}