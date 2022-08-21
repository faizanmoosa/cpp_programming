#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n; //12
    int arr[n];
    for(int i=2;i<=n;i++) {
        arr[i]=i; //2 3 4 5 6 7 8 9 10 11 12
    }
    for(int i=2;i<=n;i++) {
        if(arr[i]==i) {
            for(int j=i*i;j<=n;j+=i) {
                if(arr[j]==j) {
                    arr[j]=i; //2 3 2 5 2 7 2 3 2 11 2
                }
            }
        }
    }
    while(n!=1) {
        cout<<arr[n]<< " "; //2 2 3
        n/=arr[n]; //6 3 1
    }
    cout<<endl;
}