#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n] ;
    int count[3]={0,0,0} ;
    for (int i=0;i<n;i++){
        cin>>nums[i];
        count[nums[i]]++;
    }
    int index=0;
    for (int i=0;i<3;i++){
        for (int j=0;j<count[i];j++){
            nums[index]=i;
            cout<<nums[index]<<" ";
            index++;
        }
    }
}