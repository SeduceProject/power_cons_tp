#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition (int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high- 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main(int argc, char *argv[]) {
	FILE * fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	int i;
	int* data;
	int dataSize = strtol(argv[1], NULL, 10);
	if(argc == 1) {
		printf("\tUtilisation : ./tri_bulle nb_element, par exemple, ./tri_bulle 15\n");
		exit(13);
	}
	if (dataSize > 10000000) {
		printf("La taille de donnees demandee est trop grande (max : 10000000)\n");
		exit(13);
	}
	data = (int*)malloc(dataSize * sizeof(int));
	printf("Lecture des donnees...\n");
	fp = fopen("numbers.txt", "r");
	for (i = 0; i < dataSize; i++) {
		read = getline(&line, &len, fp);
		data[i] = strtol(line, NULL, 10);
	}
	fclose(fp);
	printf("******* dataleau non trie *******\n");
	printf("premier element: %d\n", data[0]);
	printf("dernier element: %d\n", data[dataSize - 1]);
	if (dataSize < 30) {
		for (i = 0 ; i < dataSize; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");
	}
	// Tri du tableau 
	quickSort(data, 0, dataSize - 1);
	// Fin du tri
	printf("\n******* dataleau triee par ordre croissant *******\n");
	printf("premier element: %d\n", data[0]);
	printf("dernier element: %d\n", data[dataSize - 1]);
	if (dataSize < 20) {
		for (i = 0 ; i < dataSize; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");
	}
}
