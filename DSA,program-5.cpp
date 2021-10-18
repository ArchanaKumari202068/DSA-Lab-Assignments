// Write a program to implement the various operations on string such as (a)length of string(b)concatenation(c)reverse a string (d)copy a string
#include<iostream>
#include<string>
using namespace std;
class str
{
    string a,b,c,r,s1,s2,s3,ss;
    int i,ct,n,j,len,k;
    public:
    void length()
    {	cout<<"\n\n...Length of string...\n\n";
        ct=0;
        cout<<"Enter string=\n";

        cin>>a;
        for(i=0;a[i]!='\0';i++)
            {
                ct++;
            }
        cout<<"Length of string=\t"<<ct;
    }
    void concat()
    {	cout<<"\n\n...ConCatenation Operation...\n\n";

        cout<<"\nEnter string 1=\t";
        cin>>b;
        cout<<"\nEnter string 2=\t";
        cin>>c;
        cout<<"\nYour entered strings are=\n"<<b<<"\n"<<c;
        n=0;
        for(i=0;b[i]!='\0';i++)
        {
            r[n]=b[i];
            n++;
        }
        for(j=0;c[j]!='\0';++j)
        {
            r[n]=c[j];
            n++;
        }
        cout<<"\nResultant string=\t\t";//<<r;
        for(i=0;r[i]!='\0';i++)
        {
                    cout<<r[i];
        }
    }
    void  copy()
    {


        cout<<"\n\n**---Copy operation---**\n\n";
        cout<<"\nEnter string=";
        cin>>s1;

        for(i=0;s1[i];i++)
            {
                ct++;
            }

        for(i=0;i<ct;i++)
                    {
                        s2=s1;
                    }
            cout<<"\nCopied string=";

            cout<<s2;
    }
    void rev()
    {
        cout<<"*---Reverse Operation---*";
        cout<<"\n\nEnter string=";
        cin>>s3;
        ct=0,k=0;
        for(i=0;s3[i]!='\0';i++)
        {
                        ct++;
        }
        for(i=ct-1;i>=0;i--,k++)
        {
            ss[k]=s3[i];
        }
        cout<<"\n reversed=";

        for(i=0;i<k;i++)
        cout<<ss[i];
    }





};
   int main()
{
    str s;
    char ans;
    int ch;
    do

    {
        cout<<"\t\t Menu to choose \n\n";
        cout<<"1)Length\n2)Concatenation\n3)reverse\n4)copy\n\n Enter your choice = \t";
        cin>>ch;
        switch(ch)
        {
            case 1 :s.length(); break;
            case 2 :s.concat();	break;
            case 3 :s.rev();	break;

            case 4 :s.copy();	break;
            default:cout<<"\n wrong selection..!!\n";
        }
    cout<<"\n\n want try more operation(Y/N)=";
    cin>>ans;
    }while(ans=='Y'||ans=='y');
    return 0;
}
