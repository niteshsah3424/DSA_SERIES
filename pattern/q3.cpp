#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " "; // for printing the column number
           // cout << i <<" "; // for printing the rows number
        }
        cout <<endl;
    }

}
int main(){
    cout <<"enter the number";
    int n;
    cin >>n;
    print(n);
}