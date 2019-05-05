## Tutorial
### Problema A - Tricky Sum

Questão de matemática. Ela pede que você some todos os inteiros de *1* até *n*, porém os da forma *2^x* você diminui.
Utilizamos a formula da soma da PA para somar de *1* até *n*. Ao invés de retirar valor por valor, pegaremos a formula da soma finita PG para somar todos os valores da forma *2^x* (para saber quantos valores aparecem na soma, utilizamos operação bit a bit). Então o resultado é *R = PA - 2PG*. OBS: requer long long int.

