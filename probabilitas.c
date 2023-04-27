#include <stdio.h>

int main() {
    // deklarasi variabel dan inisialisasi probabilitas
    /*
        H = Hari hujan
        T = Hari tidak hujan
        P = Lalu lintas padat
        Q = Lalu lintas tidak padat
        L = Andi terlambat
        N = Andi tidak terlambat
    */
    float pH; // inputan probabilitas hari hujan
        printf("Masukkan nilai probabilitas hari hujan: ");
        scanf("%f", &pH);

    float pT = 2.0 / 3.0; // probabilitas hari tidak hujan

    float pP_H = 0.5; // probabilitas lalu lintas padat jika hari hujan
    
    float pP_T; // inputan probabilitas lalu lintas padat jika hari tidak hujan
        printf("Masukkan nilai probabilitas lalu lintas padat jika hari tidak hujan: ");
        scanf("%f", &pP_T);

    float pL_HP = 0.5; // probabilitas Andi terlambat jika hari hujan dan lalu lintas padat

    float pL_TQ = 0.125; // probabilitas Andi terlambat jika hari tidak hujan dan lalu lintas tidak padat
    
    float pL_HQ = 0.25; // probabilitas Andi terlambat jika hari hujan dan lalu lintas tidak padat

    float pL_TP = 0.25; // probabilitas Andi terlambat jika hari tidak hujan dan lalu lintas padat

    float pN_HP = 0.75; // probabilitas Andi tidak terlambat jika hari hujan dan lalu lintas padat

    float pN_TQ = 0.75; // probabilitas Andi tidak terlambat jika hari tidak hujan dan lalu lintas tidak padat

    float pN_HQ ; // inputan probabilitas Andi tidak terlambat jika hari hujan dan lalu lintas tidak padat
        printf("Masukkan nilai probabilitas Andi tidak terlambat jika hari hujan dan lalu lintas tidak padat: ");
        scanf("%f", &pN_HQ);

    float pN_TP ; // inputan probabilitas Andi tidak terlambat jika hari tidak hujan dan lalu lintas padat
        printf("Masukkan nilai probabilitas Andi tidak terlambat jika hari tidak hujan dan lalu lintas padat: ");
        scanf("%f", &pN_TP);

    // [A] hitung probabilitas Andi tidak terlambat pada kondisi hari tidak hujan dan lalu lintas padat
    float pNTP = 1.0 - pL_TP; // probabilitas Andi tidak terlambat jika hari tidak hujan dan lalu lintas padat

    // hitung probabilitas Andi akan terlambat
    float pL = pH*pP_H*pL_HP + pT*(1.0-pP_T)*pL_TQ + pH*(1.0-pP_H)*pL_HQ + pT*pP_T*pL_TP; // probabilitas Andi terlambat

    // hitung probabilitas pada waktu itu hari hujan jika diketahui Andi datang terlambat
    float pHL = pH*pP_H*pL_HP / pL; // probabilitas hari hujan jika Andi datang terlambat

    // tampilkan hasil
    printf("\n===Jawaban===\n\n");
    printf("Probabilitas Andi tidak terlambat pada kondisi hari tidak hujan dan lalu lintas padat: %.2f\n", pNTP);
    printf("Probabilitas Andi akan terlambat: %.2f\n", pL);
    printf("Probabilitas pada waktu itu hari hujan jika diketahui Andi datang terlambat: %.2f\n",pHL);
}