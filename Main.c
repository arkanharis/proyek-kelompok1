#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h>

char nama[20]; 
int ques = 0; 
int a = 0; 
long uang_skrg[] = {5000, 10000, 20000, 40000, 80000, 160000, 320000, 640000, 1250000, 2500000, 5000000, 10000000, 30000000, 50000000, 70000000};
char update[] = {'>',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
char opsi = ' '; 

struct var_soal 
{
    char soal[100];
    char a[35];
    char b[35];
    char c[35];
    char d[35];
    char solusi;
} set[15];

typedef struct {
    char username[30];
    char password[30];
    } User;
    
void inisial() {}
void start () {
        system("clear");
            printf("\n\n");
            printf("\t\t\t\t\t\t\t    ▄▄▄▄▄▄▄ ▄▄   ▄▄ ▄▄   ▄▄ ▄▄▄▄▄▄ \n");
            printf("\t\t\t\t\t\t\t   █       █  █▄█  █  █ █  █      █\n");
            printf("\t\t\t\t\t\t\t   █    ▄▄▄█       █  █▄█  █  ▄   █\n");
            printf("\t\t\t\t\t\t\t   █   █▄▄▄█       █       █ █▄█  █\n");
            printf("\t\t\t\t\t\t\t   █    ▄▄▄█       █   ▄   █      █\n");
            printf("\t\t\t\t\t\t\t   █   █▄▄▄█ ██▄██ █  █ █  █  ▄   █\n");
            printf("\t\t\t\t\t\t\t   █▄▄▄▄▄▄▄█▄█   █▄█▄▄█ █▄▄█▄█ █▄▄█\n");
            printf("\n\n");
            printf("\t\t\t\b\bWelcome to Mh Game!\n");
            printf("\t\t\t\b\bEnter Y to CONTINUE or N (or any other key) to QUIT. YOUR CHOICE -> ");
            char ch = getchar();
            if(toupper(ch) == 'Y')
            {
                a=1;
            }
            else
            exit(0);
}

void rule () {}
long check_uang() {
    long pass;
    if(ques >= 4 && ques <= 7)
    pass = uang_skrg[3];
    else if(ques >= 8 && ques <= 11)
    pass = uang_skrg[7];
    else if(ques >= 12 && ques <= 14)
    pass = uang_skrg[11];
    else
    pass = 0;
    
    return pass;
}

void tampil_ques() {
    system("clear"); 
    Inisial();
    int l;
    char ch = ' ';
    char quest[100] ;
    char opA[35] ;
    char opB[35] ;
    char opC[35] ; 
    char opD[35] ;

    strcpy(quest, set[ques].soal);
    strcpy(opA, set[ques].a);
    strcpy(opB, set[ques].b);
    strcpy(opC, set[ques].c);
    strcpy(opD, set[ques].d);

    l = strlen(opA);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opA, &ch, 1); 
    }
    l = strlen(opB);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opB, &ch, 1); 
    }
    l = strlen(opC);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opC, &ch, 1); 
    }
    l = strlen(opD);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opD, &ch, 1); 
    }
    
    printf(" \n\n");
    printf(" \t\t\t\t\t\t\t░█▀▀░█▀▄▀█░█░░░░█▀▀▄\n");
    printf(" \t\t\t\t\t\t\t░█▀▀░█░▀░█░█▀▀█░█▄▄█\n");
    printf(" \t\t\t\t\t\t\t░▀▀▀░▀░░▒▀░▀░░▀░▀░░▀\n");
    printf(" \n");
    printf(" \t\t\t\t\t    %s, Question %lu is now on your computer Screen:\n", nama, uang_skrg[ques]);
    printf("   _______________\n");
    printf("%c%c│   7 milliar   │[C*]\t  /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\ \n", update[14], update[14]);
    printf("%c%c│   5 milliar   │    \t\t-( Q.%d> %s )-\n",update[13],update[13],(ques+1),quest);
    printf("%c%c│   3 milliar   │    \t\t  \\_______________________________________________________________________________________________/\n",update[12], update[12]);
    printf("%c%c│   1 milliar   │[C*]\n",update[11], update[11]);
    printf("%c%c│   5.000.000   │\n",update[10], update[10]);
    printf("%c%c│   2.500.000   │\n",update[9], update[9]);
    printf("%c%c│   1.250.000   │\t\t  /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\                                /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\ \n", update[8], update[8]);
    printf("%c%c│    640.000    │[C*]\t\t-( A.> %s)-------------------------------( B.> %s)-\n",update[7],update[7],opA,opB);
    printf("%c%c│    320.000    │    \t\t  \\______________________________/                                 \\______________________________/\n", update[6], update[6]);
    printf("%c%c│    160.000    │\n",update[5], update[5]);
    printf("%c%c│     80.000    │    \t\t  /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\                                /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\ \n", update[4], update[4]);
    printf("%c%c│     40.000    │[C*]\t\t-( C.> %s)-------------------------------( D.> %s)-\n",update[3],update[3],opC,opD);
    printf("%c%c│     20.000    │    \t\t  \\______________________________/                                 \\______________________________/\n", update[2], update[2]);
    printf("%c%c│     10.000    │\n",update[1], update[1]);
    printf("%c%c│      5.000    │\n", update[0], update[0]);
    printf("   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾        ENTER Q if you want to QUIT. If you QUIT now, you can take IDR %lu with you.\n\n", check_uang());
    printf(" \t\t\t  ENTER your CHOICE : ");
    char str[25];
    scanf("%s", str);
    opsi = str[0];
    
    a = 3; 
}

