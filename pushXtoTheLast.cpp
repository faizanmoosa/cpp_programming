//String

#include<bits/stdc++.h>
using namespace std;
string push(string s) {
    if(s.length()==0) {
        return "";
    }
    char c=s[0];
    string ans = push(s.substr(1));
    if(c=='x') {
        return (ans+c);
    }
    return (c+ans);
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s;
    cin>>s;
    cout<<push(s)<<endl;
}