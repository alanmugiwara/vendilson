// O QUE SERÁ UTILIZADO?

// 1. Variáveis
// 2. Funções
// 2. Bibliotecas Standard Input/output, Standart Librabry, Locale

// ALGORITIMO: BLOCO 1
// Passo 1 Inserir um Menu inicial
// Passo 2 inserir valor de venda do produto
// Passo 3 inserir valor de aquisição do produto
// Passo 4 inserir taxa de comissão de venda

// ALGORITIMO: BLOCO 2
// Passo 5 Calcular o valor da taxa em cima do valor do produto
// Passo 6 calcular o valor de lucro (venda-custo-comissão)
// Passo 7 Calcular o lucro em porcentagem
// Passo 8 Calcular o valor final que será recebido pela venda

// ALGORITIMO: BLOCO 3
// Passo 9 Mostrar o valor em dinheiro será descontado pela taxa de comissão
// Passo 10 mostrar o valor de lucro em porcentagem 
// Passo 11 mostrar o valor de lucro em dinheiro
// Passo 12 mostrar o valor final em dinheiro que será recebido pela venda

#include <stdio.h> // Importa a biblioteca "Standart Input Output Header(cabecalho)"
#include <locale.h> // Importa a biblioteca para Formatação de idiomas
#include <stdlib.h> // Importa a biblioteca Standart Librabry. Necessária para trabalhar com idiomas, especialmente strings e caracteres especiais.

// Função que define o idioma de entrada de dados
void lang_format() {
    setlocale(LC_ALL, "pt_BR.UTF8");

#ifdef _WIN32
system("chcp 65001; > NULL");
#endif
}

int main() {
    lang_format(); // Chamada de função. Define o idioma de entrada de dados

    float input_valor_venda[10], input_valor_aquisicao[10], input_porcent_taxa[10]; // Declaração de variáveis | BLOCO 1
    float calc_valor_descont_taxa, calc_valor_lucro_din, calc_percent_lucro, calc_valor_venda_final; // Declaração de variáveis | BLOCO 2

    // Passo 1 | Menu inicial
    printf("==============================\nBoas vindas ao Vendilson Jr!\n==============================\n\n");

    // Passo 2 | Valor de venda
    printf("Insira o valor de venda que deseja atribuir ao produto:\n");
    scanf("%d", &input_valor_venda);

    // Passo 3 | Valor de aquisição
    printf("%d", &input_valor_aquisicao);

    // Passo 4 | porcentagem da taxa de comsissão
    printf("%d", &input_porcent_taxa);

    // Passo 5 | Calcular o valor da taxa em cima do valor do produto
}

