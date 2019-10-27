#include"uhead.h"

#define NUMBER 100

int main(){
	double t1;
	int i[NUMBER];
	urand(i,NUMBER);
	show(i,NUMBER);
	t1=calculate_time();
	sort1(i,NUMBER);
	t1=calculate_time()-t1;
	printf("冒泡排序time:%lf\n",t1);
	show(i,NUMBER);
	struct arg t;
	t=operater(i,NUMBER);
	printf("sum=%d ave=%f\n",t.sum,t.ave);
}
