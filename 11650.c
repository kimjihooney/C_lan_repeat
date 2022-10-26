// #include <stdio.h>
// //#include <string.h>
// #include <stdlib.h>

// typedef struct 
// {
//     int x;
//     int y;
// } coord;

// int compare(const void *a, const void *b);


// int main(void)
// {
//     int N;

//     scanf("%d", &N);

//     coord arr[N];

//     for(int i = 0; i < N; i++)
//     {
//         scanf("%d %d", &arr[i].x, &arr[i].y);
//     }

//     qsort(arr, N, sizeof(coord), compare);
    
//     for(int i = 0; i < N; i++)
//     {
//         printf("%d %d\n", arr[i].x, arr[i].y);
//     }

//     return 0;
// }

// int compare(const void *a, const void *b)
// {
//     coord a_coord = *(coord *)a;
//     coord b_coord = *(coord*)b;

//     if(a_coord.x > b_coord.x) return 1;
//     else if(a_coord.x == b_coord.x)
//     {
//         if(a_coord.y > b_coord.y) return 1;
//         else return -1;
//     }
//     else return -1;

// }


#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

typedef struct
{
    int x;
    int y;
}coord;


int main(void)
{
    int N;

    scanf("%d", &N);

    coord num[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d %d", &num.x[i], &num.y[i]);
    }

    qsort(num, N, sizeof(coord), compare);

    for(int i = 0; i < N; i++)
    {
        printf("%d %d\n", num.x[i], num.y[i]);
    }

    return 0;
}


int compare(const void *a, const void *b)
{
    coord A = *(coord *)a;
    coord B = *(coord *)b;

    if(A.x > B.x) return 1;
    else if(A.x == B.x){
        if(A.y > B.y) return 1;
        else return -1;
    }
    else return 0;
   
}