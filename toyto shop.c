#include<stdio.h>
#include<conio.h>


char date[20];
char uname[20];
char bname[20];
char mno[20];
long int cost;



//function for writing entry of car into file

void write ()
{
    FILE*fp;
    char date[20];
    char uname[20];
    char bname[20];
    char mno[15];
    long int cos;
    printf("\nEnter date         ::");
    scanf("%s",&date);
    printf("\nEnter Name of Customer    ::");
    scanf("%s",&uname);
    printf("\nEnter Mobile number   ::");
    scanf("%s",&mno);
    printf("\nEnter name of toy car    ::");
    scanf("%s",&bname);
    printf("\nEnter cost of toy car     ::");
    scanf("%s",&cos);
    fp=fopen("Record.txt","a");
    fprintf(fp,"\n%s%s%s%s%d",date,uname,bname,mno);

}

