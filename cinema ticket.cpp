#include <iostream>
using namespace std;
int main(){
    int age;
    string customerclub;
    cout<<"Please enter your age:";
    cin>> age;
    if(age<12 || age>60)
        cout<<"Your ticket price is 10000 toman";
       else{ cout<<"Do you join to customer club?";
       cin>>customerclub;}
     if(age>=12 && age<18 && customerclub=="yes")
            cout<<"Your ticket price is 12000 toman";
    else if(age>=12 && age<18 && customerclub=="no"){
            cout<<"Your ticket price is 15000 toman";}
    else if(age>=18 && age<60 && customerclub=="yes"){
            cout<<"your ticket price is 20000 toman";}
    else if(age>=18 && age<60 && customerclub=="no"){
            cout<<"Your ticket price is 25000 toman";}
}
