////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>   // Standard input-output header
#include<conio.h>   // Console input-output header (optional for modern compilers)

//                                      SIMPLE PYRAMID PATTERNS
////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function prototypes for different patterns
void pattern_1();
void pattern_2();
void pattern_3();
void pattern_4();
void pattern_5();
void pattern_6();

////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int choice;  // Variable to store the user's choice of pattern

    // Display options to the user
    printf("Enter 1 to print pattern number 1.\n");
    printf("Enter 2 to print pattern number 2.\n");
    printf("Enter 3 to print pattern number 3.\n");
    printf("Enter 4 to print pattern number 4.\n");
    printf("Enter 5 to print pattern number 5.\n");
    printf("Enter 6 to print pattern number 6.\n\n");

    // Prompt the user for their choice
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Use switch-case to call the appropriate pattern function based on user input
    switch(choice)
    {
        case 1:
            pattern_1();  // Call function to print pattern 1
            break;
        case 2:
            pattern_2();  // Call function to print pattern 2
            break;
        case 3:
            pattern_3();  // Call function to print pattern 3
            break;
        case 4:
            pattern_4();  // Call function to print pattern 4
            break;
        case 5:
            pattern_5();  // Call function to print pattern 5
            break;
        case 6:
            pattern_6();  // Call function to print pattern 6
            break;
        default:
            printf("Wrong Input.............!!!");  // Handle invalid choices
            break;
    }
    return 0;  // Indicate successful termination of the program
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pattern_1()
{
    // Pattern:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    for(int i = 1; i <= 5; i++)  // Loop through rows
    {
        for(int j = 1; j <= i; j++)  // Loop to print the number 'i'
        {
            printf(" %d", i);  // Print current row number 'i'
        }
        printf("\n");  // Move to the next line after each row
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pattern_2()
{
    // Pattern:
    // 5 5 5 5 5
    // 4 4 4 4
    // 3 3 3
    // 2 2
    // 1

    for(int i = 5; i >= 1; i--)  // Loop through rows in reverse
    {
        for(int j = i; j > 0; j--)  // Loop to print the number 'i'
        {
            printf(" %d", i);  // Print current row number 'i'
        }
        printf("\n");  // Move to the next line after each row
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pattern_3()
{
    // Pattern:
    //         1
    //       2 2 2
    //     3 3 3 3 3
    //   4 4 4 4 4 4 4
    // 5 5 5 5 5 5 5 5 5

    int start = 5, stop = 5;  // Initialize start and stop for printing

    for(int i = 1; i <= 5; i++)  // Loop through rows
    {
        for(int j = 1; j <= 9; j++)  // Loop to manage the total width
        {
            if(j >= start && j <= stop)  // Check if within the range to print the number
            {
                printf(" %d ", i);  // Print current row number 'i'
            }
            else
            {
                printf("   ");  // Print spaces for alignment
            }
        }
        printf("\n");  // Move to the next line after each row
        start--;  // Adjust start for next row
        stop++;   // Adjust stop for next row
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pattern_4()
{
    // Pattern:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    // 4 4 4 4
    // 3 3 3
    // 2 2
    // 1

    for(int i = 1; i <= 5; i++)  // Loop for the first half
    {
        for(int j = 1; j <= i; j++)  // Loop to print the number 'i'
        {
            printf("%d ", i);  // Print current row number 'i'
        }
        printf("\n");  // Move to the next line after each row
    }

    for(int i = 4; i >= 1; i--)  // Loop for the second half
    {
        for(int j = 1; j <= i; j++)  // Loop to print the number 'i'
        {
            printf("%d ", i);  // Print current row number 'i'
        }
        printf("\n");  // Move to the next line after each row
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pattern_5()
{
    // Pattern:
    //       *
    //      * *
    //     *   *
    //    *     *
    //   *********

    int cursor1 = 5, cursor2 = 5;  // Initialize cursor positions for stars
    for(int i = 1; i <= 5; i++)  // Loop through rows
    {
        for(int j = 1; j <= 9; j++)  // Loop to manage the total width
        {
            if((j == cursor1 || j == cursor2) && i < 5)  // Check for star positions
            {
                printf("*");  // Print star
            }
            else if(i == 5)  // For the last row
            {
                printf("*");  // Print stars in the last row
            }
            else
            {
                printf(" ");  // Print spaces for alignment
            }
        }
        printf("\n");  // Move to the next line after each row
        cursor1++;  // Adjust cursor for left star position
        cursor2--;  // Adjust cursor for right star position
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pattern_6()
{
    // Pattern:
    //         1
    //       2 2 2
    //     3 3 3 3 3
    //   4 4 4 4 4 4 4
    // 5 5 5 5 5 5 5 5 5
    //   4 4 4 4 4 4 4
    //     3 3 3 3 3
    //       2 2 2
    //         1

    int start1 = 5, stop1 = 5, start2 = 2, stop2 = 8;  // Initialize start and stop positions for the first and second halves
    for(int i = 1; i <= 5; i++)  // Loop for the upper half
    {
        for(int j = 1; j <= 9; j++)  // Loop to manage the total width
        {
            if(j >= start1 && j <= stop1)  // Check if within the range to print the number
            {
                printf(" %d ", i);  // Print current row number 'i'
            }
            else
            {
                printf("   ");  // Print spaces for alignment
            }
        }
        printf("\n");  // Move to the next line after each row
        start1--;  // Adjust start for next row
        stop1++;   // Adjust stop for next row
    }
    for(int i = 4; i >= 1; i--)  // Loop for the lower half
    {
        for(int j = 1; j <= 9; j++)  // Loop to manage the total width
        {
            if(j >= start2 && j <= stop2)  // Check if within the range to print the number
            {
                printf(" %d ", i);  // Print current row number 'i'
            }
            else
            {
                printf("   ");  // Print spaces for alignment
            }
        }
        printf("\n");  // Move to the next line after each row
        start2++;  // Adjust start for next row
        stop2--;   // Adjust stop for next row
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
