#include <stdio.h>

float crystalTienDien(int soKWh) {
    float bill = 0.0;

    if (soKWh <= 50) {
        bill = soKWh * 500.0;
    } else if (soKWh <= 100) {
        bill = 50 * 500.0 + (soKWh - 50) * 700.0;
    } else {
        bill = 50 * 500.0 + 50 * 700.0 + (soKWh - 100) * 900.0;
    }

    return bill;
}

int main() {
    int kWh;
    printf("The number of kWh used: ");
    scanf("%d", &kWh);

    float bill = crystalTienDien(kWh);
    printf("Total payment: %.2f VND\n", bill);

    return 0;
}

