#include <unistd.h>

void    rush(int x, int y)
{
        int c;//declare colum counter
        int r = 0;// declare the row counter, assign initial value to be 0

        while (r < y )// check if the row is less than the desire
        {
                c = 0; // assign the colum from 0, easy for the upcoming loop where the C++

                while (c < x)
                {
                        if ((r == 0 && (c == 0 || c == x - 1))) // the corner of the first line should be "A"
                                write(1, "A", 1);
			else if( r == x - 1 && (c == 0 || c == y - 1))// the corner of the last line should be "C"
				write(1, "C", 1);
                        else if ((r == 0 || r == y - 1)||(c == 0 || c == x - 1))// to first line should be "B" except for the coner
                                write(1, "B", 1);
                        else
                                write(1, " ", 1);
                        c++; // to start the loop
                }

                write(1, "\n", 1);// need to go to the new line to for check the row number again
                r++;
        }
}

int     main()
{
        rush(5,1);
        return 0;
}
