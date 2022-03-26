#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int row;
    cout<<"Enter the number of rows that you wanna print : ";
    cin>>row;
    int sum = 1;
    for(int i = 1; i <= row; i++){
        cout<<endl;
        for(int j = 1; j <= i; j++){
            cout<<sum<<'\t';
            sum++;
        }

    }


  return 0;
}