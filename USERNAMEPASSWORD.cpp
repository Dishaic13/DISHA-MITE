/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    char username[20];
    char password[20];
    printf("enter the username");
    scanf("%s",username);
    printf("enter the password");
    scanf("%s",password);
    if(strcasecmp(username,"Admin")==0 && strcmp(password,"Admin")==0)
      printf("login successfull");

else

    printf("unsuccessfull");
}
