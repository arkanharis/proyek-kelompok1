#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h>
 
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
    
void Inisial() {
    strcpy(set[0].soal, "Apa nama ilmu yang mempelajari tentang burung?");
    strcpy(set[0].a, "Ornitologi");
    strcpy(set[0].b, "Herpetologi");
    strcpy(set[0].c, "Entomologi");
    strcpy(set[0].d, "Mammalogi");
    set[0].solusi = 'A';
    
    strcpy(set[1].soal, "Apa nama kapal yang digunakan oleh Christopher Columbus saat menemukan Amerika?");
    strcpy(set[1].a, "Santa Maria");
    strcpy(set[1].b, "Nina");
    strcpy(set[1].c, "Pinta");
    strcpy(set[1].d, "Victoria");
    set[1].solusi = 'A';

    strcpy(set[2].soal, "Apa nama perusahaan pembuat kamera terkenal dari Jerman?");
    strcpy(set[2].a, "Nikon");
    strcpy(set[2].b, "Canon");
    strcpy(set[2].c, "Leica");
    strcpy(set[2].d, "Sony");
    set[2].solusi = 'C';

    strcpy(set[3].soal, "Siapakah pelukis terkenal yang melukis Mona Lisa?");
    strcpy(set[3].a, "Vincent van Gogh");
    strcpy(set[3].b, "Pablo Picasso");
    strcpy(set[3].c, "Leonardo da Vinci");
    strcpy(set[3].d, "Claude Monet");
    set[3].solusi = 'C';

    strcpy(set[4].soal, "Siapa pemain basket legendaris yang dijuluki 'Black Mamba'?");
    strcpy(set[4].a, "Shaquille O'Neal");
    strcpy(set[4].b, "LeBron James");
    strcpy(set[4].c, "Kobe Bryant");
    strcpy(set[4].d, "Michael Jordan");
    set[4].solusi = 'C';

    strcpy(set[5].soal, "Siapa penulis novel 'Harry Potter'?");
    strcpy(set[5].a, "Stephen King");
    strcpy(set[5].b, "J.K. Rowling");
    strcpy(set[5].c, "George R.R. Martin");
    strcpy(set[5].d, "Dan Brown");
    set[5].solusi = 'B';

    strcpy(set[6].soal, "Apa nama tokoh utama dalam film 'Titanic'?");
    strcpy(set[6].a, "Rose");
    strcpy(set[6].b, "Tom");
    strcpy(set[6].c, "Kate");
    strcpy(set[6].d, "Jack");
    set[6].solusi = 'D';

    strcpy(set[7].soal, "Siapakah presiden ketiga Republik Indonesia?");
    strcpy(set[7].a, "Abdurrahman Wahid");
    strcpy(set[7].b, "Soeharto");
    strcpy(set[7].c, "B.J. Habibie");
    strcpy(set[7].d, "Susilo Bambang Yudhoyono");
    set[7].solusi = 'C';

    strcpy(set[8].soal, "Apa nama planet terbesar di tata surya kita?");
    strcpy(set[8].a, "Saturnus");
    strcpy(set[8].b, "Jupiter");
    strcpy(set[8].c, "Uranus");
    strcpy(set[8].d, "Neptunus");
    set[8].solusi = 'B';

    strcpy(set[9].soal, "Siapa tokoh terkenal dalam mitologi Mesir kuno yang berkepala anjing?");
    strcpy(set[9].a, "Horus");
    strcpy(set[9].b, "Ra");
    strcpy(set[9].c, "Osiris");
    strcpy(set[9].d, "Anubis");
    set[9].solusi = 'D';

    strcpy(set[10].soal, "Apa nama senjata tradisional yang berasal dari Jepang dan terdiri dari pedang panjang dan pisau kecil??");
    strcpy(set[10].a, "Wakizashi");
    strcpy(set[10].b, "Katana");
    strcpy(set[10].c, "Tanto");
    strcpy(set[10].d, "Nodachi");
    set[10].solusi = 'B';

    strcpy(set[11].soal, "Setiap berapa tahun bulan Februari memiliki 29 hari?");
    strcpy(set[11].a, "1");
    strcpy(set[11].b, "2");
    strcpy(set[11].c, "3");
    strcpy(set[11].d, "4");
    set[11].solusi = 'D';

    strcpy(set[12].soal, "Apa nama ibu kota negara Spanyol?");
    strcpy(set[12].a, "Barcelona");
    strcpy(set[12].b, "Sevilla");
    strcpy(set[12].c, "Madrid");
    strcpy(set[12].d, "Valencia");
    set[12].solusi = 'C';

    strcpy(set[13].soal, "Siapa nama penulis lagu 'Bohemian Rhapsody' dari band Queen?");
    strcpy(set[13].a, "Brian May");
    strcpy(set[13].b, "John Deacon");
    strcpy(set[13].c, "Freddie Mercury");
    strcpy(set[13].d, "Roger Taylor");
    set[13].solusi = 'C';

    strcpy(set[14].soal, "Berapa hasil 1+1x0?");
    strcpy(set[14].a, "0");
    strcpy(set[14].b, "1");
    strcpy(set[14].c, "2");
    strcpy(set[14].d, "Tidak ada jawaban");
    set[14].solusi = 'B';

}
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

