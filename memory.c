#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUMBER_OF_ELEMENTS 100
int main()
{
    int *parr=calloc(NUMBER_OF_ELEMENTS,sizeof(int));
    if (parr==NULL) 
    {
    	printf("Couldn't allocate memory through calloc\n");
    }
    else  
    {
    	printf("Memory allocation successful with calloc\n");
    }
    int *barr=malloc(NUMBER_OF_ELEMENTS*sizeof(int));
    if(barr==NULL) 
    {
	    printf("Couldn't allocate memory through malloc\n");
    }
    else  
    {
    	memset(barr,0,NUMBER_OF_ELEMENTS*sizeof(barr[0]));
	    printf("Memory allocation successful with malloc\n");
    }
    int *carr=calloc(NUMBER_OF_ELEMENTS,sizeof(int));

    if(carr==NULL)
    {
	    printf("Couldn't allocate memory");
    }
    else  
    {
	    printf("Memory allocation successful\n");
	    carr=realloc(carr,(NUMBER_OF_ELEMENTS/2)*sizeof(int));
	    if (carr==NULL) 
	    {
	    	printf("Memory reallocation fails");
    	}
	    else 
	    {
	    	printf("Memory reallocation successful");
	    }
    }
    printf("\nsizeof parr = %d", sizeof(parr));
    free(parr);
    parr=NULL;
    return 0;
}