#include <stdio.h>
using namespace std;
int main()
{
  int sum,time;
  printf("Vvedite srok i summu");
  scanf("%d %d",&time,&sum); 
  if (time > 365; time < 0; sum < 100){
    printf ("Nekorektno vvedni danie");
  } else {
    if (time < 31){
      sum = sum-((sum/100)*10);
      printf ("Summa ravna =%d",sum);
    } else {
      if (time < 121){
        sum = sum+((sum/100)*2);
        printf ("Summa ravna =%d",sum);
      } else {
	if (time < 241){
	  sum = sum+((sum/100)*6);
	  printf ("Summa ravna =%d", sum);
	} else {
	    sum = sum-((sum/100)*10);
	    printf ("Summa ravna =%d", sum);
	  }
      }
    }
  }
  return 0;
}
      
      
	 
      
