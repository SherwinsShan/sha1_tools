#include <stdio.h>

static union{char c[4]; unsigned long mylong;}endian_test = {{'l','?','?','b'}};
#define ENDIANNESS	((char) endian_test.mylong)


int main(void)
{
	short num = 0x1122;
	char *c;
	c = (char*)&num;
	if(*c == 0x22)
		printf("this is little end\n");
	else
		printf("this is big end\n");
	
	/*
	if(ENDIANNESS=='l')
		printf("this is little end\n");
	else if(ENDIANNESS=='b')
		printf("this is big end\n");
	*/
	return 0;
}