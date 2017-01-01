#ACS712 ATMEGA328

##A proposta

Software de exemplo de leitura do sensor de corrente ACS712 utilizando a plataforma **Arduino**.

## Desenvolvimento

O código foi desenvolvido utilizando um **microcontrolador ATMEGA328**, da _ATMEL_, e interface Arduino. </br>
O mesmo código foi testado para outros microcontroladores com a IDE do Arduino, e funcionaram perfeitamente. </br> </br>

O módulo com o sensor ACS712 pode ser encontrado facilmente no Aliexpress, Dealextreme, etc.. </br>
E tem um custo em torno de R$6.00, vide link abaixo:

http://goo.gl/P9nOVP

##Utilização

O sensor foi utilizado para o meu trabalho de conclusão de curso, o qual consistia em uma EPS para picosatélites. </br>
A EPS utilizava 2 conversores CC-CC em cascata e um controle do tipo PID em cada um dos conversores.  </br>
O módulo se mostrou eficiente e supriu muito bem a necessidade de monitoramento de corrente. </br>

O sensor deve ser alimentado em 5V, e o pino de leitura precisa ser conectado em uma porta analógica. </br>
Tendo em vista que é um sensor de corrente, sabe-se que o mesmo deve ser ligado em série com o circuito. </br>
A ligação em paralelo pode ocasionar um mal funcionamento dos componentes do circuito. </br>

*Abaixo, tem-se uma imagem do esquemático do projeto:*

![ACS712 Schematic](http://i.imgur.com/khCHCk8.png)

##Direitos 

É permitido utilização do projeto sem problema algum. </br>
Entretanto, caso isso seja feito, por gentileza, **referenciar o autor**.

Enjoy!


Hollweg

