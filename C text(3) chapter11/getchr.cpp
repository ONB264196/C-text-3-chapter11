#include<stdio.h>
#include"_getchr.h"
#include"getchr.h"

char __buffer[__BUFSIZE]{};
int __buf_no = 0;
int __front = 0;
int __rear = 0;

int getchr() {
	if (__buf_no <= 0) return getchar();
	else {
		int temp = 0;
		__buf_no--;
		temp = __buffer[__front++];
		if (__front == __BUFSIZE) __front = 0;
		return temp;
	}
}