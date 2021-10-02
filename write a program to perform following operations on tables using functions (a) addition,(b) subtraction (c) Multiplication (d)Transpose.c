//write a program to perform following operations on tables using functions (a) addition,(b) subtraction (c) Multiplication (d)Transpose
#include<stdio.h>
#include<stdlib.h>

// function to add two 3 x 3 matrix
void add(int m[3][3], int n[3][3], int sum[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      sum[i][j] = m[i][j] + n[i][j];
}

// function to subtract two 3 x 3 matrix
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      result[i][j] = m[i][j] - n[i][j];
}

// function to multiply two 3x3 matrix
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0; i < 3; i++)
  {
    for(int j=0; j < 3; j++)
    {
      result[i][j] = 0; // assign 0
      // find product
      for (int k = 0; k < 3; k++)
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}

// function to find transpose of a 3x3 matrix
void transpose(int matrix[3][3], int trans[3][3])
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      trans[i][j] = matrix[j][i];
}

// function to display 3 x 3 matrix
void display(int matrix[3][3])
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n\t"); // new line
  }
}

// main function
int main()
{
  // matrix
  int a[][3] = { {9,1,2}, {3,5,4}, {7,8,1} };
  int b[][3] = { {4,2,6}, {3,9,1}, {8,7,5} };
  int c[3][3];

  // print both matrix
  printf("\t First Matrix :\n\t");
  display(a);
  printf(" Second Matrix :\n\t");
  display(b);

  // variable to take choice
  int choice;

  // menu-driven
  do
  {
    // menu to choose the operation
    printf("\nChoose the matrix operation,\n\t");
    printf("----------------------------\n\t");
    printf("1. Addition\n\t");
    printf("2. Subtraction\n\t");
    printf("3. Multiplication\n\t");
    printf("4. Transpose\n\t");
    printf("5. Exit\n\t");
    printf("----------------------------\n\t");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(a, b, c);
        printf("Sum of matrix: \n\t");
        display(c);
        break;
      case 2:
        subtract(a, b, c);
        printf("Subtraction of matrix: \n\t");
        display(c);
        break;
      case 3:
        multiply(a, b, c);
        printf("Multiplication of matrix: \n\t");
        display(c);
        break;
      case 4:
        printf("Transpose of the first matrix: \n\t");
        transpose(a, c);
        display(c);
        printf("Transpose of the second matrix: \n\t");
        transpose(b, c);
        display(c);
        break;
      case 5:
        printf("Thank You.\n\t");
        exit(0);
      default:
        printf("Invalid input.\n\t");
        printf("Please enter the correct input.\n\t");
    }
  }while(1);

  return 0;
}
