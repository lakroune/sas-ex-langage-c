#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    time(&now); // Récupère le temps actuel

    printf("Temps brut (epoch) : %d\n", now);
    printf("Date/Heure : %s", ctime(&now));

    return 0;
}
