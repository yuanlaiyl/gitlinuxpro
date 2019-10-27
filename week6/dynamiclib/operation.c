int sum (int*a,int n){
	int s=0;
	for(int i=0;i<n;i++)
		s+=a[i];
	return s;
}
int max(int*a,int n){
	int m=a[0];
	for(int i=0;i<n;i++){
		if (a[i]>m)
			m=a[i];
	}
	return m;
}
