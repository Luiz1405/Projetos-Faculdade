#include <stdio.h>
 //Exercicío 1.1

/*Esreva um programa que cria alguns inteiros e floats e depois imprima os
valores que você clocou neles
*/

int main(void) {

 int num1, num2, num3, num4;
 float num5, num6, num7, num8;

 printf("escreva um numero:");
 scanf("%d", &num1);
 printf("Resultado 1 é: %d\n", num1);

 printf("escreva um numero:");
 scanf("%d",&num2);
 printf("Resultado 2 é: %d\n", num2);

 printf("escreva um numero:");
 scanf("%d",&num3);
 printf("Resultado 3 é: %d\n", num3);

 printf("escreva um numero:");
 scanf("%d",&num4);
 printf("Resultado 4 é: %d\n", num4);

 printf("escreva um numero:");
 scanf("%f",&num5);
 printf("Resultado 5 é: %.1f\n", num5);

 printf("escreva um numero:");
 scanf("%f",&num6);
 printf("Resultado 6 é: %.1f\n", num6);

 printf("escreva um numero:");
 scanf("%f",&num7);
 printf("Resultado 7 é: %.1f\n", num7);

 printf("escreva um numero:");
 scanf("%f",&num8);
 printf("Resultado 8 é: %.1f\n", num8);

}

/* Exercicio 1.2
Esreva um programa que declara duas variáveis inteiras a e b, dando valores a
elas e imprimindo os valores. Depois adicione comandos para que o programa
 troque os valores dassas variáveis passando o valor de a para b e vice-versa.
Imprima de novo para confirmar que deu tudo certo.
*/
  
int main (void) {
  int a = 5;
  int b = 10;
  int aux = 0;

  printf("Valor de a e b é respectivamente: %d e %d.\n", a, b);

  aux = a;
  a = b;
  b = aux;

  printf("Estes são os valores invertidos: %d e %d", a, b);

  //return 0;

}

/*Exercicio 1.3
 Esreva um programa que faz conversão de temperaturas de 
 Fahrenheit para
 Celsius, segundo a fórmula conhecida.
 */

int main(void) {

  int num1;
  int num2 = 32;
  int num3 = 5;
  int num4 = 9;
  float valor;
  
  printf("Quanto graus você quer converter:");
  scanf("%d", &num1);
  valor = (num1 - num2) * num3 / num4;
  printf("Convertendo fahrenheit para celsius: %.2f", valor);
  //printf("convertendo fahrenheit para celsius: %d - %d * %d/%d = %f", num1, num2, num3, num4, valor);
}


/*Exercicio 1.4
Escreva um programa que recebe as dimensões (em metros) de um terreno retangular e em seguida as dimensões de uma casa (também em metros e retangular) sobre este terreno. Em seguida calule e a apresente a área livre do terreno, em metros quadrados e em porcentagem de terreno livre.
*/

/*Exercicio 1.14
 Voê resolveu dar uma força para a NASA, que deseja calcular o peso das pessoas em diferentes planetas do sistema solar. (Isso vai ter importantes consequenias na colonização dos planetas pela humanidade: os gordinhos vão preferir planetas onde baixem de peso, os magrelinhos vão querer o ontrário). Esreva um programa que reebe o peso de uma pessoae alula o novo peso nos orpos elestes, de aordo om as onstantes gravitaionais de adaplaneta (estas onstantes estão normalizadas em relação à onstante da Terra), dadas abaixo:
 */

int main (void){
  int p;
  float mer = 0.36;
  float ve = 0.90;
  float mar = 0.38;
  float lua = 0.16;
  float jup = 2.65;
  float sat = 1.13;
  float ura = 1.06;
  float net = 1.35;
  float plu = 0.22;
  float soma1,soma2,soma3,soma4,soma5,soma6,soma7,soma8,soma9;

  printf("------ Bem vindo ao sistema de conversão de peso da Nasa -------\n ");
  
  printf("Nos informe o seu peso: " );
  
  scanf("%d", &p);
  
  printf("------Abaixo esta a tabela com a conversao do seu peso de acordo com cada planeta-------\n");
  soma1 = p * mer;
  soma2 = p * ve;
  soma3 = p * mar;
  soma4 = p * lua;
  soma5 = p * jup;
  soma6 = p * sat;
  soma7 = p * ura;
  soma8 = p * net;
  soma9 = p * plu;
  
  
  printf(" 1- Mercúrio: %.2f\n ", soma1);
  printf("2- Vênus: %.2f\n ", soma2);
  printf("3- Marte: %.2f\n ", soma3);
  printf("4- Lua: %2.f\n ", soma4);
  printf("5- Júpiter: %2.f\n ", soma5);
  printf("6- Saturno: %.2f\n ", soma6);
  printf("7- Urano: %.2f\n ", soma7);
  printf("8- Netuno: %.2f\n ", soma8);
  printf("9- Plutão: %.2f\n", soma9);
  
  
}

