// #include <stdio.h>
// #include <string.h>

// int check_O_sum();

// int main(void)
// {
//     int tc;

//     scanf("%d", &tc);

//     int print[tc];

//     for(int i = 0; i < tc; i++)
//     {
//         print[i] = check_O_sum();
//     }
    
//     for(int i = 0; i < tc; i++)
//     {
//         printf("%d\n", print[i]);
//     }
    
//     return 0;


// }

// int check_O_sum()
// {
//     int len;
//     char ox[80];
//     int sum = 0;
//     int add = 1;

//     scanf("%s", ox);

//     len = strlen(ox);

//     for(int i = 0; i < len; i++)
//     {
//         if(ox[i] == 'O')
//         {
//             sum += add;
//             add++;
//         }
//         if(ox[i] == 'X')
//         {
//             add = 1;
//         }
//     }

//     return sum;
// }

// #include <stdio.h>
// #include <string.h>

// int cal_point();

// int main(void)
// {
//     int tc;
//     int point[80];

//     scanf("%d", &tc);

//     for(int i = 0; i < tc; i++)
//     {
//         point[i] = cal_point();
//     }

//     for(int i = 0; i < tc; i++)
//     {
//         printf("%d\n", point[i]);
//     }
//     return 0;
// }

// int cal_point()
// {
//     char arr[80];

    
//     scanf("%s", arr);
    

//     int len;
//     len = strlen(arr);

//     int sum = 0;
//     int add = 1;

//     for(int i = 0; i < len; i++)
//     {
//         if(arr[i] == 'O')
//         {
//             sum += add;
//             add++;
//         }
//         if(arr[i] == 'X')
//         {
//             add = 1;
//         }
//     }

//     return sum;

// }

#include <stdio.h>
#include <string.h>

int get_point();

int main(void)
{
    int tc;
    

    scanf("%d", &tc);

    int point[tc];

    for(int i = 0; i < tc; i++)
    {
        point[i] = get_point();
    }

    for(int i = 0; i < tc; i++)
    {
        printf("%d\n", point[i]);
    }
    return 0;
}

int get_point()
{
    char arr[80];
    int len;
    int sum = 0;
    int add = 1;

    scanf("%s", arr);

    len = strlen(arr);

    for(int i = 0; i < len; i++)
    {
        if(arr[i] == 'O')
        {
            sum += add;
            add++;
        }
        if(arr[i] == 'X')
        {
            add = 1;
        }
    }
    return sum;
}