# 🧮 Cálculo do Dobro de um Número — Linguagem C

## 📘 Descrição
Este programa em **C** solicita ao usuário que digite um número e, em seguida, calcula o **dobro** desse valor.  
O objetivo é demonstrar o uso de **bibliotecas padrão**, **entrada e saída de dados**, e **operações matemáticas simples**.

---

## 📚 Bibliotecas Utilizadas

| Biblioteca | Função Principal | Descrição |
|-------------|------------------|------------|
| `#include <stdlib.h>` | Funções utilitárias | Oferece comandos do sistema e gerenciamento de memória. |
| `#include <stdio.h>` | Entrada e saída | Permite usar `printf()` e `scanf()` para comunicação com o usuário. |
| `#include <math.h>` | Matemática | Contém funções matemáticas, como `pow()`, `sqrt()`, etc. |
| `#include <locale.h>` | Localização | Permite usar acentos e caracteres regionais em português. |

---

## 🧠 Código-Fonte

```c
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "pt_BR.UTF-8");

    float numero, dobro; 

    printf("Digite um número para verificar o seu dobro: ");
    scanf("%f", &numero); 
    dobro = numero * 2; 

    printf("O dobro de %.2f é %.2f\n", numero, dobro); 

    return 0;
}
🪜 Etapas do Programa
Inclusão das bibliotecas — Importa as funções necessárias para entrada, saída e manipulação de dados.

Configuração da linguagem — setlocale(LC_ALL, "pt_BR.UTF-8"); permite acentuação.

Entrada de dados — scanf() captura o número digitado.

Processamento — Multiplica o número por 2.

Saída — Exibe o resultado formatado.

⚙️ Exemplo de Execução
Entrada:

yaml
Copiar código
Digite um número para verificar o seu dobro: 7
Saída:

mathematica
Copiar código
O dobro de 7.00 é 14.00
💡 Dicas Didáticas

Utilize %.2f para limitar as casas decimais.

Use nomes de variáveis claros, como numero e dobro.

setlocale() é útil para programas em português.

Finalize o programa com return 0; para indicar execução bem-sucedida.
