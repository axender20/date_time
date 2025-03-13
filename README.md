# DateTime

## Overview
Esta clase almacena información de fecha y hora de forma desglosada, como una tupla (año, mes, día, hora, minuto, segundo). El día de la semana no se almacena, sino que se calcula a petición. La clase no tiene noción de zonas horarias, horario de verano ni segundos intercalares: la hora se almacena en la zona horaria que el usuario elija.

Basado en RTCLib de Adafruit https://github.com/adafruit/RTClib.git