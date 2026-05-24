#include<iostream>
using namespace std;

int main(){
    int marks[6] = { 44, 45, 80 , 56, 78, 90};
    // cout << marks[0] <<endl;
    // cout << marks[1] <<endl ;
    // cout << marks[2] <<endl ;
    // cout<< marks[3] <<endl;
    // cout<< marks[4] <<endl;
    // cout<<marks[5]<< endl;

    //   if i want to find the size of array 
    cout << sizeof(marks) << endl;
    cout << sizeof(marks) / sizeof(int) << endl;

   cout << sizeof(marks[0]) <<endl;

    return 0;
}