void rule () {
    printf("\t\t\t\t\tBerikut adalah beberapa aturan dan tips permainan untukmu.\n\n");
    printf("\t\t\t\t\t\t\tAturan & Intruksi\n");
    printf("\t\t\t\t\t\t\t\b______________________\n\n");
    printf("\t1.) Untuk memenangkan HADIAH UTAMA sebesar Rp. 7.000.000, kamu harus menjawab semua soal dengan benar.\n");
    printf("\t2.) Saat kamu salah dalam menjawab soal (Artinya memilih opsi yang salah), permainanmu akan BERAKHIR.\n");
    printf("\t3.) Ada 4 titik checkpoint dalam permainan (ditandai dengan tanda [C*] pada dashbor uang (yang terletak di sisi kiri)\n");
    printf("\t    dari permainan.titik checkpoint berada pada soal ke-4 (40.000), soal ke-8 (640.000), soal ke-12 (1 milliar),\n");
    printf("\t    dan soal ke-15 (7 milliar).\n");
    printf("\t4.) Ketika mencapai dari titik checkpoint ini akan memastikan jumlah yang akan dimenangkan bahkan jika kamu tidak dapat \n");
    printf("\t    mencapai checkpoint berikutnya.\n");
    printf("\t5.) Posisi saat ini pada dasbor uang ditunjukkan oleh simbol (>>) di sisi kiri dari pelat.\n");
    printf("\t6.) Kamu dapat keluar dari permainan kapan saja yang kamu inginkan, dengan memasukkan Q pada konsol.\n");
    printf("\t    Saat kamu keluar, jumlah yang akan kamu bawa bersamamu adalah jumlah yang disebutkan pada checkpoint terakhir.\n");
    printf("\t7.) Perlu diingat, jika kamu memasukkan KEY apapun selain key yang disebutkan pada poin di atas (Misalnya T,Y...),\n");
    printf("\t    tidak akan ada efeknya.\n");
    printf("\t8.) Jika kamu memasukkan beberapa karakter sebagai masukan di terminal, HANYA KARAKTER PERTAMA dari string yang akan \n");
    printf("\t    diambil sebagai masukan. GOOD LUCK!!!.\n\n");
    printf("\t\t\t\t\tPress ANY KEY followed by ENTER to Continue.... ");
    char ch = getchar();
    getchar();
    a = 2;
}
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
    printf(" \t\t\t\t\t\t    Question %lu is now on your computer Screen:\n", uang_skrg[ques]);
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
void won () {
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t\t\t  ██    ██  ██████  ██    ██     ██     ██  ██████  ███    ██ ██\n"); 
    printf("\t\t\t\t\t   ██  ██  ██    ██ ██    ██     ██     ██ ██    ██ ████   ██ ██\n"); 
    printf("\t\t\t\t\t    ████   ██    ██ ██    ██     ██  █  ██ ██    ██ ██ ██  ██ ██\n"); 
    printf("\t\t\t\t\t     ██    ██    ██ ██    ██     ██ ███ ██ ██    ██ ██  ██ ██  \n");
    printf("\t\t\t\t\t     ██     ██████   ██████       ███ ███   ██████  ██   ████ ██\n\n\n"); 
    printf("\t\t\t\t\t  ALL OF THE 7 billion PRIZE MONEY NOW BELONGS TO YOU!!\n");
    printf("\t\t\t\t\t  Congrats, YOU ARE NOW A bilionaire!!\n\n\n\n");
    printf("\t\t\t\t\t  PRESS ENTER / ANY KEY FOLLOWED BY ENTER TO QUIT ");
    char ch = getchar();
    exit(0);
}
void game_over () {
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t\t\t   ██████   █████  ███    ███ ███████      ██████  ██    ██ ███████ ██████  \n");
    printf("\t\t\t\t\t  ██       ██   ██ ████  ████ ██          ██    ██ ██    ██ ██      ██   ██ \n");
    printf("\t\t\t\t\t  ██   ███ ███████ ██ ████ ██ █████       ██    ██ ██    ██ █████   ██████  \n");
    printf("\t\t\t\t\t  ██    ██ ██   ██ ██  ██  ██ ██          ██    ██  ██  ██  ██      ██   ██ \n");
    printf("\t\t\t\t\t   ██████  ██   ██ ██      ██ ███████      ██████    ████   ███████ ██   ██ \n\n\n");
    printf("\t\t\t\t\t\t\t\t\t GAME STATS\n\n");
    printf("\t\t\t\t\t  FINAL AMOUNT WON (WHICH YOU CAN TAKE HOME): IDR %lu\n", check_uang());
    printf("\t\t\t\t\t  LAST soal REACHED: %d\n", (ques+1));
    printf("\t\t\t\t\t  AMOUNT IN LAST soal: IDR %lu\n", uang_skrg[ques]);
    printf("\t\t\t\t\t  PRESS ENTER TO QUIT ");
    char ch = getchar();
    exit(0);
}
void sorry () {
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t\t\t  ███████  ██████  ██████  ██████  ██    ██ ██ \n");
    printf("\t\t\t\t\t  ██      ██    ██ ██   ██ ██   ██  ██  ██  ██ \n");
    printf("\t\t\t\t\t  ███████ ██    ██ ██████  ██████    ████   ██ \n");
    printf("\t\t\t\t\t       ██ ██    ██ ██   ██ ██   ██    ██       \n");
    printf("\t\t\t\t\t  ███████  ██████  ██   ██ ██   ██    ██    ██ \n\n\n");
    printf("\n\n\n");
    printf("\t\t\t\t\tYou didn't won any money this time, bad luck maybe. We all know that you deserve better.\n");
    printf("\t\t\t\tTry again next time. BEST OF LUCK!!\n");
    printf("\t\t\t\tPRESS any KEY followed by ENTER OR only the ENTER key to QUIT ");
    char ch = getchar();
    exit(0);
}

