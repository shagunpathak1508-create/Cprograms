#include<stdio.h>

int main (void){
int N=3;
int Number[N];    //Array declaration

for(int i=0;i<N;i++){
    printf("Enter number to be placed at %d: ",  i);       //to take user input i.e. values in array
    scanf("%d",&Number[i]);
  }

    printf("The numbers in array are:");

for(int i=0;i<N;i++){         //to print each value
    printf("%d\n", Number[i]);
     }

int sum=0;
for(int i=0;i<N;i++){
    sum=sum+Number[i];
}

  printf("Sum of values is: %d", sum);


return 0;
}