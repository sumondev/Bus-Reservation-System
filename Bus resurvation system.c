#include<stdio.h>
#include<conio.h>
#include<string.h>

void display();
void ticket();
void seat_details();
int seat_booking();
int x,i,c,j,p,m[40],cnt=0,l,n,booked_seat=NULL,t,ext,k,start,end;
char ch[10],seat_num[4],num[12];







struct bus
{
    char bus_name[10];
    float bus_time;
    char departure[10];
    char destination[15];
    float price;

}data[2];


struct seat
{
  char  seat[3];

}st[40],a[40];


int main()
{
    int chc;
    printf("\n           ------------------------WELCOME TO \"FRIEND EXPRESS\"------------------------- \n\n");
    printf("--------------- ---------------- -------------- ----------------  -----------------  -----------------\n");

    printf("\n\t\tAdmin :1    User:2");
    printf("\nEnter your choice:");
    scanf("%d",&chc);

    if(chc==1)

    {
        char ky[5];
        FILE *pas;
        int u,v,x;


        char  name[10];
        char pass[5];
        printf("\nUser Name:");
        scanf("%s",name);
        v=strcmp(name,"motaleb");

        printf("\nPassward:");
        scanf("%s",pass);

        pas=fopen("password.txt","r");
        fscanf(pas,"%s",ky);
        fclose(pas);


        u=strcmp(pass,ky);

        if(u==0&&v==0)
        {
          printf("\nAdmin Login successfull\n");

          printf("\n\nTo change password press 1:");
          //printf("\n\nTo refresh all data press 2:");

          printf("\n\nInput pls:");
          scanf("%d",&x);
          if(x==1)
          {
              pas=fopen("password.txt","w");
              printf("\n\nEnter your new password:");
              scanf("%s",ky);
              fprintf(pas,"%s",ky);
              fclose(pas);
              printf("\n\n>>>>>>>>>>>>>>Password changed sucessfully<<<<<<<<<<<\n\n");
              printf("\n\n>>>>>>>>>>>>>>Thank You<<<<<<<<<<<\n\n");
          }

          /*if(x==2)
          {
              remove(ticket.txt);
          }*/

        }

        else
        printf("\nyou are not an Admin\n");


     }









    if(chc==2)
    {
        int len;



        printf("\nEnter your mobile number to login:");
        scanf("%s",num);

        printf("\nYour Number is: %s\n\n",num);

        if(num[0]=='0'&&num[1]=='1'&&num[2]=='7'||num[2]=='8'||num[2]=='9'||num[2]=='6'||num[2]=='5'||num[2]=='1')
        {

           len=strlen(num);

           if(len==11)
           {
             printf("Login successfull\n\n\n");

             //Add full Code HERE


           printf("Bus_name\t\t");
           printf("Departure time\t\t");
           printf("Departure\t\t");
           printf("Destination\t\t");
           printf("price\n");
            printf("------------***--------------------------***------------------***--------------------***--------------\n");

           strcpy(data[0].bus_name,"fe-1");
          data[0].bus_time=9.0;
            strcpy(data[0].departure,"Dhaka");
           strcpy(data[0].destination,"Kustia");
          data[0].price=500.0;


            strcpy(data[1].bus_name,"fe-2");
           data[1].bus_time=11.0;
           strcpy(data[1].departure,"Dhaka");
            strcpy(data[1].destination,"Sylhet");
           data[1].price=800.0;


           strcpy(data[2].bus_name,"fe-3");
           data[2].bus_time=12.0;
           strcpy(data[2].departure,"Dhaka");
           strcpy(data[2].destination,"Ctg.");
           data[2].price=1000.0;

           for(i=0;i<=2;i++)
            {
              printf("%s\t\t\t%.2f\t\t\t%s\t\t\t%s\t\t\t%.2f\n\n",data[i].bus_name,data[i].bus_time,data[i].departure,data[i].destination,data[i].price);

            }

            seat_details();


        }
        else
        printf("\nInvalid phone number\n");

        }

        else
           printf("\nInvalid phone number\n");

    }

    return 0;
}


void seat_details()

