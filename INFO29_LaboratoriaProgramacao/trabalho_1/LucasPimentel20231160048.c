// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do
//  trabalho

//  ----- Dados do Aluno -----
//  Nome: Lucas Santos Pimentel
//  email: placte40@gmail.com
//  Matrícula: 20231160048
//  Semestre: 2014.1

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include "LucasPimentel20231160048.h" // Substitua pelo seu arquivo de header renomeado
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
/*
## função utilizada para testes  ##

 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y) {
  int soma;
  soma = x + y;
  return soma;
}

/*
## função utilizada para testes  ##

 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x) { // função utilizada para testes
  int i, fat = 1;

  for (i = x; i > 1; i--)
    fat = fat * i;

  return fat;
}

int teste(int a) {
  int val;
  if (a == 2)
    val = 3;
  else
    val = 4;

  return val;
}

DataQuebrada quebraData(char data[]) {
  DataQuebrada dq;
  char sDia[3];
  char sMes[3];
  char sAno[5];
  int i;

  for (i = 0; data[i] != '/'; i++) {
    sDia[i] = data[i];
  }
  if (i == 1 || i == 2) { // testa se tem 1 ou dois digitos
    sDia[i] = '\0';       // coloca o barra zero no final
  } else {
    dq.valido = 0;
    return dq;
  }

  int j = i + 1; // anda 1 cada para pular a barra
  i = 0;

  for (; data[j] != '/'; j++) {
    sMes[i] = data[j];
    i++;
  }

  if (i == 1 || i == 2) { // testa se tem 1 ou dois digitos
    sMes[i] = '\0';       // coloca o barra zero no final
  } else {
    dq.valido = 0;
    return dq;
  }

  j = j + 1; // anda 1 cada para pular a barra
  i = 0;

  for (; data[j] != '\0'; j++) {
    sAno[i] = data[j];
    i++;
  }

  if (i == 2 || i == 4) { // testa se tem 2 ou 4 digitos
    sAno[i] = '\0';       // coloca o barra zero no final
  } else {
    dq.valido = 0;
    return dq;
  }

  dq.iDia = atoi(sDia);
  dq.iMes = atoi(sMes);
  dq.iAno = atoi(sAno);
  dq.valido = 1;

  return dq;
}
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia,
mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa
podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char data[]) {
  int datavalida;
  // quebrar a string data em strings sDia, sMes, sAno
  DataQuebrada dataQuebrada = quebraData(data);
  if (dataQuebrada.valido == 0) {
    datavalida = 0;
  } else {
    if (dataQuebrada.iDia < 31 || dataQuebrada.iDia > 0) {
      if (dataQuebrada.iMes < 13 || dataQuebrada.iMes > 0) {
        if (dataQuebrada.iAno < 2025 || dataQuebrada.iAno > 1900) {
          switch (dataQuebrada.iMes) {
          case 1: {
            if (dataQuebrada.iDia < 32) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 2: {
            if (dataQuebrada.iDia > 29) {
              datavalida = 0;
            } else if (dataQuebrada.iDia == 29) {
              if (dataQuebrada.iAno % 4 == 0 && dataQuebrada.iAno % 100 != 0) {
                datavalida = 1;
              } else {
                datavalida = 0;
              }
            } else if (dataQuebrada.iDia < 28) {
              datavalida = 0;
            }else{
              datavalida = 1;
            }
            break;
          }
          case 3: {
            if (dataQuebrada.iDia < 32) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 4: {
            if (dataQuebrada.iDia < 31) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 5: {
            if (dataQuebrada.iDia < 32) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 6: {
            if (dataQuebrada.iDia < 31) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 7: {
            if (dataQuebrada.iDia < 32) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 8: {
            if (dataQuebrada.iDia < 32) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 9: {
            if (dataQuebrada.iDia < 31) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 10: {
            if (dataQuebrada.iDia < 32) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 11: {
            if (dataQuebrada.iDia < 31) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          case 12: {
            if (dataQuebrada.iDia < 32) {
              datavalida = 1;
            } else {
              datavalida = 0;
            }
            break;
          }
          default: {
            datavalida = 0;
            break;
          }
          }
        } else {
          datavalida = 0;
        }
      } else {
        datavalida = 0;
      }
    } else {
      datavalida = 0;
    }
  }

  if (datavalida == 1) {
    return 1;
  } else {
    return 0;
  }
}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal.
 @saida
    Retorna um tipo DiasMesesAnos. No atributo retorno, deve ter os possíveis
 valores abaixo 1 -> cálculo de diferença realizado com sucesso 2 -> datainicial
 inválida 3 -> datafinal inválida 4 -> datainicial > datafinal Caso o cálculo
 esteja correto, os atributos qtdDias, qtdMeses e qtdAnos devem ser preenchidos
 com os valores correspondentes.
 */

int diasNoMes(int mes, int ano) {
    // Checa se é um ano bissexto
    int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return bissexto ? 29 : 28;
        default:
            return -1; // Retorna -1 para meses inválidos
    }
}

