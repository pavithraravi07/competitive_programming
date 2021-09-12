/*
Malini wants to write a program using Stringize operator. 
She writes the below program to define a macro called SAY_HI which will accept her friend's name 
(which is Ragini) and print "Hi" followed by a space and the name.

Help Malini by defining the Macro SAY_HI.
*/



#include <stdio.h>

#define SAY_HI(name) printf("Hi " #name)

int main()
{
    SAY_HI(Ragini);
    return 0;
}