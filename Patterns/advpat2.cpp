#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int row;
    cout<<"Enter the number of rows that you wanna print : ";
    cin>>row;

    for(int i = 1; i<= row; i++){
        cout<<endl;
        for(int j = row-i; j > 0;j--){
            cout<<" "<<'\t';
        }
        for(int k = 1; k <= 5; k++){
            cout<<'*'<<'\t';
        }
    }
  
  
  return 0;
}