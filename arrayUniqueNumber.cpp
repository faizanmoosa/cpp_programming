#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int xorSum=0;
    for(int i=0;i<n;i++) {
        xorSum=arr[i]^xorSum;
    }
    cout<<xorSum<<endl;
}