/* Exercicio 2.22
  Na competição de mergulho olímpica as notas de um atleta são dadas assim: oito juízes dão notas entre 0 e 10. Em seguida a nota mais baixa e a mais alta são descartadas e a nota final do atleta é dada pela média das seis notas restantes. Faça um programa que reebe as oito notas correspondentes a um atleta e apresentaa sua nota final.
  */


int main(void)
{
  int j1, j2, j3, j4, j5, j6, j7, j8;
  int menor, maior;
  float soma;

  printf("Os juízes irão decidir qual foi a nota do atleta\n");

  printf("Juiz 1: ");
  scanf("%d", &j1);
  
  printf("Juiz 2: ");
  scanf("%d", &j2);
  
  printf("Juiz 3: ");
  scanf("%d", &j3);
  
  printf("Juiz 4: ");
  scanf("%d", &j4);
  
  printf("Juiz 5: ");
  scanf("%d", &j5);
  
  printf("Juiz 6: ");
  scanf("%d", &j6);
  
  printf("Juiz 7: ");
  scanf("%d", &j7);
  
  printf("Juiz 8: ");
  scanf("%d", &j8);

//Declarando o maior numero.
  if (j1 >= j2 && j1 >= j3 && j1 >= j4 && j1 >= j5 && j1 >= j6 && j1 >= j7 && j1 >= j8){
    
    maior = j1;
    
  } else if ( j2 >= j1 && j2 >= j3 && j2 >= j4 && j2 >= j5 && j2 >= j6 && j2 >= j7 && j2 >= j8) {
    maior = j2;
    
  } else if ( j3 >= j1 && j3 >= j2 && j3 >= j4 && j3 >= j5 && j3 >= j6 && j3 >= j7 && j3 >= j8) {
    maior = j3;
    
  } else if ( j4 >= j1 && j4 >= j2 && j4 >= j3 && j4 >= j5 && j4 >= j6 && j4 >= j7 && j4 >= j8) {
    maior = j4;
    
  } else if ( j5 >= j1 && j5 >= j2 && j5 >= j3 && j5 >= j4 && j5 >= j6 && j5 >= j7 && j5 >= j8) {
    maior = j5;
    
  } else if ( j6 >= j1 && j6 >= j2 && j6 >= j3 && j6 >= j4 && j6 >= j5 && j6 >= j7 && j6 >= j8) {
    maior = j6;
    
  } else if ( j7 >= j1 && j7 >= j2 && j7 >= j3 && j7 >= j4 && j7 >= j5 && j7 >= j6 && j7 >= j8) {
    maior = j7;
    
  } else if ( j8 >= j1 && j8 >= j2 && j8 >= j3 && j8 >= j4 && j8 >= j5 && j8 >= j6 && j8 >= j7) {
    maior = j8;
  }

//Declarando o menor numero.
  if ( j1 < j2 && j1 > j3 && j1 > j4 && j1 > j5 && j1 > j6 && j1 > j7 && j1 > j8){
    
    menor = j1;
    
  } else if ( j2 < j1 && j2 < j3 && j2 < j4 && j2 < j5 && j2 < j6 && j2 < j7 && j2 < j8) {
    
    menor = j2;
    
  } else if ( j3 < j1 && j3 < j2 && j3 < j4 && j3 < j5 && j3 < j6 && j3 < j7 && j3 < j8) {
    
    menor = j3;

  } else if ( j4 < j1 && j4 < j2 && j4 < j3 && j4 < j5 && j4 < j6 && j4 < j7 && j4 < j8) {
    
    menor = j4;
  } else if ( j5 < j1 && j5 < j2 && j5 < j3 && j5 < j4 && j5 < j6 && j4 < j7 && j4 < j8) {
    
    menor = j5;
  } else if ( j6 < j1 && j6 < j2 && j6 < j3 && j6 < j4 && j6 < j5 && j6 < j7 && j6 < j8) {
    
    menor = j6;
  } else if ( j7 < j1 && j7 < j2 && j7 < j3 && j7 < j4 && j7 < j5 && j7 < j6 && j7 < j8) {
    
    menor = j7;
    
  } else if ( j8 < j1 && j8 < j2 && j8 < j3 && j8 < j4 && j8 < j5 && j8 < j6 && j8 < j7) {
    
    menor = j8;
  }
  soma = (j1 + j2 + j3 + j4 + j5 + j6 + j7 + j8 - menor - maior) / 6.0;

  printf("A nota final do atleta é: %.2f", soma);
   
}

