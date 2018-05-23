/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led1 = 10;          // donar nom al pin 9 de l’Arduino
const int led2 = 11;          // donar nom al pin 9 de l’Arduino
const int led0 = 9;          // donar nom al pin 9 de l’Arduino
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino


int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs


int segons = 500;          // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 11 com una sortida

  Serial.begin( 9600);
  
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  valLdr1 = analogRead(ldr1);   // llegir valor ldr
  valLdr2 = analogRead(ldr2);   // llegir valor ldr
 Serial.print ("ldr0=");
 Serial.println (valLdr0);
 // delay (segons);

 Serial.print ("ldr1=");
 Serial.println (valLdr1);
  //delay (segons);

 Serial.print ("ldr2=");
 Serial.println (valLdr2);
 // delay (segons);
  
  valLdr0 = map(valLdr0, 700, 970, 255, 0);   // mapejar valor de 0-1023 a 0-255
  valLdr1 = map(valLdr1, 700, 970, 255, 0);   // mapejar valor de 0-1023 a 0-255
  valLdr2 = map(valLdr2, 700, 970, 255, 0);   // mapejar valor de 0-1023 a 0-255
  
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led
  analogWrite(led1, valLdr1);    // actualitzar l'estat del led
  analogWrite(led2, valLdr2);    // actualitzar l'estat del led
}



//********** Funcions *************************************************************
