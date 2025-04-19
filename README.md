# Beecrowd

Esse repositório aramazena as minhas soluções para os problemas do beecrowd. Todas as soluções estão feitas em C++, usando o padrão de 2020 (c++20) no compilador gcc.

## Executar códigos

No repositório haverá uma configuração de container docker para rodar o vscode dentro de um DevContainer, com o gcc pré-instalado.

Para rodar um problema, basta pegar o número do problema usar no comando à seguir:

```sh
make run NUMERO_DO_PROBLEMA
```

### Exemplo:

A seguir uma demonstração da execução do primeiro problema:

```sh
$ make run 1000
Copying src/1000-hello-world/main.cpp to out/main.cpp
Compiling out/main.cpp
Running out/main...
Hello World!

```

## Compilar códigos

Para compilar um problema, basta pegar o número do problema usar no comando à seguir:

```sh
make compile NUMERO_DO_PROBLEMA
```

### Exemplo:

A seguir uma demonstração da compilação do primeiro problema:

```sh
$ make compile 1000
Copying src/1000-hello-world/main.cpp to out/main.cpp
Compiling out/main.cpp

```

## Limpando diretório `out/`

O comando `make clean` limpa o código fonte e o programa compilado.