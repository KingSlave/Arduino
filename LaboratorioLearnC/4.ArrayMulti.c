#include <stdio.h>

int main() {
  int average0;
  int average1;
  int average2;
  int grades[2][3];

  grades[0][0]=80;
  grades[1][1]=85;
  grades[0][2]=80;
  grades[1][0]=85;
  grades[0][1]=80;
  grades[1][2]=85;
  grades[0][0]=80;
  grades[1][1]=85;
  grades[0][2]=80;
  average0 = (grades[0][0] + grades[0][1] + grades[0][2]) / 3;
  average1 = (grades[1][0] + grades[1][1] + grades[1][2]) / 3;
  average2 = (grades[2][0] + grades[2][1] + grades[2][2]) / 3;

  printf("The average of by row 0: %d \n", average0);
  printf("The average of by row 1: %d \n", average1);
  printf("The average of by row 2: %d \n", average2);

  return 0;
}
