#include<stdio.h>

#define BUFSIZE 256

char buffer_1[BUFSIZE]{};
int buf_no_1 = 0;
int front_1 = 0;
int rear_1 = 0;

int getchr_1() {
	if (buf_no_1 <= 0) return getchar();
	else {
		int temp = 0;
		buf_no_1--;
		temp = buffer_1[front_1++];
		if (front_1 == BUFSIZE) front_1 = 0;
		return temp;
	}
}

int ungetchr_1(int ch) {
	if (buf_no_1 >= BUFSIZE) return EOF;
	else {
		buf_no_1++;
		buffer_1[rear_1++] = ch;
		if (rear_1 == BUFSIZE) rear_1 = 0;
		return ch;
	}
}