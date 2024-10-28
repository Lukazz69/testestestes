#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    
    // AQUI EU DEFINO MINHAS VARIÁVEIS QUE VOU USAR AO LONGO DO CÓDIGO.

    char codcity[10], codcity2[10];
    int populacao, populacao2;
    double area, area2;
    int pontos_turisticos, pontos_turisticos2, opcao, opcao2, opcao3;
    double pibpercapita, pibpercapita2, pib, pib2;
    double densidadepopulacional, densidadepopulacional2;

    // AQUI EU FAÇO UM MENU PARA PERGUNTAR SE O USUÁRIO QUER INICIAR O JOGO.

    printf("----------------------\n   JOGO SUPER TRUNFO   \n----------------------\n");

    printf("[1] - Já conheço o jogo quero começar a jogar.\n");
    printf("[2] - Quero conhecer as regras.\n");
    printf("[3] - Créditos.\n");
    printf("[4] - Sair do jogo.\n");
    scanf("%d", &opcao);
    getchar();
    

    // BASEADO NA RESPOSTA OBTIDA EU SIGO COM O CÓDIGO.

    switch (opcao)
    {
    case 1:

       // AQUI EU COLETO OS DADOS DA PRIMEIRA CIDADE.

       printf("Digite o código da primeira cidade:\n");
       scanf("%s", codcity);
       getchar();

       printf("Digite a população da primeira cidade\n");
       scanf(" %d", &populacao);
       getchar();

       printf("Digite a área da primeira cidade.\n");
       scanf(" %lf", &area);
       getchar();

       printf("Digite o PIB da primeira cidade.\n");
       scanf(" %lf", &pib);
       getchar();

       printf("Digite quantos pontos turísticos a primeira cidade tem.\n");
       scanf(" %d", &pontos_turisticos);
       getchar();
 
       // AQUI EU CALCULO O PIBPERCAPITA E A DENSIDADE POPULACIONAL DA PRIMEIRA CIDADE CADASTRADA.

       pibpercapita = (double) pib / populacao;

       densidadepopulacional = populacao / area;

       // AQUI EU COLETO OS DADOS DA SEGUNDA CIDADE.

       srand(time(0));

       printf("Digite o código da segunda cidade:\n");
       scanf(" %s", codcity2);
       getchar();

       populacao2 = (rand() % 4000000) + 1000000;
       area2 = (rand() % 7000) + 1000.8;
       pib2 = (rand() % 8000000000) + 1000000000;
       pontos_turisticos2 = (rand() % 30) + 10;


       // AQUI EU CALCULO O PIBPERCAPITA E A DENSIDADE POPULACIONAL DA SEGUNDA CIDADE CADASTRADA.

       pibpercapita2 = (double) pib2 / populacao2;

       densidadepopulacional2 = populacao2 / area2;

       // AGORA ENTRO COM OUTRO MENU PARA O USUÁRIO ESCOLHER QUAIS DADOS ELE QUER COMPARAR.

       printf("*** AGORA SELECIONE A PRIMERA OPÇÃO QUE VOCÊ QUER COMPARAR ***\n");
       printf("[1] - População.\n");
       printf("[2] - PIB\n");
       printf("[3] - Área\n");
       printf("[4] - PIB PerCapita\n");
       printf("[5] - Densidade populacional\n");
       scanf("%d", &opcao2);



       printf("*** AGORA SELECIONE A SEGUNDA OPÇÃO QUE VOCÊ QUER COMPARAR ***\n");
       printf("[1] - População.\n");
       printf("[2] - PIB\n");
       printf("[3] - Área\n");
       printf("[4] - PIB PerCapita\n");
       printf("[5] - Densidade populacional\n");
       scanf("%d", &opcao3);

       // NESSA ETAPA DO CÓDIGO A COMPARAÇÃO SERÁ FEITA BASEADA NA ESCOLHA DO USUÁRIO.

       switch(opcao2){
           case 1:
           if (populacao > populacao2){
               printf("A Cidade %s com %d de habitantes é a vencedora.\n", codcity, populacao);
           } else {
               printf("A Cidade %s com %d de habitantes é a vencedora.\n", codcity2, populacao2);
           }
           break;
           case 2:
           if (pib > pib2){
               printf("A Cidade %s com R$ %.3lf de PIB é a vencedora.\n", codcity, pib);
           } else {
               printf("A Cidade %s com R$ %.3lf de PIB é a vencedora.\n", codcity2, pib2);
           }
           break;
           case 3:
           if (area > area2){
               printf("A Cidade %s com %.3lf km é a vencedora.\n", codcity, area);
           } else {
               printf("A Cidade %s com %.3lf km é a vencedora.\n", codcity2, area2);
           }
           break;
           case 4:
           if (pibpercapita > pibpercapita2){
               printf("A Cidade %s com R$ %.3lf de PIB PerCapita é a vencedora.\n", codcity, pibpercapita);
           } else {
               printf("A Cidade %s com R$ %.3lf de PIB PerCapita é a vencedora.\n", codcity2, pibpercapita2);
           }
           break;
           case 5:
           if (densidadepopulacional < densidadepopulacional2){
               printf("A Cidade %s com %.3lf de densidade populacional é a vencedora.\n", codcity, densidadepopulacional);
           } else {
               printf("A Cidade %s com %.3lf de densidade populacional é a vencedora.\n", codcity2, densidadepopulacional2);
           }
           break;
           default:
           printf("Código Inválido.\n");
       }

    switch (opcao3){
        case 1:
        if (populacao > populacao2){
            printf("A Cidade %s com %d de habitantes é a vencedora.\n", codcity, populacao);
        } else {
            printf("A Cidade %s com %d de habitantes é a vencedora.\n", codcity2, populacao2);
        }
        break;
        case 2:
        if (pib > pib2){
            printf("A Cidade %s com R$ %.3lf de PIB é a vencedora.\n", codcity, pib);
        } else {
            printf("A Cidade %s com R$ %.3lf de PIB é a vencedora.\n", codcity2, pib2);
        }
        break;
        case 3:
        if (area > area2){
            printf("A Cidade %s com %.3lf km é a vencedora.\n", codcity, area);
        } else {
            printf("A Cidade %s com %.3lf km é a vencedora.\n", codcity2, area2);
        }
        break;
        case 4:
        if (pibpercapita > pibpercapita2){
            printf("A Cidade %s com R$ %.3lf de PIB PerCapita é a vencedora.\n", codcity, pibpercapita);
        } else {
            printf("A Cidade %s com R$ %.3lf de PIB PerCapita é a vencedora.\n", codcity2, pibpercapita2);
        }
        break;
        case 5:
        if (densidadepopulacional < densidadepopulacional2){
            printf("A Cidade %s com %.3lf de densidade populacional é a vencedora.\n", codcity, densidadepopulacional);
        } else {
            printf("A Cidade %s com %.3lf de densidade populacional é a vencedora.\n", codcity2, densidadepopulacional2);
        }
        break;
        default:
        printf("Código Inválido.\n");
    }

    if (codcity == codcity2){
        printf("\n\nA Cidade %s atingiu melhor pontuação nas duas categorias, então ela é a **VENCEDORA**.\n\n", codcity2);
    } else {
        printf("\n\nA cidade %s e a cidade %s cada uma ganhou em uma categoria, sendo assim estamos **SEM GANHADOR**.\n\n", codcity, codcity2);
    }

    // AQUI EU MOSTRO TODOS OS DADOS NA TELA DA CIDADE APÓS A COMPARAÇÃO.

    printf("\n **** CASO QUERIA VER OS DADOS DA CIDADE COMPLETO.\n");
    printf("\n **** AQUI ESTÃO ELES.\n");

    

    printf("\n*** Dados da primeira cidade ***\n\n");
    
    printf("Código da cidade: %s\n", codcity);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %.3lf\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("PIB per Capita: %.2f\n", pibpercapita);
    printf("Densidade populacional: %.2f\n\n", densidadepopulacional);

    printf("*** Dados da segunda cidade ***\n\n");

    printf("Código da cidade: %s\n", codcity2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.3lf\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);


    break;


    case 2:

    // AQUI SÃO AS REGRAS.

    printf("----------------\n    REGRAS   \n----------------\n");
    printf("As regras são simples.\n");
    printf("Você cadastra sua carta baseado numa cidade numerado por letras e número de A a H e de 1 a 4.\n");
    printf("O jogo irá calcular baseado na sua escolha de parâmetros qual carta tem suas especificações mais altas.\n");
    printf("E com isso irá determinar o ganhador.\n");

    break;

    case 3:

    // AQUI É O AUTOR DO CÓDIGO.

    printf("Feito por Lucas Gostosinho.\n");

    break;

    case 4:

    // MENSAGEM DE FIM DE JOGO.

    printf("------------------\n   FIM DE JOGO   \n------------------\n");

    break;

    default:

    printf("");
    }

}