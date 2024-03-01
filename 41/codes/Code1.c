#include <stdio.h>

int z(int n) {
    int sum = 0;
    for (int k = -100; k <= 2; k++) {  // Assuming a range from -100 to 2
        if (k - n + 1 >= 0) {
            sum += 2;
        }
    }
    return sum;
}

int main() {
    FILE *fp;
    fp = fopen("data.txt1", "w"); // Open file for writing
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Generate values for n and calculate z(n)
    for (int n = -10; n <= 10; n++) {
        int result = z(n);
        fprintf(fp, "%d %d\n", n, result); // Write n and z(n) to file
    }
    
    fclose(fp); // Close file
    return 0;
}

