#include <stdio.h>
#include <iostream>
int main()
{
  int sum,srok;
  cout <<"Vvedite srok i summu";
  cin >> srok >> sum;
  if (srok > 365; srok < 0; sum < 100){
    cout <<"Nekorektno vvedni danie";
  } else {
    if (srok < 31){
      sum = sum-((sum/100)*10);
      cout <<"Summa ravna = "<< sum;
    } else {
      if (srok < 121){
	sum = sum+((sum/100)*2);
        cout <<"Summa ravna = "<< sum;
      } else {
	if (srok < 241){
	  sum = sum+((sum/100)*6);
	  cout <<"Summa ravna = "<< sum;
	} else {
	    sum = sum-((sum/100)*10);
	    cout <<"Summa ravna = "<< sum;
	  }
      }
    }
  }
  return 0;
}
      
      
	 
      
