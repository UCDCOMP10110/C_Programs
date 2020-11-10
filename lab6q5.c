#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 100

int main(void)
{
// making the variables type
  int a[MAX_SIZE]; 
  int N, i;
  int m_e_h = 0;
  int m_s_f = INT_MIN;
  int start = 0;
  int end = 0;

  /* read in the array */
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%d", &a[i]);

  /*using Kadanes algorithm which saves the saves the max endin here with the curent every loop then uses max so far to see if its greater if so it save it their and using end and i to tell its location*/

  if (N == 0) {
    printf("Largest sum is 0 obtained from the subsequence [ ]");
    return 0;
  }

    for (i = 0; i < N; i++) {
      m_e_h = m_e_h + a[i];
      if (m_e_h < a[i]){
        m_e_h = a[i];
        start = i;
      }
      if (m_s_f < m_e_h) {
        m_s_f = m_e_h;
        end = i;
      }
    }

  
    /* printing out the results */
    if (m_s_f < 0) {
      printf("Largest sum is %d obtained from the subsequence [ %d ]", m_s_f, m_s_f);
      return 0;
    }
    end = end + 1;

    printf("Largest sum is %d obtained from the subsequence ", m_s_f);
    printf("[ ");

    for (i = start; i < end; i++) {
      printf("%d ", a[i]);
    }

    printf("]");

  return 0;
}
