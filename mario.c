// Prints the pyramid with loops

#include <cs50.h>
#include <stdio.h>

int main(void)
{
// Declare variable height
    int height;
    do
    {
        height = get_int("Height: ");
    }
//Repeat the loop while height is less than one and more than 8
    while (height < 1 || height > 8);
//This is the loop that will define/printf the first part of the row/column
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else  
            {
                printf("#");
            }
        }
//This printf follows the number of # printed above,which is always two spaces
        printf("  "); 
// This loop will define/printf the scond part of the pyramid row/column after the two spaces
        for (int j = 0; j < height; j++)
        {
            if (height - 1 <= i + j)
            {
                printf("#"); 
            }  
        }   
        printf("\n");
    }
}

