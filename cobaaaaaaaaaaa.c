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
static int jumlahtiket;
static int hargatiket;
static int tujuanbus;
static int jenisbus;
int i, j;
long int Harga[] = {70000, 85000, 110000, 225000, 255000, 370000};
enum Tujuan { Bandung = 0, Tasikmalaya = 1, Banten = 2, Jogjakarta = 3, Semarang = 4, Surabaya = 5 };
void arrow(int posisiAsli,int posisiArrow);

void pesantiket();
void info();
void pembayaran();
void print();
void keluar();
void cekdata();
int kelas(int A);
void cetak(char kata[],int n);

char A[7] = "BANDUNG";
char B[11] = "TASIKMALAYA";
char C[6] = "BANTEN";
char D[10] = "JOGJAKARTA";
char E[8] = "SEMARANG";
char F[8] = "SURABAYA";
char Eko[7] = "EKONOMI";
char Bis[6] = "BISNIS";
char Eks[9] = "EKSKLUSIF";

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
	int position = 1;
	int keyPressed = 0;
	if(condition == true){
		printf("\n\nAnda sudah melakukan pemesanan tiket!");
  		Sleep(400);
  		printf("\nSilahkan melakukan pembayaran dan mencetak tiket anda terlebih dahulu\njika anda ingin memesan tiket lagi");
 		getch();
 	} else {
 		pesan:
 		while (keyPressed != 13) {
  			system("cls");
  			printf("\tMENU PEMESANAN TIKET\n");
  			printf("\n\nPilih tujuan anda :\n");
  			arrow(1,position); printf("1. Bandung (Rp.70,000)\n");
			arrow(2,position); printf("2. Tasikmalaya (Rp.85,000)\n");
			arrow(3,position); printf("3. Banten (Rp.110,000)\n");
			arrow(4,position); printf("4. Jogjakarta (Rp.225,000)\n");
 			arrow(5,position); printf("5. Semarang (Rp.255,000)\n");
  			arrow(6,position); printf("6. Surabaya (Rp.370,000)\n");
 			keyPressed = getch();
 			if(keyPressed == 80 && position != 6) {
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
   				tujuanbus = Bandung;
  				hargatiket = kelas(tujuanbus);
   				break;
			case 2:
   				position == '2';
   				tujuanbus = Tasikmalaya;
  				hargatiket = kelas(tujuanbus);
				break;
			case 3:
   				position == '3';
   				tujuanbus = Banten;
  				hargatiket = kelas(tujuanbus);
   				break;
  			case 4:
  				position == '4';
   				tujuanbus = Jogjakarta;
  				hargatiket = kelas(tujuanbus);
	   			break;
			case 5:
				position == '5';
   				tujuanbus = Semarang;
  				hargatiket = kelas(tujuanbus);
	   			break;
	   		case 6:
	   			position == '6';
   				tujuanbus = Surabaya;
  				hargatiket = kelas(tujuanbus);
	   			break;
		}
	  	cekdata();
	  	getch();
	  	printf("\n\nPress any key to continue . . .");
	}
}


void pembayaran() { //menampilkan menu pembayaran
	if(condition == false) {
		printf("\n\nLakukan pemesanan tiket terlebih dahulu!");
		getch();
	} else {
		system("cls");
		printf("\tMENU PEMBAYARAN\n\n");
		cekdata();
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
		condition = arr[1];
	}
}


void keluar() { //fungsi untuk keluar
	system("cls"); 
	printf("\tEXIT PROGRAM . . .\n");
	printf("\n\tTERIMA KASIH TELAH MENGGUNAKAN JASA KAMI");
	getch();
}

void cekdata() { //fungsi untuk mengecek data pemesan tiket
	printf("\n\tDATA PEMESANAN \n\n");
	printf("TUJUAN PERJALANAN: ");
	switch(tujuanbus) {
		case 0:
			cetak(A, 7);
			break;
		case 1:
			cetak(B, 11);
			break;
		case 2:
			cetak(C, 6);
			break;
		case 3:
			cetak(D, 10);
			break;
		case 4:
			cetak(E, 8);
			break;
		case 5:
			cetak(F, 8);
			break;
	}
	printf("\nKELAS BUS: ");
	switch (jenisbus) {
		case 1:
			cetak(Eko, 7);
			break;
		case 2:
			cetak(Bis, 6);
			break;
		case 3:
			cetak(Eks, 9);
			break;
	}
	printf("\nJUMLAH TIKET: %d", jumlahtiket);
	printf("\nTOTAL HARGA: Rp.%d", hargatiket);
}

