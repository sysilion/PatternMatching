/*
 * sm.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: Administrator
 */

#include "pattern.h"
#include <math.h>

static int result[2];

void sm() {
	char a[11], b[11];
	char input[10];
	int length, i, input_length;

	printf("Input character : ");
	scanf("%s %d", &input, &length);

	for (i = 0; i < 10; i++) {
		if (input[i] == NULL) {
			input_length = i;
			break;
		}
	}

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		a[i] = input[rand() % input_length];
	for (i = 0; i < 10; i++)
		b[i] = input[rand() % input_length];
	a[10] = NULL, b[10] = NULL;

	printf("\nfirst data :\t%s\nsecond data :\t%s\n\n", a, b);

	String_Matching(a, b, length);

	printf("first loc :\t%d\nsecond loc :\t%d", result[0], result[1]);
}

void String_Matching(char input1[], char input2[], int length) {
	int i, j, k;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (input1[i] == input2[j]) {
				for (k = 1; k < 10 - j; k++) {
					if (input1[i + k] != input2[j + k])
						break;
					if (length == k + 1) {
						result[0] = i + 1;
						result[1] = j + 1;
						return;
					}
				}
			}
		}
	}
}

