#include<stdio.h>

#define BUFSIZE 256

char buffer_3[BUFSIZE]{};
int buf_no_3 = 0;
int front_3 = 0;
int rear_3 = 0;

int getchr_3() {
	if (buf_no_3 <= 0) return getchar();
	else {
		int temp = 0;
		buf_no_3--;
		temp = buffer_3[front_3++];
		if (front_3 == BUFSIZE) front_3 = 0;
		return temp;
	}
}