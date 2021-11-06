#include<stdio.h>
#include<conio.h>
int main()

{
    int no=55;
    char A = 'm';
    double dNum=46546.45;
    printf("\n size 1 = %d", sizeof(no));
    printf("\n size 2 = %d", sizeof(dNum));
    printf("\n size 3 = %d", sizeof(long int));
    printf("\n size 4 = %d", sizeof(A));
    printf("\n size 5 = %d", sizeof(float));
    printf("\n size 6 = %d", sizeof(int));
    printf("\n size 7 = %d", sizeof(char));

    getch();
    return 0;
}
