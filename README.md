# Exercício: Manipulação Avançada de Pilhas (TAD)
Este diretório contém a resolução de exercícios práticos da disciplina de Algoritmos e Estruturas de Dados II. O foco é a manipulação do Tipo Abstrato de Dados (TAD) Pilha, respeitando o princípio de encapsulamento.

📋 Sobre o Exercício

O objetivo é implementar operações auxiliares para manipulação de pilhas de números reais, sem acesso direto à estrutura interna (struct). O desenvolvimento deve utilizar apenas as operações primitivas fornecidas pela interface pilha.h (push, pop, vazia, etc.).

⚙️ Funcionalidades Implementadas

O código aborda os seguintes problemas:

- Consulta de Topo (topo): Função que retorna o valor no topo da pilha sem removê-lo permanentemente, garantindo a restauração do estado original da estrutura.

- Concatenação de Pilhas (concatena_pilhas): Algoritmo que transfere os elementos de uma pilha auxiliar (p2) para o topo da pilha principal (p1). A implementação considera a preservação da ordem dos elementos e o esvaziamento da segunda pilha, utilizando recursividade ou pilha auxiliar.

- Cópia de Pilha (copia_pilha): Função que gera uma nova instância independente da pilha, contendo os mesmos valores na mesma ordem, mantendo a pilha original intacta.

🛠️ Tecnologias e Conceitos

- Linguagem C

- TAD (Tipo Abstrato de Dados)

- Recursividade e uso de estruturas auxiliares.

Professor: Heveraldo Rodrigues de Oliveira
