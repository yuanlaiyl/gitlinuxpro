  
#include"uhead.h"
int sort1(int* i,int j){
	int k,m;
	int temp;
	for(k=0;k<j-1;k++){
		for(m=0;m<j-1;m++){	
			if(i[m]<i[m+1])
			{
				temp=i[m];
				i[m]=i[m+1];
				i[m+1]=temp;
			}
		}	
	}
	return 0;
}
double calculate_time(){
    struct timeval t;
    gettimeofday(&t,0);
    return t.tv_sec + 1E-6 * t.tv_usec;
}
struct arg operater(int* i,int j){
	struct arg k;
	int s;
	k.sum=0;
	k.ave=0.0;
	for(s=0;s<j;s++)
		k.sum=k.sum+i[s];
	k.ave=((float)k.sum)/j;
	return k;
}