DiasMesesAnos q2(char datainicial[], char datafinal[]) {

  // calcule os dados e armazene nas três variáveis a seguir
  DiasMesesAnos dma;

  if (q1(datainicial) == 0) {
    dma.retorno = 2;
    return dma;
  } else if (q1(datafinal) == 0) {
    dma.retorno = 3;
    return dma;
  } else {
    // verifique se a data final não é menor que a data inicial
    DataQuebrada dataQuebrada = quebraData(datainicial);
    DataQuebrada dataQuebrada2 = quebraData(datafinal);
    if (dataQuebrada.iAno > dataQuebrada2.iAno) {
      dma.retorno = 4;
      return dma;
    } else if (dataQuebrada.iAno == dataQuebrada2.iAno) {
      if (dataQuebrada.iMes > dataQuebrada2.iMes) {
        dma.retorno = 4;
        return dma;
      } else if (dataQuebrada.iMes == dataQuebrada2.iMes) {
        if (dataQuebrada.iDia > dataQuebrada2.iDia) {
          dma.retorno = 4;
          return dma;
        }
      }
    }
    // calcule a distancia entre as datas
    dma.qtdAnos = dataQuebrada2.iAno - dataQuebrada.iAno;
    dma.qtdMeses = dataQuebrada2.iMes - dataQuebrada.iMes;
    dma.qtdDias = dataQuebrada2.iDia - dataQuebrada.iDia;
    if (dma.qtdDias < 0) {
      dma.qtdDias = dma.qtdDias * -1;
      if(dma.qtdAnos == 0){
        dma.qtdDias = diasNoMes(dataQuebrada.iMes, dataQuebrada.iAno) - dma.qtdDias; 
        --dma.qtdMeses;
      }
      dma.qtdDias = 30 - dma.qtdDias;
      --dma.qtdMeses;
    } else if (dma.qtdMeses < 0) {
      dma.qtdMeses = dma.qtdMeses * -1;
    } else if (dma.qtdAnos < 0) {
      dma.qtdAnos = dma.qtdAnos * -1;
    }

    // se tudo der certo
    dma.retorno = 1;
    return dma;
  }
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa
 Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar
 diferenças entre maiúsculos e minúsculos. Se isCaseSensitive != 1, a pesquisa
 não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive) {
  int qtdOcorrencias = 0;
  char copia[1000];
  strcpy(copia, texto);
  for (int i = 0; i < strlen(texto); i++) {
    if (isCaseSensitive != 1) {
      char Maior = c - 32;
      char Menor = c + 32;
      if (texto[i] == c || texto[i] == Maior || texto[i] == Menor) {
        qtdOcorrencias++;
      }
    } else {
      char Maior = c - 32;
      char Menor = c + 32;
      if (texto[i] == Maior && c == Maior) {
        qtdOcorrencias++;
      } else if (texto[i] == Menor && c == Menor) {
        qtdOcorrencias++;
      }
    }
  }
  return qtdOcorrencias;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros
 (posicoes) que irá guardar as posições de início e fim de cada ocorrência da
 palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída
 correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do
 vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve
 ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a
 segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente.
 Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como
 há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da
 seguinte forma: posicoes[0] = 13; posicoes[1] = 16; Observe que o índice da
 posição no texto deve começar ser contado a partir de 1. O retorno da função,
 n, nesse caso seria 1;

 */
int q4(char *strTexto, char *strBusca, int posicoes[]) {
  // Verifica se strBusca é uma string vazia
  if (strlen(strBusca) == 0) {
    printf("Erro: A string de busca está vazia.\n");
    return -1; // Retorna um valor de erro
  }

  // Verifica se strTexto é uma string vazia
  if (strlen(strTexto) == 0) {
    printf("Erro: A string de texto está vazia.\n");
    return -1; // Retorna um valor de erro
  }
  
  int qtdOcorrencias = 0;
  int tamanho_strTexto = strlen(strTexto);
  int tamanho_strBusca = strlen(strBusca);

  // Itera sobre os caracteres de strTexto
  for (int i = 0; i <= tamanho_strTexto; i++) {
    if(strTexto[i] == -61){
      int num = strTexto[i+1];
      num = -num;
      strTexto[i+1] = num;
      strTexto[i] = strTexto[i+1];
    }
    // Se o caractere atual de strTexto for igual ao primeiro caractere de
    // strBusca
    if (strTexto[i] == strBusca[0]) {
      int j;
      // Verifica se os caracteres subsequentes também correspondem a strBusca
      for (j = 1; j < tamanho_strBusca; j++) {
        if (strTexto[i + j] != strBusca[j]) {
          break;
        }
      }
      // Se todos os caracteres correspondem, incrementa o contador e armazena
      // as posições
      if (j == tamanho_strBusca) {
        posicoes[qtdOcorrencias * 2] = i + 1;
        posicoes[qtdOcorrencias * 2 + 1] = (i + tamanho_strBusca - 1) + 1;
        qtdOcorrencias++;
      }
    }
  }
  
  return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num) {
  int copy = num;
  if (copy < 10) {
    return num;
  }
  int cont = 0;
  // Contadando casas decimais:
  do {
    copy = copy / 10;
    if (copy != 0) {
      cont++;
    }
  } while (copy >= 10);
  // Seperando os algarimos:
  int vetor[cont], i = 0;
  do {
    vetor[i] = num % 10;
    num = num / 10;
    if (num < 10) {
      vetor[i + 1] = num;
    }
    i++;
  } while (cont != i);
  // Invertendo os algarismos:
  num = 0;
  for (int j = 0; j <= cont; j++) {
    vetor[j] *= pow(10, cont - j);
    num += vetor[j];
  }

  return num;
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca) {
char strNumBase[20], strNumBusca[20];
sprintf("strNumBase", "%d", numerobase);
sprintf("strNumBusca", "%d", numerobusca);
int tamBase = strlen(strNumBase);
int tamBusca = strlen(strNumBusca);
int qtdOcorrencias = 0;

for (int j = 0; j <= tamBase - tamBusca; j++) {
  if (strncmp(&strNumBase[j], strNumBusca, tamBusca)){
    qtdOcorrencias++;
    }
  }
return qtdOcorrencias;
}


  

