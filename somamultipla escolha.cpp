#include <stdio.h>

int main() {

int n1, n2, resp, escolha;

printf("Escolha uma das seguintes opera��es: +=1 -=2 -*3 /=4");
scanf("%d", &escolha);
if (escolha==1){
	
	printf("opera��o para somar dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 + n2;

printf(" a resposta �:%d", resp);
}
else if(escolha==2){
	
		printf("opera��o para subtrair dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 - n2;

printf(" a resposta �:%d", resp);
	
}
else if(escolha==3){
	
		printf("opera��o para multiplique dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 * n2;

printf(" a resposta �:%d", resp);
}

else if(escolha==4){
	
		printf("opera��o para divida dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 / n2;

printf(" a resposta �:%d", resp);
}

}
