# C LINUX PROJECT

### Submitted By :
**NAME** : RAGHAV SHARMA
**ROLL NUMBER** : 1910990033
**GROUP:** 11 - B

### PROJECT PROPOSAL AIM :
Designing a simple cricket game in C as a part of recreation for students amid the tough times of ongoing pandemic .

### Submission Date : 31 / 08 / 2021

## PROJECT NAME : *C CRICKET CUP*

## MISSION : DESIGNING A BASIC INTERACTIVE GAME


## PROBLEM

The project basically aims to provide the user an interactive cricket game as a part of recreation in the tough covid times.
Using basic C, the project aims to invoke interest among students about c programming. It tends to keep the user involved in it
 with simple interaction and updates about the user inputs.

## PROJECT DESCRIPTION

*C CRICKET CUP* is basically designed as a simple game between user and the system .

#### TOSS FUNCTION :

It starts with a toss call entered by the user. If he wins it further provides choice to user whether he wants to bat and bowl.
Else, he is asked to bowl .

#### BATTING AND BOWLING FUNCTIONS :

These functions repeatedly ask the user to enter a number between 1-6 .
Taking input as character, ASCII CODES have been used to compute validity of input, and then procede (if valid) by converting them to runs .
Else, it conveys to user that his input is not valid and continues

We use GLOBAL variables to keep track of runs and wickets .
The scoring scheme is implemented through the use of RANDOM function of C ( RAND() ) . If the user's input matches with the number generated
he is considered out else he scores the desired runs .
The functions also keep a track of the runs scored and the wickets fallen .To store the runs and the wickets, GLOBAL scope of variables is put to use.
ASCII CODES of characters is put to use along with WHILE loops and IF ELSE conditions to check the winner or to check whether the exit condition is
satisfied .

The functions returns the final score as soon as the fall of wickets reaches 10 ( Exit condition if batting first ) Or he scores more runs than opponent
(Exit condition if batting second )
Finally the score is compared and displayed along with the winner .

## DESIGN :

The project has been designed with basic day to day concepts of C language :


1. ASCII values to compute validity of input . If valid, then runs calculate the runs scored .
2. Using LOOPS to ask users for input while batting and bowling with an exit condition to exit the loop .
3. The most important part of the project involves around the RAND() function of C which simply makes the game competitive between the user and the system
   by computing runs scored and match it with the number generated .
4. Finally the code computes the winner , and displays the results along with motivating messages to the user .

## GOALS :
1. The project basically aims to provide a recreational activity to students in the form of a cricket game implemented through the day to day language they
   practice ( C ).
2. It gives an insight into the correlation of user input and ascii value being put to use to determine validity and then runs .
3. The project is desired to prove to students / user that C is not just confined to coding and just those printing statements .
