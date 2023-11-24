# Estruturas de controle de fluxo por desisão

## If Else

A função IF ,ou traduzindo função SE, realiza um teste condicional de valores contínuos, ou seja, realiza condicionais de um campo de valores. Exemplo:

``` 
x < 100           // "le-se x menor que 100?"
x > 50 && x < 80  //"le-se x maior que 50 e menor que 80?"

```

Além de executar a função testando, também possui a instrução caso retorne falso o teste, o ELSE, ou também traduzindo SENÃO. 

Possui a sintaxe basica da seguinte forma:
```
if ( condição lógica ){
    bloco de código para agir caso a condição seja verdadeira (o teste retorne true);
}
else {
    bloco de código que agirá caso a condição seja falsa (o teste retorne false);
}
```

## Switch...Case
Na função switch executamos um teste condicional de valores discretos, ou seja, realiza comparações com valores já definidos. Exemplo:

``` o valor de entrada ou é 5, ou 7, ou 9, ou nenhum deles. ```

Para fazer uso de tal função, escrevemos ela na seguinte sintaxe basica:

```
switch ( uma variavel ){
    case valor_a:
        bloco para caso a variavel seja o valor_a;
        break;
    case valor_b:
        bloco para caso a variavel seja o valor_b;
        break;
    [...] - quantos casos quiser ou precisar
    default:
        bloco opcional para caso o valor da variavel não seja 
        nenhum dos valores préviamente testados ;
}
```

IMPORTANTE ! - Não deve-se esquecer de posicionar a função ```break``` após cada ```case```, caso contrario o programa não funcionará de maneira correta.

---