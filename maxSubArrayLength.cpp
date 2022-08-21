/* Google kickStart
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray. */

#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int diffArr[n-1],in=0;
        for(int i=0;i<n-1;i++){
            diffArr[in++]=arr[i+1]-arr[i];
        }
        int maxcount=INT_MIN;
        for(int i=0;i<in;i++){
            int count=0;
            for(int j=0;j<in;j++){
                if(diffArr[i] == diffArr[j])
                count++;
            }
            if(count>maxcount){
                maxcount=count;
            }
        }
        cout<<(maxcount+1)<<endl;
    }
}