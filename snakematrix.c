int main() {
    int n,num=1;
    scanf("%d",&n);
    int a[n][n],i,j;
    for(i=0;i<n;i=i+2)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=num++;
        }
        num+=n;
    }
    num=n*n-(n%2)*n;
    for(i=n-1-(n%2)*1;i>=1;i=i-2)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=num--;
        }
        num-=n;
    }
    
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
