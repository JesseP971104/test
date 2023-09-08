#include <stdio.h>
#include <string.h>
int add(int i, int j)
{
return i+j;
}

int main(void){
int i = 5;
int j = 10;
if(i > j){
	printf("i is larger.\n");
}
else{
	printf("j is larger.\n");
}

int k = add(i,j);

printf("k = %d.\n",k);
return 0;

}
