## (F) ##

#### Verificar se uma palavra ou frase é palíndromo" ####

**Dicas**

**1.** Para descobrir se temos um palíndromo devemos comparar o primeiro caracter com o último inicialmente. Em seguida, avançamos uma casa para a direita no início e recuamos uma casa para a esquerda no fim. Repetimos o procedimento até que não exista mais essa possibilidade.
**2.** O método substr() nos ajudará a percorrer a string da esquerda para a direita, enquanto a propriedade length() nos auxiliará no caminho inverso.
**3.** Assumimos ser verdade enquanto pudermos comparar caracteres e forem iguais. Na primeira diferença, retornamos falso.
**4.** O código implementado funciona perfeitamente para strings simples (sem espaço). Para strings com espaços, pesquise sobre os métodos da linguagem para remover espaços em branco, tais como std::erase ou replace.

Exemplo: "ASA"; "SAIRAM O TIO E OITO MARIAS".