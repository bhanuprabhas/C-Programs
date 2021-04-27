#include <stdio.h>
int main()
{
 int arr[100], size,count,i,j,s=0;
 printf("Enter Array Size:");
 scanf("%d",&size);
 printf("Enter Array values:");
 for(i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
 }
 printf("\nThe unique elements in an array:");
 for(i=0; i<size; i++)
 {
 count=0;
 for(j=0;j<size;j++)
 {
 if(arr[i]==arr[j])
 {
 count++;
 }
 }
 if(count==1)
{
 s=1;
 printf("%d ",arr[i]);
 }
 }
 if(s==0)
 {
 printf("\nUnique Elements are not Found");
}
 return 0;
}

