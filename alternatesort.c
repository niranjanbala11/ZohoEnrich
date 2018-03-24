#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int alternatesort(int *,int);
int compare(int,int);
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    alternatesort(a,n);
    
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}





int alternatesort(int * arr,int num)
{
    int mpos,flag=1;
    for(int i=0;i<num-1;i++)
    {
        mpos=i;
        for(int j=i+1;j<num;j++)
        {
            int k=compare(arr[mpos],arr[j])*flag;
            if(k>0)
            {
                mpos=j;
            }
        }
        int temp=arr[mpos];
        arr[mpos]=arr[i];
        arr[i]=temp;
        flag=-flag;
    }
    
    return 0;
}




int compare(int a,int b)
{
    if(a<b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

