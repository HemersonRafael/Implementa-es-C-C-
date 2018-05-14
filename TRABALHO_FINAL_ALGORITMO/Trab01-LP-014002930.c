//MATRICULA:014002930
//ESTUDANTE: Hemerson rafael pereira pontes
//TURMA: C&T 2014.1
#include <stdio.h>
#include <stdlib.h>
void menu(int n;){
                 printf("-----------------------------------------------------------\n");
                 printf("                ACOMPANHAMENTO DOS ALUNOS                  \n");
                 printf("-----------------------------------------------------------\n");
                 printf("Menu de opcoes\n");
                 printf("\n");
                 printf("   (1) Cadastro das informacoes do aluno\n");
                 printf("   (2) A media de cada aluno\n");
                 printf("   (3) A media da turma\n");
                 printf("   (4) A quantidade de alunos com media maior ou iguala 7\n");
                 printf("   (5) A quantidade de notas de provas abaixo de 4\n");
                 printf("   (6) O indice da linha do aluno com a maior media\n");
                 printf("   (7) O indice da linha do aluno com a menor media\n");
                 printf("   (8) A media de cada prova\n");
                 printf("   (0) Sair do programa\n");
                 printf("\n");
   
   
     
   }
   float leitura_das_notas(float m[4] [5];){
   	 float m[4][5];
		for(int i=0;i<4;i++){
           	  printf("informe as notas aluno%d: \n",i);
			  for(int j=0;j<5;j++){
			      printf("informe a nota da prova%d:   ",j);
			      scanf("%f",&m[i][j]);
	          }
           }
	      printf("\n");
   	return(m[4][5];);
   }
int  main(){
	int i,j,n=10,maior=0,menor=100,nota=0,aluno=0,linha=0;
	float m[4] [5],SOMA[4]={0,0,0,0},MEDIA[4]={0,0,0,0},soma=0,somat=0,media=0,mediap=0,mediat=0;

    while(n!=0){
    	         
                 menu(n);
		         printf("Digite a opcao desejada:");
	             scanf("%d",&n);
	             printf("\n");
//Cadastro das informacoes do aluno
         if(n==1){
          m[4][5]=leitura_das_notas(float m[4] [5];)
        }
//A media de cada aluno
    else if(n==2){
		  for(i=0;i<4;i++){
		     for(j=0;j<5;j++){
			    soma=soma+m[i][j];
		    }
              media=soma/5;
		      printf("media do aluno%d:%.2f\n",i,media);
		      soma=0;
	     }
	     printf("\n");
         media=0;
       }
//A media da turma
    else if(n==3){
		    for(i=0;i<4;i++){
		       for(j=0;j<5;j++){
			    soma=soma+m[i][j];
		      }
              media=soma/5;
		      mediat=mediat+media;
			  soma=0;
		   }
		   mediat=mediat/4;
		   printf("media da turma:%.2f\n",mediat);
		   mediat=0;
		   printf("\n");
      }
//A quantidade de alunos com media maior ou iguala 7
    else if(n==4){
	         for(i=0;i<4;i++){
		        for(j=0;j<5;j++){
			       soma=soma+m[i][j];
		       }
		       media=soma/5;
		       if(media>=7){
			     aluno=aluno+1;
		       }
		      soma=0;
	        }
                printf("A quantidade de alunos com media maior ou igual a 7: %d\n",aluno);
	            aluno=0;
	            printf("\n");
     }
//A quantidade de notas de provas abaixo de 4
    else if(n==5){
        for(i=0;i<4;i++){
		        for(j=0;j<5;j++){
			       if(m[i][j]<4){
                     nota=nota+1;
			       }
		       }
		       soma=0;
	        }
                printf("A quantidade de notas de provas abaixo de 4: %d\n",nota);
                nota=0;
	            printf("\n");
     }
//O indice da linha do aluno com a maior media
    else if(n==6){
	         for(i=0;i<4;i++){
		        for(j=0;j<5;j++){
			       SOMA[i]=SOMA[i]+m[i][j];
                }
		        MEDIA[i]=SOMA[i]/5;
                SOMA[i]=0;
	         }
                for(i=0;i<4;i++){
                 if(MEDIA[i]>maior){
                    maior=MEDIA[i];
                    linha=i;
                 }
		    }

			printf("O indice da linha do aluno com a maior media:%d\n",linha);
	        media=0;
            linha=0;
            maior=0;

     }

//O indice da linha do aluno com a menor media
    else if(n==7){

	         for(i=0;i<4;i++){
		        for(j=0;j<5;j++){
		           SOMA[i]=SOMA[i]+m[i][j];
                }
		        MEDIA[i]=SOMA[i]/5;


                SOMA[i]=0;
		    }
		    for(i=0;i<4;i++){
                 if(MEDIA[i]<menor){
                    menor=MEDIA[i];
                    linha=i;
                 }
		    }
			     printf(" O indice da linha do aluno com a menor media:%d",linha);
			     media=0;
	             menor=100;
                 linha=0;
	 }
//A media de cada prova
    else if(n==8){
     	for(i=0;i<5;i++){
		    for(j=0;j<4;j++){
			soma=soma+m[j][i];
			mediap=soma/4;
		   }
		   printf("A media da prova%d:%.2f\n",i,mediap);
		   soma=0;
        }
        mediap=0;
     }

     else if(n>8){
        printf("\n\nNao existe esse comando\n\n");
     }
     printf("\n");
   }
        system("pause");
}
