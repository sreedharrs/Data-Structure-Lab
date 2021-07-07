#include<stdio.h>
int main()
{
    int a[10],n,i,j=1,val,pos=-1;
    printf("Enter the limits\t");
    scanf("%d",&n);
    printf("Enter the Elements\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe Array is\n");
    
    for(i=0;i<n;i++)
      {
          printf("%d\t",a[i]);
      }
    printf("\nEnter the element to be SEARCHED\t");
    scanf("%d",&val);
    while(j<=n)
    {
        if(a[j]==val)
          {
             pos=j;
             printf("Element found at %d",pos);
          }
        j=j+1;
    }
    if(pos==-1)
    printf("ELEMENT NOT FOUND!!");
}