//For Sorted Array's

#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int low=0, high=n-1;
    bool check=false;
    while(low<high) {
        if((arr[low]+arr[high])==k) {
            cout<<low<<" "<<high<<endl;
            break;
        }
        else if((arr[low]+arr[high])<k) {
            low++;
        }
        else if((arr[low]+arr[high])>k) {
            high--;
        }
    }
}