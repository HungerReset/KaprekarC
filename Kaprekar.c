#include <stdio.h>
#include <stdbool.h>
#include "sort.c"

short int invn (short int n) {
	int d1 = n/1000, d2 = (n-d1*1000)/100, d3 = (n-d1*1000-d2*100)/10, d4 = n-d1*1000-d2*100-d3*10;
	short int r = d4*1000 + d3*100 + d2*10 + d1;
	return r;
}

int main () {
	
	short int in, cn, rn, iv, cu;
	int ct = 0;

	printf("Input Four Digit Number: ");
	scanf("%hd", &in);
	while (in > 10000 || in < 0) {
		printf("Input Four Digit Number: ");
		scanf("%hd", &in);
	}

	int crry[4];
	int *c;

	rn = in;

	while (rn != cu) {	
		cn = rn;
		cu = cn;
		int d1 = cn/1000, d2 = (cn-d1*1000)/100, d3 = (cn-d1*1000-d2*100)/10, d4 = cn-d1*1000-d2*100-d3*10;
		int drry[4] = {d1, d2, d3, d4};
		c = sort(drry,4);
		cn = c[0]*1000+c[1]*100+c[2]*10+c[3];
		iv = invn(cn);
		rn = iv - cn;
		ct++;
		printf("%i | %hd - %hd = %hd\n", ct, iv, cn, rn);
	}

}
