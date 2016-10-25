#ifndef GETFILESHA1_H
#define GETFILESHA1_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <sys/stat.h>




#undef BIG_ENDIAN_HOST
//#define BIG_ENDIAN_HOST 1



typedef unsigned int u32;

/****************
* Rotate a 32 bit integer by n bytes
*/
#if defined(__GNUC__) && defined(__i386__)
static inline u32
	rol( u32 x, int n)
{
	__asm__("roll %%cl,%0"
		:"=r" (x)
		:"0" (x),"c" (n));
	return x;
}
#else
#define rol(x,n) ( ((x) << (n)) | ((x) >> (32-(n))) )
#endif


typedef struct {
	u32  h0,h1,h2,h3,h4;
	u32  nblocks;
	unsigned char buf[64];
	int  count;
} SHA1_CONTEXT;



char *GetFileSHA1(char *FileNameInPut);
char *GetSHA1(void);
char *GetSHA1Err(void);
long file_size(char* filename);
#endif

