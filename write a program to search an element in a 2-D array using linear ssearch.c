//Write a program to search an element in a 2-D array using linear search
#include<stdio.h>
#include<stdlib.h>

int main()
{
       int n,i,j,search,c=0;
       printf("Enter the required size of Matrix.\n");
       scanf("%d",&n);
       int **a;
       a = malloc(n*sizeof(int*));

       for(i=0;i<n;i++)
       {
              a[i] = malloc(n*sizeof(int));
              for(j=0;j<n;j++)
              {
                     printf("a[%d,%d] : ",i+1,j+1);
                     scanf("%d",&a[i][j]);
              }
       }
       printf("Enter the element you need to search: ");
       scanf("%d",&search);

       for(i=0;i<n;i++)
       {
              for(j=0;j<n;j++)
              {
                     if(search == a[i][j])
                     {
                           printf("The element %d is present at position a[%d,%d].\n",search,i+1,j+1);
                           c++;
                     }
              }
       }
       if(c==0)
       {
              printf("Element not found.\n");
       }
       return 0;
}
