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

    // INício do BLOCO 1 (Entrada de dados)
    float input_valor_venda, input_valor_aquisicao, input_porcent_taxa; // Declaração de variáveis | BLOCO 1
    float calc_valor_descont_taxa, calc_valor_lucro_din, calc_percent_lucro, calc_valor_venda_final; // Declaração de variáveis | BLOCO 2

    // Passo 1 | Menu inicial
printf("==========================\n"
       "Boas vindas ao Vendilson!\n"
       "==========================\n\n"
       "Ferramenta desenvolvida para te ajudar a calcular\n"
       "lucro, prejuízo e taxas ao vender produtos em\n"
       "plataformas de e-commerce. Facilite a precificação\n"
       "de forma prática e rápida!\n\n"
);

    // Passo 2 | Valor de venda
    printf("Insira o valor de venda que deseja atribuir ao produto: ");
    scanf("%f", &input_valor_venda);

    // Passo 3 | Valor de aquisição
    printf("\nInsira o custo de aquisição\nDigite *0* caso não haja custo: ");
    scanf("%f", &input_valor_aquisicao);

    // Passo 4 | porcentagem da taxa de comsissão
    printf("\nInsira a porcentagem de comissão cobrada pela plataforma: ");
    scanf("%f", &input_porcent_taxa);
    // Final do BLOCO 1 (Entrada de dados)

    // Início do BLOCO 2 (Cálculos)
    calc_valor_descont_taxa = (input_valor_venda * input_porcent_taxa) / 100; // Cálculo do desconto da taxa de comissão
    calc_valor_lucro_din = input_valor_venda - input_valor_aquisicao - calc_valor_descont_taxa; // Cálculo do lucro em dinheiro
    calc_percent_lucro = (calc_valor_lucro_din / input_valor_aquisicao) * 100; // Cálculo do lucro em porcentagem
    calc_valor_venda_final = input_valor_venda - calc_valor_descont_taxa; // Cálculo do valor final em  dinheiro que será recebido pela venda
    // Fim do BLOCO 2 (Cálculos)

    // Início do BLOCO 3 (Prints)
    printf("\nValor em dinheiro será descontado pela taxa de comissão: %.2f\n", calc_valor_descont_taxa);
    printf("Lucro em porcentagem: %.2f%%\n", calc_percent_lucro);
    printf("Lucro em moeda: %.2f\n", calc_valor_lucro_din);
    printf("Valor total em moeda recebido pela venda: %.2f\n", calc_valor_venda_final);
    
    return 0;

}

