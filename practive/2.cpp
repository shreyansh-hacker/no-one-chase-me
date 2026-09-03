#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout <<"* ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout <<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for (int i=0;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout <<j<<" ";
        }
        cout<<endl;
    }
}

void print4(int n){
    for (int i=0;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout <<i<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for (int i=1;i<=n;i++){
        for (int j=0;j<n-i+1;j++){
            cout <<"* ";
        }
        cout<<endl;
    }
}

void print6(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout <<j<<" ";
        }
        cout<<endl;
    }
}

void print7 (int n){
    for (int i=0; i<n;i++){
        //space 
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // star
        for (int j=0 ; j<2*i+1;j++){
            cout<<"*";

        }
              //space 
        for (int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8 (int n){
    for (int i=0;i<n;i++){
        //space 
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        // star 
        for (int j=0 ; j<((2*n)-(2*i)-1);j++){
            cout<<"*";
        }
         //space 
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9 (int n){
    print7(n);
    print8(n);
}

void print10 (int n){
    for (int i=1 ; i<=2*n-1;i++){
        int stars =i;
        if (i>n) stars =2*n-i;
        for (int j=1;j<=stars;j++){
            cout<<"*";

        }cout<<endl;
    }
}

void print11 (int n){
    for (int i=0;i<n;i++){
        int start =1 ;
        if (i%2==-0) start =1 ;
        else start =0;
        for (int j=0;j<=i;j++){
            cout<<start;
            start = 1- start;

        }
        cout<< endl;
    }
}

void print12 (int n){
    int space = 2*(n-1);
    for (int i=1; i <=n;i++ ){
        // number 

        for (int j=1;j<=i;j++){
            cout << j;
        }
        // space 
        for ( int j=1 ;j<=space;j++){
            cout<<" ";
        }
        // number 
        for (int j=i;j>=1;j--){
            cout<< j;
        }
        cout << endl;
        space-=2;
    }
}

void print13 (int n){
    int count=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
} 

void print14 (int n){
    for (int i=0;i<n;i++){
        for (char ch='A';ch<='A'+i;ch++){
            cout << ch;
        }
        cout<<endl;
    }

}

void print15 (int n){
    for (int i=0; i<n;i++){
        char ch ='A';
        for (int j=0;j<n-i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

void print16(int n){
    for  (int i=0;i<n;i++){
        char ch ='A'+i;
        for (int j=0 ; j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print17(int n){
    for (int i=0;i<n;i++){
        //spaces
        for (int j=0 ;j<n-i-1;j++ ){
            cout<<" ";
        }
        // alphabet 
        int alphabet = 2*i+1;
        char ch='A';
        for (int j=0;j<alphabet;j++){
            cout<<ch;
            if (j>=alphabet /2) ch--;
            else ch++;
        }
        // spaces
        for (int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        cout<<endl;
    }
}

void print18 (int n){
    char ch1='E';
    for (int i=0;i<n;i++){
        
         char ch2 = ch1;
        for (int j=0;j<=i;j++){
           
            cout<<ch2;
            ch2++; 
        }ch1--;
        cout<<endl;
    }
}

void print19 (int n){
    for (int i=0;i<n;i++){
        // star
        for (int j=0;j<n-i;j++){
            cout<<"*";
        }
        // space 
        for (int j=0;j<2*i;j++){
            cout<<" ";
        }
        // star
        for (int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //next part 
    for (int i=0;i<n;i++){
        // star
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        // space
        for (int j=0;j<2*n-2-2*i;j++){
            cout<<" ";
        }
        // star
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print20 (int n){
    int space =2*n-2;
    for (int i=1 ; i<=2*n-1;i++){
        int stars =i;
        if (i>n) stars = 2*n-i;
        // star
        for (int j=1;j<=stars;j++){
            cout <<"*";
        }
        // space
        
        if (i>=n) space =2*i-2*n;
        for (int j=1;j<=space;j++){
            cout<<" ";
        }
        // star
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }

        cout<<endl;

        if (i<n) space-=2;
        else space +=2;
    }
}

void print21 (int n){
    for (int i=0 ; i<n;i++){
        for (int j=0;j<n;j++){
            if (i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

void print22 (int n){
    for (int i=0;i<2*n-1;i++){
        for (int j=0;j<2*n-1;j++){
            int top =i;
            int left = j;
            int right =(2*n-2)-j;
            int down = (2*n-2)-i;
            cout <<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}

int main(){
    int t,n;
    cin>>t;
while (t--){
        cin>>n;
        print8(n);
}

}