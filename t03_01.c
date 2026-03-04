// Marissa Victoria Silalahi - 12S25055

#include <stdio.h> 


int main() {
    int n; 
    int bilangan; 
    int min, max; 
    scanf("%d", &n);
if (n > 0) {
        scanf("%d", &bilangan);
        min = bilangan; 
        max = bilangan; 
    }
    for (int i = 1; i < n; i++) {
        scanf("%d", &bilangan);
        if (bilangan < min) {
            min = bilangan; 
        }
        if (bilangan > max) {
            max = bilangan; 
        }
    }
    printf("Nilai minimum: %d\n", min);
    printf("Nilai maksimum: %d\n", max);
    return 0;
}
    