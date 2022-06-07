#include <stdio.h>

main()
{
    /**
    1. int (for integer(whole numbers) data type ie.1, 2, 10 etc this)
        call syntax {%d} then specify the varaible.
    2. float (for decimal data types e.g 1.2, 0.50, 9.6 etc ) to specify the decimal          places, use %1.1f. This specifies to one decimal place.) uses %f as the syntax.
    3. char used to specify characters in a program.
    */
    
    int age=31;
    int year=1991;
    float GPA=4.0;
    char name='J';
    
    printf("I am %d years old\n",age);
    printf("My year of birth is %d.\n",year);
    printf("My GPA is %1.1f.\n",GPA);
    printf("My First name starts with %C\n", name);
  
    return 0;
}