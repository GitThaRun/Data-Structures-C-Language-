#include <stdio.h> 
#include<conio.h>
int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    
/* if the item to be searched is present at middle */  
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    
            /* if the item to be searched is smaller than middle, then it can only be in left subarray */  
        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    
            /* if the item to be searched is greater than middle, then it can only be in right subarray */  
        else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }          
    }    
    return -1;     
}   
void main() {  
    int i;
  int a[] = {11, 14, 25, 30, 40, 41, 42}; // given array  
  int val = 40; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int res = binarySearch(a, 0, n-1, val); // Store result 
  clrscr();
  printf("\nThe elements of the array are: ");  
  for ( i = 0; i < n; i++)  
  printf("%d ", a[i]);   
  printf("\nElement to be searched is: %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array\n");  
  else  
  printf("\nElement is present at %d position of array\n", res);  
  getch();  
}  