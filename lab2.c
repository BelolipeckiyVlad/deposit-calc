#include <stdio.h>
int main()
{
  int sum, time;
  printf("Vvedite srok i summu \n");
  scanf("%d %d", &time, &sum); 
  if (time > 365 && time < 0 && sum < 1000){
    printf ("Nekorektno vvedni danie \n");
  } else {
    if (time < 31){
      sum = sum - ((sum / 100) * 10);
      printf ("Summa ravna =%d \n", sum);
    } else {
      if (time < 121){
        sum = sum + ((sum / 100) * 2);
        printf("Summa ravna =%d \n", sum);
      } else {
	if (time < 241){
	  sum = sum + ((sum / 100) * 6);
	  printf("Summa ravna =%d \n", sum);
	} else {
	    sum = sum - ((sum / 100) * 10);
	    printf("Summa ravna =%d \n", sum);
	  }
      }
    }
  }
  return 0;
}
      
      
	 
      
