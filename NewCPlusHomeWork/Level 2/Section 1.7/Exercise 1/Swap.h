/*
 * This function will swap the values which pointer xp and yp point to.
 * Arguments: pointer of int
 */
void Swap(int *xp, int *yp)
{
  int temp = *xp; // Define a variable to store the value of *xp.
  *xp = *yp;      // Assign the value of *yp to *xp.
  *yp = temp;     // Complete the exchange.
}
