#include<stdio.h>

int main(void)
{
  char *list[] = {"Ubuntu", "CentOS", "Arch", "fedora"};
  printf("Entire list size is %d byte.\n", (int) sizeof list);
  printf("First element size is %d byte.\n", (int) sizeof list[0]);
  // 配列の要素全体の大きさ / 配列の要素一つ分の大きさ
  int list_size = sizeof list / sizeof list[0];
  printf("List size of element is %d byte.\n", list_size);
}