{


    strcpy(st[0].seat,"A1");
    strcpy(st[1].seat,"A2");
    strcpy(st[2].seat,"A3");
    strcpy(st[3].seat,"A4");
    strcpy(st[4].seat,"B1");
    strcpy(st[5].seat,"B2");
    strcpy(st[6].seat,"B3");
    strcpy(st[7].seat,"B4");
    strcpy(st[8].seat,"C1");
    strcpy(st[9].seat,"C2");
    strcpy(st[10].seat,"C3");
    strcpy(st[11].seat,"C4");
    strcpy(st[12].seat,"D1");
    strcpy(st[13].seat,"D2");
    strcpy(st[14].seat,"D3");
    strcpy(st[15].seat,"D4");
    strcpy(st[16].seat,"E1");
    strcpy(st[17].seat,"E2");
    strcpy(st[18].seat,"E3");
    strcpy(st[19].seat,"E4");
    strcpy(st[20].seat,"F1");
    strcpy(st[21].seat,"F2");
    strcpy(st[22].seat,"F3");
    strcpy(st[23].seat,"F4");
    strcpy(st[24].seat,"G1");
    strcpy(st[25].seat,"G2");
    strcpy(st[26].seat,"G3");
    strcpy(st[27].seat,"G4");
    strcpy(st[28].seat,"H1");
    strcpy(st[29].seat,"H2");
    strcpy(st[30].seat,"H3");
    strcpy(st[31].seat,"H4");
    strcpy(st[32].seat,"I1");
    strcpy(st[33].seat,"I2");
    strcpy(st[34].seat,"I3");
    strcpy(st[35].seat,"I4");
    strcpy(st[36].seat,"J1");
    strcpy(st[37].seat,"J2");
    strcpy(st[38].seat,"J3");
    strcpy(st[39].seat,"J4");





    printf("\n\nTo See Available Seat Of Particular Bus Enter Bus Name:");
    scanf("%s",ch);

    printf("\n\n------------------------------------------------------------------\n\n");

    FILE *fp,*fq,*fr,*fs,*ft,*fa,*fb,*fc,*fd,*fe,*ff,*fg,*fh,*fi,*fj;

    fp=fopen("check.txt","r");
    fclose(fp);

    fa=fopen("a.txt","r");
    fclose(fa);

    ff=fopen("f.txt","r");
    fclose(ff);





    if(strcmp(data[0].bus_name,ch)==0)



    {

       if(fp==NULL)
        {

         printf("-------+++-----AVAILABLE SEAT------+++-----\n\n");

        for(i=0;i<=39;i++)
           {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }





           }

        }

        else
        {
            p=0;
             printf("---***----AVAILABLE SEAT----***---\n\n");
             fp=fopen("check.txt","r");
             for(i=0;i<=39;i++)
             {

                     fscanf(fp,"%s ",st[i].seat);

             }

             for(i=0;i<=39;i++)
               {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }


            fclose(fp);
        }








     do
      {
          p=0;
          l=0;


        printf("\n\nTo Book Seat Press-->>>:1\nTo Exit Press--->>>>>:2\n\n");
        printf("Pls Press------->>>>>:");

        scanf("%d",&ext);

        if(ext==1)
        {


           printf("\n\n-----------BOOK YOUR SEAT NOW--------------\n\n");

           printf("Enter Seat Num:");
           scanf("%s",seat_num);


                fq=fopen("count.txt","r");
                fclose(fq);


                if(fq==NULL)
                     {
                       for(i=0;i<=39;i++)
                       {
                           c=strcmp(st[i].seat,seat_num);
                           if(c==0)
                          {
                               strcpy(a[cnt].seat,st[i].seat);

                               fr=fopen("ticket.txt","w");
                               fprintf(fr,"%s ",st[i].seat);
                               fclose(fr);

                               start=cnt;

                               fs=fopen("start.txt","w");
                               fprintf(fs,"%d",start);
                               fclose(fs);



                                      // for ticket printing loop
                               cnt++;

                               fq=fopen("count.txt","w");
                               fprintf(fq,"%d",cnt);
                               fclose(fq);



                               strcpy(st[i].seat,"X");

                               printf("\n\n-------SEET HAS BEEN BOOKED-------\n\n");
                               break;
                           }


                       }




                     }

                else
                     {

                        fq=fopen("count.txt","r");
                        fscanf(fq,"%d",&cnt);
                        fclose(fq);



                        for(i=0;i<=39;i++)
                        {
                              c=strcmp(st[i].seat,seat_num);
                              if(c==0)
                               {
                                  strcpy(a[cnt].seat,st[i].seat);

                                  fr=fopen("ticket.txt","a");
                                  fprintf(fr,"%s ",a[cnt].seat);
                                  fclose(fr);


                                  cnt++;

                                  fq=fopen("count.txt","w");
                                  fprintf(fq,"%d",cnt);
                                  fclose(fq);



                                  strcpy(st[i].seat,"X");

                                  printf("\n\n-------SEET HAS BEEN BOOKED-------\n\n");
                                  break;
                                }


                        }


                     }





               fp=fopen("check.txt","w");

               for(i=0;i<=39;i++)
               {

                    fprintf(fp,"%s ",st[l].seat);

                    l++;


               }
               fclose(fp);

              printf("\n\n-----------CURRENTLY AVAILABLE SEAT-----------\n\n");

               for(i=0;i<=39;i++)
               {


                    printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }



          }


        }while(ext!=2);





         printf("\n\n-----------CURRENTLY AVAILABLE SEAT-----------\n\n");

          for(i=0;i<=39;i++)
               {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }


    //ticket printing.............................................

            ft=fopen("end.txt","w");
            fprintf(ft,"%d",cnt);
            fclose(ft);

            ft=fopen("end.txt","r");
            fscanf(ft,"%d",&end);
            fclose(ft);

            fs=fopen("start.txt","r");
            fscanf(fs,"%d",&start);
            fclose(fs);

            int key;

             //for printing ticket loop
       do{
            printf("\n\nTO Print Ticket Press 1: ");
            scanf("%d",&key);
            printf("\n\n\n");




            if(key==1)
            {
              printf("\n\n*********************************FRIEND EXPRESS*****************************\n\n");
              printf("Bus Name: %s\t\t\t\tBus Time: %.2f am\n\n",data[0].bus_name,data[0].bus_time);
              printf("From: %s\t\t\t\tTO: %s\n\n",data[0].departure,data[0].destination);
              printf("Contact Num: 01768094971\t\tPrice: %.2f tk\n\n",(end-start)*500.0);
              printf("Seat Num: ");

              for(i=start;i<end;i++)
               {

                 printf("%s ",a[i].seat);
               }
               printf("\n\n************************************Thank You*******************************\n\n");

             }

             else
              {
                printf("\nSorry Wrong Input.\n\n");
              }

          }  while(key!=1);


            fs=fopen("start.txt","w");
            fprintf(fs,"%d",cnt);
            fclose(fs);




       }




