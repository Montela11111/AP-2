#include <stdio.h>   // header standar untuk input output
#include <conio.h>   // untuk getch() (opsional, tergantung compiler)

int main ()
{  
    char nama[50];
    int nim;
    char kom[10];
    float ip;

    printf("Hello world\n");

    // input nama
    printf("Masukan nama : ");
    fgets(nama, sizeof(nama), stdin);

    // input nim
    printf("Masukan nim : ");
    scanf("%d", &nim);
    getchar(); // membersihkan enter dari buffer

    // input kom
    printf("Masukan KOM : ");
    fgets(kom, sizeof(kom), stdin);

    // input ip
    printf("Masukan ip : ");
    scanf("%f", &ip);

    // output
   

    printf("Nama : ");
    puts(nama);

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("IP  : %.2f\n", ip);

    getch(); // pause layar (opsional)
    return 0;
}