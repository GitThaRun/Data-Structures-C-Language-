#include <stdio.h>
#include<conio.h>
int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

void main() {
    int i;
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int result = binarySearch(array, x, 0, n - 1);
  clrscr();
  printf("\nThe elements of array are:");
  for(i=0;i<n;i++)
  printf("%d ",array[i]);
  printf("\nElement to be searched is:%d\n",x);
  if (result == -1)
    printf("Not found");
  else
    printf("\nElement is found at index %d\n", result);
  getch();
}