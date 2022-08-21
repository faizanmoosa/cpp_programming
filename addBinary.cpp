#include<bits/stdc++.h>
using namespace std;
int reverse(int ans){
    int rev=0;
    while(ans){
        int rem=ans%10;
        rev=rev*10+rem;
        ans/=10;
    }
    return rev;
}
int addBinary(int a, int b){
    int prevCarry=0, ans=0;
    while(a>0 && b>0){
        if(a%10==0 && b%10==0){
            ans=ans*10+prevCarry;
            prevCarry=0;
        }
        else if((a%10==0 && b%10==1) || (a%10==1 && b%10==0)){
            if(prevCarry==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else if(prevCarry==0){
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else if(a%10==1 && b%10==1){
            ans=ans*10+prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(a%10==0){
            ans=ans*10+prevCarry;
            prevCarry=0;
        }
        else if(a%10==1){
            if(prevCarry==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else if(prevCarry==0){
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        a/=10;
    }
    while(b>0){
        if(b%10==0){
            ans=ans*10+prevCarry;
            prevCarry=0;
        }
        else if(b%10==1){
            if(prevCarry==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else if(prevCarry==0){
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        b/=10;
    }
    if(prevCarry==1){
        ans=ans*10+1;
    }
    ans=reverse(ans);
    return ans;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
}