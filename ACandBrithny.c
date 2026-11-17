#include <stdio.h>
#include <string.h>

int main()
{
    int choice = 0;
    char continueOPt = 'y';
    do{
        printf(" welcome to the program \n");
        printf(" 1. Pattern generator \n");
        printf(" 2. Pascals triangle \n");
        printf(" 3. Grade calculator and evaluator \n");
        printf(" 4. Palindrome checker \n");
        printf(" 5. Exit program \n");
        printf(" Enter your choice (1-5): ");
        scanf("%d", &choice);
    
        if(choice == 1)
        {
            int rows, i, j, operation;
            printf("Pattern genarator \n");
            printf("Which pattern do you want to generate? \n 1. Right Triangle \n 2. Square \n 3. Isosceles Triangle \n 4. Inverted Right Triangle \n 5. Christmas Tree \n");
            printf("\nEnter option number: ");    
            scanf("%d", &operation);
                    if (operation == 1) {
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
    
                        for (i = 1; i <= rows; i++) {
                            for (j = 1; j <= i; j++) {
                                printf("* ");
                            }
                            printf("\n");
                        }
                        
                    } else if (operation == 2) {
                        printf("Enter the number of rows: ");
                            scanf("%d", &rows);
                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= rows; j++) {
                            printf("* ");
                        }
                        printf("\n");
                    }
    
                    } else if (operation == 3) {
    
                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);
                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= rows - i; j++) {
                            printf(" ");
                        }
                        for (j = 1; j <= 2 * i - 1; j++) {
                            printf("*");
                        }
                            printf("\n");
                    }
    
                 } else if (operation == 4) {
    
                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);
                    for (i = rows; i >= 1; i--) {
                        for (j = 1; j <= rows - i; j++) {
                            printf(" ");
                        }
                        for (j = 1; j <= i; j++) {
                            printf("*");
                        }
                            printf("\n");
                    }
    
                } else if (operation == 5) {
                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);
                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= rows - i; j++) {
                            printf(" ");
                        }
                        for (j = 1; j <= 2 * i - 1; j++) {
                            printf("*");
                        }
                        printf("\n");
                    }
                    for (i = 1; i <= 3; i++) {
                        for (j = 1; j < rows; j++) {
                             printf(" ");
                        }
                            printf("*\n");
                    }   
    
                } else {
                    printf("Invalid pattern selected.\n");
                }
        }
        else if(choice == 2)
        { 
            int rows;
            printf(" Pascal's Triangle Generator \n");
            while (1)
            {
            printf ("Pascal's Triangle\n");
            printf("Enter the number of rows: ");
            if (scanf("%d", &rows)!=1){
                while (getchar()!='\n');
                continue;
            }else if (rows<1){
                continue;
            }
            break;
        }
            int value = 1, space, i, j;
            for (i = 1; i <= rows; i++) {
                for (space = 1; space <= rows - i; space++) {
                    printf("  ");
                }
                for (j = 1; j <= i; j++) {
                    if (j == 1 || j == i) {
                        value = 1;
                    } else {
                        value = value * (i - j + 1) / (j - 1);
                    }
                    printf("%4d", value);
                }
                printf("\n");
            }
            
        }
        else if(choice == 3)
        {
            int prelim, midterm, prefinal, final, average = 0;
            printf("Grade calculator and evaluator \n");
            while(1)
            {
                printf(" Enter prelim grade (1-5) \n");
                if(scanf("%d", &prelim) != 1)
                {
                    printf("Invalid input! enter a valid number.\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf(" Enter midterm grade (1-5) \n");
                if(scanf("%d", &midterm) != 1)
                {
                    printf("Invalid input! enter a valid number.\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf(" Enter prefinal grade (1-5) \n");
                if(scanf("%d", &prefinal) != 1)
                {
                    printf("Invalid input! enter a valid number.\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf(" Enter final grade (1-5) \n");
                if(scanf("%d", &final) != 1)
                {
                    printf("Invalid input! enter a valid number.\n");
                    while (getchar() != '\n');
                    continue;
                } 
                if(prelim < 1 || prelim > 5 || midterm < 1 || midterm > 5 || prefinal < 1 || prefinal > 5 || final < 1 || final > 5)
                {
                    printf("Invalid input! Please enter grades between 1 and 5.\n");
                    while (getchar() != '\n');
                    continue;
                }
                break;
            }
            average = (prelim + midterm + prefinal + final)/4;
            printf("Your average is: %d \n", average);
            if(average <= 3)
            {
                printf(" You PASSED! \n");
            }
            else
            {
                printf(" You FAILED! \n");
            }       
    
        }
        else if(choice == 4)
        {
            char str[100];
            int first, last, all = 0;
            printf("Palindrome checker \n");
            printf(" Enter a word: ");
            scanf("%s", str);
            first = 0;
            last = strlen(str) - 1;
            while(first <= last)
            {
                if(str[first] != str[last])
                {
                    all = 1;
                    break;
                }
                first++;
                last--;
            }
            if(all == 0)
            {
                printf("The word is a palindrome.\n");
            }
            else
            {
                printf("The word is not a palindrome.\n");
            }
        }
        else if(choice == 5)
        {
            printf("Exiting program..!");
            break;
        }
        else
        {
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

        printf("\nDo you want to try another operation?(y/n):");
        scanf(" %c",&continueOPt);
    }while(continueOPt != 'n' || continueOPt != 'N');
    
    return 0;

}
