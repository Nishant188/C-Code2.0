// #How to created fully dynamic array in c  


#include<stdio.h>
#include <iostream>
struct Array{
int *A;
int size;
int length;
};

void display(struct Array arr)
{
  for(int i=0; i<arr.length; i++)
  printf("\n%d",arr.A[i]);
}
void append()


int main(){
  struct Array arr;
  printf("Enter The Size Of the Array :");
  scanf("%d",&arr.size);
  arr.A = (int*)malloc(arr.size*sizeof(int));
  arr.length = 0;

  int n,i;
  printf("Enter Number you want to enter in Array:");
  scanf("%d",&n);
  printf("Enter The Elements In Array :");
  for(int i=0; i<n; i++)
    scanf("%d",& arr.A[i]);

  arr.length = n;  


 
  display(arr);

  return 0;
}