#include <stdio.h> 
int main(void)
{
    int i;
    int grade[5];

    for (i = 0; i < 5; i++)
    {
        printf("input value (%i) : ", i);
        scanf("%d", &grade[i]);
    }

   
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %d\n", i, *(grade + i));
        sum += *(grade + i);
    }
    
    int average = sum / 5;
    printf("average : %i\n", average);
    
    return 0;
}