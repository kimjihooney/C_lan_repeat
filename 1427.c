// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char num[11] = {0, };
    
//     scanf("%s", num);
    
//     int len;
//     len = strlen(num);
//     char temp;
    
//     for(int i = 0; i < len; i++)
//     {
//         for(int j = 0; j < len ; j++)
//         {
//             if((int)num[j] < (int)num[j+1])
//             {
//                 temp = num[j];
//                 num[j] = num[j+1];
//                 num[j+1] = temp;
//             }
//         }
        
//     }
    
//     printf("%s", num);
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>


// int main(void)
// {

//     char N[10] = {0, };

//     scanf("%s", N);

//     int len;
//     len = strlen(N);
//     char temp;

//     for(int i = 0; i < len; i++)
//     {
//         for(int j = 0; j < len; j++)
//         {
//             if((int)N[j] < (int)N[j+1]){
//                 temp = N[j];
//                 N[j] = N[j+1];
//                 N[j+1] = temp;
//             }
//         }
//     }

//     printf("%s\n", N);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main(void)
{

    char n[11] = {0, };

    scanf("%s", n);

    int len;
    len = strlen(n);

    char temp;

    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if((int)n[j] < (int)n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }

    printf("%s\n", n);



    return 0;
}
