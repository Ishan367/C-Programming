#include <stdio.h>
int main(){
    int i,j,A[6][6],B[6][6],sum[6][6];
    for(i=1;i<=6;i++){
        for (j=1;j<=6;j++){
        printf("eter the elemnt on %d,%d",i,j);
        scanf("%d",&A[i][j]);
    }

}   for(i=1;i<=6;i++){
        for (j=1;j<=6;j++){
        printf("eter the elemnt on %d,%d",i,j);
        scanf("%d",&B[i][j]);
    }

}   for(i=1;i<=6;i++){
        for (j=1;j<=6;j++){
        sum[i][j]=A[i][j]*B[i][j];
    }

}   printf("The sum of two matrix is\n");
    for(i=1;i<=6;i++){
        for (j=1;j<=6;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
    return 0;
}
}