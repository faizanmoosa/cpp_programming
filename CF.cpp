#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x;
	    cin>>n>>x;
	    int temp;
	    char ch='a';
	    if(n==1)
	        temp=n;
	    else
	        temp=n/2;
	    if(x==temp)
	    {
	        if(n==1)
	        cout<<ch;
	        int k1=0;
	        for(int i=0;i<n/2;i++)
	        {
	            if(n>x*2)
	            {
	                if(k1<=x)
	                {
	                    cout<<ch;
	                    k1++;
	                }
	                else
	                {
	                    ch++;
	                    k1=0;
	                }
	            }
	            else
	            {
	                for(int i=0;i<n/2;i++)
	                {
	                    cout<<ch;
	                    ch++;
	                }
	            }
	        }
	        k1=0;
            ch--;
	        for(int i=0;i<n/2;i++)
	        {
	            
                if(n>x*2)
	            {
	                if(k1<=x)
	                {
	                    cout<<ch;
	                    k1++;
	                }
	                else
	                {
	                    ch--;
                        k1=0;
	                }
	            }
	            else
	            {
	                ch--;
	                cout<<ch;
	            }
	        }
	    }
	    else
	        cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
