/**
 * Nama: Daniel Pedrosa Wu
 * NIM: 13523099
 * Jawaban dari soal terkait:  Eleven
 */

#include <stdio.h>

void trap() {
    printf("Admiral Ackbar: IT'S A TRAP");
}

void feel_like_eleven(char input[], int x[]) {
    int length;
    
    length = sscanf(input, "%d %d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5], &x[6]);
    if (length < 7) {
        trap();
    }
    return;
}

void Eleven(char input[]) {
    int x[7];

    feel_like_eleven(input, x);
    if (x[0] != 7) {
        trap();
        return;
    }
    for (int i = 1; i < 7; i++) {
        if ((i % 2) == 0) {
            if (x[i] != i + x[i - 1] * 2) {
                trap();
                break; // break is used to just simulate the program terminating
            }
        }
        else {
            if (x[i] != i * x[i - 1] * 2) {
                trap();
                break; // same here
            }
        }
    }
    return;
}