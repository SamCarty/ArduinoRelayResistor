# Arduino Relay Resistor

This project was developed to operate the fuel level gauge of my dad's Sunbeam Talbot 90 MKII which he was restoring. 

Unfortunately, the resistance of the original 1950s sensors was not compatible with the modern gauges that were on the dashboard due to differences in resistance.

Originally, we used a digital potentiometer which would be able to adjust the output resistance however this did not allow sufficient current for the gauges to read accurately. Therefore a relay array was used, with each relay activating at a  different fuel level.

The relay activation points are smoothed to ensure that even when fuel is moving around the tank (such as during acceleration and braking) the relays do not adjust erroneously.

Overall, this project produced an rather over-engineered solution but a highly effective one!

![Arduino Relay Resistor Circuit](https://user-images.githubusercontent.com/22345452/83693442-feddc380-a5ed-11ea-8581-db20db68ce67.png)
