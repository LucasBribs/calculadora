void calc (){
	float n1,n2,resultado;
	int op;


	printf("\nBem vindo!\n");
	printf("Digite o numero correspondente da operacao que deseja:\n");
	printf("\t1 - Soma\n");
	printf("\t2 - Subtracao\n");
	printf("\t3 - Multiplicacao\n");
	printf("\t4 - Divisao\n");
	scanf("%d",&op);

	printf("\nDigite um numero:\n");
	scanf("%f",&n1);
	printf("Digite outro numero:\n");
	scanf("%f",&n2);

	switch(op){

		case 1:
			resultado = n1+n2;
			break;

		case 2:
			resultado = n1-n2;
			break;
		
		case 3:
			resultado = n1*n2;
			break;

		case 4:
			if(n2 == 0){
				printf("Numero invalido!");
			}else{
			resultado = n1/n2;
			}
			break;
	}	
	if(n2 == 0){
	
	}else{
		printf("O resultado da operacao é:%.2f\n",resultado);
	}


}
