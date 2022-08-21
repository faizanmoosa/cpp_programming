#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int l, n;
        cin>>l>>n;
        int t=1;
        for(int i=1;i<l;i++)
            t*=10;
        int i=t*10;
        while(t<i){
            int o=n+t, temp=o, rem, rev=0;
            while(temp){
                rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }
            if(rev==o)
                break;
            else
                t++;
        }
        cout<<t<<endl;
    }
}