// program to check employee working period to get net_bonus
#include <iostream>
using namespace std;
int main(){
int yrs,salary,net_bonus;
cout<<"enter yrs"<<endl;
cin>>yrs;
cout<<"enter salary"<<endl;
if (yrs>10){
    net_bonus=salary*0.1;
    cout<<"your net_bonus is Ksh"<<net_bonus;
}
else if (yrs>=6&&yrs<=10){
    net_bonus=salary*0.08;
    cout<<"your net_bonus is Ksh"<<net_bonus;
}
 else{
     net_bonus=salary*0.5;
     cout<<"your net_bonus is Ksh"<<net_bonus;
 }   
    return 0;
}