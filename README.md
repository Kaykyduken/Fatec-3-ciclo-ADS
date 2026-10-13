# Fatec-3-ciclo-ADS

Portfólio das atividades desenvolvidas durante o **3º ciclo** do curso de Análise e
Desenvolvimento de Sistemas da **FATEC Itapetininga**.

Este repositório é registro e comprovação do trabalho prático de cada disciplina — código,
exercícios e materiais produzidos ao longo do semestre, versionados conforme foram feitos.

---

## Conteúdo

| Pasta | Disciplina | O que tem |
|---|---|---|
| [`Estrutura-de-dados/`](./Estrutura-de-dados) | Estrutura de Dados | Exercícios em C++ e C: condicionais, funções, vetores e modularização com arquivos `.h` |
| [`Sistemas-Operacionais/`](./Sistemas-Operacionais) | Sistemas Operacionais | Instalação do Windows, pesquisa sobre SOs, máquinas virtuais e aplicação Node.js publicada em nuvem (Render e Vercel) |
| [`Experimentos/`](./Experimentos) | — | Testes livres em C, fora das atividades das aulas |

### Estrutura de Dados

| Aula | Conteúdo |
|---|---|
| [`Aula3/`](./Estrutura-de-dados/Aula3) | 9 exercícios em C++ com entrada de dados e estruturas condicionais |
| [`Aula4/`](./Estrutura-de-dados/Aula4) | Funções em C: cálculo de média com prova substitutiva |
| [`Aula5/`](./Estrutura-de-dados/Aula5) | Sistema de cadastro e estoque de produtos com vetores (`Tarefa.c`) |
| [`Aula6/`](./Estrutura-de-dados/Aula6) | Modularização: calculadora com operações separadas em arquivos de cabeçalho (`soma.h`, `sub.h`, `mult.h`, `div.h`, `cubo.h`) |

### Sistemas Operacionais

| Aula | Conteúdo |
|---|---|
| [`Aula-3/`](./Sistemas-Operacionais/Aula-3) | Atividade da aula |
| [`Aula-4/`](./Sistemas-Operacionais/Aula-4) | [Formatação e instalação do Windows](./Sistemas-Operacionais/Aula-4/Atividade_Formatacao_Instalacao_Windows.md) (componentes do SO, kernel, modos de execução) e [pesquisa sobre cinco sistemas operacionais](./Sistemas-Operacionais/Aula-4/Pesquisa_5_Sistemas_Operacionais.md) em contextos diferentes |
| [`Aula-5/`](./Sistemas-Operacionais/Aula-5) | [Tutorial de criação de máquina virtual](./Sistemas-Operacionais/Aula-5/tutorial-maquina-virtual.md) e instalação de um SO |
| [`Aula-6/`](./Sistemas-Operacionais/Aula-6) | [Manual do `cloud-so-app`](./Sistemas-Operacionais/Aula-6/MANUAL.md): aplicação Express que exibe informações do SO, publicada no Render e comparada com a execução local |
| [`Aula-7/`](./Sistemas-Operacionais/Aula-7) | [Relatório comparativo Local × Render × Vercel](./Sistemas-Operacionais/Aula-7/RELATORIO.md): o `cloud-so-app` virou um dashboard de monitoramento com gerenciador de tarefas e foi publicado também na Vercel (serverless) |

**Repositórios relacionados**

- [`cloud-so-app`](https://github.com/Kaykyduken/cloud-so-app) — código da aplicação das Aulas 6 e 7
  ([Render](https://cloud-so-app-ul2l.onrender.com) · [Vercel](https://cloud-so-app.vercel.app))
- [`historia-sistemas-operacionais`](https://github.com/Kaykyduken/historia-sistemas-operacionais) — panorama histórico dos sistemas operacionais, organizado por eras

---

## Organização

Cada disciplina tem sua própria pasta, e dentro dela o material é separado por aula ou
atividade (`Aula3/`, `Aula-4/`, …). Assim dá para acompanhar a progressão do semestre e
localizar um exercício específico sem caçar no histórico de commits.

```
Fatec-3-ciclo-ADS/
├── Estrutura-de-dados/
│   ├── Aula3/          # C++: condicionais
│   ├── Aula4/          # C: funções
│   ├── Aula5/          # C: vetores (estoque)
│   └── Aula6/          # C: modularização com .h
│
├── Sistemas-Operacionais/
│   ├── Aula-3/
│   ├── Aula-4/         # instalação do Windows + pesquisa de 5 SOs
│   ├── Aula-5/         # máquina virtual (com images/)
│   ├── Aula-6/         # MANUAL.md + prints/
│   └── Aula-7/         # RELATORIO.md + prints/ + logs/
│
├── Experimentos/
└── README.md
```

---

## Compilando os exercícios de C e C++

Os arquivos de Estrutura de Dados são programas independentes. Para rodar qualquer um:

```bash
# C++
g++ arquivo.cpp -o programa
./programa

# C
gcc arquivo.c -o programa
./programa
```

No Windows, o executável gerado é `programa.exe` (rode com `.\programa.exe`).
O exercício da Aula 6 inclui os cabeçalhos da mesma pasta, então compile a partir dela.

---

## Disciplinas do 3º ciclo

Estrutura de Dados · Sistemas Operacionais I · Interação Humano-Computador ·
Engenharia de Software II · Estatística · Sociedade e Tecnologia · Economia e Finanças ·
Inglês III

---

## Autor

**Kayky Gabriel Silvano Tomé** — Análise e Desenvolvimento de Sistemas, FATEC Itapetininga
[github.com/Kaykyduken](https://github.com/Kaykyduken)
