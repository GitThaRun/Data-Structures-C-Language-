#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void BinarySearch(int arr[],int num,int first,int last){
   
   int mid;

   if(first > last){
       
        printf("\nCannot Find The Number");
        
   } else {
       
      
      mid = (first + last)/2;
    
      
      if(arr[mid]==num){
          
            printf("\nElement Is At The Index: %d ",mid);
            exit(0);
            
        }else if(arr[mid] > num){
            
            BinarySearch(arr, num, first, mid-1);
        
        }else{
            
            BinarySearch(arr, num, mid+1, last);
        }   
    }  
}


void main(){

   int arr[50],beg,mid,end,i,n,num;
   clrscr();
   printf("\nEnter The Size Of The Given Array: ");
   scanf("%d",&n);

   printf("\nEnter The Values In Sorted Sequence \n");

   for(i=0;i<n;i++)
   {   
       scanf("%d",&arr[i]);
   }   


   beg=0;
   end=n-1;

   printf("\nEnter The Value To Search Using Binary Search: ");
   scanf("%d",&num);

   BinarySearch(arr,num,beg,end);
   getch();
}