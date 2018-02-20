#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Flight
{
    char flightname[7];
    char destination[12];
    char date[12];
    char time[8];
    char gate[4];
    int seats[20];
    int firstclass;
    int economy;
    char route[25];
};

struct Customer
{
    char name[50];
    char Passno[30];
    int age;
    char contact[15];
    int s;
};

struct Flight flight[5];
struct Customer C;

FILE *fp; int f=1;

void initialize()
{
    int i,j;
    fp=fopen("Flights.txt","r");
    for(i=0;i<5;i++)
    {
        fscanf(fp,"%s",flight[i].flightname);
        fscanf(fp,"%s",flight[i].destination);
        fscanf(fp,"%s",flight[i].date);
        fscanf(fp,"%s",flight[i].time);
        fscanf(fp,"%s",flight[i].gate);
        fscanf(fp,"%d",&flight[i].firstclass);
        fscanf(fp,"%d",&flight[i].economy);
        fscanf(fp,"%s",flight[i].route);
        for(j=0;j<20;j++)
            flight[i].seats[j]=1;
    }
    fclose(fp);

    fp=fopen("Records.txt","w");
    fclose(fp);
}

int seatcount(struct Flight x)
{
    int i,sum=0;
    for(i=0;i<20;i++)
        sum+=x.seats[i];
    return sum;
}

void opening();
void showflights();
void flight_detail(struct Flight *x);
void book(struct Flight *x);
void ticket(struct Flight x,int t);
void records(struct Flight x,int t);
void bill(void);
int main()
{
    system("MODE 90,33");
    system("color 1E");
    initialize();
O:  opening();
    showflights();
    printf("0. Admin Login\n");

    printf("\n\n\tSelect your Flight: ");
    int n; scanf("%d",&n);
    if(n==0)
    {
        char pass[8];
P:      printf("\nEnter the password: "); scanf("%s",pass);
        if(pass[0]=='1' && pass[1]=='2' && pass[2]=='3' && pass[3]=='4')
        {
A:          system("cls");
            printf("\t\t\tADMIN PANEL\n\n\n");
            printf("\t\t1. Check Today's Records\n");
            printf("\t\t2. Clear All Records\n");
            printf("\t\t0. Logout");
            printf("\t\tEnter your choice: ");
            int ch;
            scanf("%d",&ch);
            if(ch==0)
            {
                goto O;
            }
            else if(ch==1)
            {
                system("Records.txt");
                system("pause");
                goto A;
            }
            else if(ch==2)
            {
                fp=fopen("Records.txt","w");
                fclose(fp);
                printf("The Record has been emptied successfully...\n\n");
                system("pause");
                goto A;
            }
        }
        else
        {
            printf("\tWrong Password...\n\tPress Any Key To Go Home\n\tPress 1 To Try Again\n\t");
            if(getch()=='1')
                goto P;
            else
                goto O;

        }

    }
    else if(n>0 && n<6)
    {
        book(&flight[n-1]);
        goto O;
    }
    else
    {
        printf("\nWrong Choice... Try again...\n\n");
        getch();
        goto O;
    }

    return 0;
}

void opening()
{
    system("cls");
    printf("\t\t\t\t*************************\n");
    printf("\t\t\t\tBIMAN BANGLADESH AIRLINES\n");
    printf("\t\t\t\t*************************\n");
    printf("Schedules of all the flights of today:\n\n");
}

void showflights()
{
    int i;
    printf("  Flight Names\t Date\t\tTime\tAvailable seats\t\tGate\tDestination\n");
    for(i=0;i<5;i++)
    {
        printf("%d.  %s\t%s\t%s\t\t%d\t\t%s\t%s\n",
               i+1,flight[i].flightname,flight[i].date,
               flight[i].time,seatcount(flight[i]),
               flight[i].gate,flight[i].destination);
    }
}

void flight_detail(struct Flight *x)
{
    printf("Flight Name:\t\t%s\n",x->flightname);
    printf("Flight Destination:\t%s\n",x->destination);
    printf("Flight Schedule:\t%s   %s\n",x->date,x->time);
    printf("Available seat:\t\t%d\n",seatcount(*x));
    printf("Flight Route:\t\t%s\n",x->route);
    printf("\nChoose class:\n");
    printf("\t1. First Class = %d\n",x->firstclass);
    printf("\t2. Economy  =  %d\n",x->economy);
    printf("\t0. Back to Home\n");
}

