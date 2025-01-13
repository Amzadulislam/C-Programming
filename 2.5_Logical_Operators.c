#include<stdio.h>
#include<stdbool.h>

int  main()
{
    /*
        2.5 - Logical Operators
        && - logical AND 
        || - logical OR 
        !  - logical NOT 
    */ 
    int a = 5, b = 8 ;
    bool result = ! ((a < b) || (a > b) && (a < b)) ;
    printf("%d", result);

return 0;
}
