# Project-002

## High-Low

### Task: A player is shown a random playing card, then asked to decide whether the next card will be 'higher' or 'lower'. If the guess is correct the player is awarded with a 'cash' prize. 

<h1> User Stories <h1>
<h3> As a user I would like to see the first number. <h3>
<h3> As a user I would like the numbers to be random. <h3>
<h3> As a user I would like to input if it is H or L. <h3>
<h3> As a user I would like to see what input I provided. <h3>
<h3> As a user I would like to see the second number. <h3>
<h3> As a user I would like to see if I lost or won. <h3>
<h3> As a user I would like a cash prize for winning. <h3>
    
# Flow Chart 
![FlowChart](https://github.com/Oliver-Slape/Project-002/blob/master/Flowchart.png)

<h1> Product Backlog <h1>

<h3> High Level Function Requirements <h3>
<h4> Cards only need value 1 - 13 <h4>
<h4> Ask player if next card is H or L <h4>
<h4> Check if card is H or L <h4>
<h4> If correct issue cash prize <h4>
<h4> If draw restart <h4>
<h4> If lose game over<h4>

<h3> High Level Non-Function Requirements <h3>
<h4> Current development is pure console code based so no design is required. <h4>

<h1> Sprint Backlog <h1>
<h3> As a user I would like to see the first number. <h3>
<h3> As a user I would like the numbers to be random. <h3>
<h3> As a user I would like to input if it is H or L. <h3>
<h3> As a user I would like to see what input I provided. <h3>
<h3> As a user I would like to see the second number. <h3>
<h3> As a user I would like to see if I lost or won. <h3>
<h3> As a user I would like a cash prize for winning. <h3>
    
<h1> Design Documentation <h1>
<h2> Process of Implememntation <h2>
<h3> The first step was to create the random number generator: <h3>
    
``` C++
    srand((int)time(0));
    int n = 0;	
    int r1;
    int r2;
    while(n++ < 1) {
	    r1 = (rand() % 13) + 1;
	    r2 = (rand() % 13) + 1;
    }
```
<h3> Next was to output the first card: <h3>
    
``` C++
    cout <<"The first card is: \n"  << r1 <<"\n";
```
<h3> Then create Variables and gather user input: <h3>
   
``` C++
     char H = 'H';
     char L = 'L';
     char i;
     cout << "Please enter H or L: \n";
     cin >> i;
```
<h3> Then Print out user input and the second card: <h3>
     
``` C++
      cout << "You entered: " << i<<"\n\n";
      cout <<"The second card is: \n" << r2 <<"\n";
```
<h3> Next if user input H check for result: <h3>

``` C++
      if (i == H) {
      if ( r1 < r2 ) {
        cout << "Well done you win 30 Pence";
      }
      else {
        cout<< "Incorrect game over.";
      }
    }
``` 
<h3> Check if user input L: <h3>

``` C++
      else if (i == L) {
      if ( r1 > r2 ) {
        cout << "Well done you win 30 Pence";
      }
      else {
        cout<< "Incorrect game over.";
      }
    }
```
<h3> And check for incorrect entries: <h3>

``` C++
    else {
      cout << "incorrect input. Start Over.";
    }
```
<h2> IDE Used and Features <h2>
<h3> The IDE used was an online service called repl.it It is a colour coordinated IDE with Code hints And a complier with a console debug and input. <h3>

<h2> Debugging process <h2>
<h3> The IDE used as stated above includes a debugging service. This made the Debugging a lot simpler as it pointed to where and why there were errors in the code. After it was jsut a matter of fixing this. <h3>

<h2> Coding Standards <h2>
<h3> With the use of an IDE that colour coordinates the text and code and numbers it makes the layout easier to see and allows for a uniform coding standard. However, Comments need to be added to code. <h3>

<h2> Evaluation <h2>
<h3>The use of a more intuitive IDE made the process of debugging and having a coding standard as well as it made typing the code faster with hints and auto finish. Overall all is fine but the code should be commented throught. Becuase a Procedural paradigm was use the structure and the characteristics is much like an algorithm. The code is structured step by step in procedural paradigms, this best matches an algorithm as it too is step by step.   <h3>
    
