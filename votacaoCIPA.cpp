#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");

	float porcento[5];	
	int voto, i, num, conf, aux, x, votosC[5], nulo = 0, total = 0;
	char auxC[200], candidatos[5][200] = {"Aldair Pereira: 11111", "Bruna Souza número: 22222", "Carlos Teixeira número: 33333", "Débora Queiroz número: 44444", "Voto em Branco número: 55555"};
	
	for(i = 0; i <= 5; i++){
		votosC[i] = 0;
		porcento[i] = 0;
	}
		
	do{
		printf("\t\t Sistema de eleições do CIPA \n\n");
		printf(" Lista dos candidatos: \n\n");
		
		puts("\n Candidato(a): Aldair Pereira \n Número de inscrição: 11111 \n Apelido: AP \n Setor: Logística \n Idade: 45 \n Tempo de serviço: 11 ano(s)");
		puts("\n Candidato(a): Bruna Souza \n Número de inscrição: 22222 \n Apelido: BS \n Setor: RH \n Idade: 22 \n Tempo de serviço: 02 ano(s)");
		puts("\n Candidato(a): Carlos Teixeira \n Número de inscrição: 33333 \n Apelido: CT \n Setor: Logística \n Idade: 32 \n Tempo de serviço: 08 ano(s)");
		puts("\n Candidato(a): Débora Queiroz\n Número de inscrição: 44444 \n Apelido: DQ \n Setor: Administração \n Idade: 35 \n Tempo de serviço: 09 ano(s)");
		puts("\n Candidato(a): Voto em Branco \n Número de inscrição: 55555 \n");
		
		puts("\n Para anular seu voto digite o Número: 00000 \n\n");
			
			printf("\nDigite o número do candidato que você deseja votar: ");
				scanf("%d", &voto);
			
			switch(voto){
				case 00000:
					printf("\nSe você deseja anular seu voto digite \n[1]sim \n[2]não \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							nulo ++;
						}
					break;
				case 11111:
					printf("\nAldair Pereira \n deseja confirmar seu voto \n[1]sim \n[2]não \n");
						scanf("%d", &conf);
						if(conf == 1){
							
							votosC[0] ++;
							total ++;
						}
					break;
				case 22222:
					printf("\nBruna Souza \n deseja confirmar seu voto \n[1]sim \n[2]não \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							
							votosC[1] ++;
							total ++;
							
						}
					break;
				case 33333:
					printf("\nCarlos Teixeira \n deseja confirmar seu voto \n[1]sim \n[2]não \n");
						scanf("%d", &conf);
						if(conf == 1){
							
							votosC[2] ++;
							total ++;
							
						}
					break;
				case 44444:
					printf("\nDébora Queiroz \n deseja confirmar seu voto \n[1]sim \n[2]não \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							votosC[3] ++;
							total ++;
							
						}
					break;
				case 55555:
					printf("\nVoto em Branco \n deseja confirmar seu voto \n[1]sim \n[2]não \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							
							votosC[4] ++;
							total ++;
							
						}
					break;
				default:
					printf("\nNúmero inválido \n\n");
					
					system("PAUSE");
					return 0;
					break;
			}
			
			system("CLS");
			
			printf("\nDeseja votar novamente \n [1] sim \n [2] não \n");
				scanf("%d", &num);
				
			system("CLS");
			
	}while(num == 1);
	
	for(x = 1; x < 5; x ++){
		for(i = 0; i < 5; i++){
			if(votosC[i] < votosC[x]){
				aux = votosC[i];
				votosC[i] = votosC[x];
				votosC[x] = aux;
				
				strncpy(auxC, candidatos[i], 200); 
				strncpy(candidatos[i], candidatos[x], 200);
				strncpy(candidatos[x], auxC, 200);
				
			}
		}
	}
	
	for(i = 0; i < 5; i++){
			porcento[i] = (votosC[i] * 100) / total;
	}

	printf("\n\n\t\t\t Sistema de eleições do CIPA \n\n");
	
	printf("\nO total de votos foi %d \n\n", total);
	
	printf("O total de votos Nulos foi %d \n\n", nulo);

	for(i = 0; i < 5; i ++){
		printf("\nO %dº lugar foi %s com %.1f dos voto(s) \n", i + 1, candidatos[i], porcento[i]);
		printf("\tO total de votos do candidato foi %d \n", votosC[i]);
	}
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
