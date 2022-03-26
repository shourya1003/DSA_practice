#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int row;
    cout<<"Enter the number of rows that you wanna print : ";
    cin>>row;

    for(int i = 1; i <= row;i++){
        for(int j = 1; j<=row-i;j++)
            cout<<' ';

        for(int k = 1; k<=i ;k++)
            cout<<k<<' ';

        
        cout<<endl;
    }


  return 0;
}