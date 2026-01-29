#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "banana";
    string ans = "";
    vector<bool> v(26,false);
    
    for(int i = 0 ; i < s.length() ; i++){

        int index = int(s[i]) - 97;
        if(v[index] == false){
            ans += s[i];
            v[index] = true;
        }
    }
    cout << ans << endl;
}