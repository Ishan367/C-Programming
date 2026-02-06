#include <stdio.h>
int main(){
    int i,j,A[4][4];
    for(i=0;i<=4;i++){
        for (j=0;j<=4;j++){
        printf("Enter the element on %d,%d: ",i,j);
        scanf("%d",&A[i][j]);
    }
}
    for(i=0;i<=4;i++){
        for (j=0;j<=4;j++){
        printf("%d ",A[j][i]);
        printf("\n");
    }

   
}
 return 0;
}
