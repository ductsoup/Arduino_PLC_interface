# Arduino_PLC_interface
A quick and dirty interface that allows an Arduino to act as an industrial PLC input. 

![as built](/images/IMG_2197web.jpg)

##Design Notes
The first stage is a simple RC network to covert the Arduino 490 Hz PWM output to analog. That's followed by a voltage doubler to buffer and scale the 0-5V output to a standard 0-10V PLC signal. 

The LM2904 is a dual op amp and there was space on the board so I added a second channel.

There's also a DC-DC buck converter to power to the Arduino from 24VDC.

##Build Notes

The terminal block were a little larger in life than in Fritzig so I had to move a couple things around.

##Credits
I haven't worked with analog designs since college. Thanks to Mike over at Adafruit for his helpful nudges.

[Adafruit Forum: 0/4-20ma current loop output](https://forums.adafruit.com/viewtopic.php?f=25&t=68146)






