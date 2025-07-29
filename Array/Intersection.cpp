#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> a{1,2,2,1};
    
    vector<int> b{2,2};
    
    vector<int> ans;
    for(int i=0;i<a.size();i++)
    { 
         for(int j=0;j<b.size();j++)
        {  
            if(a[i]==b[j])
           { 
           b[j]=-1; //it give us the exact number of  repeated value in b array 334
            ans.push_back(a[i]);
            break;}//its lets us to stop dubplicate the value

        }
    }
  
    cout<<"printing the intersected array"<<endl;
   for(int j=0;j<ans.size();j++)
   {
    cout<<ans[j]<<" ";
  }
  cout<<endl;
  // cout<<"printing the union array"<<endl;
  // for(int i=0;i<a.size();i++)
  // {
  //   ans.push_back(a[i]);
  // }
  // for(int i=0;i<b.size();i++)
  // {
  //   if(b[i]!=-1)
  //   {
  //       ans.push_back(b[i]);
  //   }
  // }
  // for(int j=0;j<ans.size();j++)
  //  {
  //   cout<<ans[j]<<" ";
  // }
  return 0;

}