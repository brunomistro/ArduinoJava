# ArduinoJava
Interacting with Arduino in JAVA

O arquivo arduino.simu o qual se encontra na raíz do projeto, será usado no emulador de arduino (no nosso caso, foi o SimulIDE).

Detro da pasta codigo-arduino, estarão os arquivos em C++ que fazem o processo de ligar/desligar as lampadas.

  O arquivo.Hex será importado pelo arduino dentro do emulador (click direito no emulador e "Carregar firmware"). Enquanto o arquivo.ino é o qual contém de fato o código C++

Video mostrando as funcionalidades, e como rodar o nosso projeto Java interagindo com as leds do arduino: https://youtu.be/idJuid1gi4g

IMPORTANTE: No nosso projeto, estamos usando a porta serial emulada de valor COM11. Caso deseje alterá-la, vá na classe "ArduinoConnection.java" e altere o valor da porta. 
