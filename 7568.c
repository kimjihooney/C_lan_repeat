#include <stdio.h>

typedef struct{
    int height;
    int weight;
    int rank;
}dc;

int main()
{
    dc person[50];
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &person[i].weight, &person[i].height);
        person[i].rank = 1;
    }
    
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((person[i].weight < person[j].weight) && (person[i].height < person[j].height))
            {
                person[i].rank += 1;
            }
        }
        
    }
    
    for(int i = 0; i< n; i++)
    {
        printf("%2d", person[i].rank);
    }
    
    return 0;
}
