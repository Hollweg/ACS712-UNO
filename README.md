# ACS712 ATMEGA328

##The purpose
Example software for **ACS712 sensor reading** using **Arduino platform**.

##Development
The code was developed using an **ATMEGA328 microcontroller**, manufactured by _ATMEL_ using Arduino interface. </br>
The same code was tested using different microcontrollers with Arduino IDE and it worked perfectly.

The module with ACS712 sensor can be easily found in Aliexpress, Dealextre, etc.. </br>
It has an **average cost of R$6.00**, according to the link below:

http://goo.gl/P9nOVP

##Using
The sensor was used for my **final graduation work**, that had as **main objective the modeling, control and development of a cubesat EPS.** </br>
**The EPS had 2 DC-DC converters in cascade configuration and a PID controller in each converter.** </br>
**The module was very efficcient** and supplied the current monitoring issue. 

The sensor must be powered in 5V and the read pin must be connected in an analogic port. </br>
How ACS712 is a current sensor, we know that it **must be connected in series with the circuit.** </br>
_Attention: The parallel connection can bring on a mal functioning on the circuit and its components._

Below, we have an image of the project schematic.

![ACS712 Schematic](http://i.imgur.com/khCHCk8.png)

##Copyright
The project can be reproduced with no problem. </br>
However, I only ask you to mantain original **credits/references to the author**.


Enjoy!

**Hollweg**

