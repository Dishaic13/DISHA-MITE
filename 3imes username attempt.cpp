/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char username[20];
    char password[20];
     for(int i=0;i<3;i++){
    printf("enter the username\n");
    scanf("%s",username);
    printf("enter the password\n");
    scanf("%s",password);
    if(strcasecmp(username,"Admin")==0 && strcmp(password,"Admin")==0){
      printf("login successfull\n");
      exit(0);
}
else
 printf("unsuccessfull %d attempts left\n",(2-i));
   }
}
