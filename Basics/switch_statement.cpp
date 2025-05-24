/* take the day no and print the corresponding day for 1 monday
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>> day;

    switch(day){
    case 1:
    cout<<"monday";
    break;
    case 2:
    cout<<"tuesday";
    break;
    case 3:
    cout<<"wednesday";
    break;
    case 4:
    cout<<"thursday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"saturday";
    case 7:
    break;
    cout<<"sunday";
    break;
    default:
    cout<<"invalid number";

    }
    cout<<"checked"; // by default print 

    return 0;
}
