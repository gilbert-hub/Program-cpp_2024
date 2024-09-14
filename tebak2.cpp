#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));  // Inisialisasi seed untuk angka acak
    int target = std::rand() % 100 + 1;  // Angka acak antara 1 hingga 100
    int tebakan = 0;
    int kesempatan = 7;  // Batas kesempatan menebak

    printf("Selamat datang di permainan tebak angka!\n");
    printf("Saya telah memilih angka antara 1 sampai 100.\n");
    printf("Anda memiliki %d kesempatan untuk menebaknya.\n\n", kesempatan);

    while (kesempatan > 0) {
        printf("Masukkan tebakan anda: ");
        scanf("%d", &tebakan);

        if (tebakan > target) {
            printf("Terlalu besar! Coba lagi.\n");
        } else if (tebakan < target) {
            printf("Terlalu kecil! Coba lagi.\n");
        } else {
            printf("Selamat! Anda menebak angka yang benar.\n");
            return 0;  // Keluar dari permainan
        }

        kesempatan--;
        printf("Kesempatan tersisa: %d\n", kesempatan);
    }

    printf("Maaf, Anda kehabisan kesempatan. Angka yang benar adalah %d.\n", target);
    return 0;
}
