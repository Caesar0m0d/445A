#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,k,s,e,t;
	char c;
	int ** p;
//2 possibalities -- 1tape or several tapes
	scanf("%d %d",&s,&e);
getchar();
	p = (int **)malloc(sizeof(int *)*s);
	for(i=0;i<e;i++){p[i] = (int *)malloc(sizeof(int )*s);}
	
	for(j=0;j<s;j++){
	//	for(i=0;i<e;i++){
scanf("%s",&p[j]);

//c=getchar();
//	p[j]=(int)c;
	//			}
getchar();
			}

	for(i=0;i<s;i++){
		for(j=0;j<e;j++){
printf("%d ",p[i][j]);
				}
printf("\n");
			}



return 0;
}

