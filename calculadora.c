#include <stdio.h>
#include <stdlib.h>

int main (){
	int op;
	
	float n1, n2, res;
	
	res= 0;
	n1 =0;
	n2 =0;
	printf("Digite 1 para somar:\n");
	printf("Digite 2 para subtrair:\n");
	printf("Digite 3 para multiplicar:\n");
	printf("Digite 4 para dividir:\n");
	scanf("%d",&op);
	printf("Insira o primeiro numero:\n");
	scanf("%f",&n1);
	printf("Insira o segundo  numero:\n");
	scanf("%f",&n2);
	if(op==1){
		res = n1 + n2;
		printf("Soma: %.2f\n",res);
	}
		if(op==2){
		res = n1 - n2;
		printf("sub: %.2f\n",res);
	}
	if(op==3){
		res = n1 * n2;
		printf("Mult: %.2f\n",res);
	}
	if(op==4){
		if(n2==0){
			printf("Divisao por zero.\n");
		}else{res = n1 / n2;
		printf("div: %.2f\n",res);
		}
		
	}
	
	return 0;
}
