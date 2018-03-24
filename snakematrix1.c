#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            num=num+1*!(i%2)-1*(i%2);
            printf("%d ",num);
        }
        printf("\n");
        num+=n+1*!(i%2)-1*(i%2);
    }
    return 0;
}
