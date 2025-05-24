#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<< "enter the marks";
    cin>> marks;

    if(marks<25){
        cout<<"grade=f";
    }
    else if(marks>=25 && marks<=44){
        cout<<"grade=E";
    }

    else if(marks>=44 && marks<=49){
        cout<<"grade=D";
     }

     else if(marks>=50 && marks<=59){
        cout<<"grade=C";
     }

     else if(marks>=60 && marks<=79){
        cout<<"grade=B";
     }

     else if(marks>80 && marks<=100){
        cout<<"grade=A";
     }

return 0;
}