int main(int banyakArgumen, char *argumen[])
{   

    // Jika jumlah argumen salah maka tampilkan error
    if(banyakArgumen != 3 && banyakArgumen != 1){  
        printf("\n===============\nPerintah Salah!\n===============\n");
        printf("\n--------\nPETUNJUK\n--------\n\nRegistrasi:\n./Main\n\nLogin:\n./Main [username] [password]\n\n");
        return EXIT_FAILURE;
    }

    //Jika Menjalankan tanpa argumen lain (hanya './Main') akan di arah kan untuk registrasi
    else if(banyakArgumen == 1){
        printf("\nAnda berada di halaman Registrasi\n\nPilih:\n[0] Ke Halaman Login\n[1] Lanjut Registrasi\n: ");
        int pilih;
        scanf("%d", &pilih);
        if(pilih==0){
            printf("\n--------\nPETUNJUK\n--------\nSilahkan login dengan perintah:\n./Main [username] [password]\n\n");
            return 0;
        }
        
// REGISTRASI
    User new_user;

    printf("\nMasukkan username: ");
    scanf("%s", new_user.username);
    printf("Masukkan password: ");
    scanf("%s", new_user.password);

    FILE *file_login;
    file_login = fopen("database/login.bin", "ab"); // buka file binary untuk write
    fwrite(&new_user, sizeof(User), 1, file_login); // tulis struct ke file
    fclose(file_login); // tutup file
    return 0;
    }

// MENGAMBIL INPUT USER DARI CLA

    User user_input;
    strcpy(user_input.username, argumen[1]);
    strcpy(user_input.password, argumen[2]);
    
// LOGIN
    int login;
    // Membaca struct dari file
    User user_database;
    FILE *file_login;
    file_login = fopen("database/login.bin", "rb"); // buka file binary untuk read

    // Menghitung jumlah struct yang ada dalam file
    fseek(file_login, 0, SEEK_END); // Pindah ke akhir file
    long size = ftell(file_login); // Hitung jumlah byte dalam file
    int jumlahStruct = size / sizeof(User); // Hitung jumlah struct
    fseek(file_login, 0, SEEK_SET);
    for(int i = 1; i <= jumlahStruct; i++){
        fread(&user_database, sizeof(User), 1, file_login); // baca struct dari file
        //mencari username dan password yang cocok dari input user dan database
        if( (strcmp(user_input.username,user_database.username)==0) && (strcmp(user_input.password, user_database.password)==0) ){
            login = 1;
            break;
        }
        else{
            login = 0;
        }
    }
    fclose(file_login);

    // Cek apakah berhasil login
    if(login == 1){
        while(a != 1){start();}
        while(a != 2){rule();} 
        while(a != 3) { 
            while(ques != 15) {
                tampil_ques();
                opsi = toupper(opsi); 
                //Opsi pilihan jawaban
                if(opsi == 'A' || opsi == 'B' || opsi == 'C' || opsi == 'D') {
                    if(set[ques].solusi == opsi) {
                        //Jika jawaban benar akan menampilkan 'CORRECT ANSWER!!'
                        printf("\t\t\t  CORRECT ANSWER!!!! (MONEY WON: %lu)\n\t\t\t  Press ENTER to CONTINUE..", uang_skrg[ques]);
                        char ch = getchar();
                        getchar();
                        if(ques == 14) {
                            won();
                        }
                        if(ques == 3 || ques == 7 || ques == 11) {
                            checkpoint();
                        }
                    }
                    else {
                        //Jika jawaban salah akan menampilkan 'WRONG ANSWER'
                        printf("\t\t\t  WRONG ANSWER (Correct opsi: %c)\n\t\t\t  Press ENTER to CONTINUE..", set[ques].solusi);
                        char ch = getchar();
                        getchar();
                        if(check_uang() == 0) {
                            sorry();
                        }
                        else {
                            game_over();
                        }
                    }
                    update[ques+1]='>';
                }
                else if(opsi == 'Q') {
                    char ch;
                    printf("\t\t\t  Are you sure? [Y/N] ");
                    scanf(" %c", &ch);
                    ch = toupper(ch);
                    if(ch == 'Y') {
                        game_over();
                    }
                    else {
                        continue;
                    }
                }
                else {
                    continue;
                }
                ques++; 
            }
        }
        return 0;
    }else{
        //Pesan Error!
     printf("Login Failed\n");
     printf("Username atau Password yang Anda masukkan salah");
        return 0;
    }
}


