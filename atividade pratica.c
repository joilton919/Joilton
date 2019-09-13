//Aluno: Joilton Fabricio

#include <stdio.h>
#include <math.h>

//Definindo variáveis globais para serem usadas nas funções a seguir.
int v1, v2, v3, media;
float N1, N2, MED, R;

void verifica() //Função da Questão 2
{
  printf("Digite um numero para saber se ele eh par ou impar: ");
  scanf("%d", &v1);

  if(v1 % 2 == 0)
    printf("numero par\n");

  else
    printf("numero impar\n");

}

void potencia() //Função da Questão 3
{
  printf("Digite um numero base para potencializar: ");
  scanf("%f", &N1);

  printf("Digite o expoente da potencializacao: ");
  scanf("%d", &v1);

  R = pow(N1, v1);

  printf("Resultado em forma cientifica: %.2e\n", R);

}

void raiz() //Função da Questão 4
{
  printf("Digite um numero para raiz: ");
  scanf("%f", &N1);

  printf("Digite o tipo da raiz: ");
  scanf("%d", &v1);

  R = pow(N1, 1.0/v1);

  printf("Resultado em forma cientifica: %.2e\n", R);

}

void bissexto() //Função da Questão 5
{
  printf("Digite o ano para saber se ele eh bissexto ou nao: ");
  scanf("%d", &v1);

  if (v1 % 4 == 0)
    printf("Ano bissexto!\n");

  else
    printf("Nao eh bissexto\n");


}

void media_ponderada() //Função da Questão 6
{
  printf("Digite 3 notas (de 0 a 100) para calcular sua media ponderada:\n");
  scanf("%d %d %d", &v1, &v2, &v3);

  media = (1*v1 + 1*v2 + 2*v3) / (1 + 1 + 2);

  printf("Sua media eh: %d\n", media);

  if (media >= 60)
    printf("Aprovado!\n");
  else
    printf("Reprovado!\n");

}

void verifica_media() //Função da Questão 7
{
  printf("Digite suas duas notas:\n");
  scanf("%f %f", &N1, &N2);

  if ((N1 >= 0 && N1 <= 10) && (N2 >= 0 && N2 <= 10)) {
    MED = (N1 + N2) / 2;
    printf("Media: %.1f\n", MED); }
  else
    printf("Nota(s) invalida(s)!\n");

}

void matricula() //Função da Questão 8
{
  printf("Meu nome: Joao Vinicius Belo Barbosa\n");

  v1 = 1910026157;

  printf("minha matricula em hexadecimal: %X\n", v1);

}

//Função principal do programa em C
int main() {
  int x=1, y; //Variáveis para serem usadas apenas no main

//Criando o menu da questão 1, onde as funções das outras questões serão chamadas
  while(x != 0){

    printf("Digite um numero entre 1 e 9: ");
    scanf("%d", &y);

    switch(y){
      case 1:
      verifica();
      break;

      case 2:
      potencia();
      break;

      case 3:
      raiz();
      break;

      case 4:
      bissexto();
      break;

      case 5:
      media_ponderada();
      break;

      case 6:
      verifica_media();
      break;

      case 7:
      printf("Numero digitado: 7\n");
      break;

      case 8:
      printf("Numero digitado: 8\n");
      break;

      case 9:
      matricula();
      break;

      case 0:
      x = 0;
      printf("Fim!!!");
      break;

      default:
      printf("numero invalido!\n");

    }

  }

  return 0;

}
