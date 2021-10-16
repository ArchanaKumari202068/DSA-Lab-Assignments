// Using iteration & recursion concepts write the program for Quick Sort technique

#include<stdio.h>
#include<conio.h>
#define max 100
int a[max],n,i,h,l;
void main()
{
void input(void);
input();
getch();
}
void input(void)
{
void quicksort(int a[],int l,int h);
void output(int a[],int n);
printf("how many:");
scanf("%d",&n);
printf("\n");
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=0;
h=n-1;
quicksort(a,l,h);
printf("sorted array:\n");
output(a,n);
}
void quicksort(int a[],int l,int h)
{
int temp,key,low,high;
low=l;
high=h;
key=a[(low+high)/2];
do{
while(key>a[low])
{
low++;
}
while(key<a[high])
{
high--;
}
if(low<=high)
{
temp=a[low];
a[low++]=a[high];
a[high--]=temp;
}
}
while(low<=high);
if(l<high)
quicksort(a,l,high);
if(low<h)
quicksort(a,low,h);
}
void output(int a[],int n)
{
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
