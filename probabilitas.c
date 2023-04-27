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
    float pH, pT, pP_H, pP_T, pL_HP, pL_TQ, pL_HQ, pL_TP, pN_HP, pN_TQ, pN_HQ, pN_TP;

    //inputan

    printf("Masukkan nilai probabilitas hari hujan: ");
    scanf("%f", &pH);

    printf("Masukkan nilai probabilitas lalu lintas padat jika hari hujan: ");
    scanf("%f", &pP_H);

    printf("Masukkan nilai probabilitas lalu lintas padat jika hari tidak hujan: ");
    scanf("%f", &pP_T);
    
    printf("Masukkan nilai probabilitas Andi terlambat jika hari hujan dan lalu lintas padat: ");
    scanf("%f", &pL_HP);

    printf("Masukkan nilai probabilitas Andi terlambat jika hari tidak hujan dan lalu lintas tidak padat: ");
    scanf("%f", &pL_TQ);

    printf("Masukkan nilai probabilitas Andi terlambat jika hari hujan dan lalu lintas tidak padat: ");
    scanf("%f", &pL_HQ);

    printf("Masukkan nilai probabilitas Andi terlambat jika hari tidak hujan dan lalu lintas padat: ");
    scanf("%f", &pL_TP);

    //batas
    // probabilitas hari tidak hujan
    pT = 1.0 - pH;

    // probabilitas Andi tidak terlambat jika hari hujan dan lalu lintas padat
    pN_HP = 1.0 - pL_HP;

    // probabilitas Andi tidak terlambat jika hari tidak hujan dan lalu lintas tidak padat
    pN_TQ = 1.0 - pL_TQ;
    //probabilitas Andi tidak terlambat jika hari hujan dan lalu lintas tidak padat
    pN_HQ = 1.0 - pL_HQ;

    //probabilitas Andi tidak terlambat jika hari tidak hujan dan lalu lintas padat
    pN_TP = 1.0 - pL_TP;

    // [A] hitung probabilitas Andi tidak terlambat pada kondisi hari tidak hujan dan lalu lintas padat
    float pNTP = pN_TP; // probabilitas Andi tidak terlambat jika hari tidak hujan dan lalu lintas padat

    // hitung probabilitas Andi akan terlambat
    float pL = pH*pP_H*pL_HP + pT*(1.0-pP_T)*pL_TQ + pH*(1.0-pP_H)*pL_HQ + pT*pP_T*pL_TP; // probabilitas Andi terlambat

    // hitung probabilitas pada waktu itu hari hujan jika diketahui Andi datang terlambat
    float pHL = pH*pP_H*pL_HP / pL; // probabilitas hari hujan jika Andi datang terlambat

    // tampilkan hasil
    printf("\n===Jawaban===\n\n");
    printf("Probabilitas Andi tidak terlambat pada kondisi hari tidak hujan dan lalu lintas padat: %.5f\n", pNTP);
    printf("Probabilitas Andi akan terlambat: %.5f\n", pL);
    printf("Probabilitas pada waktu itu hari hujan jika diketahui Andi datang terlambat: %.5f\n",pHL);
}
