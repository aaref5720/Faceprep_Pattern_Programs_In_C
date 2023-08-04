/**
 * @file Type3.c
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
    int oddCounter = 1 ;
    int row = 0 ;
    int rowCounter = 0 , starCounter;
    do
    {
        printf("Enter a valid maximum number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = 1 ; rowCounter <= row ; rowCounter++)
    {
        for (starCounter = 1 ; starCounter <= rowCounter ; starCounter++)
        {
            if(starCounter == rowCounter)
            {
                printf("%d",oddCounter);
                oddCounter++;
                break;
            }

            printf("%d*",oddCounter);
            oddCounter++;
        }

        printf("\n");
    }

    int oddCounter2 = ((oddCounter - row));
    int temp = oddCounter2;
    oddCounter = (row - 1);

    for (rowCounter -= 1 ; rowCounter >= 1 ; rowCounter--)
    {
        oddCounter2 = temp ;
        for (starCounter = 0 ; starCounter < rowCounter ; starCounter++)
        {
            if(starCounter == (rowCounter - 1))
            {
                printf("%d",oddCounter2);
                oddCounter2++;
                break;
            }

            printf("%d*",oddCounter2);
            oddCounter2++;
        }

        printf("\n");

        temp -= oddCounter;
        oddCounter--;
    }
    
    return 0 ;
}