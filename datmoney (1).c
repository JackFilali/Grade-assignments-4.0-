#include <stdio.h>

int main()
{
    float avg = 0;
    float sum =0;
    float earned=0;
    float possible;
    int x=0;
    int i=0;

    /* Array- declaration – length 4*/
    printf("number of assignmens: ");
    scanf("%i", &i);
    float num[i];

    

    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */
    for (x=0; x<i;x++)
    {
        printf("Enter earned %d \n", (x+1));
        scanf("%f", &earned);
        printf("Enter possible %d \n", (x+1));
        scanf("%f", &possible);
       num[x] = earned/possible*100;
printf("your grade is: %f\n", num[x]);
    }
    for (x=0; x<i;x++)
    {
        sum = sum+num[x];
    }

    avg = sum/i;
    printf("Average of entered number is: %f", avg);
    return 0;
}
