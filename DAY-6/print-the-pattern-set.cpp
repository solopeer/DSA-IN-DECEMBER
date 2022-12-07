void printPat(int n)
{
    int i, j, k;
    for(k=0;k<n;k++){
        for(i=n;i>0;i--){
            for(j=0;j<n-k;j++){
                printf("%d ",i);
            }
        }
        printf("$");
    }
}