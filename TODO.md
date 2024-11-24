# Lógica

Verificar quantos numeros estão errados.

- Por exemplo: 
	54321 : 5 > 4321 : 4
	54321 : 4 > 321 : 3
	...
	
	45312 : 4 > 312 : 3
	45312 : 5 > 4312: 4
	...
	
	51243: 5 > 1243: 4
	51243: 1 >  : 0
	...

* Da para indexar eles verificando todos por todos
[ ] Criar uma struct onde posso guardar o valo em texto e o valor em numero.

	51243: 5 > 1243: 4
	51243: 1 >  : 0
	51243: 2 > 1: 1
	51243: 4 > 123: 3
	51243: 3 > 12: 2

[ ] Criar a "push_swap" com possibilidade de passar a lista de numeros em struct e os comandos em string tipo "rra ra ...".
	- Retornar 1: Ok, 0: Fail e -1 Error
 	- Erros são comandos que não podem ser executados, por exemplo rotacionar ou trocar listas com menos de 2 numeros, puxar de uma lista zerada (para diminuir o tempo de execução).

[ ] Criar uma função de verificação, ela recebe uma string e dentro dela tem uma static string que começa como nulo para manter o valor guardado, caso o valor recebido não seja nulo ele substitui o valor da static pela string nova e ela retorna o valor que tiver na static.

[ ] Criar uma função onde recebo uma lista de comandos (inicialmente vazia), primeiro ela usar a função de verificação com um nulo para ver se a solução não foi encontrada.
	- Caso sim, Ele finaliza a execução.
 		- Break;
 	- Caso não, Ele vai testar o comando atual com a push_swap:
		- Caso seja -1 ele limpa a string criada e Break;
		- Se for 0 então ele vai rodar um while concatenando o comando atual com todos os comandos disponiveis individualmente chamando a função novamente com o nova comando.
		- Caso seja 1 então ele vai passar o comando atual como parametro para a função de verificação, limpar a string e retornar (1).
