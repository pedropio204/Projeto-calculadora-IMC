# Projeto-calculadora-IMC
# 🏥 Calculadora de IMC (Índice de Massa Corporal)

> **Trabalho Acadêmico** — Desenvolvido como requisito avaliativo para a disciplina de **Algoritmos e Pensamento Computacional** do curso de **Ciência da Computação** da **Cruzeiro do Sul**.

## 📖 Sobre o Projeto

Este repositório contém a implementação de uma **Calculadora de IMC** desenvolvida na linguagem **C**. O projeto foi originalmente modelado em fluxograma (utilizando a ferramenta Flowgorithm) e posteriormente traduzido para código-fonte, com o objetivo de consolidar os conhecimentos em lógica de programação, estruturas de decisão, entrada/saída de dados e tratamento de variáveis.

O sistema recebe o peso e a altura do usuário, realiza o cálculo matemático do IMC e classifica o resultado de acordo com as diretrizes da Organização Mundial da Saúde (OMS).

## 🚀 Funcionalidades

*   **Interface via Terminal:** Mensagens claras de boas-vindas, instruções de entrada e despedida amigável.
*   **Cálculo Automático:** Aplica a fórmula padrão do IMC: `peso / (altura * altura)`.
*   **Classificação Completa:** Estrutura de decisão encadeada (`if/else if/else`) que cobre todas as faixas:
    *   Abaixo do peso (IMC < 18.5)
    *   Peso Normal (18.5 ≤ IMC < 25)
    *   Sobrepeso (25 ≤ IMC < 30)
    *   Obesidade Grau I (30 ≤ IMC < 35)
    *   Obesidade Grau II (35 ≤ IMC < 40)
    *   Obesidade Grau III (IMC ≥ 40)
*   **Formatação de Saída:** Exibe o resultado com duas casas decimais para melhor legibilidade.

## 🛠️ Tecnologias e Conceitos Aplicados

*   **Linguagem:** C (C99 ou superior)
*   **Bibliotecas:** `<stdio.h>` (entrada/saída), `<stdlib.h>` (utilitários), `<string.h>` (manipulação de strings com `strcpy`).
*   **Conceitos de Lógica:**
    *   Declaração e atribuição de variáveis (`float`, `char`).
    *   Entrada de dados (`scanf`) e saída formatada (`printf`).
    *   Estruturas condicionais encadeadas.
    *   Prevenção de erros (ex: garantia de que a última faixa de IMC capture valores extremos).