//=========================================strat




else if(strcmp(data[1].bus_name,ch)==0)



    {

       if(fa==NULL)
        {

         printf("-------+++-----AVAILABLE SEAT------+++-----\n\n");

        for(i=0;i<=39;i++)
           {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }





           }

        }

        else
        {
            p=0;
             printf("---***----AVAILABLE SEAT----***---\n\n");
             fa=fopen("a.txt","r");
             for(i=0;i<=39;i++)
             {

                     fscanf(fa,"%s ",st[i].seat);

             }

             for(i=0;i<=39;i++)
               {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }


            fclose(fa);
        }








     do
      {
          p=0;
          l=0;


        printf("\n\nTo Book Seat Press-->>>:1\nTo Exit Press--->>>>>:2\n\n");
        printf("Pls Press------->>>>>:");

        scanf("%d",&ext);

        if(ext==1)
        {


           printf("\n\n-----------BOOK YOUR SEAT NOW--------------\n\n");

           printf("Enter Seat Num:");
           scanf("%s",seat_num);


                fb=fopen("b.txt","r");
                fclose(fb);


                if(fb==NULL)
                     {
                       for(i=0;i<=39;i++)
                       {
                           c=strcmp(st[i].seat,seat_num);
                           if(c==0)
                          {
                               strcpy(a[cnt].seat,st[i].seat);

                               fc=fopen("c.txt","w");
                               fprintf(fc,"%s ",st[i].seat);
                               fclose(fc);

                               start=cnt;

                               fd=fopen("d.txt","w");
                               fprintf(fd,"%d",start);
                               fclose(fd);



                                      // for ticket printing loop
                               cnt++;

                               fb=fopen("b.txt","w");
                               fprintf(fb,"%d",cnt);
                               fclose(fb);



                               strcpy(st[i].seat,"X");

                               printf("\n\n-------SEET HAS BEEN BOOKED-------\n\n");
                               break;
                           }


                       }




                     }

                else
                     {

                        fb=fopen("b.txt","r");
                        fscanf(fb,"%d",&cnt);
                        fclose(fb);



                        for(i=0;i<=39;i++)
                        {
                              c=strcmp(st[i].seat,seat_num);
                              if(c==0)
                               {
                                  strcpy(a[cnt].seat,st[i].seat);

                                  fc=fopen("c.txt","a");
                                  fprintf(fc,"%s ",a[cnt].seat);
                                  fclose(fc);


                                  cnt++;

                                  fb=fopen("b.txt","w");
                                  fprintf(fb,"%d",cnt);
                                  fclose(fb);



                                  strcpy(st[i].seat,"X");

                                  printf("\n\n-------SEET HAS BEEN BOOKED-------\n\n");
                                  break;
                                }


                        }


                     }





               fa=fopen("a.txt","w");

               for(i=0;i<=39;i++)
               {

                    fprintf(fa,"%s ",st[l].seat);

                    l++;


               }
               fclose(fa);

              printf("\n\n-----------CURRENTLY AVAILABLE SEAT-----------\n\n");

               for(i=0;i<=39;i++)
               {


                    printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }



          }


        }while(ext!=2);





         printf("\n\n-----------CURRENTLY AVAILABLE SEAT-----------\n\n");

          for(i=0;i<=39;i++)
               {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }


    //ticket printing.............................................

            fe=fopen("e.txt","w");
            fprintf(fe,"%d",cnt);
            fclose(fe);

            fe=fopen("e.txt","r");
            fscanf(fe,"%d",&end);
            fclose(fe);

            fd=fopen("d.txt","r");
            fscanf(fd,"%d",&start);
            fclose(fd);

            int key;

             //for printing ticket loop
       do{
            printf("\n\nTO Print Ticket Press 1: ");
            scanf("%d",&key);
            printf("\n\n\n");




            if(key==1)
            {
              printf("\n\n*********************************FRIEND EXPRESS*****************************\n\n");
              printf("Bus Name: %s\t\t\t\tBus Time: %.2f am\n\n",data[1].bus_name,data[1].bus_time);
              printf("From: %s\t\t\t\tTO: %s\n\n",data[1].departure,data[1].destination);
              printf("Contact Num: 01768094971\t\tPrice: %.2f tk\n\n",(end-start)*800.0);
              printf("Seat Num: ");

              for(i=start;i<end;i++)
               {

                 printf("%s ",a[i].seat);
               }
               printf("\n\n************************************Thank You*******************************\n\n");

             }

             else
              {
                printf("\nSorry Wrong Input.\n\n");
              }

          }  while(key!=1);


            fd=fopen("d.txt","w");
            fprintf(fd,"%d",cnt);
            fclose(fd);




       }