int kelas(int A)	{
	int i, total, jenis;
	int JenisBus[3] = {0, 30000, 60000};
	int position = 1;
	int keyPressed = 0;
	while (keyPressed != 13) {
  			printf("\n\nPilih kelas bus :\n");
  			arrow(1,position); printf("1. Ekonomi\n");
			arrow(2,position); printf("2. Bisnis\n");
			arrow(3,position); printf("3. Eksekutif\n");
 			keyPressed = getch();
 			if(keyPressed == 80 && position != 3) {
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
   				jenis = JenisBus[0];
   				jenisbus = 1;
   				break;
			case 2:
   				position == '2';
   				jenis = JenisBus[1];
   				jenisbus = 2;
				break;
			case 3:
   				position == '3';
   				jenis = JenisBus[2];
   				jenisbus = 3;
   				break;
   	}
	pilih:
	printf("\nJumlah tiket yang ingin dipesan : ");scanf("%d", &jumlahtiket);
	if(jumlahtiket <= 0)	{
		printf("\n\n\t\tHanya masukan angka bernilai lebih dari nol!");
		goto pilih;
	} else
	total = (Harga[A] + jenis)*jumlahtiket;
	return total;	
}

void cetak(char kata[],int n) {
	for(i=0;i<n;i++) {
		printf("%c", kata[i]);
	}
}




void info() {
  system("cls");
  printf("\t\t\t\tINFO PENGGUNAAN PROGRAM\n\n\n");
  printf("\n\t\t\t");
printf("\n\t\t\t  __");
printf("\n\t\t\t    \\");
printf("\n\t\t\t     \\_______________________");
printf("\n\t\t\t      \\                     \\");
printf("\n\t\t\t       \\                     \\");
printf("\n\t\t\t        \\                     \\");
printf("\n\t\t\t         \\                     \\");
printf("\n\t\t\t          \\_____________________\\");
printf("\n\t\t\t              ()            ()");
printf("\n\n\n\t\t\t\t       |-------|");
printf("\n\t\t\t\t       |   1   |");
printf("\n\t\t\t\t       |-------|");

printf("\n\n\t\t\t\t     Pesan tiket mu");
printf("\n\n\t\t\t\t     press any key to go next step");


getch();
system("cls");
printf("\n\n\t\t\t |---------------------------------------|");
printf("\n\t\t\t |\t\t\t                 |");
printf("\n\t\t\t |\t\t\t                 |");
printf("\n\t\t\t |\t\t____    _____\t    \t |");
printf("\n\t\t\t |\t\t|___\\  |    |\t    \t |");
printf("\n\t\t\t |\t\t|   \\  |____|\t      \t |");
printf("\n\t\t\t |\t\t|    \\ |\t         |");
printf("\n\t\t\t |\t\t\t            \t |");
printf("\n\t\t\t |\t\t\t            \t |");
printf("\n\t\t\t |\t\t\t                 |");
printf("\n\t\t\t |---------------------------------------|\n\n");

printf("\n\n\n\n\t\t\t\t   	  |-------|");
printf("\n\t\t\t\t  	  |   2   |");
printf("\n\t\t\t\t  	  |-------|");

printf("\n\n\t\t\t\t       Bayar tiket mu");
printf("\n\n\t\t\t\t     press any key to go next step");


getch();
system("cls");
printf("\n\t\t\t\t          1111111");
printf("\n\t\t\t\t         1       1");
printf("\n\t\t\t\t         1       1");
printf("\n\t\t\t\t    111111       111111");
printf("\n\t\t\t\t    1111111111111111111");
printf("\n\t\t\t\t    1111111111111111111");
printf("\n\t\t\t\t    1111111111111111111");
printf("\n\t\t\t\t    1111           1111");
printf("\n\t\t\t\t    1111  -------  1111");
printf("\n\t\t\t\t      11  -------  11  ");
printf("\n\t\t\t\t      11           11  ");
printf("\n\t\t\t\t        11111111111");

printf("\n\n\n\n\n\t\t\t\t   	 |-------|");
printf("\n\t\t\t\t   	 |   3   |");
printf("\n\t\t\t\t  	 |-------|");

printf("\n\n\t\t\t\t      Print tiket mu");
printf("\n\n\t\t\t\t     press any key to go to menu");  
  getch(); 
}
