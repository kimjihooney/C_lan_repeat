#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[11] = {0, };
    
    scanf("%s", num);
    
    int len;
    len = strlen(num);
    char temp;
    
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len ; j++)
        {
            if((int)num[j] < (int)num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
        
    }
    
    printf("%s", num);
    
    return 0;
}
