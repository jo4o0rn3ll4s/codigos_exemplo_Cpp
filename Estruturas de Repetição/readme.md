# Estruturas de controle de fluxo por repetição

## For

A função ```for``` é uma função de repetição por um tempo determinado, realiza tal repetição por meio de uma variável de controle.


Tem sua sintaxe da seguinte forma: 

```
for (variavel de controle ; condição lógica ; incremento ou decremento){
    bloco de código a realizar as X vezes especificas definida na condição lógica;
}
```

## While OU Do...While

A função ```while``` podemos compreender apenas traduzindo a palavra. A aplicamos quando desejamos fazer um laço de repetição, porém sem limitar previamente, mas sim deixando ela condicionada ao usuário, por exemplo.

Esta é sua sintaxe:


```
while (condição lógica){
    bloco de código a realizar enquanto a condição for verdadeira
    (o teste lógico retornar verdade);
}
```

A função ```do…while``` podemos compreender novamente apenas traduzindo a frase. É uma alternativa ao uso da while, tendo uma diferença principal, na ```while```, executamos um teste depois o laço, na ```do…while```, executaremos 1x o laço e verificaremos se a condição para repetir é válida.

Com esta sintaxe:

```
do {
    bloco de código a realizar uma vez e depois
    entrar em laço caso a condição for verdadeira (o teste lógico retornar verdade);
}
while (condição lógica);
```
