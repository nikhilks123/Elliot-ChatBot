//chatbot

// #include<stdio.h>
// #include<windows.h>
// #include<conio.h>


#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>

void animation();
void donut();
void time123();

int main() {
    
    animation();


time123();
        //  printf("\n\nWHICH COMMUNICATION SERVICES DO YOU WANT TO OPEN?\n");
    // printf("\n\nHELLO there !\n");


   printf("I am ELLIOT\n");
   system("espeak -ven-us+f2 i_am_elliot");

   printf("The User friendly chatbot\n");
   system("espeak -ven-us+f2 the_user_friendly_chatbot");

   char loop[10];

do{

   printf("What do you want me to do?\n");
   system("espeak -ven-us+f2 what_do_you_want_me_to_do");


    char charcommand[100];
      char id[100];
    //   scanf("%s",id);
    char web[100],keyword[100],swich=0;
    printf("-> ");
    scanf("%s",keyword);
    scanf("%s",web);
//    strcpy(charcommand,"espeak -ven-us+f2 \"");
//    strcat(charcommand,keyword);
//    strcat(charcommand,"_");
   
//    strcat(charcommand,web);
//    strcat(charcommand,"\"");
//    printf("%s",charcommand);
//    system(charcommand);

    if(strcmp(keyword,"open")==0){
        swich=1;
    }
    if(strcmp(keyword,"meaning")==0){
        swich=2;
        // printf("2\n\n");
    }
    if(strcmp(keyword,"movie")==0){
        swich=3;
        // printf("3\n\n");
    }
    if(strcmp(keyword,"music")==0){
        swich=4;
        // printf("4\n\n");
    }
    if(strcmp(keyword,"hello")==0){
        swich=5;
        // printf("4\n\n");
    }
    if(strcmp(keyword,"hi")==0){
        swich=5;
        // printf("4\n\n");
    }
        // printf("%d\n\n",swich);


switch(swich){
    case 1: ;
   strcpy(charcommand,"espeak -ven-us+f2 \"");
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

    case 2: ;
   strcpy(charcommand,"espeak -ven-us+f2 \"");
   strcat(charcommand,"meaning_of_");
//    strcat(charcommand,"_");
   
   strcat(charcommand,web);
   strcat(charcommand,"_is\"");
   system(charcommand);

        char i2[100]="\"Start https://en.wikipedia.org/wiki/";
        strcat(i2,web);
        strcat(i2,"\"");
        system(i2);
        break;

    case 3: ;
   strcpy(charcommand,"espeak -ven-us+f2 \"");
   strcat(charcommand,"review_of_moviiee_");
//    strcat(charcommand,"_");
   
   strcat(charcommand,web);
   strcat(charcommand,"\"");
   system(charcommand);

        char i3[100]="\"Start https://www.rottentomatoes.com/m/";
        strcat(i3,web);
        strcat(i3,"\"");
        system(i3);
        break;

    case 4: ;
   strcpy(charcommand,"espeak -ven-us+f2 \"");
   strcat(charcommand,"playing_sooong_");
//    strcat(charcommand,"_");
   
   strcat(charcommand,web);
   strcat(charcommand,"\"");
   system(charcommand);

        char i4[100]="\"Start https://open.spotify.com/search/";
        strcat(i4,web);
        strcat(i4,"\"");
        system(i4);
        break;

    case 5: ;
   strcpy(charcommand,"espeak -ven-us+f2 \"");
   strcat(charcommand,"Hello_nikhil");
//    strcat(charcommand,"_");
   
//    strcat(charcommand,web);
   strcat(charcommand,"\"");
   system(charcommand);
   break;



    default:
    printf("Server down please try again later");
   system("espeak -ven-us+f2 Server_down_please_try_again_later");
   donut();
}
    
    // char i12[100]="\"Start www.";
    // strcat(i12,web);
    // strcat(i12,".com\"");
    // system(i12);


        // printf("\nOKAY\n");
        

        system ("espeak -ven-us+f2 DO_YOU_WANT_TO__CONTINUE"); 
 printf("\n\nDo u want to continue?(yes/no)\n");
   printf("-> ");
    scanf("%s",loop);
}
    
while(loop[0]=='y');

        system ("espeak -ven-us+f2 SHUTTING_DOWN"); 
        printf("SHUTTING DOWN"); 
        donut();
    return 0;
}



