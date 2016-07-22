/*
 * main.c
 *
 *  Created on: 2014/08/18
 */

#include <stdio.h>
#include <stdlib.h>		/* malloc(),free(),qsort() */
#include <string.h>

#define NUM_WORD  	 3	/* ソートする単語の数 */

/* qsort関数で使用する比較関数 */
int comp(const void *arg1, const void *arg2) {
	return strcmp( *(char**)arg2, *(char**)arg1 );
}

int main(void)
{
	char *list[NUM_WORD] = {"good","hello","bye"};
	int i;

	/* 単語を並び替える(qsort関数を使用) */
	qsort(list, NUM_WORD, sizeof(char*), comp);

	/* 単語を3つ出力する */
	for(i = 0; i < NUM_WORD; i++) {
		printf("%s ",list[i]);
	}
	return 0;
}

