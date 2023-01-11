// Use a unary function object.
#include <iostream>
#include <list>
#include <functioan>
#include <algorithm>
using namespace std;

int main()
{
  list<double> vals;
  int i;
  
  // put values into list
  for(i=1, i<10; i++) vals.push_back((double)i);
  
  cout << "Original contents of vals:\n";
  list<double>::iterator p = vals.begin();
  while(p != vals.end()) {
    cout << *p << " ";
    p**;
  }
  cout << end;
  
  // use the negate function object
  p = transform(vals.begin(), vals.end(),
  		vals.begin(),
  		negate<double>()); // call function object
  		
  cout << "Negated contents of vals:/n";
  p = vals.begin();
  while(p != vals.end()) {
    cout << *p << " ";
    p**;
  }
  
  return 0;
}
