#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int row;
    cout<<"Enter the number of rows that you wanna print : ";
    cin>>row;
    int sum = 0;

    for(int i = 1; i<=row ; i++){
        cout<<endl;
        for(int j = 1; j<=i ;j++){
            sum= i + j;
            if(sum % 2 == 0)
                cout<<"0"<<'\t';

            if(sum % 2 == 1)
                cout<<"1"<<'\t';    
        }
    }

  return 0;
}