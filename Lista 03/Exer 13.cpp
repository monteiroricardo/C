#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

int aa=0,a = 0,b = 1,c = 0,d = 0;
while(aa != 9){
	d = a+b;
	a = b;
	b = d;
	printf(" %i",d);
	aa++;
	
}
}


