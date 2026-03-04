#include <stdio.h>

int main() {
    int n;
    int current, previous;
    int min, max;
    double avg;
    double min_avg, max_avg;

    // Membaca jumlah data
    scanf("%d", &n);

    if (n > 0) {
        // Membaca angka pertama
        scanf("%d", &previous);
        min = previous;
        max = previous;

        if (n > 1) {
            // Membaca angka kedua
            scanf("%d", &current);

            // Update min dan max
            if (current < min) min = current;
            if (current > max) max = current;

            // Hitung rata-rata pertama
            avg = (previous + current) / 2.0;
            min_avg = avg;
            max_avg = avg;

            previous = current;

            // Membaca angka selanjutnya
            for (int i = 2; i < n; i++) {
                scanf("%d", &current);

                // Update min dan max
                if (current < min) min = current;
                if (current > max) max = current;

                // Hitung rata-rata dua angka berurutan
                avg = (previous + current) / 2.0;

                if (avg < min_avg) {
                    min_avg = avg;
                }

                if (avg > max_avg) {
                    max_avg = avg;
                }

                previous = current;
            }
        } else {
            // Jika hanya satu data
            min_avg = previous;
            max_avg = previous;
        }

        // Output sesuai urutan tugas
        printf("%d\n", min);
        printf("%d\n", max);
        printf("%.2f\n", min_avg);
        printf("%.2f\n", max_avg);
    }

    return 0;
}