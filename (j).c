#include<stdio.h>
void main()
{
    int i,j,key,k;
    int a[5]={9,5,4,32,8};
    for(j=1;j<5;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
    for(k=0;k<=4;k++)
    {
        printf("%d\n",a[k]);
    }
}
