#include"uhead.h"
void show(int* i,int j){
	int k;
	for(k=0;k<j;k++)
		printf("i[%d]=%d\n",k,i[k]);
}
void urand(int* i,int j){
	srand((int)time(0));
	int k;
	for(k=0;k<j;k++){
		i[k]=1+(int)(1000.0*rand()/(RAND_MAX+1.0));
	}
}
