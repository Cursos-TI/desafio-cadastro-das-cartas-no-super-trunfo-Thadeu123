#include <stdio.h>

int main(){

char estado [10];
char codigo [5];
char cidade [20];
int populacao;
int pontosturisticos;
float area;
float pib;



printf ("digite seu estado: \n");
scanf ("%s", &estado);

printf("codigo: \n");
scanf("%s", &codigo);

printf("nome da cidade: \n");
scanf("%s", &cidade);

printf("total de habitantes: \n");
scanf("%d", &populacao);

printf("area;\n");
scanf("%f", &area);

printf("pib: \n");
scanf("%f", &pib);

printf("quantidade de pontos turisticos: \n");
scanf("%d", &pontosturisticos);


printf("carta 01! \n");
printf("estado: %s \n", estado);
printf("codigo da carta: %s%s \n", estado, codigo);
printf("cidade: %s \n", cidade);
printf("habitantes: %d \n", populacao);
printf("area: %f \n", area);
printf("pib: %f \n", pib);
printf("pontos turisticos: %d \n", pontosturisticos);

return 0;












}
    