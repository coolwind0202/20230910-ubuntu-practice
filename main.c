#include <stdio.h>

int main(void)
{
  char buf[256];
  char name[256];

  puts("名前を入力してください：");
  fgets(buf, 256, stdin);

  sscanf(buf, "%s", name);

  printf("こんにちは、%sさん!\n", name);
  return 0;
}