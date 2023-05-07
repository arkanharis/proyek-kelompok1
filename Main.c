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

void tampil_ques() {}
void checkpoint() {}
void won () {}
void game_over () {}
void sorry () {}
int main () {}

