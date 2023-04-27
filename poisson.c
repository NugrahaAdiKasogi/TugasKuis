#include <stdio.h>
#include <math.h>

int main()
{
    float p_30, lambda, p_t;

    // Input peluang melihat mobil dalam 30 menit
    printf("Masukkan peluang melihat mobil dalam 30 menit: ");
    scanf("%f", &p_30);

    // Input waktu t dalam menit
    printf("Masukkan waktu t dalam menit: ");
    scanf("%f", &p_t);

    // Hitung lambda
    lambda = p_30 * 30 / 60;

    // Hitung peluang melihat mobil dalam waktu t
    float p_t_min = p_t / 60; // konversi ke jam
    float p_t_mobil = 1 - exp(-lambda * p_t_min);

    // Output hasil
    printf("Peluang melihat minimal satu mobil di jalan raya dalam %d menit adalah %f\n", (int)p_t, p_t_mobil);

    return 0;
}
