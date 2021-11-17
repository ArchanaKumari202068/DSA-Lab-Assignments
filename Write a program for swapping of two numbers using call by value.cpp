//  Write a program for swapping of two numbers using call by value.
// Archana Kumari ,Roll No.- 202068, DSA Lab - Program-6

#include<iostream>
using namespace std;

void swap (int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping value of a and b is : "<<a<<" and "<<b<<endl;

}

int main ()
{
    int a,b;

    cout << "Enter a and b \n";
    cin >> a >> b;

    cout<<"Before swapping value of a and b is : "<<a<<" and "<<b<<endl;


     swap(a,b);

     return 0;

}