/* Exercicio 2.23
   Esreva um algoritmo que reebe um ano maior do que zero e diz a que séulo ele pertene.Para relembrar, os anos de 1 a 100 são do séulo I, os anos de 101 a 200 são do séulo II e assim por diante. Voê não preisa esrever o número do séulo com numeração romana,mas preisa conferir seu programa pra ver se ele está mesmo certo.
   */
  
int main (void) {
  
int ano, sec; 
  
  printf("Me diga qual o ano e irei lhe mostrar qual seculo ele pertence\n");

  printf("Ano: ");
  scanf("%d", &ano);

  if(ano >= 1 && ano <= 100){
    
  printf("Pertence ao seculo I");
    
  } else if( ano >= 101 && ano <= 200){
    
    printf("pertence ao seculo II");
    
  } else if( ano >= 201 && ano <= 300){
    
    printf("Pertence ao seculo III");
    
  } else if( ano >= 1901 && ano <= 2000){
    
    printf("Pertence ao seculo XX");
    
  } else if( ano >= 2001 && ano <= 2100)
    printf("Pertence ao seculo XXI");

}

/* Exercicios de repetição - 3.0
  Escreva um programa que recebe dois números a e b e acha a soma de todos os números entre a e b. Faça seu programa funionar até mesmo se a for maior do que b.
  */
  

int main (void){
  int a, b;
  int soma;
  float mult = 0;

  printf("escolha o numero: ");
  scanf("%d", &a);
  printf("escolha outro numero: ");
  scanf("%d", &b);

  while (a && b <= 100){
    if( a % mult && b % mult == 0 )
      mult++;
    //soma = a + b;
    printf("A soma dos numeros entre %d e %d é: %f\n", a, b, mult);
    a++;
    b++;
  }
}

/* Exercício código sequencial e condicionais

Você deve escrever um programa que calcule o salário final de um funcionário da Abangu Corporation.
O cálculo de salário final é bastante simples:

 Seu programa deve receber o salário base b do funcionário.
 Seu programa deve receber o número de dependentes d do funcionário.
 Seu programa deve receber o número de anos de casa c do funcionário.
 Seu programa deve receber o ano atual a.
 O funcionário recebe um acréscimo de 3% sobre o salário base para cada dependente que ele tem
(até o máximo de 5 dependentes).
 Se o funcionário tem menos de 4 dependentes, ele recebe um acréscimo de 4% sobre o salário
base para cada 5 anos de casa que ele tem (até o máximo de 6 acréscimos).
 Se o funcionário tem 4 ou mais dependentes ele recebe um acréscimo de 7% sobre o salário base
para cada 6 anos de casa que ele tem (até o máximo de 7 acréscimos).
 Todos ganham 1% extra de aumento sobre o salário base se for um ano bissexto.
*/
  
