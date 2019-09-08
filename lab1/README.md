# IDD-Fa18-Lab1: Blink!

**A lab report by Irene Wei. Student**

## Part A. Set Up a Breadboard

![Image of partA](https://github.com/zicongwei/Interactive-Lab-Hub/blob/master/lab1/partA.jpeg)

## Part B. Manually Blink a LED

**a. What color stripes are on a 100 Ohm resistor?**
Brown, Black, Brown, Gold
 
**b. What do you have to do to light your LED?**
Set up the circuit following the diagram, and plug the micro controler to laptop's usb to give its power, and press the button to light the LED.

## Part C. Blink a LED using Arduino

### 1. Blink the on-board LED

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?**
![Image of partC1a](https://github.com/zicongwei/Interactive-Lab-Hub/blob/master/lab1/partC1a.png)

**b. What line(s) of code do you need to change to change the rate of blinking?**
change the value in delay() function
![Image of partC1b](https://github.com/zicongwei/Interactive-Lab-Hub/blob/master/lab1/partC2a.png
)

**c. What circuit element would you want to add to protect the board and external LED?**
Add resistors to protect the board and the external LED.
 
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**
After tried multiple delay values, I can nologer perceive the LED blinking at 10ms. I can prove it is in fact blinking by using my phone camera to record it, since it has different frame rate.

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**
[https://github.com/zicongwei/Interactive-Lab-Hub/blob/master/lab1/partC1_blink.ino]


### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

[https://youtu.be/diOTzvRsBrA]


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**
Yes. ????

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**
change the pin numnber (led) to 11

**b. What is analogWrite()? How is that different than digitalWrite()?**

digitalWrite()  send  0V or 5V, and analogWrite() can simulate voltages between 0V and 5V by sending a square wave of different pulse widths.

## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

**d. Is information stored in your device? Where? How?**

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**

### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**
