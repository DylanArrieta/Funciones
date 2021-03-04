#include <stdio.h>
#include <stdlib.h>

void max(int a, int b);

 int main(){
	int N1, N2;
	printf("introduzaca el valor del primer operador: ");
	scanf("%d ,&N1");
	printf("introduzca el valor del segundo operador: ");
	scanf("%d ,&N2");
	max(N1,N2);
	return 0;
}	

void max(int a, int b){
	if (a>b){
		printf("%d es mayor \n" ,a);
	}
	else if(a>b){
	    printf("%d es mayor \n" ,b);
	}
	else
	    printf("Error\n");		
}
