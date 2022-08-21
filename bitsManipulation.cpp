#include<bits/stdc++.h>
using namespace std;
int getBit(int n, int i) {
    return (n & (1<<i));
}
int setBit(int n, int i) {
    return (n | (1<<i));
}
int clearBit(int n, int i) {
    return (n & ~(1<<i));
}
int updateBit(int n, int i, int u) {
    int mask= ~(1<<i);
    n=n&mask;
    return(n | (u<<i));
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
}