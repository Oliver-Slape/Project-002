#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int player() {
  
  srand((int)time(0));
    
    int n = 0;	
    int r1;
    int r2;
    while(n++ < 1) {
	    r1 = (rand() % 13) + 1;
	    r2 = (rand() % 13) + 1;
    }
    
    cout <<"The first card is: \n"  << r1 <<"\n";
    char H = 'H';
    char L = 'L';
    char i;
	  cout << "Please enter H or L: \n";
	  cin >> i;
	  cout << "You entered: " << i<<"\n\n";
	  cout <<"The second card is: \n" << r2 <<"\n";
    
    if (i == H) {
      if ( r1 < r2 ) {
        cout << "Well done you win 30 Pence";
      }
      else {
        cout<< "Incorrect game over.";
      }
    }
     
    else if (i == L) {
      if ( r1 > r2 ) {
        cout << "Well done you win 30 Pence";
      }
      else {
        cout<< "Incorrect game over.";
      }
    }
    
    else {
      cout << "incorrect input. Start Over.";
    }
    
}

int main()
{
  player();
}