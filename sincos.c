//Fullname: Vasya Pupkin
//Group: 3EN04X

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	if (argc>1){
		double angle = atof(argv[1]);
		printf("%f\n",sin(angle));
		printf("%f\n",cos(angle));
	}
	else {
		printf("error\n");
	}
	return 0;
}
