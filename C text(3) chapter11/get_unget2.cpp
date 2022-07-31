#include<stdio.h>

#define BUFSIZE 256

static char buffer_2[BUFSIZE]{};
static int buf_no_2 = 0;
static int front_2 = 0;
static int rear_2 = 0;

int getchr_2() {
	if (buf_no_2 <= 0) return getchar();
	else {
		int temp = 0;
		buf_no_2--;
		temp = buffer_2[front_2++];
		if (front_2 == BUFSIZE) front_2 = 0;
		return temp;
	}
}

int ungetchr_2(int ch) {
	if (buf_no_2 >= BUFSIZE) return EOF;
	else {
		buf_no_2++;
		buffer_2[rear_2++] = ch;
		if (rear_2 == BUFSIZE) rear_2 = 0;
		return ch;
	}
}