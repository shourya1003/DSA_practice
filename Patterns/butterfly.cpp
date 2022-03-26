#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int row;
    cout<<"Enter the number of rows that you wanna print : ";
    cin>>row;
    for(int i = 1; i<= 2*row; i++){
        cout<<endl;
        for(int j =1 ; j<= 2*row; j++){
            if(j == i || j == 2*row-i+1){
                cout<<'*'<<'\t';
                break;
            }
            else
                cout<<'*'<<'\t';
        }
    }



  return 0;
}