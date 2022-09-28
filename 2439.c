// #include <stdio.h>

// int main(void)
// {
//     int num;

//     scanf("%d", &num);
//     //반복할 숫자를 입력 받는다.

//     //num줄만큼 포문을 돈다.
//     for(int i = 0; i < num; i++)
//     {
//         //공백 출력.
//         //j가 num-i번째줄 -1 만큼 공백을 출력한다.
//         for(int j = 0; j < num-i-1; j++)
//         {
//             printf(" ");
//         }
//         //k가 i만틈 별을 출력한다.
//         for(int k = 0; k <= i; k++)
//         {
//             printf("*");
//         }
        
//         printf("\n"); //다음줄로 엔터
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int in;

//     scanf("%d", &in);

//     for(int i = 1; i <= in; i++)
//     {
//         for(int j = 1; j <= in-i; j++)
//         {
//             printf(" ");
//         }
//         for(int k = 0; k < i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


//피라미드처럼 만들어보기 (정삼각형)
// #include <stdio.h>

// int main(void)
// {
//     int in;

//     scanf("%d", &in);

//     for(int i = 1; i <= in; i++)
//     {
//         for(int j = 1; j <= in - i; j++)
//         {
//             printf(" ");
//         }
//         for(int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }

//         for(int q = 1; q < i; q++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//
#include <stdio.h>

int main(void)
{
    int num;

    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num - i -1;j++)
        {
            printf(" ");
        }
        for(int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }


    return 0;
}