#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,k,s,e;
	int ** p;
//2 possibalities -- 1tape or several tapes
	scanf("%d %d",&s,&e);
	p = (int **)malloc(sizeof(int *)*s);
	for(i=0;i<e;i++){p[i] = (int *)malloc(sizeof(int )*s);}



return 0;
}

