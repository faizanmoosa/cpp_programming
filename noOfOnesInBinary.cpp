#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int count=0;
    while(n) {
        n = n & (n-1);
        count++;
    }
    cout<<count<<endl;
}