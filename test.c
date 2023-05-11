/*
#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[5]={1};
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr1[2]);
    }
    return 0;
}
*/
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int arr1[5] = {1};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr1[i]);
//     }
//     return 0;
// }
#include <stdio.h>
// int main()
// {
//     int sum = 1, i, j;
//     for (i = 0; i < 4; i++)
//     {
//         sum += 1;
//         for (j = 0; j < 3; j++)
//         {
//             sum += j;
//             if (((i + j) % 2) == 1)
//                 break;
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }
int main()
{
    int x = 1, z[2] = {89, 49};
    int *p = NULL;
    p = &x;
    p = 10;
    p = &z[1];
    *(&z[0]) += 3;
    printf("%d, %c, % d\n", x, z[0], z[1]);
    return 0;
}
