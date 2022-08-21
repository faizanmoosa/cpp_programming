//Maximum Times
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int i=0, maxCount=INT_MIN, curr=1;
    char ans='a';
    while(i<str.length()) {
        if(str[i]==str[i+1]) {
            curr++;
        }
        else if(str[i]!=str[i+1]) {
            if(curr>maxCount) {
                maxCount=curr;
                ans=str[i];
            }
            curr=0;
        }
        i++;
    }
    cout<<ans<<" "<<maxCount<<endl;
}