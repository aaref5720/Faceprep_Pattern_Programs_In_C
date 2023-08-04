/**
 * @file Type4.c
 * @author Abdelrahman Aref
 * @brief  Pttern Shown @ readMe file
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int row = 0 ;
    int rowCounter = 0 , starCounter = 0 , spaceCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = 1 ; rowCounter <= row ; rowCounter++)
    {
        for(spaceCounter = ((row - rowCounter) + 3)  ; spaceCounter > 0 ; spaceCounter--)
        {
            printf("*");
        }

        for (starCounter = 1 ; starCounter <= rowCounter ; starCounter++)
        {
            printf("%d*",(starCounter));
        }

        for(spaceCounter = ((row - rowCounter) + 2)  ; spaceCounter > 0 ; spaceCounter--)
        {
            printf("*");
        }
        printf("\n");
    }
        
    return 0 ;
}