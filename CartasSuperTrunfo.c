#include <stdio.h>


int main() {
    
    printf("Desafio super trunfo-países!\n");
    
     
    
    char estado, codigo_da_carta, nome_da_cidade;
    int carta, carta1, carta2,  numero_de_pontos_turisticos;
    float area, PIB, densidade_populacional, PIB_per_capita, populacao;


    //carta 1:
    printf("carta1:\n");
    printf("estado: A\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: São Paulo\n");
    printf("populacao: 12325000\n");
    printf("area: 1521.11 km²\n");
    printf("PIB: 699.28 bilhões de reais\n");
    printf("Número de Pontos Turísticos: 50\n");
    densidade_populacional = (float)12325000/1521.11;
    PIB_per_capita = (float)699280000000/12325000;
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", PIB_per_capita);

    
    //Carta 2:
    printf("Carta 2:\n");
    printf("Estado: B\n");
    printf("Código: B02\n");
    printf("Nome da Cidade: Rio de Janeiro\n");
    printf("populacao: 6748000\n");
    printf("area: 1200.25 km²\n");
    printf("PIB: 300.50000000\n");
    printf("Número de Pontos Turísticos: 30\n");
    densidade_populacional = (float) 6748000/1200.25;
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    PIB_per_capita= (float)30050000000/6748000;
    printf("PIB per Capita: %.2f\n", PIB_per_capita);
    


}