#include <stdio.h>
#include <stdlib.h>

int main() {
  int choice;
  double degree;
  double fahrenheit;
  double celcius;
  printf("Choose Celcius=1 or Fahrenheit=2:\n");
  scanf("%d", &choice);
  if (choice == 1) {
    printf("Enter Celcius:\n");
    scanf("%lf", &degree);
    fahrenheit = (degree * 1.8) + 32;
    printf("Temprature in Fahrenheit = %lf", fahrenheit);
  } else if (choice == 2) {
    printf("Enter Fahrenheit:\n");
    scanf("%lf", &degree);
    celcius = (degree - 32) * .5556;
    printf("Temprature in Celcius = %lf", celcius);
  } else {
    printf("Something went wrong");
    }
  return 0;
}
