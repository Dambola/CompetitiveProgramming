## Tutorial
### Problema A - Tricky Sum

Ela pede que você some todos os inteiros de *1* até *n*, porém os da forma *2^x* você diminui.
Utilizamos a formula da soma da PA para somar de *1* até *n*. Pegaremos a formula da soma finita PG para somar todos os valores da forma *2^x* (para saber quantos valores aparecem na soma utilizamos operação bit a bit). Então o resultado é *R = PA - 2PG*. OBS: requer long long int.

### Problema B - Queries on a String

A ideia é simular as queries sem precisar executar as *K* rotações cíclicas. Apenas usamos um vetor auxiliar onde armazenaremos a solução e depois colocamos ela na string principal. Podemos dizer que a *nova_posição = (posição + k)%t*, onde *K* é quantas rotaçes e *t* o tamanho da substring.

### Problema C - Nearest vectors

Utilizar a ordenação radial baseada no ponto *(0,0)*, sort(p,p+n,polarless). Assim teremos o vetor ordenado em Clockwise ou Counterclockwise. Comparar \[a,b,c\] pontos, anguloAB com anguloBC, utilizando a função angleLess. 

### Problema D - Igor In the Museum

Utilizar um algoritmo de Busca em Grafos para pre processar todos os "blocos de quadros". Faremos uma matriz auxiliar de coloração. Pra cada bloco existe um cor diferente. Pra cada cor (bloco de quadro) calculamos o algoritmo de Busca o número de quadros, para cada query somente retornaremos o resultado.

### Problema E - Chocolate Bar

aqui

### Problema F - Cut Length

Teste
