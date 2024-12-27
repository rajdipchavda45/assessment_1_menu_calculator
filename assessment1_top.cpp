#include <stdio.h> 

main()
{
    int x, y, choice;
    float result;
    char ch;

    do
    {
        printf("\n\n\t ----------MENU----------");
        printf("\n\n\t Press 1. for Addition");
        printf("\n\n\t Press 2. for Subtraction");
        printf("\n\n\t Press 3. for Multiplication");
        printf("\n\n\t Press 4. for Division");

        printf("\n\n\t Select your choice of operation: ");
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <= 4)
        {
        	printf("\n\n\n\t enter a first number=");
			scanf("%d",&x);
			printf("\n\n\t enter a second number=");
			scanf("%d",&y);
		}

        switch (choice)
        {
            case 1:
                result = x + y;
                printf("\n\n\t The result of Addition is: %.2f", result);
                break;
                
            case 2:
                result = x - y;
                printf("\n\n\t The result of Subtraction is: %.2f", result);
                break;
                
            case 3:
                result = x * y;
                printf("\n\n\t The result of Multiplication is: %.2f", result);
                break;
                
            case 4:
                if (y != 0)
                {
                    result = (float)x / y; 
                    printf("\n\n\t The result of Division is: %.2f", result);
                }
                else
                {
                    printf("\n\n\t Error! Division by zero is not allowed.");
                }
                break;
                
            default:
                printf("\n\n\t Invalid choice! Please select a valid option.");
                break;
        }
        printf("\n\n\n\t Do you want to continue? (y/n) : ");
    	scanf(" %c",&ch);
    	
    } while(ch=='y' || ch=='y');
    
}
