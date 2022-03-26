#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;

    for(int i = 0; i < row; i++){
        cout<<endl;
        for(int j = 5-i; j > 0; j--){
            cout<<"*"<<"\t";
        }
    }

    return 0;
}