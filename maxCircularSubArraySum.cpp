#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solve();
}
void solve() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int maxEle=INT_MIN;
    for(int i=0;i<n;i++) {
        int sum=0;
        for(int j=i;j<n;j++) {
            sum+=arr[j];
            maxEle=max(maxEle, sum);
        }
        for(int l=0;l<i;l++) {
            sum+=arr[l];
            maxEle=max(maxEle, sum);
        }
    }
    cout<<maxEle<<endl;
}