void time123(){
     int LEN=150;
    char buf[LEN];
int sum=0,i;
time_t t;
struct tm *timeStruct;
t= time(NULL);
timeStruct = localtime(&t);
strftime(buf, LEN, "%x-%I:%M%p", timeStruct);
printf("\n");
printf("DATE & TIME\n");
printf("-> %s\n",buf);
printf("\n");
for(i=0;i<strlen(buf);i=i+3){
sum+=(int)buf[i]+(int)buf[i+1];}
// printf("%d\n",sum);



int l=strlen(buf);
// printf("%c%c\n",buf[l-7],buf[l-6]);

if(sum%2==0){
    printf("hello there\n");
   system("espeak -ven-us+f2 Hello_there");
}else{
    printf("hey there\n");
   system("espeak -ven-us+f2 Hey_there");

}
if(buf[l-2]=='P'){
    if(buf[l-6]+buf[l-7]<100){
    printf("good afternoon\n");
   system("espeak -ven-us+f2 good_afternoon");
    }else if(buf[l-6]+buf[l-7]<=103){
    printf("good evening\n");
   system("espeak -ven-us+f2 good_evening");
    }else{
    printf("good night\n");
   system("espeak -ven-us+f2 good_night");

    }
}
else{
    if(buf[l-6]+buf[l-7]<100){
    printf("good night\n");
   system("espeak -ven-us+f2 good_night");
    }else{
    printf("good morning\n");
   system("espeak -ven-us+f2 good_morning");
    }
}


}

void donut(){
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
    for(;;) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; j < 6.28; j += 0.07) {
            for(i=0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y= 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H");
        for(k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);


    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||       |||||||        |||||||        |||||||        ||||||||       ||||||||||||||||||||||| |||||||||||||||       ||||||| |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||||||||||| ||||||||||||| |||||| ||||||| |||||| ||||||| |||||| |||||||| ||||| ||||||||||||||||||||||| |||  |||||||||| ||||| ||||||| |||  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||       ||||||| |      ||||||| |      ||||||| |||||| |||||||| |     ||||||||        |||||||         ||||||| ||||| |||||||         |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");   
    printf("|||||||||||| ||||||||||||| ||  |||||||||| ||  |||||||||| |||||| |||||||| ||  |||||||||||||||||||||||||||||  |||||||||| ||||| |||||||||||  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||       ||||||| ||||  |||||||| ||||  ||||||||        |||||||| ||||  |||||||||||||||||||||||||||  ||||||||||       |||||||||||  ||||||||||  ||||  ||||  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");       


    


    }
}


