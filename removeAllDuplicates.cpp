//String

#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
    if(s.length()==0) {
        return "";
    }
    char c=s[0];
    string ans = removeDuplicates(s.substr(1));
    if(c==ans[0]) {
        return ans;
    }
    return (c+ans);
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<removeDuplicates(s)<<endl;
}