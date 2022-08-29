#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,j,k,l;
    int **a=(int **)malloc(3*sizeof(int *));
    for(i=0;i<3;i++){
        a[i]=(int *)malloc(3*sizeof(int));
    }
    printf("Enter the elements of matrix (3X3) \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int det=0;
    for(i=0;i<3;i++){
        det=det+a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]);
    }
    printf("The determinant of matrix is %d",det);
}