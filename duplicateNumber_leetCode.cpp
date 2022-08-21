#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findDuplicate(vector<int>& nums) {
        mergeSort(nums,0,4);
        for(int i=0;i<5;i++)
            if(nums[i]==nums[i+1])
                cout<<nums[i];
    }
    void mergeVector(vector<int>& nums,int l,int mid,int r){
        int n1=mid-l+1;
        int n2=r-mid;
        vector<int> a(n1);
        vector<int> b(n2);
        for(int i=0;i<n1;i++)
            a.push_back(nums[l+i]);
        for(int i=0;i<n2;i++)
            a.push_back(nums[r+i]);
        int i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                nums[k]=a[i];
                i++;
                k++;
            }
            else if(b[j]<a[i]){
                nums[k]=b[j];
                j++;
                k++;
            }
        }
        while(i<n1){
            nums[k]=a[i];
            i++;
            k++;
        }
        while(j<n2){
            nums[k]=b[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& nums, int l, int r){
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(nums,l,mid);
            mergeSort(nums,mid+1,r);
            mergeVector(nums,l,mid,r);
        }
    }
};
int main(){
    Solution s;
    vector<int> nums(5);
    for(int i=0;i<5;i++)
        cin>>nums[i];
    s.findDuplicate(nums);
    return 0;
}