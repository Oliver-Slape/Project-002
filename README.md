# Project-002

## High-Low

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
    <h3> The first step was to create the random number generator: 
    srand((int)time(0));
    int n = 0;	
    int r1;
    int r2;
    while(n++ < 1) {
	    r1 = (rand() % 13) + 1;
	    r2 = (rand() % 13) + 1;
    }
    <h3>
    <h3> Next was to output the first card: cout <<"The first card is: \n"  << r1 <<"\n"; <h3>
    <h3> Then create Variables and gather user input: 
     char H = 'H';
     char L = 'L';
     char i;
	 cout << "Please enter H or L: \n";
     cin >> i;
      <h3>
      <h3> Then Print out user input and the second card: 
      cout << "You entered: " << i<<"\n\n";
	  cout <<"The second card is: \n" << r2 <<"\n";
      <h3>
      <h3> Next if user input H check for result:
      if (i == H) {
      if ( r1 < r2 ) {
        cout << "Well done you win 30 Pence";
      }
      else {
        cout<< "Incorrect game over.";
      }
    }
      <h3> 
      <h3> Check if user input L:  
      else if (i == L) {
      if ( r1 > r2 ) {
        cout << "Well done you win 30 Pence";
      }
      else {
        cout<< "Incorrect game over.";
      }
    }
    <h3>
    <h3> And check for incorrect entries:  
    else {
      cout << "incorrect input. Start Over.";
    }
    <h3>
  <h2> IDE Used and Features <h2>
    <h3> <h3>
  <h2> Debugging process <h2>
    <h3> <h3>
  <h2> Coding Standards <h2>
    <h3> <h3>
  <h2> Evaluation <h2>
    <h3> <h3>
    
