#include <stdio.h>
int a[100][100];
int b[100][100];
int d[100][100];
void printarr(int arr[][])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void inputarr(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\n enter %d %d element:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    add(a, b);
}

void add(int l[][], int m[][])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
        }
    }
}

void main()
{

    int r, c;
    printf("\n Enter the number of rows");
    scanf("%d", &r);
    printf("\n Enter the number of col");
    scanf("%d", &c);
    inputarr(r, c);
    printarr(d);
}
    // int a[3][3]={1,2,3,4,5,6,7,8,9};
    // int b[3][3];
    // int row,col;
    //  printf("\n enter the number of rows");
    // int s1=0,s2=0,s3=0;

    // sum of diagonals in a array
    // int i =0,sum=0,sum1=0;
    // Transpose of a array
    // for(int i =0;i<3;i++){
    //     for(int j =0;j<3;j++){
    //         b[i][j]=a[j][i];
    //     }
    // }
    // printarr(a);
    // printf("\n");
    // printarr(b);

    // printarr(a);
    // printf("\n");
    // for(int i =0;i<3;i++){
    //     for(int j =i+1;j<3;j++){
    //         int temp=a[i][j];
    //         a[i][j]=a[j][i];
    //         a[j][i]=temp;
    //     }
    // }
    // printarr(a);

    // int r=0,c=0;

    //     int temp = a[0][0];
    //     a[0][0]=a[0][2];
    //     a[0][2]=temp;

    // printf("\n");
    // printarr(a);

    // printf("\n");
    // printarr(a);
    // for(int j =0;j<=3;j++){//sum of diagonals
    // sum+=a[j][j];
    // sum1+=a[j][3-1-j];
    //}
    // printf("%d",sum);
    // printf("\n%d",sum1);

    // for(int j=0;j<3;j++){//row sum using single loop
    //
    //     s1+=a[0][j];
    //     s2+=a[1][j];
    //     s3+=a[2][j];
    //
    //
    // }
    //
    // printf("\n%d",s1);
    // printf("\n%d",s2);
    // printf("\n%d",s3);

    // for(int i=0;i<3;i++){//row sum using double loop
    //     sum=0;
    //    for(int j =0;j<3;j++){
    //     sum+=a[i][j];
    //    }
    //    printf("\n%d",sum);
    // }
// }
// row sum using single loop
// column sum using double loop & single loop
// transpose of a array
// circular rotate a  array
//  addition of 2 array