#include<bits/stdc++.h>
using namespace std;
void printPrimes(int n) {
    bool arr[n+1];
    for(int i=2;i<=n;i++) {
        arr[i]=true;
    }
    for(int i=2;(i*i)<=n;i++) {
        if(arr[i]==true) {
            for(int j=(i*i);j<=n;j+=i) {
                arr[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++) {
        if(arr[i]==true) {
            cout<<i<<"\t";
        }
    }
}
int main(void) {
	int n;
    cin>>n;
    printPrimes(n);
}