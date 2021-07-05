#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]) {
	FILE* fp;
	char* line = NULL;
	size_t len = 0;
	ssize_t read;
 	int i, j, tmp;
	int* data;
	int dataSize = strtol(argv[1], NULL, 10);
	if(argc == 1) {
		printf("\tUtilisation : ./tri_bulle nb_element, par exemple, ./tri_bulle 15\n");
		exit(13);
	}
	if (dataSize > 10000000) {
		printf("La taille de donnees demandee est trop grande (max : 5000000)\n");
		exit(13);
	}
	data = (int*)malloc(dataSize * sizeof(int));
	printf("Lecture des donnees...\n");
	fp = fopen("numbers.txt", "r");
	for (i = 0; i < dataSize; i++) {
		read = getline(&line, &len, fp);
		data[i] = strtol(line, NULL, 10);
	}
	printf("******* dataleau non trie *******\n");
	printf("premier element: %d\n", data[0]);
	printf("dernier element: %d\n", data[dataSize - 1]);
	if (dataSize < 30) {
		for (i = 0 ; i < dataSize; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");
	}
  	for (i = 0 ; i < dataSize - 1; i++) {
    		for (j = 0 ; j < dataSize - i - 1; j++) {
		      /* Pour un ordre decroissant utiliser < */
		      if (data[j] > data[j+1]) {
			tmp = data[j];
			data[j] = data[j+1];
			data[j+1] = tmp;
		      }
    		}
  	}
	printf("\n******* dataleau triee par ordre croissant *******\n");
	printf("premier element: %d\n", data[0]);
	printf("dernier element: %d\n", data[dataSize - 1]);
	if (dataSize < 30) {
		for (i = 0 ; i < dataSize; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");
	}
}
