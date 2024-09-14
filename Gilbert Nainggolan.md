# PERMAINAN SEDERHANA TEBAK ANGKA

Permainan ini merupakan permainan **tebak angka** sederhana yang ditulis dalam bahasa **C++**. Dalam Program ini dirancang untuk memilih angka secara acak dari 1 hingga 100 sehingga kita harus menebak angka tersebut. Jika ada kesalahan, maka akan keluar instruksi "terlalu besar" atau "terlalu kecil". Pemain diberikan 7 kesempatan untuk menebak angka yang benar.

## Fitur
- Angka acak dipilih dari rentang 1 sampai 100.
- Pemberian instruksi tebakan jika salah berupa petunjuk apakah angka yang ditebak terlalu besar atau terlalu kecil.
- Batas menebak angka sebanyak 7 kesempatan untuk menebak angka yang benar.
- Program memberi tahu hasil setelah kesempatan habis.

## Cara Bermain
1. Jalankan program.
2. Masukkan angka tebakan antara 1 hingga 100.
3. Program akan memberi tahu apakah tebakanmu terlalu besar atau terlalu kecil.
4. Lanjutkan menebak hingga menemukan angka yang benar atau kesempatan habis.
5. Jika tebakan benar, program akan menampilkan pesan kemenangan.
6. Jika kesempatan habis, program akan menampilkan angka yang benar.

## Cara Melakukan

### 1. Buat Program
Buat program dengan menggunakan bahasa pemrograman **C++**. Pada program ini, saya menggunakan library `cstdio`, `cstdlib`, dan `ctime`.
Berikut adalah contoh programnya :

```bash
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

```

### 2. Kompilasi Program
Bisa menggunakan **compiler C++** untuk mengkompilasi program. Berikut adalah cara mengkompilasi menggunakan **g++**:

```bash
g++ -o tebak_angka tebak_angka.cpp
```

### 3. Jalankan Program
Setelah dikompilasi, jalankan file yang telah dihasilkan:

```bash
./tebak_angka
```

### Contoh Output:

```
Selamat datang di permainan tebak angka!
Saya telah memilih angka antara 1 sampai 100.
Anda memiliki 7 kesempatan untuk menebaknya.

Masukkan tebakan anda: 23
Terlalu kecil! Coba lagi.
Kesempatan tersisa: 6

Masukkan tebakan anda: 50
Terlalu besar! Coba lagi.
Kesempatan tersisa: 5

Masukkan tebakan anda: 55
Terlalu besar! Coba lagi.
Kesempatan tersisa: 4

Masukkan tebakan anda: 90
Terlalu besar! Coba lagi.
Kesempatan tersisa: 3

Masukkan tebakan anda: 70
Terlalu besar! Coba lagi.
Kesempatan tersisa: 2

Masukkan tebakan anda: 80
Terlalu besar! Coba lagi.
Kesempatan tersisa: 1

Masukkan tebakan anda: 78
Terlalu besar! Coba lagi.
Kesempatan tersisa: 0

Maaf, Anda kehabisan kesempatan. Angka yang benar adalah 40.
...
```

## Teknologi yang Digunakan
- **Bahasa**: C++
- **Standard Input/Output**: Menggunakan `printf` dan `scanf` dari library `cstdio`
- **Generator Angka Acak**: Menggunakan `std::srand` dan `std::rand` dari library `cstdlib`


---
