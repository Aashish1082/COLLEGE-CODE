#include<stdio.h>
int main()
{
    int i,j,k=0,m;
    int a[100];
    int b[100];
    int c[100];
    printf("Entre the size of array");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Entre the elements of array");
        scanf("%d", &a[i]);
    }
        j=m-1;
        i=0;
        while(i<j)
        {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        
        j--;
        }
        printf("Reversed array is:");
        for(i=0;i<m;i++)
        {
            printf("%d",a[i]);
        }
    
}