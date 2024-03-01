#include <stdio.h>
#include <stdlib.h>

int z(int n) {
    return (n >= -1 && n <= 1) ? 8 : 6; // Assuming a range from -100 to 2
}

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");

    if (fp != NULL) {
        int n=-10;
       while (n <= 10) {
            fprintf(fp, "%d %d\n", n, z(n));
            n++;
        }
        fclose(fp);
        printf("Data written to data.txt successfully.\n");
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}

