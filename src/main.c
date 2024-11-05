#include <stdio.h> // Importa a biblioteca "Standart Input Output Header(cabecalho)"
#include <locale.h> // Importa a biblioteca para Formatação de idiomas
#include <stdlib.h> // Importa a biblioteca Standard Librabry. Necessária para trabalhar com idiomas, especialmente strings e caracteres especiais.

// Função que define e formata o idioma de entrada de dados
void lang_format() {
    setlocale(LC_ALL, "pt_BR.UTF8");

#ifdef _WIN32
    system("chcp 65001 > NULL");
#endif
}

int main() {
    lang_format(); // Chamada de função. Define o idioma de entrada de dados

    // Início do BLOCO 1 (Entrada de dados)
    int input_porcent_taxa;
    float input_valor_venda, input_valor_aquisicao; // Declaração de variáveis | BLOCO 1
    float calc_valor_descont_taxa, calc_valor_lucro_din_aquisicao, calc_valor_lucro_din_venda;
    float calc_percent_lucro_aquisicao, calc_percent_lucro_venda; // Declaração de variáveis | BLOCO 2
    float test;
    
        // Início do BLOCO 1 (Interface e entradas)
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n"
        "Boas vindas ao Vendilson!\n"
        "■■■■■■■■■■■■■■■■■■■■■■■■■\n\n"
        "══════════════════════════════════════════════════\n"
        "Ferramenta desenvolvida para te ajudar a calcular\n"
        "lucro, prejuízo e taxas ao vender produtos\n"
        "em plataformas de e-commerce.\n\nNão fique no escuro! "
        "Facilite a precificação.\n"
        "Agora você vende que nem água, miseravi!\n"
        "══════════════════════════════════════════════════\n\n"
    );

    printf("Insira o valor de venda que deseja atribuir ao produto: ");
    scanf("%f", &input_valor_venda);
    
    printf("\nInsira o custo de aquisição\nDigite *0* caso não haja custo: ");
    scanf("%f", &input_valor_aquisicao);

    printf("\nInsira a porcentagem de comissão cobrada pela plataforma: ");
    scanf("%d", &input_porcent_taxa);
    // Início do BLOCO 1 (Interface e entradas)

    // Início do BLOCO 2 (Cálculos)
    calc_valor_descont_taxa = (input_valor_venda * input_porcent_taxa) / 100; // Cálculo do desconto da taxa de comissão
    calc_valor_lucro_din_aquisicao = input_valor_venda - input_valor_aquisicao - calc_valor_descont_taxa; // Cálculo do lucro em dinheiro (com aquisição)
    calc_valor_lucro_din_venda = input_valor_venda - calc_valor_descont_taxa; // Cálculo do lucro em dinheiro (somente venda)
    calc_percent_lucro_aquisicao = (calc_valor_lucro_din_aquisicao / input_valor_aquisicao) * 100; // Cálculo do lucro em porcentagem (com aquisição)
    // Fim do BLOCO 2 (Cálculos)

    // Início do BLOCO 3 (Prints)
    printf("%s %d%% %s %s -%.2f\n", "\nValor descontado pela taxa de comissão de", input_porcent_taxa, "foi:", "R$", calc_valor_descont_taxa);
    printf("%s %s %.2f \n\n", "Valor recebido pela venda:", "R$", calc_valor_lucro_din_venda);
   
    if (calc_valor_lucro_din_aquisicao < 0 && calc_percent_lucro_aquisicao < 0) { //  Condição para definir lucro ou prejuízo em dinheiro
                printf("%s %s -%.2f \n", "Você tomou um prejuízo em dinheiro de:", "R$", -calc_valor_lucro_din_aquisicao);
                printf("%s -%.2f%% \n\n", "Você tomou um prejuízo em porcentagem de:", -calc_percent_lucro_aquisicao);
    } else {
            printf("%s +%.2f \n", "Lucro em dinheiro:", calc_valor_lucro_din_aquisicao);
            printf("%s +%.2f%% \n\n", "Lucro em porcentagem:", calc_percent_lucro_aquisicao);
    } // Fim do BLOCO 3 (Prints)

    return 0;

}