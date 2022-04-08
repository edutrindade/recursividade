## (E) ##

#### Inversão de uma string. Ex: "ABACATE" = "ETACABA" ####

**Dicas**

**1.** Para invertar uma string, basta inverter os seus caracteres.
**2.** A propriedade length() de um objeto String contém o comprimento da string. length é uma propriedade read-only (somente leitura) de instâncias de string.
**3.** O método substr() retorna uma parte da string, começando no índice especificado e estendendo-se por um determinado número de caracteres posteriormente.

Exemplo de uso length():
```javascript
string s = "abacate"
s.length() // Tamanho da string s 
// Resultado esperado: 7
```
Exemplo de uso substr():
```javascript
string s = "abacate"
s.substr(0,3) *// Pega do índice 0 estendendo-se por 3* caracteres. 
Resultado esperado: "aba"
```