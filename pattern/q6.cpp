#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=1; i<n;i++){

        for(int j=0;j<i;j++){
            cout <<" ";
        }
        for (int j=0; j<2*n-(2*i+1);j++){
            cout <<"*";

        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout << endl;
        
    }

}
int main(){
    cout <<"enter the number";
    int n;
    cin >>n;
    print(n);
}