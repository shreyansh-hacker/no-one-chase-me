#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,last,sec_last;
    cin>>n;
    bool correct=true;
    for (int i=0;i<10;i++){
        last=n%10;
        n=n/10;
        sec_last=n%10;
        n=n/10;
        int diff=sec_last-last;
        if (n==0){
            break;
        }
        else if (diff==1||diff==-1){
            correct=true;
            continue;
        }
        else if (diff!=1&&diff!=-1){
            correct=false;
            break;
        }
        
    }
    cout<<boolalpha<<correct;
}