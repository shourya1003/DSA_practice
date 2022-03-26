#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int row;
    cout<<"Enter the number of rows that you wanna print : ";
    cin>>row;
    for(int i = 1 ; i<=row; i++){
        cout<<endl;

        for(int j = 1 ;j<=row-i; j++)
            cout<<' '<<'\t';

        for(int k = i; k > 0;k--)
            cout<<k<<'\t';

        for(int l = 2; l<=i; l++)
            cout<<l<<'\t';
    }




  return 0;
}