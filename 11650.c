#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
} coord;

int compare(const void *a, const void *b);


int main(void)
{
    int N;

    scanf("%d", &N);

    coord arr[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(coord), compare);
    
    for(int i = 0; i < N; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    coord a_coord = *(coord *)a;
    coord b_coord = *(coord*)b;

    if(a_coord.x > b_coord.x) return 1;
    else if(a_coord.x == b_coord.x)
    {
        if(a_coord.y > b_coord.y) return 1;
        else return -1;
    }
    else return -1;

}