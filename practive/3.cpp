    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int number=1,digit=1;
        char ch='A';
        for (int i=1;i<=n;i++){
            for (int j=1;j<n-i+1;j++){
                cout<<"  ";
            }
            for (int k=0;k<number;k++){
                if (i%2==0){
                        cout<<digit<<" " ;
                        if(k==number-1){
                            digit++;
                        }
                }
                else {
                    cout<<ch<<" ";
                    if(k==number-1){
                            ch++;
                        }
                }
            
            }
            number++;
            cout<<endl;
        }
    }