#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //generating random integer
  //seeding random integer
  srand( time(NULL) );
  //printf("random integer: %d\n", rand() % 100);

  //creating the array
  int arr[10];
  int arr2[10];
  int count;

  //populting the array
  for(count = 0; count < 9; count++){
    arr[count] = rand();
  }
  arr[9] = 0;

  printf("Printing the first array:\n");
  for(count = 0; count < 10; count++){
    printf("arr[%d]: %d\n", count, arr[count]);
  }

  //populating second array using pointers
  int * pointer;
  int value;
  printf("Printing the second array:\n");
  for(count = 0; count < 10; count++){
    pointer = &arr[9 - count];
    arr2[count] = * pointer;
  }

  for(count = 0; count < 10; count++){
    printf("arr[%d]: %d\n", count, arr2[count]);
  }
}
