#include<bits/stdc++.h>
using namespace std;
void substring(string s, string ans) {
    if(s.length()==0) {
        cout<<ans<<endl;
        return;
    }
    char c=s[0];
    string str=s.substr(1);
    substring(str,ans);
    substring(str,ans+c);
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s;
    cin>>s;
    substring(s,"");
}