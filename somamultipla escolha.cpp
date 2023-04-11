#include <stdio.h>

int main() {

int n1, n2, resp, escolha;

printf("Escolha uma das seguintes operações: +=1 -=2 -*3 /=4");
scanf("%d", &escolha);
if (escolha==1){
	
	printf("operação para somar dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 + n2;

printf(" a resposta é:%d", resp);
}
else if(escolha==2){
	
		printf("operação para subtrair dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 - n2;

printf(" a resposta é:%d", resp);
	
}
else if(escolha==3){
	
		printf("operação para multiplique dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 * n2;

printf(" a resposta é:%d", resp);
}

else if(escolha==4){
	
		printf("operação para divida dois numeros\n");

printf(" digite o primeiro numero:\n");
scanf("%d", &n1);

printf(" digite o segundo numero:\n");
scanf("%d", &n2);

resp = n1 / n2;

printf(" a resposta é:%d", resp);
}

}
