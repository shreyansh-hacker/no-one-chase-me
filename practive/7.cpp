#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count =1;
    for (int i=1;i<=n;i++){
        for (int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for (int j=0;j<2*i-1;j++ ){
            if (i%2==0){
                cout<<"#"<<" ";
            }
            else {
                cout<<count<<" ";
                count++;
            }
        }
        for (int j=0;j<n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}