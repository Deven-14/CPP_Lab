#include <stdio.h>

void input_matrix(int m,int n,int matrix[][n])
{
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            scanf("%d",&matrix[i][j]);
}

void print_matrix(int m,int n,int matrix[][n])
{
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int m,int n,int matrix1[][n],int matrix2[][n], int sum[][n])
{
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
}

int main()
{
    int m,n;
    printf("Enter the m x n values:");
    scanf("%d%d",&m,&n);
    int matrix1[m][n],matrix2[m][n],sum[m][n];
    printf("Enter the values of the first matrix:\n");
    input_matrix(m,n,matrix1);
    printf("The first matrix is:\n");
    print_matrix(m,n,matrix1);
    printf("Enter the values of the second matrix:\n");
    input_matrix(m,n,matrix2);
    printf("The second matrix is:\n");
    print_matrix(m,n,matrix2);
    add_matrices(m,n,matrix1,matrix2,sum);
    printf("The sum of the 2 matrices is:\n");
    print_matrix(m,n,sum);
    return 0;
}
