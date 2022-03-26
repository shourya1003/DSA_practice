#include<iostream>
using namespace std;

int main(){
    int len, wid;
    cout<<"Enter the length of recangle : ";
    cin>>len;
    cout<<"Enter the width of rectangle : ";
    cin>>wid;

    for(int i = 0; i < len; i++){
        cout<<endl;
        for(int j = 0; j< wid; j++){
            cout<<"*"<<'\t';
        }
    }
    
    return 0;
    
}