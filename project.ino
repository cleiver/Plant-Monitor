#include <LCD5110_Basic.h>

/* LCD5110(CLK, DIN, DC, RST, CE) */
LCD5110 tela(5, 4, 3, 1, 2);


const int sensorUmidade = A0;
const int sensorTemperatura = A5;
 
//Obtendo as fontes
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];
 
void setup()
{
 tela.InitLCD(); //Inicializando o display
 Serial.begin(9600);

}
 
void loop()
{
  int valorUmidade = analogRead(sensorUmidade);
  float valorTemperatura = (analogRead(sensorTemperatura) * 0.004887585533) / 0.01;

  tela.setFont(SmallFont);
  tela.print("Umidade: " + String(valorUmidade), LEFT, 0);
  tela.print("Temp.: " + String(valorTemperatura), LEFT, 20);

  delay(1000);
}
