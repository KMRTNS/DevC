#include <stdio.h>

int main(){

	//Sintaxe - printf(texto, v1, v2, ..., vN);
	printf("\nOi, tudo bem? Tenho 6 anos e programo em C.\n");
	
	//Especificadores
	
	// %d ou %i = Números inteiros em base decimal.
	printf("Valor inteiro: %i.\n", 10);
	printf("");

	// %x = Números inteiros em base Hexadecimal
	printf("Valor inteiro: %x.\n", 14546450);

	// %f = Números em ponto flutuante (Com casas decimais)
	printf("Valor real: %f.\n", 10.1234);
	
	// %.<num>f = Especifica quantos dígitos serão impresos após a vígula
	printf("Valor real com duas casas: %.2f.\n", 10.1234);
	
	// %e = Números em notação científica (Com casas decimais)
	printf("");
	
	// %c = Caracteres alfanuméricos (Texto)
	printf("Dado de texto: %c.\n", 'a');
	
	// %s = Sequência de caracteres alfanuméricos (Texto)
	printf("Dado de texto: %s.\n", "testando");
		
	
	//Sequência de Escape
	
	// \a = Toca um bipe, alarme sonoro padrão do sistema	
	// \b = Backspace	
	// \n = Quebra de linha	
	// \t = Tabulação Horizontal (TAB)	
	// \r = Retorna ao início da linha	
	// \0 = Caractere nulo	
	// \v = Tabulação vertical	
	
	// \\ = Caractere \	
	// \' = Caractere '
	// \" = Caractere "	
	// \? = Caractere ?	
	// \123 = Caractere relacionado ao código 123 em octal(ASCII)	
	// \X12 = Caractere relacionado ao código 12 em hexadecimal(ASCII)	
	// %% = Caractere %
	
}
