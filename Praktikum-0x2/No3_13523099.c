/**
 * Nama: Daniel Pedrosa Wu
 * NIM: 13523099
 * Jawaban dari soal terkait:  Bakenohana
 */

#include <stdio.h>

void trap() {
    printf("Admiral Ackbar: IT'S A TRAP");
}

void check(char x,char y) {
	int result;
	char temp = x;
	
	int i = 0;
	while(1) {
		if (i > 5) {
			trap();
			return;
		}
		result = temp + i * 3;
		temp = (result % 26) + 'a'; // simplified with the help of ChatGPT, but the assembly added 0x61 at the end which raised my
		if (temp == y) {			// suspicion that it is trying to keep the value within the 'a' to 'z' ASCII range
			break;
		}
		i++;
	}
	return;
}

void Bakenohana(char input[]) {
	check(input[0],'i');
	check(input[1],'f');
	check(input[2],'s');
	check(input[3],'t');
	check(input[4],'i');
	return;
}