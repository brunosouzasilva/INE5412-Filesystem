# Estrutura do sistema de arquivos

O projeto foi separado em três camadas:

## Acesso ao disco
Compreende os métodos básicos de escrita em disco. Esta camada enxerga o disco como uma sequência de blocos e provê métodos para escrita e leitura destes blocos do disco bem como a leitura e escrita de alguns bytes de destes blocos.

## Manipulação das Estruturas de Dados
Aqui são definidos os métodos de gerenciamento das estruturas de dados básicas do sistema de arquivos, como a Tabela de Arquivos, atributos dos arquivos, blocos de índice e algoritmo de alocação dos blocos.

## API do Usuário
Nesta camada são implementados os métodos que serão usados por terceiros para manipulação de arquivos. É a única camada visível para o programador de aplicações externas.
