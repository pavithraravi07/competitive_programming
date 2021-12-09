/*

The below program is to run in a hotel. The program has to print

- idli if 1 is entered as input value for menucode
- dosa if 2 is entered as input value for menucode
- samosa if 3 is entered as input value for menucode
- invalidoption if any other value is entered as input value for menucode.
But the below program does not produce the desired output. For example the program prints dosasamosainvalidoption as output when 2 is entered and this not the expected output as only dosa must be printed.
Hence identify the mistake and correct the program so that it executes successfully.

*/


#include <stdio.h>

int main()
{
    int menucode;
    scanf("%d",&menucode);

    switch(menucode)
    {
    case 1:
        printf("idli");
        break;
    case 2:
        printf("dosa");
        break;
    case 3:
        printf("samosa");
        break;
    default:
        printf("invalidoption");
        break;
    }//end of switch statement

    return 0;
}
 