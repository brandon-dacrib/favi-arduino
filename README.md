favi-arduino
============

arduino sketch for controlling a favi projector screen, and related information
1. dump the logic via a logic analyzer as a csv (I used https://github.com/gillham/logic_analyzer on an arduino) 
2. remove the 1st line of the csv (just header information) 
3. run the examples/generate.sh against the csv 
4. edit the output of the script so that the 1st line is a transmission (1), and the last line is the long pause (0)
5. copy the output of the script to your arduino function for transmitting the code