void animation(){
    system("color 70");
    system("cls");

    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||                                                                                                                                                                     |||\n");
    printf("|||   ||                          ||                                                                                                                                                                     |||\n");
    printf("|||   ||         ||               ||                                                                                                                                                                     |||\n");
    printf("|||   ||       ||                 ||                                                                                                                                                                     |||\n");
    printf("|||   ||     ||                   ||                                                                                                                                                                     |||\n");
    printf("|||   ||   |||         ||         ||                                                                                                                                                                     |||\n");
    printf("|||   ||  ||        ||            ||                                                                                                                                                                     |||\n");
    printf("|||   ||    ||     ||             ||                                                                                                                                                                     |||\n");
    printf("|||   ||      || ||         ||    ||                                                                                                                                                                     |||\n");
    printf("|||   ||        ||        ||      ||                                                                                                                                                                     |||\n");
    printf("|||   ||          ||     ||       ||                                                                                                                                                                     |||\n");
    printf("|||   ||            || ||         ||                                                                                                                                                                     |||\n");
    printf("|||   ||              ||          ||                                                                                                                                                                     |||\n");
    printf("|||   ||                          ||                                                                                                                                                                     |||\n");
    printf("|||   ||||||||||||||||||||||||||||||                                                                                                                                                                     |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                       _THE_USER_FRIENDLY_CHATBOT_                                                                                    |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");





    Beep(500,500);
    Sleep(1000);
system("cls");




    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||                                                                                                                                   |||\n");
    printf("|||   ||                          ||  ||                            ||                                                                                                                                   |||\n");
    printf("|||   ||         ||               ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||       ||                 ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||     ||                   ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||   |||         ||         ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||  ||        ||            ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||    ||     ||             ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||      || ||         ||    ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||        ||        ||      ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||          ||     ||       ||  ||   ||                       ||                                                                                                                                   |||\n");
    printf("|||   ||            || ||         ||  ||   || || || || || || || ||  ||                                                                                                                                   |||\n");
    printf("|||   ||              ||          ||  ||                            ||                                                                                                                                   |||\n");
    printf("|||   ||                          ||  ||                            ||                                                                                                                                   |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||                                                                                                                                   |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                       _THE_USER_FRIENDLY_CHATBOT_                                                                                    |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");








    Beep(500,500);
    Sleep(1000);
system("cls");





    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||                                                                                                 |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||                                                                                                 |||\n");
    printf("|||   ||         ||               ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||       ||                 ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||     ||                   ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||   |||         ||         ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||  ||        ||            ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||    ||     ||             ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||      || ||         ||    ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||        ||        ||      ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||          ||     ||       ||  ||   ||                       ||  ||   ||                       ||                                                                                                 |||\n");
    printf("|||   ||            || ||         ||  ||   || || || || || || || ||  ||  ||   || || || || || || || ||  ||                                                                                                 |||\n");
    printf("|||   ||              ||          ||  ||                            ||  ||                            ||                                                                                                 |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||                                                                                                 |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||                                                                                                 |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                       _THE_USER_FRIENDLY_CHATBOT_                                                                                    |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");




    Beep(500,500);
    Sleep(1000);
system("cls");







    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||                                                                       |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||  ||                    ||                                                                       |||\n");
    printf("|||   ||         ||               ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||       ||                 ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||     ||                   ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||   |||         ||         ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||  ||        ||            ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||    ||     ||             ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||      || ||         ||    ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||        ||        ||      ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||          ||     ||       ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||            || ||         ||  ||   || || || || || || || ||  ||  ||   || || || || || || || ||  ||  ||        ||          ||                                                                       |||\n");
    printf("|||   ||              ||          ||  ||                            ||  ||                            ||  ||                    ||                                                                       |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||  ||                    ||                                                                       |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||                                                                       |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                       _THE_USER_FRIENDLY_CHATBOT_                                                                                    |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");
   




    Beep(500,500);
    Sleep(1000);
system("cls");




    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||                                       |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||  ||                    ||  ||                          ||                                       |||\n");
    printf("|||   ||         ||               ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   |||||||||||||||||||    ||                                       |||\n");
    printf("|||   ||       ||                 ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||     ||                   ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||   |||         ||         ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||  ||        ||            ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||    ||     ||             ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||      || ||         ||    ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||        ||        ||      ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||          ||     ||       ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||                                       |||\n");
    printf("|||   ||            || ||         ||  ||   || || || || || || || ||  ||  ||   || || || || || || || ||  ||  ||        ||          ||  ||   |||||||||||||||||||    ||                                       |||\n");
    printf("|||   ||              ||          ||  ||                            ||  ||                            ||  ||                    ||  ||                          ||                                       |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||  ||                    ||  ||                          ||                                       |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||                                       |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                       _THE_USER_FRIENDLY_CHATBOT_                                                                                    |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");
    





    Beep(500,500);
    Sleep(1000);
system("cls");



    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||  |||||||||||||||||||||||||||||||||||| |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||  ||                    ||  ||                          ||  ||                                || |||\n");
    printf("|||   ||         ||               ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   |||||||||||||||||||    ||  ||  || || || || || || || || ||    || |||\n");
    printf("|||   ||       ||                 ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||     ||                   ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||   |||         ||         ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||  ||        ||            ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||    ||     ||             ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||      || ||         ||    ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||        ||        ||      ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||          ||     ||       ||  ||   ||                       ||  ||   ||                       ||  ||        ||          ||  ||   ||               ||    ||  ||              ||                || |||\n");
    printf("|||   ||            || ||         ||  ||   || || || || || || || ||  ||  ||   || || || || || || || ||  ||  ||        ||          ||  ||   |||||||||||||||||||    ||  ||              ||                || |||\n");
    printf("|||   ||              ||          ||  ||                            ||  ||                            ||  ||                    ||  ||                          ||  ||                                || |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                            ||  ||                    ||  ||                          ||  ||                                || |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||  |||||||||||||||||||||||||||||||||||| |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                       _THE_USER_FRIENDLY_CHATBOT_                                                                                    |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");
    




    Beep(500,500);
    Sleep(1000);
// system("cls");



}