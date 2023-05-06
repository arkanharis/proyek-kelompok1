#include<stdio.h>
#include<conio.h>
int main()
{

char q;
char r;
int m=100;
int n=0;
char answer;

printf("Selamat datang \n\n\t ** Who wants to be the Millionare **\n");
printf("\n\nAyo memainkan game !!\n");
printf("\n Soal pertama untuk mendapatkan $%d adalah\n\n", m);

printf("> Siapa penemu perusahaan Apple?\n");
printf("A. Bill Gates\tB. Mark Zergberg\nC. Steve Jobs\tD. Adam weishaupt\n");
printf("Jawaban:");
scanf("%c", &answer);

if(answer == 'c' || answer == 'C')
{
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima Kasih telah bermain!\n");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;           
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah C\n tekan enter untuk melanjutkan\n\n", answer );
     getch();
}
printf("> Ratu Victoria duduk di tahta Inggris selama 63 tahun, dari masa Presiden AS hingga masa Presiden AS..\n");
printf("A. John Adams to Abraham Lincoln\tB. Martin Van Buren to William McKinley \nC. Ulysses S.Grant to Woodrow Wilson\tD. Andrew Jackson to Herbert Hoover\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'b' || answer == 'B')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==>");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
           printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
           
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah B\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> berikut ini kata-kata yang sama, kecuali \n");
printf("A. Jemu\t\tB. Jenuh \nC. Sulit\tD. Bosan\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'c' || answer == 'C')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah C\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> Tokoh jenaka cerita rakyat sunda yang berkepribadian khas, cerdik tetapi juga bodoh, bernama?\n");
printf("A. kancil\tB. Abu nawas \nC. kabayan\tD. bobo\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'c' || answer == 'C')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah C\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> gaya kupu-kupu, dada, bebas dan punggung, identik dengan olahraga?\n");
printf("A. tinju\tB. senam \nC. renang\tD. atlentik\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'c' || answer == 'C')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n ");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah C\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> manakah peribahasa yang berarti pendiam?\n");
printf("A. berat tangan\tB. berat mata \nC. berat mulut\tD. berat telinga\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'c' || answer == 'C')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah C\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> Menteri luar negeri yang mendapat julukan ' Si kancil ' adalah..\n");
printf("A. hassan wirajuda\tB. ali atalas \nC. adamm malik\tD. alwi shihab\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'c' || answer == 'C')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n ");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah C\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> Siapa nama karakter Batman dalam film?\n");
printf("A. Harvey dent\tB. louis fox \nC. bruce wayne\tD. max roger\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'c' || answer == 'C')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\n\tSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n ");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah C\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> Apa nama ibukota Afghanistan\n");
printf("A. kabul\tB. istanbul \nC. syria\tD. bhurma\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'a' || answer == 'A')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     printf("\nSELAMAT ANDA MEMENANGKAN $%d\n\n",m);
     n += 100;
     printf("Apakah anda ingin bermain lagi atau pulang kerumah dengan uang ini?\n");
     printf("untuk bermain lagi tekan : M \njika ingin keluar tekan : Q\n\n==> ");
          scanf("\n%c",&q);
          if(q=='m' || q=='M')
          printf("\nPertanyaan selanjutnya adalah\n");
          else {
          printf("Terima kasih telah bermain!\n ");
          printf("Uang yang anda peroleh adalah $%d", n);
          return 0;
          }
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah A\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("> Mana dibawah ini yang merupakan mamalia terbesar di dunia?\n");
printf("A. gajah\tB. paus biru \nC. dinasourus\tD. semua salah\n");
printf("Jawaban:");
scanf(" %c", &answer);

if(answer == 'b' || answer == 'B')
     {
     printf("%c adalah jawaban yang benar\n", answer);
     n += 100;
}
else
{
     printf("\n%c adalah jawaban yang salah\n jawaban yang benar adalah B\n tekan enter untuk melanjutkan\n\n", answer);
     getch();
}
printf("\n\tSelamat! anda telah berhasil menuntaskan game\n\n",m);
printf("Uang yang anda peroleh adalah $%d", n);
  return 0;
}
