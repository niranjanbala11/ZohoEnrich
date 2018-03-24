#include<stdio.h>
int main() {
    int n,i,j,x=1;
    scanf("%d",&n);
    int num=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",num);
	    num+=x;
        }
	num+=n-x;
	x=-x;
        printf("\n");
    }
    return 0;
}
