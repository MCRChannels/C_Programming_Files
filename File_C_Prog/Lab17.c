#include <stdio.h>
#include <ctype.h>

void shortestMessage(int word1, int word2, int word3);

void main() {
    int max = 10, word1 = 0, word2 = 0, word3 = 0;
    int i = 0;
    char a1 = '\0', a2 = '\0', a3 = '\0', a4 = '\0', a5 = '\0', a6 = '\0', a7 = '\0', a8 = '\0', a9 = '\0', a10 = '\0';
    char b1 = '\0', b2 = '\0', b3 = '\0', b4 = '\0', b5 = '\0', b6 = '\0', b7 = '\0', b8 = '\0', b9 = '\0', b10 = '\0';
    char c1 = '\0', c2 = '\0', c3 = '\0', c4 = '\0', c5 = '\0', c6 = '\0', c7 = '\0', c8 = '\0', c9 = '\0', c10 = '\0';
	char end;

    do {
		printf("*** Please enter a word (maximum 10 letters) ***\n");
	    // Input word1
	    i = 0;
	    while (getchar() != '\n');

	    printf("word1: ");
	    while (i < max) {
	        char ch = getchar();
	        if (ch == '\n')
	            break;
	        if (isalpha(ch) || isdigit(ch)) {
	            if (word1 == 0) a1 = ch;
	            if (word1 == 1) a2 = ch;
	            if (word1 == 2) a3 = ch;
	            if (word1 == 3) a4 = ch;
	            if (word1 == 4) a5 = ch;
	            if (word1 == 5) a6 = ch;
	            if (word1 == 6) a7 = ch;
	            if (word1 == 7) a8 = ch;
	            if (word1 == 8) a9 = ch;
	            if (word1 == 9) a10 = ch;
	            word1++;
	        }
	    }
	    // Input word2
	    printf("word2: ");
	    while (i < max) {
	        char ch = getchar();
	        if (ch == '\n')
	            break;
	        if (isalpha(ch) || isdigit(ch)) {
	            if (word2 == 0) b1 = ch;
	            if (word2 == 1) b2 = ch;
	            if (word2 == 2) b3 = ch;
	            if (word2 == 3) b4 = ch;
	            if (word2 == 4) b5 = ch;
	            if (word2 == 5) b6 = ch;
	            if (word2 == 6) b7 = ch;
	            if (word2 == 7) b8 = ch;
	            if (word2 == 8) b9 = ch;
	            if (word2 == 9) b10 = ch;
	            word2++;
	        }
	    }
	    // Input word3
	    printf("word3: ");
	    while (i < max) {
	        char ch = getchar();
	        if (ch == '\n')
	            break;
	        if (isalpha(ch) || isdigit(ch)) {
	            if (word3 == 0) c1 = ch;
	            if (word3 == 1) c2 = ch;
	            if (word3 == 2) c3 = ch;
	            if (word3 == 3) c4 = ch;
	            if (word3 == 4) c5 = ch;
	            if (word3 == 5) c6 = ch;
	            if (word3 == 6) c7 = ch;
	            if (word3 == 7) c8 = ch;
	            if (word3 == 8) c9 = ch;
	            if (word3 == 9) c10 = ch;
	            word3++;
	        }
	    }
    	shortestMessage(word1, word2, word3);

    	while (getchar() != '\n');

    	printf("Do you want to continue? (Y/N) : ");
    	scanf(" %c", &end);
	} while (end != 'N' && end != 'n');
}

void shortestMessage(int word1, int word2, int word3) {
    int result;
    // Calculate the shortest word
    if (word1 < word2) {
        result = word1;
    } else {
        result = word2;
    }
    if (result > word3) {
        result = word3;
    }
    // Display the shortest word
    if (result == word1) {
        printf("word1 is shortest\n");
        printf("letters are %d\n", result);
    } else if (result == word2) {
        printf("word2 is shortest\n");
        printf("letters are %d\n", result);
    } else if (result == word3) {
        printf("word3 is shortest\n");
        printf("letters are %d\n", result);
    }
}

