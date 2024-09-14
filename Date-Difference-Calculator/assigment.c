#include <stdio.h>

int main() 
{   
	int day1 = 0, month1 = 0, year1 = 0;         // I make my variables 0 because i don't want any unecessary bits to the variables, 
	int day2 = 0, month2 = 0, year2 = 0;         // also they take space, and if i dont make them 0 they can cause troublesto the programm.
	int new_day = 0, new_month = 0, new_year = 0;
	char a, b, c, d;

	while (1)
	{
		day1 = 0, month1 = 0, year1 = 0;  // i make them zero for the same reason as before
		

		scanf("%d%c%d%c%d", &day1, &a, &month1, &b, &year1);
		
		if (day1 >= 1 && day1 <= 31 && month1 >= 1 && month1 <= 12 && year1 >= 1 && year1 <= 10000)  //checks that the values of the dates are correct if not you enter them again
		{
			if (month1 == 2 && day1 <= 28)   // checks the February month
			{
				break;
			}
			else if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11 ) // checks the months that have 30 days
			{
				if (day1 == 30)
				{
					break;
				}
			}
			else if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12) // checks the months that have 31 days 
			{
				break;
			}
		}
	}

	while(1)
	{ 
		day2 = 0, month2 = 0, year2 = 0; // I make them zero for the reasons that i make the first one's
	    scanf("%d%c%d%c%d", &day2, &c, &month2, &d, &year2);

	    if (day2 >=1 && day2<=31 && month2>=1 && month2 <=12 &&year2 >= 1 && year2 <= 10000) // Checks the values of the dates 
	    {
			if (month2 == 2 && day2 <= 28) // Checks Febuary
			{
				printf("prwti if: \n");
				break;
			}
			else if (month2 == 4 || month2 == 6 || month2 ==9 ||month2 == 11 ) // Checks the months that have 30 days
			{
				if(day2 <= 30)
				{
					    printf("deuteri if: \n");
						break;
				}
			}
			else if (month2== 1 || month2== 3 || month2== 5 || month2== 7 || month2== 8 || month2 == 10 ||month2 == 12 ) // Checks the months that have 31 days
			{
		     break;
			}
	    }
	}
	new_day = day1 - day2;
	new_month = month1 - month2;
	new_year = year1 - year2;
	printf("the result is %d/%d/%d \n\n", new_day, new_month, new_year); // prints the result

	return(0);
}