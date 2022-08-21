#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=1;i<(1<<n);i++) {
        for(int j=0;j<n;j++) {
            if(i & (1<<j)) {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}