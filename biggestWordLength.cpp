#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    char s[n+1];
    cin.ignore();
    cin.getline(s, n);
    cin.ignore();
    int i=0, maxLen=INT_MIN, curr=0;
    int st=0, maxSt=0;
    while(1) {
        if(s[i]==' ' or s[i]=='\0') {
            if(curr > maxLen) {
                maxLen=curr;
                maxSt=st;
            }
            st=i+1;
            curr=0;
        }
        else {
            curr++;
        }
        if(s[i]=='\0') {
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=maxSt;i<st;i++) {
        cout<<s[i];
    }
    cout<<endl;
}