#include "getFileSha1.h"
#include <stdio.h>


void main(int argc,char** argv)
{
	if(argc < 1) printf("Usage: sha1Test <filename>\n");
	printf("file %s sha1:%s\n",argv[1],GetFileSHA1(argv[1]));
	printf("file %s size: %ld\n",argv[1],file_size(argv[1]));
}