/*
 * spm.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: Administrator
 */

#include "pattern.h"

static int DATA_SIZE = 100;

void spm(){
	char a[100], b[10];

	printf("Input character : ");
	scanf("%s %s", &a, &b);

	printf("data :\t\t%s\nsearch string :\t%s\n\n", a, b);

	printf("result loc :\t%d", Simple_Pattern_Matching(a, b));
}

int Simple_Pattern_Matching(char input1[], char input2[]){
	int i, j;

	for (i = 0; i < 100; i++){
		if (input1[i] == NULL) {
			return -1;
		}
		else if (input1[i] == input2[0]){
			for (j = 1; j < 10; j++){
				if (input2[j] == NULL) {
					return i + 1;
				}
				else if (input1[i+j] != input2[j]) break;
			}
		}
	}
	return 0;
}

