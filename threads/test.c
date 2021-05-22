#include <stdio.h>
#include <string.h>
#include "threads/thread.h"
#include "threads/malloc.h"
#include "threads/palloc.h"
#include "threads/test.h"
extern size_t init_num;
void run_palloc_test(char **argv)
{
	init_num++;
	init_num++;
	init_num++;
	if(pallocator == 0)
	{
		size_t i;
		char* dynamicmem[11];
		printf ("할당 전 : \n");
		palloc_get_status (0);
		

		printf ("할당 후 : \n");
		dynamicmem[0] = (char *) malloc (16000);
		memset (dynamicmem[0], 0x00, 16000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[1] = (char *) malloc (30000)	;
		memset (dynamicmem[1], 0x00, 30000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[2] = (char *) malloc (4000);
		memset (dynamicmem[2], 0x00, 4000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[3] = (char *) malloc (15000);
		memset (dynamicmem[3], 0x00, 15000);
		palloc_get_status (0);

		printf ("할당 후 : \n");
		dynamicmem[4] = (char *) malloc (18000);
		memset (dynamicmem[4], 0x00, 18000);
		palloc_get_status (0);
		
		dynamicmem[5] = (char *) malloc (22000);
		memset (dynamicmem[5], 0x00, 22000);
		printf ("할당 후 : \n");
		palloc_get_status (0);

		for (i=0; i<4; i=i*2+1) {
			free2(dynamicmem[i]);
			printf ("Free 중 : \n");
			palloc_get_status (0);
		}
		
		printf ("할당 후 : \n");
		dynamicmem[6] = (char *) malloc (120000);
		memset (dynamicmem[6], 0x00, 120000);
		palloc_get_status (0);

	}

	if(pallocator == 1)
	{
		size_t i;
		char* dynamicmem[11];
		printf ("할당 전 : \n");
		palloc_get_status (0);
		

		printf ("할당 후 : \n");
		dynamicmem[0] = (char *) malloc (16000); 
		memset (dynamicmem[0], 0x00, 16000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[1] = (char *) malloc (30000)	;
		memset (dynamicmem[1], 0x00, 30000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[2] = (char *) malloc (4000);
		memset (dynamicmem[2], 0x00, 4000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[3] = (char *) malloc (15000);
		memset (dynamicmem[3], 0x00, 15000);
		palloc_get_status (0);

		printf ("할당 후 : \n");
		dynamicmem[4] = (char *) malloc (18000);
		memset (dynamicmem[4], 0x00, 18000);
		palloc_get_status (0);
		
		dynamicmem[5] = (char *) malloc (22000);
		memset (dynamicmem[5], 0x00, 22000);
		printf ("할당 후 : \n");
		palloc_get_status (0);

		for (i=0; i<4; i=i*2+1) {
			free2(dynamicmem[i]);
			printf ("Free 중 : \n");
			palloc_get_status (0);
		}
		
		printf ("할당 후 : \n");
		dynamicmem[6] = (char *) malloc (120000);
		memset (dynamicmem[6], 0x00, 120000);
		palloc_get_status (0);

	}

	if(pallocator == 2)
	{
		size_t i;
		char* dynamicmem[11];
		printf ("할당 전 : \n");
		palloc_get_status (0);
		

		printf ("할당 후 : \n");
		dynamicmem[0] = (char *) malloc (16000); //4
		memset (dynamicmem[0], 0x00, 16000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[1] = (char *) malloc (30000)	; //8
		memset (dynamicmem[1], 0x00, 30000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[2] = (char *) malloc (4000);//1
		memset (dynamicmem[2], 0x00, 4000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[3] = (char *) malloc (15000);//4
		memset (dynamicmem[3], 0x00, 15000);
		palloc_get_status (0);

		printf ("할당 후 : \n");
		dynamicmem[4] = (char *) malloc (18000);//5->8
		memset (dynamicmem[4], 0x00, 18000);
		palloc_get_status (0);
		
		dynamicmem[5] = (char *) malloc (22000);//6->8
		memset (dynamicmem[5], 0x00, 22000);
		printf ("할당 후 : \n");
		palloc_get_status (0);

		for (i=0; i<4; i=i*2+1) {
			free2(dynamicmem[i]);
			printf ("Free 중 : \n");
			palloc_get_status (0);
		}
		
		printf ("할당 후 : \n");
		dynamicmem[6] = (char *) malloc (120000);
		memset (dynamicmem[6], 0x00, 120000);
		palloc_get_status (0);
	}

	if(pallocator == 3)
	{
		size_t i;
		char* dynamicmem[11];
		printf ("할당 전 : \n");
		palloc_get_status (0);
		

		printf ("할당 후 : \n");
		dynamicmem[0] = (char *) malloc (16000); //4
		memset (dynamicmem[0], 0x00, 16000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[1] = (char *) malloc (30000)	; //8
		memset (dynamicmem[1], 0x00, 30000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[2] = (char *) malloc (4000);//1
		memset (dynamicmem[2], 0x00, 4000);
		palloc_get_status (0);
		
		printf ("할당 후 : \n");
		dynamicmem[3] = (char *) malloc (15000);//4
		memset (dynamicmem[3], 0x00, 15000);
		palloc_get_status (0);

		printf ("할당 후 : \n");
		dynamicmem[4] = (char *) malloc (18000);//5->8
		memset (dynamicmem[4], 0x00, 18000);
		palloc_get_status (0);
		
		dynamicmem[5] = (char *) malloc (22000);//6->8
		memset (dynamicmem[5], 0x00, 22000);
		printf ("할당 후 : \n");
		palloc_get_status (0);

		for (i=0; i<4; i=i*2+1) {
			free2(dynamicmem[i]);
			printf ("Free 중 : \n");
			palloc_get_status (0);
		}
		
		printf ("할당 후 : \n");
		dynamicmem[6] = (char *) malloc (120000);
		memset (dynamicmem[6], 0x00, 120000);
		palloc_get_status (0);

		
		
	}
	
}