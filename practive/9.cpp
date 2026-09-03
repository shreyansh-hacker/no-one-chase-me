    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int count =1;
        for (int i=1;i<=n;i++){
            int limit =i;
            if (i>2){
                limit = i-1+i-2;
            }
            for (int j=1;j<=limit;j++){
                if (count>9){
                    count =0;
                }
                if (j%2==0){
                    cout<<"*";
                }
                else{
                    cout<<count;
                    count++;
                }
            }
            cout<<endl;
        }
    }