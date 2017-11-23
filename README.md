# Prog3

Program 3 is made up of 3 files made in C, C++ and Lua made to familiarize the writer with the different languages.

## prog3_1

Uses C to create a Lua environment and execute a Lua file

## prog3_2

contains a single method (InfixToPostfix(string)) that converts a math expression from infix to postfix

## prog3_3

---

prog3_1 can be compiled by using the command: "g++ prog3_1.cpp –o prog3_1 –I lua-5.3.4/src –L lua-5.3.4/src –l lua –l m –l dl"

prog3_3 can be compiled by using the command: "g++ prog3_3.cpp –o prog3_3 –I lua-5.3.4/src –L lua-5.3.4/src –l lua –l m –l dl"

---

prog3_1 can be ran by using the command: "./a.out" followed by the name of the lua file as a command line argument

prog3_2 requires Lua to be installed on your machine. To run prog3_2, go to the directory where prog3_2 is located in the console and type lua.
type: "dofile("prog3_2.lua")" then type: "InfixToPostfix("string"))" where "string" is the math expression with each character seperated by a space
inputted by standard input

prog3_3 can be ran by using the command: "./a.out" followed by the name of the lua file as a command line argument.
The program will then run the InfixToPostfix(string) function.