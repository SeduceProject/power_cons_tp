#include <stdio.h>
#include <stdlib.h>

int nbMove = 0;

void move(int n, int from, int via, int to) {
	if (n > 1) {
		nbMove++;
		move(n - 1, from, to, via);
		move(n - 1, via, from, to);
	}
}
int main(int argc, char *argv[]) {
	if(argc == 1) {
		printf("\tUtilisation : ./hanoi nb_disques, par exemple, ./hanoi 5\n");
		exit(13);
	}
	int nbDisks = strtol(argv[1], NULL, 10);
	move(nbDisks, 1,2,3);
	printf("%d moves are required!\n", nbMove);
	return 0;
}
