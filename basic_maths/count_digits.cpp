#include<iostream>
using namespace std;

int count(int n){
    
    int cnt=0;
    while(n>0){
     int lastdigit= n%10;
     //cout<<" lastdigit";
     cnt=cnt+1;
     n=n/10;

    }
    return cnt;

}
int main(){
    int n ;
    cout<<" enter the number";
    cin>>n;
    count(n);

    int result=count(n);
    cout<<"number of digits="<< result <<endl;
}