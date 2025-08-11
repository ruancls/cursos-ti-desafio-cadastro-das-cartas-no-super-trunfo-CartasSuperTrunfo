#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da carta 1
    char estado1;                 // Ler o estado, uma letra de "A" a "H" (representando os 8 estados), tipo: char.
    char codcarta1[20];           // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string).
    char nomecidade1[20];         // O nome da cidade. Tipo: char[] (string).
    unsigned long int populacao1; // O número de habitantes da cidade. Tipo: unsigned long int.
    float area1;                  // A área da cidade em quilômetros quadrados. Tipo: float.
    float PIB1;                   // O Produto Interno Bruto da cidade. Tipo: float.
    int pturisticos1;             // A quantidade de pontos turísticos na cidade. Tipo: int.
    float dpopulacional1;         // A densidade populacional. Tipo: float
    float PIBpercapita1;          // PIB per capita. Tipo: float
    float superpoder1;            // Cálculo para superpoder da carta; 

    // Variáveis da carta 2
    char estado2;          
    char codcarta2[20];     
    char nomecidade2[20];  
    unsigned long int populacao2;        
    float area2;           
    float PIB2;            
    int pturisticos2;     
    float dpopulacional2;
    float PIBpercapita2;
    float superpoder2; 

    // Variáveis para armazenamento de resultados booleanos / Resultado = 1 (carta 1 ganha), Resultado = 0 (Carta 2 ganha)
    int resultado_populacao;      // Armazenamento da população; 
    int resultado_area;           // Armazenamento da area; 
    int resultado_pib;            // Armazenamento do PIB;
    int resultado_pturisticos;    // Armazenamento dos pontos turísiticos;
    int resultado_dpopulacional;  // Armazenamento da densidade populacional;
    int resultado_pibpercapita;   // Armazenamento do PIB per capita;
    int resultado_superpoder;     // Armazenamento do superpoder;

    // Carta 1 - Coleta de dados
    printf("Dados da carta 1\n");                     

    printf("Preencha o estado da carta (A a H): ");  
    scanf("%c", &estado1);                                        // Coleta o input preenchido em estado1.  
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.
    
    printf("Preencha o codigo da carta (01 a 04): ");             
    fgets(codcarta1, sizeof(codcarta1), stdin);                   // Coleta o input preenchido em codcarta1.
    codcarta1[strcspn(codcarta1, "\n")] = 0;                      // Finaliza a string.

    printf("Informe o nome da cidade: ");       
    fgets(nomecidade1, sizeof(nomecidade1), stdin);               // Coleta o input preenchido em nomecidade1.
    nomecidade1[strcspn(nomecidade1, "\n")] = 0;                  // Finaliza a string.

    printf("Informe a populacao da cidade: ");       
    scanf("%lu", &populacao1);                                    // Coleta o input preenchido em populacao1.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.

    printf("Informe a area da cidade: ");                        
    scanf("%f", &area1);                                          // Coleta o input preenchido em area1.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.

    printf("Informe o PIB da cidade: ");        
    scanf("%f", &PIB1);                                           // Coleta o input preenchido em PIB1.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.

    printf("Informe a quantidade de pontos turisticos: ");        
    scanf("%d", &pturisticos1);                                   // Coleta o input preenchido em pturisticos1.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.

    // Carta 2 - Coleta de dados       
    printf("\n");         
    printf("Dados da carta 2\n");                            

    printf("Preencha o estado da carta (A a H): ");         
    scanf("%c", &estado2);                                        // Coleta o input preenchido em estado2.  
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.
    
    printf("Preencha o codigo da carta (01 a 04): ");             
    fgets(codcarta2, sizeof(codcarta2), stdin);                   // Coleta o input preenchido em codcarta2.
    codcarta2[strcspn(codcarta2, "\n")] = 0;                      // Finaliza a string.

    printf("Informe o nome da cidade: ");       
    fgets(nomecidade2, sizeof(nomecidade2), stdin);               // Coleta o input preenchido em nomecidade2.
    nomecidade2[strcspn(nomecidade2, "\n")] = 0;                  // Finaliza a string.

    printf("Informe a populacao da cidade: ");       
    scanf("%lu", &populacao2);                                    // Coleta o input preenchido em populacao2.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.

    printf("Informe a area da cidade: ");                        
    scanf("%f", &area2);                                          // Coleta o input preenchido em area2.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.

    printf("Informe o PIB da cidade: ");        
    scanf("%f", &PIB2);                                           // Coleta o input preenchido em PIB2.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.

    printf("Informe a quantidade de pontos turisticos: ");        
    scanf("%d", &pturisticos2);                                   // Coleta o input preenchido em pturisticos2.
    getchar();                                                    // Consome a quebra de linha gerada pelo enter.
    
    // Função para calcular densidade populacional       
    dpopulacional1 = (float)populacao1 / area1; 
    dpopulacional2 = (float)populacao2 / area2;

    // Função para calcular o PIB per capita
    PIBpercapita1 = PIB1 / (float)populacao1;
    PIBpercapita2 = PIB2 / (float)populacao2;

    // Função para calcular superpoder carta 1
    superpoder1 = (float)populacao1 + area1 + PIB1 + (float)pturisticos1 + (1.0f / dpopulacional1) + PIBpercapita1;

    // Função para calcular superpoder carta 2
    superpoder2 = (float)populacao2 + area2 + PIB2 + (float)pturisticos2 + (1.0f / dpopulacional2) + PIBpercapita2;

    // Função para comparar dados das cartas 
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = PIB1 > PIB2;
    resultado_pturisticos = pturisticos1 > pturisticos2;
    resultado_dpopulacional = dpopulacional1 < dpopulacional2;
    resultado_pibpercapita = PIBpercapita1 > PIBpercapita2;
    resultado_superpoder = superpoder1 > superpoder2;

    // Printando carta 1
    printf("\n");                                                 // Quebra de linha para separar visualmente o print completo da carta 1.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);                       
    printf("Codigo: %c%s\n", estado1, codcarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB1);
    printf("Numeros de Pontos Turisticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f km²\n", dpopulacional1);
    printf("PIB per capita: %.2f reais\n",PIBpercapita1 );

    // Printando carta 2
    printf("\n");                                                 // Quebra de linha para separar visualmente o print completo da carta 2.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);                       
    printf("Codigo: %c%s\n", estado2, codcarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB2);
    printf("Numeros de Pontos Turisticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f km²\n", dpopulacional2);
    printf("PIB per capita: %.2f reais\n",PIBpercapita2);

    // Comparações das cartas
    printf("\nComparacao das cartas: Resultado 1 (carta 1 vence), Resultado 0 (carta 2 vence)");
    printf("\nPopulacao: %d", resultado_populacao);
    printf("\nArea: %d", resultado_area);
    printf("\nPIB: %d", resultado_pib);
    printf("\nPontos turisticos: %d", resultado_pturisticos);
    printf("\nDensidade populacional: %d", resultado_dpopulacional);
    printf("\nPIB per capita: %d", resultado_pibpercapita);
    printf("\nSuperpoder: %d\n", resultado_superpoder);
    
    printf("\n"); 
    printf("Pressione ENTER para sair...");
    getchar();
    return 0;

}
    /*
    Nível Novato:
    Apos o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informacões cadastradas, de forma organizada e legível. 
    Para cada carta, imprima cada informação em uma linha separada, com uma descricao clara. Por exemplo:
    Carta 1:
    Estado: A
    Codigo: A01
    Nome da Cidade: Sao Paulo
    População: 12325000
    Area: 1521.11 km²
    PIB: 699.28 bilhoes de reais
    Numero de Pontos Turisticos: 50

    Nível Aventureiro:
    1 - Calcular a Densidade Populacional: 
    * Divida a população da cidade pela sua área. 
    * O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. 
    * Armazene esse valor em uma variável do tipo float.
    
    2 - Calcular o PIB per Capita: 
    * Divida o PIB da cidade pela sua população. 
    * O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. 
    * Armazene esse valor em uma variável do tipo float.
    
    3 - Exibir os Resultados: 
    * Além de exibir as informações lidas do usuário (como no nível básico)
    * Seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. 
    * Formate os valores de ponto flutuante com duas casas decimais.

    Nível Mestre: 
    Obs.: população agora deve ser armazenada como unsigned long int para acomodar números maiores. s demais variáveis mantêm seus tipos convencionais.
    1 - Cálculo do Super Poder:
    * Cada carta recebe um valor de "Super Poder", definido como a soma de:
    + População
    + Área 
    + PIB
    + Pontos turísticos
    + PIB per capita
    + Inverso da densidade populacional (1 / densidade)
    O valor final é armazenado como float. Conversões de tipo são aplicadas quando necessário.
    2 - Comparação de Atributos:
    * Todos os atributos numéricos são comparados individualmente entre as duas cartas.
    Para a densidade populacional, vence o menor valor.
    Para os demais atributos (inclusive Super Poder), vence o maior valor.
    3 - Exibição dos Resultados:
    * O programa imprime o resultado da comparação de cada atributo.
    * 1 indica que a Carta 1 venceu.
    * * 0 indica que a Carta 2 venceu.
    */
