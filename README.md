# Temperatur-messen-Zusatz
LM35 und DS18B20


Aufgabe: Mit den Temperatursensor LM35 soll die Temperatur ausgelesen und mit dem serial-monitor angezeigt werden.

Material: Arduino / Kabel / Temperatursensor LM35

Der Sensor hat drei Anschlüsse. der rote Kontakt 5V, der schwarze GND und der gelbe ist der Kontakt für das Temperatursignal. An diesem Kontakt gibt der Sensor eine Spannung zwischen 0 und 1,5 Volt aus. Wobei 0V 0°C entsprechen und der Wert 1,5V entspricht 150°C.  Die Spannung dieses Pins muss vom Mikrocontroller-Board ausgelesen und in einen Temperaturwert umgerechnet werden.

– Das besondere an diesem Temperatursensor ist seine wasserdichte Eigenschaft. Somit kann mit dem LM35 die Temperatur von Flüssigkeiten gemessen werden.

– ACHTUNG: Wenn der Sensor falsch angeschlossen wird, brennt er durch!

– Bei dem Aufbau sollte nach Möglichkeit eine externe Stromversorgung verwendet werden, da dies die Sensorgenauigkeit wesentlich verbessert (9V Netzteil oder 9V-Batterie).

Für diesen Sketch wird der „map“ Befehl benötigt. Dieser Befehl befindet sich in der Zeile: „temperatur= map(analogRead(LM35), 0, 307, 0, 150);“

Anhand der allgemeinen Schreibweise „map ( a, b, c, d, e)“ lässt sich die Funktion besser beschreiben. Ein Wert „a“ (beispielsweise ein Messwert) wird in einem bestimmten Zahlenbereich zwischen den zwei Werten (b) und (c) erwartet. Der „map“ Befehl wandelt dann den Wert „a“ in einen anderen Wert um, der dem Zahlenbereich zwischen „d“ und „e“ entspricht.

Der Temperatursensor LM35 gibt an dem gelben Kontakt den Messwert für die Temperatur in Form einer Spannung zwischen 0V und 1,5V aus. Dieser Spannungsbereich entspricht dem messbaren Temperaturbereich von 0°C bis +150°C. Am analogen Eingangspin des Arduino Mikrocontrollerboards wird dieser Spannungsbereich mit Hilfe des Befehls „analogRead(LM35)“ als Zahlenwert zwischen 0 und 307 erkannt. Dieser Wert des Temperatursensors wird zunächst ausgelesen und unter der Variablen „sensorwert“ gespeichert.

Der „map“ Befehl wird nun verwendet um diesen Zahlenwert zwischen 0 und 307 wieder in einen Temperaturwert zwischen 0°C und +150°C umzuwandeln.

temperatur = map(sensorwert, 0, 307, 0, 150);

temperatur = map ( a , b , c , d , e)

a= umzuwandelnde Zahl

b= minimum Messbereich

c= maximum Messbereich

d= minimum Ausgabewert

e= maximum Ausgabewert

Nach der Umwandlung des analogen Messwertes in einen Temperaturwert, wird dieser mit dem Befehl „Serial.print(temperatur);“ an den seriellen Monitor gesendet und kann dann am PC abgelesen werden.

Weitere Infos: https://funduino.de/
