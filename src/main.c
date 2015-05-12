/*
 * main.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: Administrator
 */

#include "pattern.h"

int main(){
	int go;

	printf("\n\t\tSelect Menu");
	printf("\n\t1. Simple Pattern Matching");
	printf("\n\t2. String Matching");
	printf("\n\t");
	printf("\n\t");

	scanf("%d", &go);


	switch (go) {
	case 1:
		spm();
		break;
	case 2:
		sm();
		break;
	}

	return 0;
}
