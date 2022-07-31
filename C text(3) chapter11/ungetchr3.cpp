#include<stdio.h>

#define BUFSIZE 256

extern char buffer_3[BUFSIZE];
extern int buf_no_3;
extern int front_3;
extern int rear_3;

int ungetchr_3(int ch) {
	if (buf_no_3 >= BUFSIZE) return EOF;
	else {
		buf_no_3++;
		buffer_3[rear_3++] = ch;
		if (rear_3 == BUFSIZE) rear_3 = 0;
		return ch;
	}
}