#include<cs50.h>
#include <stdio.h>

int main()
{
    float avg = 0;
    float sum =0;
    
    int i=0;

    /* Array- declaration – length 4*/
    printf("number of assignmens: ");
    scanf("%i", &i);
    float num[i];

    

    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */
    for (int x=0; x<i;x++)
    {
        float earned[x];
        float possible[x];
        printf("Enter earned %d \n", (x+1));
        scanf("%f", &earned[x]);
        printf("Enter possible %d \n", (x+1));
        scanf("%f", &possible[x]);
       
printf("your grade is: %f\n", num[x]);
        
    }
    
    for (int x=0; x<i;x++)
    {
   
        float earned[x];
        float possible[x];
      
        float sumposs= sum+possible[x];
        float sumearn= sum+earned[x];
    }

    avg = sum/i;
    printf("Average of entered number is: %f", avg);
    return 0;
