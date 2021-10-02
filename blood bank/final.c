#include<stdio.h>
#include<string.h>
#include<time.h>//library to delay code execution
#include<stdlib.h>//file management

void delay(int number_of_seconds) //delay function
{ 
    // Converting to milli seconds
    int milli_seconds = 1000 * number_of_seconds; 
  
    //  start time 
    clock_t start_time = clock(); 
  
    while (clock() < start_time + milli_seconds) 
        ; 
} 

struct bloodgroup{//structure for blood group
    long int d;
};
struct bloodgroup a_p,a_n,b_p,b_n,o_p,o_n,ab_p,ab_n;

struct plasma{//structure for plasma storage
    long int d;
};
struct plasma pa_p,pa_n,pb_p,pb_n,po_p,po_n,pab_p,pab_n;

int main(){
 system("cls");
char user[25];
char pass[25];
int i,e;
i=0;
do{
system("color 70");
//header line
printf("\n\n");
printf("\t\t\t\t    *********BLOOD BANK MANAGEMENT SYSTEM*********\n\n\n\n\n");

// taking input
printf("\t\t\t\t\t Enter USERNAME:  ");
scanf("%s",user);
printf("\t\t\t\t\t Enter PASSWORD:  ");
scanf("%s",pass);
printf("\n\n");

//comparison of input
if (strcmp(user, "@bloodbank") == 0 && strcmp(pass, "@b123") == 0)//access granted
{printf("\t\t\t\t\t\t  ACCESS GRANTED\n"); e=0;
delay(1);
system("cls");

//welcome page

    int response;
    jump:
    printf("\n\n\t\t\t\t\t\t           ** WELCOME !!!! **\n\n");
    printf("\n\n\t\t\t\t\t\t        *** BLOOD BANK !!!! ***\n\n\n\n");
    printf("\t\t\t\t\t CHOOSE ONE OF THE FOLLOWING OPTIONS : ");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t 1. BLOOD STORAGE\n\n");
    printf("\t\t\t\t\t 2. PLASMA DATABASE\n\n");
    printf("\t\t\t\t\t 3. DONAR DATABASE\n\n");
    printf("\t\t\t\t\t 4. RECIPIENT DATABASE\n\n\n\n");
    printf("\t\t\t\t\t TO EXIT ENTER '-1' \n\n\n");
    printf("\t\t\t\t\t\tRESPONSE - ");
    scanf("%d",&response);

    if(response==1){//blood storage
    int option;
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t BLOOD STORAGE\n\n\n\n");
    printf("\t\t\t\t\t 1. VIEW STORAGE\n\n");
    printf("\t\t\t\t\t 2. UPDATE STORAGE\n\n");
    printf("\t\t\t\t\tTO GO BACK ENTER -1\n\n\n\n");     
    printf("\t\t\t\t\t\tOPTION - ");
    scanf("%d",&option);
    if(option==1){//view storage
    system("cls");
      FILE *f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8;
      f1=fopen("BG a+.txt","r");
      f2=fopen("BG a-.txt","r");
      f3=fopen("BG b+.txt","r");
      f4=fopen("BG b-.txt","r");
      f5=fopen("BG o+.txt","r");
      f6=fopen("BG o-.txt","r");
      f7=fopen("BG ab+.txt","r");
      f8=fopen("BG ab-.txt","r");
      fscanf(f1,"%d",&a_p.d);
      fscanf(f2,"%d",&a_n.d);
      fscanf(f3,"%d",&b_p.d);
      fscanf(f4,"%d",&b_n.d);
      fscanf(f5,"%d",&o_p.d);
      fscanf(f6,"%d",&o_n.d);
      fscanf(f7,"%d",&ab_p.d);
      fscanf(f8,"%d",&ab_n.d);
      
      
        printf("\n\n\t\t\t\t\t\t\t\t\t    *STORAGE*\n\n\n\n");
        printf("\t\t\t\t\t\t\t(THE DATA REPRESENTED IS IN TERMS OF BLOOD BAGS)\n\n");
        printf("\t\t\t\t\t\t\t\t  ( 1 blood bag = 300 ml)\n\n\n\n");
        printf("\t\t\t\t\t 1.  A positive  :  %d\n\n", a_p.d);
        printf("\t\t\t\t\t 2.  A negative  :  %d\n\n", a_n.d);
        printf("\t\t\t\t\t 3.  O positive  :  %d\n\n", o_p.d);
        printf("\t\t\t\t\t 4.  O negative  :  %d\n\n", o_n.d);
        printf("\t\t\t\t\t 5.  B positive  :  %d\n\n", b_p.d);
        printf("\t\t\t\t\t 6.  B negative  :  %d\n\n", b_n.d);
        printf("\t\t\t\t\t 7.  AB positive :  %d\n\n", ab_p.d);
        printf("\t\t\t\t\t 8.  AB negative :  %d\n\n\n\n", ab_n.d);

     fclose(f1);fclose(f2);fclose(f3);fclose(f4);fclose(f5);fclose(f6);fclose(f7);fclose(f8);
      int c;
        printf("\t\t\t\t\t\t\t TO GO BACK ENTER 1 OR TO EXIT ENTER 0 - ");
        scanf("%d",&c);
        if(c==1){system("cls");goto jump;}
        else if(c==0){system("cls");}

    }
    if(option==2){//update storage
    system("cls");
    //OPENING FILES
          FILE *f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8;

    char gr[10];
    printf("\n\n\t\t\t\t\t\t\t UPDATING DATABASE\n\n\n\n");
     printf("\t\t\t\t\t ( ENTER IN UPPERCASE )\n\n");
     printf("\t\t\t\t\t ENTER BLOOD GROUP TO BE UPDATED :- ");
     scanf("%s",gr);
     printf("\n\n");
     if(strcmp(gr,"A+")==0){
         int st;
          f1=fopen("BG a+.txt","w+");
          fscanf(f1,"%d",&a_p.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",a_p.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f1,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f1);
         

     }
     if(strcmp(gr,"A-")==0){
          int st;
          f2=fopen("BG a-.txt","w+");
          fscanf(f2,"%d",&a_n.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",a_n.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f2,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f2);

     }
     if(strcmp(gr,"B+")==0){
          int st;
          f3=fopen("BG b+.txt","w+");
          fscanf(f3,"%d",&b_p.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",b_p.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f3,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f3);

     }
     if(strcmp(gr,"B-")==0){
          int st;
          f4=fopen("BG b-.txt","w+");
          fscanf(f4,"%d",&b_n.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",b_n.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f4,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f4);

     }
     if(strcmp(gr,"O+")==0){
          int st;
          f5=fopen("BG o+.txt","w+");
          fscanf(f5,"%d",&o_p.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",o_p.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f5,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f5);
          
     }
     if(strcmp(gr,"O-")==0){
          int st;
           f6=fopen("BG o-.txt","w+");
           fscanf(f6,"%d",&o_n.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",o_n.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f6,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f6);

     }
     if(strcmp(gr,"AB+")==0){
          int st;
           f7=fopen("BG ab+.txt","w+");
            fscanf(f7,"%d",&ab_p.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",ab_p.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f7,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f7);

     }
     if(strcmp(gr,"AB-")==0){
          int st;
            f8=fopen("BG ab-.txt","w+");
             fscanf(f8,"%d",&ab_n.d);
          printf("\t\t\t\t\t CURRENT STORAGE :- %d\n\n",ab_n.d);
          printf("\t\t\t\t\t ENTER NEW STORAGE :- ");
          scanf("%d",&st);
          fprintf(f8,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f8);

     }
      
     
      int c;
        printf("\n\n\t\t\t\t\t\t\t TO GO BACK ENTER 1 OR TO EXIT ENTER 0 - ");
        scanf("%d",&c);
        if(c==1){system("cls");goto jump;}
        else if(c==0){system("cls");}

     
    }
    if(option==-1){//back
        system("cls");
        goto jump;}
      }

    if(response==2){//plasma
        int option;
     system("cls");
     printf("\n\n\t\t\t\t\t\t\t PLASMA STORAGE\n\n");
     printf("\t\t\t ( Plasma constitues 55%% of blood. It stores the antibodies in the human body whenever\n");
     printf("\t\t\t we catch a disease. It can be seperatedusing centrifugation and is stored seperately \n\t\t\tfor different blood groups )\n\n\n");
     printf("\t\t\t\t\t 1. VIEW PLASMA STORAGE\n\n");
     printf("\t\t\t\t\t 2. UPDATE PLASMA STORAGE\n\n");
     printf("\t\t\t\t\tTO GO BACK ENTER -1\n\n\n\n");     
     printf("\t\t\t\t\t\tOPTION - ");
     scanf("%d",&option);
    if(option==1){//plasma storage
         system("cls");
      FILE *f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8;
      f1=fopen("pa+.txt","r");
      f2=fopen("pa-.txt","r");
      f3=fopen("pb+.txt","r");
      f4=fopen("pb-.txt","r");
      f5=fopen("po+.txt","r");
      f6=fopen("po-.txt","r");
      f7=fopen("pab+.txt","r");
      f8=fopen("pab-.txt","r");
      fscanf(f1,"%d",&pa_p.d);
      fscanf(f2,"%d",&pa_n.d);
      fscanf(f3,"%d",&pb_p.d);
      fscanf(f4,"%d",&pb_n.d);
      fscanf(f5,"%d",&po_p.d);
      fscanf(f6,"%d",&po_n.d);
      fscanf(f7,"%d",&pab_p.d);
      fscanf(f8,"%d",&pab_n.d);
      
      
        printf("\n\n\t\t\t\t\t\t\t\t\t    *STORAGE*\n\n\n\n");
        printf("\t\t\t\t\t\t\t(THE DATA REPRESENTED IS IN TERMS OF BLOOD BAGS)\n\n");
        printf("\t\t\t\t\t\t\t\t  ( 1 blood bag = 250 ml)\n\n\n\n");
        printf("\t\t\t\t\t 1. Plasma for A positive  :  %d\n\n", pa_p.d);
        printf("\t\t\t\t\t 2. Plasma for A negative  :  %d\n\n", pa_n.d);
        printf("\t\t\t\t\t 3. Plasma for O positive  :  %d\n\n", po_p.d);
        printf("\t\t\t\t\t 4. Plasma for O negative  :  %d\n\n", po_n.d);
        printf("\t\t\t\t\t 5. Plasma for B positive  :  %d\n\n", pb_p.d);
        printf("\t\t\t\t\t 6. Plasma for B negative  :  %d\n\n", pb_n.d);
        printf("\t\t\t\t\t 7. Plasma for AB positive :  %d\n\n", pab_p.d);
        printf("\t\t\t\t\t 8. Plasma for AB negative :  %d\n\n\n\n", pab_n.d);

     fclose(f1);fclose(f2);fclose(f3);fclose(f4);fclose(f5);fclose(f6);fclose(f7);fclose(f8);
      int c;
        printf("\t\t\t\t\t\t\t TO GO BACK ENTER 1 OR TO EXIT ENTER 0 - ");
        scanf("%d",&c);
        if(c==1){system("cls");goto jump;}
        else if(c==0){system("cls");}


    }
    if(option==2){//update plasma storage
        system("cls");
    //OPENING FILES
          FILE *f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8;

    char gr[10];
    printf("\n\n\t\t\t\t\t\t\t UPDATING PLASMA DATABASE\n\n\n\n");
     printf("\t\t\t\t\t ( ENTER IN UPPERCASE )\n\n");
     printf("\t\t\t\t\t ENTER BLOOD GROUP TO UPDATE PLASMA DATABASE :- ");
     scanf("%s",gr);
     printf("\n\n");
     if(strcmp(gr,"A+")==0){
         int st;
          f1=fopen("pa+.txt","w+");
          fscanf(f1,"%d",&pa_p.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",pa_p.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f1,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f1);
         

     }
     if(strcmp(gr,"A-")==0){
          int st;
          f2=fopen("pa-.txt","w+");
          fscanf(f2,"%d",&pa_n.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",pa_n.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f2,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f2);

     }
     if(strcmp(gr,"B+")==0){
          int st;
          f3=fopen("pb+.txt","w+");
          fscanf(f3,"%d",&pb_p.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",pb_p.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f3,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f3);

     }
     if(strcmp(gr,"B-")==0){
          int st;
          f4=fopen("pb-.txt","w+");
          fscanf(f4,"%d",&pb_n.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",pb_n.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f4,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f4);

     }
     if(strcmp(gr,"O+")==0){
          int st;
          f5=fopen("po+.txt","w+");
          fscanf(f5,"%d",&po_p.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",po_p.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f5,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f5);
          
     }
     if(strcmp(gr,"O-")==0){
          int st;
           f6=fopen("po-.txt","w+");
           fscanf(f6,"%d",&po_n.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",po_n.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f6,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f6);

     }
     if(strcmp(gr,"AB+")==0){
          int st;
           f7=fopen("pab+.txt","w+");
            fscanf(f7,"%d",&pab_p.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",pab_p.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f7,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f7);

     }
     if(strcmp(gr,"AB-")==0){
          int st;
            f8=fopen("pab-.txt","w+");
             fscanf(f8,"%d",&pab_n.d);
          printf("\t\t\t\t\t CURRENT PLASMA STORAGE :- %d\n\n",pab_n.d);
          printf("\t\t\t\t\t ENTER NEW PLASMA STORAGE :- ");
          scanf("%d",&st);
          fprintf(f8,"%d",st);
          printf("\n\n\t\t\t\t\t STORAGE UPDATED !!");
          fclose(f8);

     }
      
     
      int c;
        printf("\n\n\t\t\t\t\t\t\t TO GO BACK ENTER 1 OR TO EXIT ENTER 0 - ");
        scanf("%d",&c);
        if(c==1){system("cls");goto jump;}
        else if(c==0){system("cls");}

    }
    if(option==-1){//go back
        system("cls");
        goto jump;
    }
    }

    if(response==3){//donar database
    int option;
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t DONAR DATABASE\n\n\n\n");
    printf("\t\t\t\t\t CHOOSE ONE OF THE FOLLOWING OPTIONS : ");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t 1. VIEW DATABASE\n\n");
    printf("\t\t\t\t\t 2. ADD TO DATABASE\n\n");
    printf("\t\t\t\t\t TO GO BACK ENTER '-1' \n\n\n");
    printf("\t\t\t\t\t\tRESPONSE - ");
    scanf("%d",&option);
    if(option==1){
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t DONAR DATABASE\n\n\n\n");
        char ch;
        FILE *fp;
        fp=fopen("donar.txt","r");
        while(1){
            ch=fgetc(fp);
            if(ch==EOF){break;}
            printf("%c",ch);
        }
        fclose(fp);
    }
    if(option==2){
         system("cls");
        printf("\n\n\t\t\t\t\t\t\t ADD DATA TO DONAR DATABASE\n\n\n\n");
        printf("\t\t\t\t\t LAYOUT TO ENTER DATA (EVERYTHING IN UPPERCASE): \n\n\n\n");
        printf("\t\t\t\t\t\t\t NAME\n");
        printf("\t\t\t\t\t\t\t AGE\n");
        printf("\t\t\t\t\t\t\t SEX\n");
        printf("\t\t\t\t\t\t\t BLOOD GROUP\n");
        printf("\t\t\t\t\t\t\t CONTACT\n\n\n");
        printf("\t\t\t\t\t (HIT ENTER TWICE WHEN FINISHED)\n\n\n");

        //working on file
        FILE *fp;
        fp=fopen("donar.txt","a");
        char s[200];
        fputs("\n",fp);
        gets(s);
        while(strlen(gets(s))>0 ){
            fputs(s,fp);
            fputs("\n",fp);
        }
        fclose(fp);
    }
    if(option==-1){
        system ("cls");
        goto jump;}
        
        int c;
        printf("\t\t\t\t\t\t\t TO GO BACK ENTER 1 OR TO EXIT ENTER 0 - ");
        scanf("%d",&c);
        if(c==1){system("cls");goto jump;}
        else if(c==0){system("cls");}
   
    }

    if(response==4){//recipient database
        int option;
     system("cls");
     printf("\n\n\t\t\t\t\t\t\t RECIPIENT DATABASE\n\n\n\n");
     printf("\t\t\t\t\t CHOOSE ONE OF THE FOLLOWING OPTIONS : ");
     printf("\n\n\n\n");
     printf("\t\t\t\t\t 1. VIEW DATABASE\n\n");
     printf("\t\t\t\t\t 2. ADD TO DATABASE\n\n");
     printf("\t\t\t\t\t TO GO BACK ENTER '-1' \n\n\n");
     printf("\t\t\t\t\t\tRESPONSE - ");
     scanf("%d",&option);
     if(option==1){
         system("cls");
         printf("\n\n\t\t\t\t\t\t\t RECIPIENT  DATABASE\n\n\n\n");
         char ch;
         FILE *fp;
         fp=fopen("recipient.txt","r");
         while(1){
            ch=fgetc(fp);
            if(ch==EOF){break;}
            printf("%c",ch);
        }
        fclose(fp);
     }
      if(option==2){
         system("cls");
         printf("\n\n\t\t\t\t\t\t\t ADD DATA TO RECIPIENT DATABASE\n\n\n\n");
         printf("\t\t\t\t\t LAYOUT TO ENTER DATA (EVERYTHING IN UPPERCASE): \n\n\n\n");
         printf("\t\t\t\t\t\t\t NAME\n");
         printf("\t\t\t\t\t\t\t AGE\n");
         printf("\t\t\t\t\t\t\t SEX\n");
         printf("\t\t\t\t\t\t\t BLOOD GROUP\n");
         printf("\t\t\t\t\t\t\t ADDRESS\n");
         printf("\t\t\t\t\t\t\t CONTACT\n\n\n");
         printf("\t\t\t\t\t (HIT ENTER TWICE WHEN FINISHED)\n\n\n");

         //working on file
         FILE *fp;
         fp=fopen("recipient.txt","a");
         char s[200];
         fputs("\n",fp);
         gets(s);
         while(strlen(gets(s))>0 ){
            fputs(s,fp);
            fputs("\n",fp);
         }
         fclose(fp);
   
        }
        if(option==-1){
            system("cls");
            goto jump;
        }
        int c;
        printf("\t\t\t\t\t\t\t TO GO BACK ENTER 1 OR TO EXIT ENTER 0 - ");
        scanf("%d",&c);
        if(c==1){system("cls");goto jump;}
        else if(c==0){system("cls");}
    }

     if(response==-1){//exit
     system("cls");
    }
   

}

else//access denied
{printf("\t\t\t\t\t\t  ACCESS DENIED\n\n");

printf("\t\t\t\t Tries Remaining- %d\n\n", 2-i);

//option to continue or exit
printf("\t\t\t\tEnter 1 to try again or 2 to exit- ");
scanf("%d",&e);
i=i+1;
system("cls");}
}
while(e==1&&i<3);
printf("\n\n");

if(e==2){}
if(i==3){printf("\t\t\t\t\t\t SYSTEM LOCKED\n\n");}

return 0;

}