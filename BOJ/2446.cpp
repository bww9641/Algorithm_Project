#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      printf(" ");
    }
    for(int j=0;j<2*n-i*2-1;j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i=n-2;i>=0;i--){
    for(int j=0;j<i;j++){
      printf(" ");
    }
    for(int j=0;j<2*n-i*2-1;j++){
      printf("*");
    }
    printf("\n");
  }
}