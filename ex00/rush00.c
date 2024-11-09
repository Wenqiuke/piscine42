#include <unistd.h>

void	rush(int x, int y)
{
	int c;//declare colum counter
	int r = 0;// declare the row counter, assign initial value to be 0

	while (r < y )// check if the row is less than the desire
	{
		c = 0; // assign the colum from 0, easy for the upcoming loop where the C++

		while (c < x)
		{
			if ((r == 0 && (c == 0 || c == x - 1)) || (r == y - 1 && (c == 0 || c == x - 1))) // to locate the 4 coner where we should put "o"
				write(1, "o", 1);
			else if (r == 0 || r == y - 1)// to locate the first and the last fine where it is required to put "-"
				write(1, "-", 1);
			else if (c == 0 || c == x - 1) //to locat the place where to put "|"
				write(1, "|", 1);
			else 
				write(1, " ", 1);
			c++; // to start the loop
		}
		
		write(1, "\n", 1);// need to go to the new line to for check the row number again
		r++;
	}
}

int	main()
{
	rush(8,8);
	return 0;
}
