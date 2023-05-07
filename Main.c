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
void start () {}
void rule () {}
long check_uang() {}
void tampil_ques() {}
void checkpoint() {}
void won () {}
void game_over () {}
void sorry () {}
int main () {}

