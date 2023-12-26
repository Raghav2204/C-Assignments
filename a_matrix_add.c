#include <stdio.h>
void main ()
{

 int matrix1[3][3];
 int matrix2[3][3];
 int matrix3[3][3];

 printf(" Matrix 1 \n");

 for(int i = 0 ; i <3 ; i++ )
 {
    for( int j = 0 ; j<3 ;j ++ )
    {

    matrix1[i][j] = (i+5)*(j+10);
    matrix2[i][j] = (i+j+5)*7;
    matrix3[i][j]=matrix1[i][j]+matrix2[i][j];

    printf(" %d",matrix1[i][j]);

 }

 printf("\n");

}

printf(" Matrix 2 \n");

for(int k = 0 ; k<3 ; k++)
{
    for (int l = 0 ; l < 3 ; l ++)
    {

        printf(" %d",matrix2[k][l]);
    }
}
}

