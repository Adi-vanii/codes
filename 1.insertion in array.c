#include<stdio.h>
void main() {
    int arr[100];
    int pos,x,n,i;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\nenter the element you want to insert:");
    scanf("%d",&x);
    printf("\nenter the position where you want to insert:");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--)
        arr[i]=arr[i-1];
    arr[pos-1]=x;
    printf("\n*****UPDATED ARRAY*****\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
