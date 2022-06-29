# ELLIOT
## TABLE OF CONTENTS
1. [INTRODUCTION:](https://github.com/nikhilks123/Elliot-ChatBot/blob/main/README.md#introduction)
2. [PREREQUISITE:](https://github.com/nikhilks123/Elliot-ChatBot/blob/main/README.md#prerequisite)
3. [WORKING](https://github.com/nikhilks123/Elliot-ChatBot/blob/main/README.md#working)
4. [SCOPE OF IMPROVEMENT](https://github.com/nikhilks123/Elliot-ChatBot/blob/main/README.md#scope-of-improvement)
5. [REFERENCES](https://github.com/nikhilks123/Elliot-ChatBot/blob/main/README.md#references)
## INTRODUCTION:
ELLIOT is a user-freindly chat-bot which helps the user in solving 
all the queries and clears all the needs.
It is designed in such a way that it follows the commands of user acoording to how the user has inputed the problem and directs them to the solution exactly.
All the features added to this voice-enabled chat-bot gives the user a better user experience.



## PREREQUISITE:
To run the program the user should install the Espeak: speech synthesizer


### HEADERS USED:
headers used
```c 
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
```


## WORKING:
*example of switch case from the code:*


### SAMPLE:
```strcpy(charcommand,"espeak -ven-us+f2 \"");
   strcat(charcommand,"opening_");
//    strcat(charcommand,"_");
   
   strcat(charcommand,web);
   strcat(charcommand,"\"");
   system(charcommand);


        char i1[100]="\"Start www.";
        strcat(i1,web);
        strcat(i1,".com\"");
        system(i1);
        break;
```
This code opens the desired website


## SCOPE OF IMPROVEMENT:
With help of deep learning and ML techniques , this chat-bot can provide a better user experience.


## REFERENCES:
1. [Espeak](https://youtu.be/lC-i3Q-2KcY)
2. [Beep](https://www.geeksforgeeks.org/beep-function-in-c-with-examples/)
3. [Colourful Text/Background](https://youtu.be/aMuulzbRfk4)
4. [Time Function](https://www.geeksforgeeks.org/time-function-in-c/amp/)
5. [donut](https://www.a1k0n.net/2011/07/20/donut-math.html)
