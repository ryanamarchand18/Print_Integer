#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include "print_integer.h"


int main(int argc, char* argv[]) {

	//Test 0 base 10
	print_integer(0, 10, "");
	fputc('\n', stdout);

	//Test 5 base 8
	print_integer(5, 8, "");
	fputc('\n', stdout);
	
	//Test 100 base 10
	print_integer(100, 10, "");
	fputc('\n', stdout);
	
	//Test 14 base 16
	print_integer(14, 16, "");
	fputc('\n', stdout);

	//Test 31 base 32
	print_integer(31, 32, "");
	fputc('\n', stdout);

	//Test 12 base 10
	print_integer(12, 10, "");
	fputc('\n', stdout);
	
	//Test 345 base 10
	print_integer(345, 16, "");
	fputc('\n', stdout);
	
	//Test 345 base 8
	print_integer(345, 8, "");
	fputc('\n', stdout);
		
	//Test 345 base 21
	print_integer(345, 21, "");
	fputc('\n', stdout);
	
	//Test -345 base 10
	print_integer(-345, 10, "");
	fputc('\n', stdout);

	//Test 0345 base 10
	print_integer(0345, 10, "");
	fputc('\n', stdout);
	
	//Test 345 base 10 with prefix andnegative number
	print_integer(-345, 16, "Hello");
	fputc('\n', stdout);

	//Test 345 base 10 with prefix andnegative number
	print_integer(768336, 16, "");
	fputc('\n', stdout);

	//Test 345 base 10 with prefix andnegative number
	print_integer(64, 16, "");
	fputc('\n', stdout);

	return EXIT_SUCCESS;

}