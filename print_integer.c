#include "print_integer.h"
#include <stdio.h>

int expT(int,int);

void print_integer(int n, int radix, char* prefix){
	
		//If n is negative
		if(n < 0 ){
			fputc('-',stdout);
			n = n * -1;
		}
			
		//Prefix stuff
		for(int i = 0; prefix[i] != '\0'; i++) {
			fputc(prefix[i], stdout);
		}
		
		//Find the length of n
		int holder = n; //holder variable set to n to help find  length
		int numDigits = 1; //number of digits in n
		while(holder >= radix) {
			holder = holder / radix;
			numDigits += 1;
		}
		
		//If n is 0
		if(n == 0) {	
			fputc('0', stdout);
		}
		
		int actualExp = 1;
		int numExp = expT(radix, actualExp); //exponent for radix
		while((n / numExp) >= 1) {
			actualExp ++;
			numExp = expT(radix, actualExp);
		}
		numExp = numExp / radix;
			
		while(n > 0) {
			if(radix <= 10){
				int toPrt = 0;
				toPrt = n / numExp;
				fputc('0' +  toPrt, stdout);
			 	if((n % numExp == 0) && numExp != 1) {
					while(numExp != 1) {
						fputc('0', stdout);
						numExp = numExp / radix;
					}
				}
				n = n % numExp;
				numExp = numExp / radix;
			}
			if(radix > 10) {
					if((n / numExp) <= 9) {
					int toPrt1 = 0;
					toPrt1 = n / numExp;
					fputc('0' +  toPrt1, stdout);
			 	if((n % numExp == 0) && numExp != 1) {
						while(numExp != 1) {
							fputc('0', stdout);
							numExp = numExp / radix;
						}
					}
					n = n % numExp;
					numExp = numExp / radix;
				}

				else {
					int toPrt2 = 0;
					toPrt2 = n / numExp;
					fputc('a' +  (toPrt2 - 10), stdout);
			 	if((n % numExp == 0) && numExp != 1) {
						while(numExp != 1) {
							fputc('0', stdout);
							numExp = numExp / radix;
						}
					}
					n = n % numExp;
					numExp = numExp / radix;
				}

			}
		}  
}


int expT(int x,int n) {
	int number = 1;

	for (int i = 0; i < n; ++i) {
		number *= x;
	}
	return(number);
}