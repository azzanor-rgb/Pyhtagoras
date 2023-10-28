#include <iostream>
#include <cmath>

int main() {
    float a, b, c, hasil;
    char input;
    int pilihan;

awal:
    printf("====================================\n");
    printf("||      Menghitung Pythagoras     ||\n");
    printf("====================================\n");
    printf("\n");
    printf("Pilihan Menu:\n");
    printf("1. Menghitung Sisi Tegak  (A)\n");
    printf("2. Menghitung Sisi Datar  (B)\n");
    printf("3. Menghitung Sisi Miring (C)\n");
    {
     printf ("        __\n");
     printf ("       |  |__\n");
     printf ("       |     |__\n");
     printf ("       |        |__\n");
     printf ("   (A) |           |__  (C)\n");
     printf ("       |              |__\n");
     printf ("       |_________________|\n");
     printf ("               (B)        \n");
     printf ("Masukkan Pilihan: ");
     scanf("%d", &pilihan);
    }

    if (pilihan == 1) {
        printf("Menghitung Sisi Tegak\n");
        printf("Masukkan Sisi Miring: ");
        scanf("%f", &c);
        printf("Masukkan Sisi Datar : ");
        scanf("%f", &b);
        hasil = sqrt(pow(c, 2) - pow(b, 2));
        printf("Sisi Tegaknya Adalah: %.3f\n", hasil);
    } else if (pilihan == 2) {
        printf("Menghitung Sisi Datar\n");
        printf("Masukkan Sisi Miring: ");
        scanf("%f", &c);
        printf("Masukkan Sisi Tegak : ");
        scanf("%f", &a);
        hasil = sqrt(pow(c, 2) - pow(a, 2));
        printf("Sisi Datarnya Adalah: %.3f\n", hasil);
    } else if (pilihan == 3) {
        printf("Menghitung Sisi Miring\n");
        printf("Masukkan Sisi Tegak: ");
        scanf("%f", &a);
        printf("Masukkan Sisi Datar: ");
        scanf("%f", &b);
        hasil = sqrt(pow(a, 2) + pow(b, 2));
        printf("Sisi Miringnya Adalah: %.3f\n", hasil);
    } else {
        printf("Pilihan Belum Tersedia\n");
        goto awal;
    }

    printf("Apakah Anda Ingin Menghitung lagi? (y / t): ");
    scanf(" %c", &input);
    if (input == 'y' || input == 'Y') {
        goto awal;
    } else if (input == 't' || input == 'T') {
        printf("Anda Telah Keluar Dari Aplikasi\n");
    } else {
        printf("Input tidak valid, Anda Telah Keluar Dari Aplikasi\n");
    }
    return 0;
}