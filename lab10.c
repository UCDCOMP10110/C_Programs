/* Only write the implementation of the primeFactors function here - do NOT 
   write the main function */
void primeFactors(int n, int a[], int *num_factorsp)
{
    /*declaring the variables*/
     int m;
     m = n;
    int j = 2;
    int num = 0;
    /*the outer loop keeps looping until checking m is greater then 1*/
  while(m > 1)
  {
       /*checks if m is divisible by j*/
       while(m % j == 0)
        {
            /*store j in the next position of the array*/
           a[num++] = j;
           
           /*assign into M the result of diving M by j*/
           m /= j;
           
        }
        /*increament j*/
    j++;
  }
  /*assigning the *num_factorsp to num */
  *num_factorsp = num;
    
}
