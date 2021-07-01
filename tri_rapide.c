#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATA_MAX 1000

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
 	int i, j, tmp;
	char* end;
	int dataSize = strtol(argv[1], &end, 10);
	int data[dataSize], t0, tend;
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
	/*** Tri du tableau ***/
	quickSort(data, 0, dataSize - 1);
	/*** Fin du tri ***/
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
