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
setlocale(LC_ALL, "pt_BR.UTF-8"); // Define o idioma e formato regional

    float numero, dobro; // Declara as variáveis

    printf("Digite um número para verificar o seu dobro: ");
    scanf("%f", &numero); // Lê o número digitado

    dobro = numero * 2; // Calcula o dobro

    printf("O dobro de %.2f é %.2f\n", numero, dobro); // Exibe o resultado

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

🧾 Correções Feitas no Código Original
Erro Encontrado	Correção Aplicada
#include <locale>	Corrigido para #include <locale.h>
setlocale(LC_ALL, ".utf-8")	Corrigido para setlocale(LC_ALL, "pt_BR.UTF-8")
printf("o dobro de %f",numero,"É %f",dobro);	Corrigido para printf("O dobro de %.2f é %.2f", numero, dobro);
Variável valor desnecessária	Substituída por cálculo direto dobro = numero * 2;

🧮 Desafios Propostos
Modifique o programa para calcular o triplo de um número.

Adicione uma verificação para identificar se o número é positivo, negativo ou zero.

Crie uma versão que leia dois números e mostre o dobro da soma.

👨‍💻 Autor
Mádison Santos Oliveira
Especialista em Segurança Cibernética • Desenvolvedor C/C++ • Educador Tecnológico
📍 Bahia, Brasil
📧 madison.ti.suporte@gmail.com
🔗 GitHub
