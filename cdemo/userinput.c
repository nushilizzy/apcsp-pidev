#include <stdio.h>
#include <math.h>

float areaOfCircle(float r){
  float area = r * r * M_PI;
  return area;
}

float getBottomRadius(){
  float rBot;
  char input[256];
  int check = 0;

  while (check == 0) {
    printf("Enter the lower bound for the radius: \n");
    fgets(input, 256, stdin);
    check = sscanf(input, "%f", &rBot);

      if (check != 1) {
        printf("Only enter numerical values please\n");
      }
/*      else if (check == 1) {
        continue;
      }*/
  }
return rBot;
}

float getTopRadius(){
  float rTop;
  char input[256];
  int check = 0;

  while (check == 0) {
    printf("Enter the upper bound for the radius: \n");
    fgets(input, 256, stdin);
    check = sscanf(input, "%f", &rTop);

      if (check != 1) {
        printf("Only enter numerical values please\n");
      }
/*      else if (check == 1) {
        continue;
      }*/
  }
return rTop;
}


int main(){

  float rBottom;
  float rTop;

  /*printf("Input lowest radius: ");
  scanf("%f", &rBottom);
  printf("Input highest radius: ");
  scanf("%f", &rTop);
*/

  rBottom = getBottomRadius();
  rTop = getTopRadius();




  while (rBottom >= rTop) {
    printf("Lowest radius must be lower than the highest radius\n");

    printf("Input lowest radius: ");
    scanf("%f", &rBottom);

    printf("Input highest radius: ");
    scanf("%f", &rTop);
  }

  for (float i = rBottom; i <= rTop; i++){
    float a = areaOfCircle(i);
    printf("%f\n",a);
  }
}
