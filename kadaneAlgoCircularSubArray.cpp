#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n) {
    int curr=0, maxSum=INT_MIN;
    for(int i=0;i<n;i++) {
        curr+=arr[i];
        if(curr<0) {
            curr=0;
        }
        maxSum=max(curr,maxSum);
    }
    return maxSum;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int wrapSum=0, nonWrapSum;
    nonWrapSum=kadane(arr,n);
    for(int i=0;i<n;i++) {
        wrapSum+=arr[i];
        arr[i]=-arr[i];
    }
    cout<<max(wrapSum+kadane(arr,n),nonWrapSum)<<endl;
}