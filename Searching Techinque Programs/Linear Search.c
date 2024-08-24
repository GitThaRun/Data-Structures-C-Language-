#include<stdio.h>
 #include<conio.h> 
void main()
{
    int a[20],i,x,n;
    clrscr();
    printf("How many elements?:");
    scanf("%d",&n);
     
    printf("\nEnter array elements:\n");
    for(i=1;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:");
    scanf("%d",&x);
     
    for(i=1;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("\nElement found at index %d",i);
    else
        printf("\nElement not found");
  
    getch();
}