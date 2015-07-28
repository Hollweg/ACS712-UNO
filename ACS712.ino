
/*
Medicao de Corrente com ACS 712
por Guilherme Hollweg - 28-07-2015
disponível em github.com/Hollweg
*/

int mV = 185; // use 100 for 20A Module and 66 for 30A Module
int valorBruto= 0;
int offsetSensor = 2500; 
double tensao = 0;
double corrente = 0;

void setup(){
    Serial.begin(9600);
    pinMode (7, OUTPUT); 
    
}

void loop(){
  
   valorBruto = analogRead(A0);
   tensao = (valorBruto / 1023.0) * 5000;           // le o valor de entrada da porta A0
   corrente = ((tensao - offsetSensor) / mV);       //converte esse valor para mV e faz a leitura de corrente
   
   digitalWrite (7, HIGH);                          //caso queira usar o proprio pino 7 do uc
                                                    //como circuito de potencia
   Serial.print("Valor Bruto = " ); 
   Serial.print(valorBruto); 
   Serial.print("\t Tensao em [mV] = "); 
   Serial.print(tensao, 3);
   Serial.print("\t Corrente em [A] = "); 
   Serial.println(corrente, 3);
   delay(2000); 
 
}
