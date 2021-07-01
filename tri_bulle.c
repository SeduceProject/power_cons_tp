#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATA_MAX 1000

int main(int argc, char *argv[]) {
 	int i, j, tmp;
	char* end;
	unsigned long dataSize = strtol(argv[1], &end, 10);
	unsigned long data[dataSize], t0, tend;
	printf("Generation des donnees...\n");
	for (i = 0; i < dataSize; i++) {
		data[i] = rand() % DATA_MAX;
	}
	
	printf("******* dataleau non trie *******\n");
	printf("premier element: %4d\n", data[0]);
	printf("dernier element: %4d\n", data[dataSize - 1]);
	if (dataSize < 20) {
		for (i = 0 ; i < dataSize; i++) {
			printf("%lu ", data[i]);
		}
		printf("\n");
	}
  	for (i=0 ; i < dataSize-1; i++) {
    		for (j=0 ; j < dataSize - i - 1; j++) {
		      /* Pour un ordre décroissant utiliser < */
		      if (data[j] > data[j+1]) {
			tmp = data[j];
			data[j] = data[j+1];
			data[j+1] = tmp;
		      }
    		}
  	}
	printf("\n******* dataleau triee par ordre croissant *******\n");
	printf("premier element: %4d\n", data[0]);
	printf("dernier element: %4d\n", data[dataSize - 1]);
	if (dataSize < 20) {
		for (i = 0 ; i < dataSize; i++) {
			printf("%lu ", data[i]);
		}
		printf("\n");
	}
}
