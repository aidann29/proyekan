//PROYEK !
//Faris Hassan Aly Firman
//Muhammad Aidan
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h> 

bool arr[2] = {true, false};
static bool condition; 
int i, j;
enum Harga { Bandung = 0, Tasikmalaya = 1, Banten = 2, Jogjakarta = 3, Semarang = 4, Surabaya = 5 };
void arrow(int posisiAsli,int posisiArrow);

void pesantiket();
void info();
void pembayaran();
void print();
void keluar();
void cekdata();

int main() {
 int position = 1;
 int keyPressed = 0;
 system ("cls");
 system ("Color F4");
 printf("\t\t");
 for(i=0;i<49;i++) {
  printf("=");
  Sleep(15);
 } 
 printf("\n\t\t|\t\tPemesanan Tiket Bus\t\t|");
 printf("\n\t\t|\t\t     AF TRAVEL\t\t\t|\n");
 printf("\t\t");
 for(i=0;i<49;i++) {
  printf("=");
  Sleep(15);
 }
 printf("\n\nCABANG JAKARTA (KP. RAMBUTAN)\n");
 
 while (keyPressed != 13) {
 system ("cls");
 system ("Color F4");
 printf("\t\t");
 for(i=0;i<49;i++) {
  printf("=");
 } 
 printf("\n\t\t|\t\tPemesanan Tiket Bus\t\t|");
 printf("\n\t\t|\t\t     AF TRAVEL\t\t\t|\n");
 printf("\t\t");
 for(i=0;i<49;i++) {
  printf("=");
 }
 printf("\n\nCABANG JAKARTA (KP. RAMBUTAN)\n\n");
 printf("Select\n");
 arrow(1,position); printf("1. Pesan Tiket\n");
 arrow(2,position); printf("2. Info\n");
 arrow(3,position); printf("3. Pembayaran\n");
 arrow(4,position); printf("4. Print Tiket\n");
 arrow(5,position); printf("5. Exit\n");
 
 keyPressed = getch();
 if(keyPressed == 80 && position != 5) {
  position++;
 }else if (keyPressed == 72 && position != 1) {
 position--;
 } else {
  position = position;
 }
}
 switch(position) {
  case 1:
   position == '1';
   pesantiket();
   condition = arr[0];
   return main();
   break;
  case 2:
   position == '2';
   info();
   return main();
   break;
  case 3:
   position == '3';
   pembayaran();
   return main();
   break;
  case 4:
   position == '4';
   print();
   return main();
   break;
  case 5:
   position == '5';
   keluar();
   break;
 }
}

void arrow(int posisiAsli,int posisiArrow) { //menampilkan arrow di main menu
 if(posisiAsli == posisiArrow){
  printf("--> -");
 } else{
  printf("     ");
 }
}

void pesantiket() {
 if(condition == true){
  printf("\n\nAnda sudah melakukan pemesanan tiket!");
  Sleep(400);
  printf("\nSilahkan melakukan pembayaran dan mencetak tiket anda terlebih dahulu\njika anda ingin memesan tiket lagi");
 getch();
 } else {
  system("cls");
  printf("\tMENU PEMESANAN TIKET\n");
  getch();
 }
}

void info() {
  system("cls");
  printf("\tINFO PENGGUNAAN PROGRAM\n");
  getch(); 
}
void pembayaran() { //menampilkan menu pembayaran
 if(condition == false) {
  printf("\n\nLakukan pemesanan tiket terlebih dahulu!");
  getch();
 } else {
  system("cls");
  printf("\tMENU PEMBAYARAN\n");
  getch();
 }
}

void print() { //fungsi untuk mencetak tiket
 if(condition == false){
  printf("\n\nLakukan pemesanan tiket terlebih dahulu!");
 getch();
 } else {
 system("cls");
 cekdata();
 printf("\nINI TIKET ANDA");
 getch();
 }
}


void keluar() { //fungsi untuk keluar
 system("cls"); 
 printf("\tEXIT PROGRAM . . .\n");
 printf("\n\tTERIMA KASIH TELAH MENGGUNAKAN JASA KAMI");
 getch();
}

void cekdata() { //fungsi untuk mengecek data pemesan tiket
 printf("\nMENGECEK DATA PEMESANAN . . .\n");
}
