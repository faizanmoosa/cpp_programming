#include<bits/stdc++.h>
using namespace std;// 40 2
int divisible(int n, int a) {
    int count=0;
    for(int i=1;i<=n;i++) {
        if(i%a==0) {
            count++;
        }
    }
    return count;
}
int divisible(int n, int a, int b) {
    int count=0;
    for(int i=1;i<=n;i++) {
        if(i%a==0 && i%b==0) {
            count++;
        }
    }
    return count;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, a, b;
    cin>>n>>a>>b;
    int n1=divisible(n,a);
    int n2=divisible(n,b);
    int n3=divisible(n,a,b);
    cout<<(n1+n2-n3)<<endl;
}