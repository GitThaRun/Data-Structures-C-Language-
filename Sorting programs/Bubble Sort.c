#include<stdio.h>
#include<conio.h>
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void main()
{
    int i,j,temp;
    int a[5] = {10,25,20,15,30};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nBEFORE SORTING ELEMENTS ARE:\n");
    print(a , n);
    bubble(a , n);
    printf("\nAFTER SORTING ELEMENTS ARE :\n");
    print(a , n);
    printf("\n");
    getch();
}