//==========================================end

//===========================start 2


 else if(strcmp(data[2].bus_name,ch)==0)



    {

       if(ff==NULL)
        {

         printf("-------+++-----AVAILABLE SEAT------+++-----\n\n");

        for(i=0;i<=39;i++)
           {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }





           }

        }

        else
        {
            p=0;
             printf("---***----AVAILABLE SEAT----***---\n\n");
             ff=fopen("f.txt","r");
             for(i=0;i<=39;i++)
             {

                     fscanf(ff,"%s ",st[i].seat);

             }

             for(i=0;i<=39;i++)
               {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }


            fclose(ff);
        }








     do
      {
          p=0;
          l=0;


        printf("\n\nTo Book Seat Press-->>>:1\nTo Exit Press--->>>>>:2\n\n");
        printf("Pls Press------->>>>>:");

        scanf("%d",&ext);

        if(ext==1)
        {


           printf("\n\n-----------BOOK YOUR SEAT NOW--------------\n\n");

           printf("Enter Seat Num:");
           scanf("%s",seat_num);


                fg=fopen("g.txt","r");
                fclose(fg);


                if(fg==NULL)
                     {
                       for(i=0;i<=39;i++)
                       {
                           c=strcmp(st[i].seat,seat_num);
                           if(c==0)
                          {
                               strcpy(a[cnt].seat,st[i].seat);

                               fh=fopen("h.txt","w");
                               fprintf(fh,"%s ",st[i].seat);
                               fclose(fh);

                               start=cnt;

                               fi=fopen("i.txt","w");
                               fprintf(fi,"%d",start);
                               fclose(fi);



                                      // for ticket printing loop
                               cnt++;

                               fg=fopen("g.txt","w");
                               fprintf(fg,"%d",cnt);
                               fclose(fg);



                               strcpy(st[i].seat,"X");

                               printf("\n\n-------SEET HAS BEEN BOOKED-------\n\n");
                               break;
                           }


                       }




                     }

                else
                     {

                        fg=fopen("g.txt","r");
                        fscanf(fg,"%d",&cnt);
                        fclose(fg);



                        for(i=0;i<=39;i++)
                        {
                              c=strcmp(st[i].seat,seat_num);
                              if(c==0)
                               {
                                  strcpy(a[cnt].seat,st[i].seat);

                                  fh=fopen("h.txt","a");
                                  fprintf(fh,"%s ",a[cnt].seat);
                                  fclose(fh);


                                  cnt++;

                                  fg=fopen("g.txt","w");
                                  fprintf(fg,"%d",cnt);
                                  fclose(fg);



                                  strcpy(st[i].seat,"X");

                                  printf("\n\n-------SEET HAS BEEN BOOKED-------\n\n");
                                  break;
                                }


                        }


                     }





               ff=fopen("f.txt","w");

               for(i=0;i<=39;i++)
               {

                    fprintf(ff,"%s ",st[l].seat);

                    l++;


               }
               fclose(ff);

              printf("\n\n-----------CURRENTLY AVAILABLE SEAT-----------\n\n");

               for(i=0;i<=39;i++)
               {


                    printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }



          }


        }while(ext!=2);





         printf("\n\n-----------CURRENTLY AVAILABLE SEAT-----------\n\n");

          for(i=0;i<=39;i++)
               {


                   printf("%s\t",st[i].seat);

                   if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||i==35)
                   {
                       printf("\n\n");
                   }

               }


    //ticket printing.............................................

            fj=fopen("j.txt","w");
            fprintf(fj,"%d",cnt);
            fclose(fj);

            fj=fopen("j.txt","r");
            fscanf(fj,"%d",&end);
            fclose(fj);

            fi=fopen("i.txt","r");
            fscanf(fi,"%d",&start);
            fclose(fi);

            int key;

             //for printing ticket loop
       do{
            printf("\n\nTO Print Ticket Press 1: ");
            scanf("%d",&key);
            printf("\n\n\n");




            if(key==1)
            {
              printf("\n\n*********************************FRIEND EXPRESS*****************************\n\n");
              printf("Bus Name: %s\t\t\t\tBus Time: %.2f am\n\n","fe-3",data[2].bus_time);
              printf("From: %s\t\t\t\tTO: %s\n\n",data[2].departure,data[2].destination);
              printf("Contact Num: 01768094971\t\tPrice: %.2f tk\n\n",(end-start)*1000.0);
              printf("Seat Num: ");

              for(i=start;i<end;i++)
               {

                 printf("%s ",a[i].seat);
               }
               printf("\n\n************************************Thank You*******************************\n\n");

             }

             else
              {
                printf("\nSorry Wrong Input.\n\n");
              }

          }  while(key!=1);


            fi=fopen("i.txt","w");
            fprintf(fi,"%d",cnt);
            fclose(fi);




       }



// ==========================end 2
}




