#include <stdio.h>
#include <math.h>

struct rectangle{
  double width;
  double height;
};

int main(void) {

  struct rectangle rec1;
  struct rectangle rec2;

  double men;

  printf("> ");
  scanf("%lf %lf",&rec1.width ,&rec1.height);

  men=rec1.width*rec1.height;

  printf("長方形 (%.1f, %.1f) の面積は %.1f です。\n",rec1.width ,rec1.height ,men);

  rec2.width = sqrt(men);
  rec2.height = sqrt(men);

  printf("正方形 (%.1f, %.1f) の面積は %.1f です。\n",rec2.width ,rec2.height ,men);

  return 0;
}
