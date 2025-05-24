#include<iostream>
using namespace std;
int reverse_number(int n){
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;

        n=n/10;
        reverse=(reverse*10)+lastdigit;

    }
    return reverse;

}
int main(){
    cout<<"enter the number";
    int n;
    cin>> n,
    reverse_number(n);

    int reverse=reverse_number(n);
    cout<<"the reverse number="<<reverse<< endl;

    return 0;
}