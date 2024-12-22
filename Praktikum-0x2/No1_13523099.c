/**
 * Nama: Daniel Pedrosa Wu
 * NIM: 13523099
 * Jawaban dari soal terkait:  Monitoring
 */

#include <stdio.h>

void trap() {
    printf("Admiral Ackbar: IT'S A TRAP");
}

void Monitoring(char input[]) {
    int x[6]; // could be individual variables but I just made it an array to look cleaner

    sscanf(input, "%d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5]);
    if ((x[0] != 1) || (x[1] != 3) || (x[2] != 5) || (x[3] != 7) || (x[4] != 9) || (x[5] != 10)) {
        trap();
    }
    return;
}
