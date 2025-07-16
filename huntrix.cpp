#include<bits/stdc++.h>
using namespace std;
/*
A school has followin g rules for grading system:
a.below 25-F
b.25-44 - E
and so on 
ask user to enter marks and print the corresponding grades
*/
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks<25){
        cout<<"Your grade is F";
    }
    else if(marks>=25 && marks<45){
        cout<<"Your grade is E";
    }
    else if(marks>=45 && marks<50){
        cout<<"Your grade is D";
    }
     else if(marks>=50 && marks<60){
        cout<<"Your grade is C";
    }
    else if(marks>=60 && marks<80){
        cout<<"Your grade is B";
    }
    else{
        cout<<"Your grade is A";
    }
    return 0;
}