void book(struct Flight *x)
{
    //system("cls");
    flight_detail(x);
    int t,i;
C:  scanf("%d",&t);
    if(t<0 || t>2)
    {
        printf("Wrong choice... Try again...");
        goto C;
    }
    if(t==0)
    {
        return;
    }
    printf("Select your seat:\n");
    for(i=0;i<20;i++)
    {
        if((i+1)%4==0)
        {
            if(x->seats[i]==0)
                printf("F\n");
            else
                printf("%d\n",i+1);
        }
        else if((i+1)%2==0)
        {
            if(x->seats[i]==0)
                printf("F\t\t");
            else
                printf("%d\t\t",i+1);
        }
        else
        {
            if(x->seats[i]==0)
                printf("F\t");
            else
                printf("%d\t",i+1);
        }
    }
S:  scanf("%d",&C.s);
    if(C.s<1 || C.s>20)
    {
        printf("There is no such seat.. Try again...\n");
        goto S;
    }
    else if(x->seats[C.s-1]==0)
    {
        printf("The seat has already been booked.. Try another one...\n");
        goto S;
    }
    else
    {
        x->seats[C.s-1]=0;
    }
    system("cls");
    printf("FULL NAME: ");
    fflush(stdin);
    gets(C.name);
    printf("AGE: ");
    scanf("%d",&C.age);
    printf("PASSPORT NO. : ");
    scanf("%s",&C.Passno);
    printf("CONTACT NO. : ");
    scanf("%s",&C.contact);
    system("cls");
    printf("Customer Name: %s\n",C.name);
    printf("Age: %d\n",C.age);
    printf("Passport No.: %s\n",C.Passno);
    printf("Contact No.: %s\n",C.contact);
    printf("Flight Name: %s\n",x->flightname);
    printf("Flight Destination: %s\n",x->destination);
    printf("Flight Schedule: %s   %s\n",x->date,x->time);
    printf("Seat no. #%d\n",C.s);
    printf("Ticket Price: ");
    if(t==1)
        printf("%d BDT\n Class: First Class\n\n",x->firstclass);
    else
        printf("%d BDT\n Class: Economy\n\n",x->economy);
    printf("Press 1 to confirm or anything else to discard...\n\n\n");
    if(getch()=='1')
    {
        system("cls");
        bill();
        records(*x,t);
        printf("\tSeat booking Successful...\n\n");
        ticket(*x,t);

        printf("\tPress 1 to Print your ticket...\n\n");
        if(getch()=='1')
        {
            system("Ticket.txt");
            printf("\tPlease keep your ticket during the flight...\n");
        }
        system("pause");
    }
    else
    {
        printf("\n\nBooking Canceled...\n");
        x->seats[C.s-1]=1;
        system("pause");
    }
    return;
}

void ticket(struct Flight x,int t)
{
    printf("*****************************************************************************\n");
    printf("                       BIMAN BANGLADESH AIRLINES                             \n\n");
    printf("   Name: %s          Contact: %s           Passport: %s\n\n",C.name,C.contact,C.Passno);
    printf("   Flight: %s        Date: %s          Time: %s\n\n",x.destination,x.date,x.time);
    printf(" Flight Name: %s     Route: %s         Gate no.  %s\n\n",x.flightname,x.route,x.gate);
    if(t==2)
        printf("           ECONOMY CLASS          \n\n");
    else
        printf("            FIRST CLASS           \n\n");
    printf("   Seat no.  %d          Ticket Price: ",C.s);
    if(t==1)
        printf("%d       \n\n",x.firstclass);
    else
        printf("%d       \n\n",x.economy);
    printf("*****************************************************************************\n\n\n");

    fp=fopen("Ticket.txt","w");
    fprintf(fp,"*****************************************************************************\n");
    fprintf(fp,"                       BIMAN BANGLADESH AIRLINES                             \n\n");
    fprintf(fp,"   Name: %s          Contact: %s           Passport: %s\n\n",C.name,C.contact,C.Passno);
    fprintf(fp,"   Flight: %s        Date: %s          Time: %s\n\n",x.destination,x.date,x.time);
    fprintf(fp," Flight Name: %s     Route: %s         Gate no.  %s\n\n",x.flightname,x.route,x.gate);
    if(t==2)
        fprintf(fp,"           ECONOMY CLASS          \n\n");
    else
        fprintf(fp,"            FIRST CLASS           \n\n");
    fprintf(fp,"   Seat no.  %d          Ticket Price: ",C.s);
    if(t==1)
        fprintf(fp,"%d       \n\n",x.firstclass);
    else
        fprintf(fp,"%d       \n\n",x.economy);
    fprintf(fp,"*****************************************************************************\n");

    fclose(fp);

}

void records(struct Flight x,int t)
{
        fp=fopen("Records.txt","a");
        fprintf(fp,"Customer no: %d\n",f);
        fprintf(fp,"Name: %s\n",C.name);
        fprintf(fp,"Passport no: %s\n",C.Passno);
        fprintf(fp,"Contact no: %s\n",C.contact);
        fprintf(fp,"Flight Name: %s\n",x.flightname);
        fprintf(fp,"Flight Destination: %s\n",x.destination);
        fprintf(fp,"Flight Schedule: %s   %s\n",x.date,x.time);
        fprintf(fp,"Flight Class: ");
        if(t==1)
            fprintf(fp,"First Class\n");
        else
            fprintf(fp,"Economy\n");
        fprintf(fp,"Seat no. #%d\n",C.s);
        fprintf(fp,"\n\n");
        f++;
        fclose(fp);

        fp=fopen("Ticket.txt","w");

        fclose(fp);
}

void bill()
{
    system("cls");
    printf("\n\n\**Use Your Mobile or Internet banking account  to complete the payment process!" );
    int count,trid;
    do
    {
        count=0;
        printf("\n\n\tEnter Your confirmation code :");
        scanf("%d",&trid);
        while(trid != 0)
        {
            // trid = trid/10
            trid /= 10;
            ++count;
        }
        switch(count){
            case 5:
                printf("\n-------------------------------------------");
                printf("\n Thank You! Your Purchase was successful!!");
                printf("\n-------------------------------------------");
                _getch();
            break;
            default:
                printf("\nInvalid Transaction!!\tTry again..... ");
            break;
        }
    }while(count!=5);
    system("cls");
}
