#include <iostream>     
#include <time.h>
 
void wait ( int seconds )     //seconds
{ 
  clock_t endwait; 
  endwait = clock () + seconds * CLOCKS_PER_SEC; 
  while (clock() < endwait) {} 
} 

void waitMilli ( int milliseconds )     //millieseconds
{ 
  clock_t endwait; 
  endwait = clock () + milliseconds * CLOCKS_PER_SEC / 1000; 
  while (clock() < endwait) {} 
} 
 
int main () 
{ 
  std::cout << "Hello" << '\n';
  waitMilli(500);
  std::cout << "Bye";  
}

//credits to -> https://www.sololearn.com/en/compiler-playground/ckWiLzHgnyJ2/?ref=app