#include<stdio.h>
int main()
 {
    int a[20],n,i,j,temp,k;
    printf("Enter the limit\t");
    scanf("%d",&n);
    printf("Enter the Elements\t");
    
     for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
    printf("\nArray Before Sorting:\n");
    
      for(i=0;i<n;i++)
        {
          printf("%d\t",a[i]);
        }
    
    for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-i-1;j++)
         {
            if(a[j]>a[j+1])
             {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
             }
         }
        
     }
    printf("\nAfter sorting:\n");
    for(k=0;k<n;k++)
      {
        printf("%d\t",a[k]);
      } 
}