int main (void){

  float b, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, sal_total = 0;
  int d, anosc, anoa;

  printf("Qual o salário base do funcionário?: ");
  scanf("%f", &b);

  printf("Quantos dependentes o funcionário tem?: ");
  scanf("%d", &d);

  printf("Quantos anos o funcionário trabalha na empresa?: ");
  scanf("%d", &anosc);

  printf("Que ano nos estamos?: ");
  scanf("%d", &anoa);

//O funcionário recebe um acréscimo de 3% sobre o salário base para cada dependente que ele tem
  
  if (d == 0){
    printf("Você não tem acrescimo por numero de dependentes\n");
  } else if(d == 1) {
    
     soma1 = (3.0 / 100.0 ) * b;
     printf("Seu salário recebeu um acrescimo de: %.2f\n", 
     soma1);
    sal_total += soma1;
    
    } else if(d == 2) {
    
     soma1 = (6.0 / 100.0 ) * b;
     printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma1);
    sal_total += soma1;
    
    } else if(d == 3) {
    
     soma1 = (9.0 / 100.0 ) * b;
     printf("Seu salário recebeu um acrescimo de: %.2f\n", 
     soma1);
    sal_total += soma1;
    
    } else if(d == 4) {
    
     soma1 = (12.0 / 100.0 ) * b;
     printf("Seu salário recebeu um acrescimo de: %.2f\n", 
     soma1);
    sal_total += soma1;
    
    } else if(d >= 5) {
    
     soma1 = (15.0 / 100.0 ) * b;
     printf("Seu salário recebeu um acrescimo de: %.2f\n", 
     soma1);
     sal_total += soma1;
  } 

  //Se o funcionário tem menos de 4 dependentes, ele recebe um acréscimo de 4% sobre o salário base para cada 5 anos de casa que ele tem (até o máximo de 6 acréscimos).

  if(d < 4 && anosc == 5){
    
    soma2 = (4.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma2);
    sal_total += soma2;
    
  } else if( d <= 4 && anosc >= 5 && anosc <= 9 ){
  
    soma2 = (8.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma2);
    sal_total += soma2;
  
  } else if( d <= 4 && anosc >= 10 && anosc <= 14 ){

    soma2 = (12.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma2);
        sal_total += soma2;


} else if( d <= 4 && anosc >= 15 && anosc <= 19 ){

    soma2 = (16.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma2);
        sal_total += soma2;

}  else if( d <= 4 && anosc >= 20 && anosc <= 24 ){
    
    soma2 = (20.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma2);
        sal_total += soma2;


}  else if( d <= 4 && anosc >= 25 && anosc <= 29 ){
    
    soma2 = (24.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma2);
        sal_total += soma2;

}  

  //Se o funcionário tem 4 ou mais dependentes ele recebe um acréscimo de 7% sobre o salário base para cada 6 anos de casa que ele tem (até o máximo de 7 acréscimos).

  if( d >= 4 && anosc == 6 ){
    soma3 = (7.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma3);
        sal_total += soma3;

    
  } else if( d >= 4 && anosc >= 7 && anosc <= 13 ){

    soma3 = (14.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma3);
    sal_total += soma3;
    
    } else if( d >= 4 && anosc >= 14 && anosc <= 20  ){

    soma3 = (21.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma3);
    sal_total += soma3;
    
    } else if( d >= 4 && anosc >= 21 && anosc <= 27 ){

    soma3 = (28.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma3);
    sal_total += soma3;
    
    } else if( d >= 4 && anosc >= 28 && anosc <= 34 ){

    soma3 = (35.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma3);
    sal_total += soma3;
    
    } else if( d >= 4 && anosc >= 35 && anosc <= 41 ){

    soma3 = (42.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma3);
    sal_total += soma3;
    
    } else if( d >= 4 && anosc >= 42 && anosc <= 48 ){

    soma3 = (49.0 / 100.0) * b;
    printf("Seu salário recebeu um acrescimo de: %.2f\n", 
    soma3);
    sal_total += soma3;
        
   }
    if (anoa % 2 == 0){
      soma4 = (1.0 / 100.0) * b;
      printf("Seu salario recebeu um acrescimo: %.2f\n", soma4);
      sal_total += soma4;
    
  } else {
      printf("Seu salário nao recebeu aumento por ano bissexto\n");
    
    }
  
  sal_total = b + soma1 + soma2 + soma3 + soma4;
  printf("O seu salario com todos os acrescimos ficou: R$%.2f\n", sal_total);
    
}





