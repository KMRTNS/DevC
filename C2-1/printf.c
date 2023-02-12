#include <stdio.h>

int main(){

	//Sintaxe - printf(texto, v1, v2, ..., vN);
	printf("\nOi, tudo bem? Tenho 6 anos e programo em C.\n");
	
	//Especificadores
	
	// %d ou %i = N�meros inteiros em base decimal.
	printf("Valor inteiro: %i.\n", 10);
	printf("");

	// %x = N�meros inteiros em base Hexadecimal
	printf("Valor inteiro: %x.\n", 14546450);

	// %f = N�meros em ponto flutuante (Com casas decimais)
	printf("Valor real: %f.\n", 10.1234);
	
	// %.<num>f = Especifica quantos d�gitos ser�o impresos ap�s a v�gula
	printf("Valor real com duas casas: %.2f.\n", 10.1234);
	
	// %e = N�meros em nota��o cient�fica (Com casas decimais)
	printf("");
	
	// %c = Caracteres alfanum�ricos (Texto)
	printf("Dado de texto: %c.\n", 'a');
	
	// %s = Sequ�ncia de caracteres alfanum�ricos (Texto)
	printf("Dado de texto: %s.\n", "testando");
		
	
	//Sequ�ncia de Escape
	
	// \a = Toca um bipe, alarme sonoro padr�o do sistema	
	// \b = Backspace	
	// \n = Quebra de linha	
	// \t = Tabula��o Horizontal (TAB)	
	// \r = Retorna ao in�cio da linha	
	// \0 = Caractere nulo	
	// \v = Tabula��o vertical	
	
	// \\ = Caractere \	
	// \' = Caractere '
	// \" = Caractere "	
	// \? = Caractere ?	
	// \123 = Caractere relacionado ao c�digo 123 em octal(ASCII)	
	// \X12 = Caractere relacionado ao c�digo 12 em hexadecimal(ASCII)	
	// %% = Caractere %
	
}