void checkpoint() {
    system("clear"); 
    int No_ch = (ques == 3) ? 1 : ((ques == 7) ? 2 : 3); 
    int Nex_Ch = (ques == 3) ? 8 : ((ques == 7) ? 12 : 15); 
    int af_ch = (ques == 3) ? 4 : ((ques == 7) ? 4 : 3); 
    long last_amount = (ques == 3) ? 40000 : ((ques == 7) ? 640000 : 10000000); 
    printf("\n\n\n");
    printf("\t\t\t\t\t   ██████  ██████  ███    ██  ██████  ██████   █████  ████████ ███████ ██\n");
    printf("\t\t\t\t\t  ██      ██    ██ ████   ██ ██       ██   ██ ██   ██    ██    ██      ██\n");
    printf("\t\t\t\t\t  ██      ██    ██ ██ ██  ██ ██   ███ ██████  ███████    ██    ███████ ██\n");
    printf("\t\t\t\t\t  ██      ██    ██ ██  ██ ██ ██    ██ ██   ██ ██   ██    ██         ██   \n");
    printf("\t\t\t\t\t   ██████  ██████  ██   ████  ██████  ██   ██ ██   ██    ██    ███████ ██\n");
    printf("\t\t\t\t\t    __________________________________________________________________\n");
    printf("\t\t\t\t\t   /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/\n\n\n");
    printf("\t\t\t\t\t\t\t\t   CHECKPOINT ACHIEVED\n\n\n");
    printf("\t\t\t\t\t  CHECKPOINT NUMBER : %d\n\n", No_ch);
    printf("\t\t\t\t\t  CONFIRMED AMOUNT TO BE WON : IDR %lu\n\n", last_amount);
    printf("\t\t\t\t\t  NEXT CHECKPOINT AT : Ques %d\n\n", Nex_Ch);
    printf("\t\t\t\t\t  NEXT CHECKPOINT AFTER IS AFTER %d soalS\n\n\n", af_ch);
    printf("\t\t\t\t\t  Press ENTER to CONTINUE THE GAME");
    char ch = getchar();
}
void won () {}
void game_over () {}
void sorry () {}
int main () {}

