 // Write a program for swapping of two numbers using call by reference strategies.
// Archana Kumari ,Roll No.- 202068, DSA Lab - Program-6

#include<iostream>
using namespace std;

void swap (int *a, int *b)
{
int swap;
swap=*a;
*a=*b;
*b=swap;

}
int main()
{

   int a=11, b=51;
    cout<<"Before swapping value of a and b is : "<<a<<" and "<<b<<endl;

    swap(&a, &b);
    cout<<"After swapping value of a and b is : "<<a<<" and "<<b<<endl;

    return 0;

}
