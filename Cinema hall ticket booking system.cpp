#include <stdio.h>
#include<conio.h>
int main ()
{
    system("COLOR 0A");
    int i,movies,seat1,seat2,seat3,seat4,seat5,seat6,seat7,seat8,seat9,seat10,seat11,seat12,price,select,showtime,a,B[50],C[60],date,sishir,n,A,Z,j,k;
    char response;
    seat1=50;
    seat2=60;
    seat3=30;
    seat4=15;
    seat5=25;
    seat6=35;
    seat7=42;
    seat8=06;
    seat9=30;
    seat10=25;
    seat11=37;
    seat12=18;
    k=1;
    A=0;



movies:
    printf("______Wellcome to Cinema Hall______ \n");
    printf("Now you are booking a ticket cinema and please choose your movie watching Date \n");
    printf("1.9th, August 2017\n");
    printf("2.10th, August2017\n");
    printf("3.Exit\n");
    scanf("%d",&date);
    system("cls");
    if(date==1)
        {printf("\tMovie List\n");
         printf("1.  Harry Potter\n");
         printf("2.  Iron Man\n\n");
         printf("Press 3 for Back\n");
         printf("Press 4 for Exit\n");

        printf("\nEnter your choice > ");
        scanf("%d",&select);}
    system("cls");
    if(date==2)
     {
        printf("1.Avengers\n");
        printf("2.The Hulk\n\n");
        printf("Press 3 for Back\n");
        printf("Press 4 for Exit\n");
        printf("\nEnter your choice > ");
        scanf("%d",&select);
        }

if(date==3){printf("Thank you\n");}

if(date==1)
{


    if(select==3)
        {
            goto movies;
        }
    if (select ==1 )

 {
     printf("Show-Time:\t1.10.50AM\t\t2.1.00PM\t3.4.00PM");
     printf("\nSelect Show-Time:");
     scanf("%d",&showtime);

     if(showtime==1)

         {printf("\nAvalable seats:%d\n",seat1);}

     if(showtime==2)

         {printf("\nAvalable seats:%d\n",seat2);}

     if(showtime==3)
         {printf("\nAvalable seats:%d\n",seat3);}

     printf("\nThe price of the ticket per seat is 100.00 \n");


     {if(showtime==1)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat1)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat1)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat1=seat1-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}

     {if(showtime==2)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat2)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat2)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat2=seat2-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
     {if(showtime==3)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat3)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat3)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat3=seat3-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
}
     if (select ==2)
     {
        printf("Show-Time:\t1.10.50AM\t\t2.1.00PM\t3.4.00PM");
     printf("\nSelect Show-Time:");
     scanf("%d",&showtime);

     if(showtime==1)

         {printf("\nAvalable seats:%d\n",seat4);}

     if(showtime==2)

         {printf("\nAvalable seats:%d\n",seat5);}

     if(showtime==3)
         {printf("\nAvalable seats:%d\n",seat6);}
if (select ==2 )

 {
     printf("Show-Time:\t1.10.50AM\t\t2.1.00PM\t3.4.00PM");
     printf("\nSelect Show-Time:");
     scanf("%d",&showtime);

     if(showtime==1)

         {printf("\nAvalable seats:%d\n",seat1);}

     if(showtime==2)

         {printf("\nAvalable seats:%d\n",seat2);}

     if(showtime==3)
         {printf("\nAvalable seats:%d\n",seat3);}

     printf("\nThe price of the ticket per seat is 100.00 \n");

     }
          {if(showtime==1)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat4)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat4)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat4=seat4-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}

          {if(showtime==2)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat5)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat5)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat5=seat5-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
          {if(showtime==3)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat6)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat6)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat6=seat6-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
}
}

if(date==2)
{
   if(select==3)
        {
            goto movies;
        }
   if (select ==1 )

 {
     printf("Show-Time:\t1.10.50AM\t\t2.1.00PM\t3.4.00PM");
     printf("\nSelect Show-Time:");
     scanf("%d",&showtime);

     if(showtime==1)

         {printf("\nAvalable seats:%d\n",seat7);}

     if(showtime==2)

         {printf("\nAvalable seats:%d\n",seat8);}

     if(showtime==3)
         {printf("\nAvalable seats:%d\n",seat9);}

     printf("\nThe price of the ticket per seat is 100.00 \n");

          {if(showtime==1)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat7)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat7)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat7=seat7-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
          {if(showtime==2)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat8)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat8)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat8=seat8-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
          {if(showtime==3)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat9)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat9)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat9=seat9-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
}
    if (select ==2 )
    {
        printf("Show-Time:\t1.10.50AM\t\t2.1.00PM\t3.4.00PM");
     printf("\nSelect Show-Time:");
     scanf("%d",&showtime);

     if(showtime==1)

         {printf("\nAvalable seats:%d\n",seat10);}

     if(showtime==2)

         {printf("\nAvalable seats:%d\n",seat11);}

     if(showtime==3)
         {printf("\nAvalable seats:%d\n",seat12);}

     printf("\nThe price of the ticket per seat is 100.00 \n");

        {if(showtime==1)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat10)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat10)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat10=seat10-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
        {if(showtime==2)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat11)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat11)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat11=seat11-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
        {if(showtime==3)
     {printf("\nPlease enter the number of seat: ");
      scanf("%d",&a);

        {if(a>seat12)
        {
            printf("\nThe movie is full.\n" );
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");


            scanf("%d",&select);
            scanf("%c",&response);
            if (response =='Y' )
            goto movies;
            if (response =='N' )
            {
                printf("\nThank You");

            }

        }
     }
    system("cls");
       {if(a<=seat12)
        {
            price = 100 * a;
            printf("\nThe total price is %d/-Tk \n",price);
            printf("Showtime:12.50PM\n");
            for(i=k;i<=a+A;i++)

        {
        printf("your ticket number M%d\n",i);


        } k=k+a;
          A=A+a;



            seat12=seat12-a;
            printf("Want to choose another movie? \n");
            printf("Section Y or N \n");

            scanf("%d",&select);
            scanf("%c",&response);
            system("cls");
            if (response =='Y' )
            {goto movies;}
            if (response =='N')
            {
                printf("\nThank You");

            }





     }
     }
}
}
    }



return 0;


}
}




