#include<stdio.h>

#define _ver4


#ifdef _ver1
#include<ctype.h>

int getchr_1();
int ungetchr_1(int ch);

int getnum() {
	int c = 0; 
	int x = 0;
	int ch = 0;

	while ((ch = getchr_1()) != EOF && isdigit(ch)) {
		x = x * 10 + ch - '0';
		c++;
	}
	if (ch != EOF) ungetchr_1(ch);
	if (c) printf("%d\n", x * 2);

	return ch;
}

int getnnum() {
	int ch = 0;

	while ((ch = getchr_1()) != EOF && !isdigit(ch)) putchar(ch);
	if (ch != EOF) ungetchr_1(ch);
	putchar('\n');

	return ch;
}

int main(void) {
	while (getnum() != EOF) {
		if (getnnum() == EOF) break;
	}

	return 0;
}
#endif

#ifdef _ver2
#include<ctype.h>

int getchr_2();
int ungetchr_2(int ch);

int getnum() {
	int c = 0; 
	int x = 0;
	int ch = 0;

	while ((ch = getchr_2()) != EOF && isdigit(ch)) {
		x = x * 10 + ch - '0';
		c++;
	}
	if (ch != EOF) ungetchr_2(ch);
	if (c) printf("%d\n", x * 2);

	return ch;
}

int getnnum() {
	int ch = 0;

	while ((ch = getchr_2()) != EOF && !isdigit(ch)) putchar(ch);
	if (ch != EOF) ungetchr_2(ch);
	putchar('\n');

	return ch;
}

int main(void) {
	while (getnum() != EOF) {
		if (getnnum() == EOF) break;
	}

	return 0;
}
#endif

#ifdef _ver3
#include<ctype.h>

int getchr();
int ungetchr(int ch);

int getnum() {
	int c = 0; 
	int x = 0;
	int ch = 0;

	while ((ch = getchr()) != EOF && isdigit(ch)) {
		x = x * 10 + ch - '0';
		c++;
	}
	if (ch != EOF) ungetchr(ch);
	if (c) printf("%d\n", x * 2);

	return ch;
}

int getnnum() {
	int ch = 0;

	while ((ch = getchr()) != EOF && !isdigit(ch)) putchar(ch);
	if (ch != EOF) ungetchr(ch);
	putchar('\n');

	return ch;
}

int main(void) {
	while (getnum() != EOF) {
		if (getnnum() == EOF) break;
	}

	return 0;
}
#endif

#ifdef _ver4
#include<ctype.h>
#include"getchr.h"

int getnum() {
	int c = 0;
	int x = 0;
	int ch = 0;

	while ((ch = getchr()) != EOF && isdigit(ch)) {
		x = x * 10 + ch - '0';
		c++;
	}
	if (ch != EOF) ungetchr(ch);
	if (c) printf("%d\n", x * 2);

	return ch;
}

int getnnum() {
	int ch = 0;

	while ((ch = getchr()) != EOF && !isdigit(ch)) putchar(ch);
	if (ch != EOF) ungetchr(ch);
	putchar('\n');

	return ch;
}

int main(void) {
	while (getnum() != EOF) {
		if (getnnum() == EOF) break;
	}

	return 0;
}
#endif