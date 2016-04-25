#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;


int main(int argc, char** argv) {
	string s;
	ssize_t ssz;
	size_t sz;
	char *buff = NULL;

	if (argc != 3) {
		printf("Usage: openRW infile outfile\n");
		exit(1);
	}
	FILE *r_fd = fopen(argv[1], "r");
	FILE *w_fd = fopen(argv[2], "w");
	
	if (r_fd == NULL || w_fd == NULL) {
		printf("Error on open file(s)\n");
		exit(1);
	}

	while ((ssz = getline(&buff, &sz, r_fd)) > 0) {
		fwrite(buff, ssz, sizeof(char), w_fd);
	}
	
}