#include<iostream>
using namespace std;

int reverse_number(int n){
    int original=n;
    int reverse=0;

    if (n<0){
        return false;
    }

    while(n>0){

        int lastdigit=n%10;
        reverse=(reverse*10)+lastdigit;
        n=n/10;

    }
    return reverse;

}

int main(){
    int n;
    cout << "enter the number";
     cin>>n;
     reverse_number(n);
     int reversed=reverse_number(n);
     cout<<"the reversed  number are="<<reversed<<endl;
     if(reversed ==n){
            cout <<"pallindrome";
   
        }
        else{
            cout <<" not pallindrome";
        }

        return 0;
 }
    





 



