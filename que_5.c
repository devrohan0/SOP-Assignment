/* Q5. Write a menu driven program for the following options :
(i) To find whether entered no. is even or odd. 
(ii) To display sum of two entered numbers.*/

#include <stdio.h>

int main() {
    int menu;
    int num1, num2, sum;
    
    while (1) {
        printf("\n1. Check if a no. is even or odd\n");
        printf("2. Display the sum of two numbers\n");
        printf("Enter your menu ");
        scanf("%d", &menu);
        
        switch(menu) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num1);
                if (num1 % 2 == 0) {
                    printf("%d is even\n", num1);
                } else {
                    printf("%d is odd\n", num1);
                }
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                sum = num1 + num2;
                printf("The sum of %d and %d is %d\n", num1, num2, sum);
                break;
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}


/*OUTPUT :
2. Display the sum of two numbers
Enter your menu 1
Enter a number: 5
5 is odd

1. Check if a no. is even or odd
2. Display the sum of two numbers
Enter your menu 2
Enter two numbers: 5
10
The sum of 5 and 10 is 15 */