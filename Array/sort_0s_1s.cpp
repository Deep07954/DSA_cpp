#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums{0,0,1,0,1,0,1,0,1};
    int n = nums.size();
    int start=0, end=n-1;
    int i=0;
    while(i<=end)
    {
        if(nums[i]==0)
        {
            swap(nums[i],nums[start]);
            start++;
            i++;
        }
        else if(nums[i]==1)
        {
            swap(nums[i],nums[end]);
            end--;
            // ++i;//when array size is odd it will work 
        }
    }
    cout<<"sorted array is: "<<endl;
    // Printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }

}
