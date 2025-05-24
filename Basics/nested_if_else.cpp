// if age <18
// print "not eligible for job";
//if age is >=18 and age is <=54;
// print"eligible for job;
// if age is >=55 and age <=57;
// print"eligible for job but retirement soon";
// if age >=57;
// printf"retired";

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age ;
    cin >> age;
    if (age <=18){
        cout<<"not eligible for job";
    }
    else if (age >=18 && age<=57){
        cout<<"eligible for job";
        
        if(age<=55 ){
            cout<<"but retirement soon";

        }
    }
     else{
        cout<<"retired";

     }
     return 0;
    
}

