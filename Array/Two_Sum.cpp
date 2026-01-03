#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    // optimal approach - T.C: O(n) , SC: O(n)
    unordered_map<int,int>mp;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int complement=target-nums[i];
        if(mp.find(complement)!=mp.end()){
            return {mp[complement],i};
        }
        mp[nums[i]]=i;

    }

    //two pointer approach-T.C: O(nlogn) , SC: O(n)
    // first we make a pair for each element with its index
    // vector<pair<int,int>>res;
    // for(int i=0;i<nums.size();i++){
    //     res.push_back({nums[i],i});
    // }
    // res becomes:
// {4, 0}
// {6, 1}
// {8, 2}
// {10, 3}
// {12, 4}
// {14, 5}
    // now we sort the array based on the first element of pair

    // sort(res.begin(),res.end());
    // int n=res.size();
    // int i=0;
    // int j=n-1;
    // while(i<j){
    //     if(res[i].first+res[j].first==target){
    //         return {res[i].second,res[j].second};
    //     }
    //     else if(res[i].first+res[j].first<target){
    //         i++;
    //     }
    //     else{
    //         j--;
    //     }
    // }

    // //brute force approach
    
    // int n=nums.size();
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==target){
    //             return {i,j};
    //         }
    //     }

    // }
    // return {}; // return empty vector if no solution found

}
int main(){
    vector<int> nums={4,6,8,10,12,15};
    int target=20;
    vector<int> result=twoSum(nums,target);
    if(result.size()==2){
        cout<<"Indices: "<<result[0]<<" , "<<result[1]<<endl;}
    else{
        cout<<"No two sum solution found."<<endl;}
    }
    

