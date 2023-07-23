#include <stdio.h>

int main() {
  int c, i, j;
  int chars[26] = {0};

  // 统计每个字符出现的次数
  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++chars[c - 'a'];
    }
  }

  // 找到最大值，确定直方图的宽度
  int max_count = 0;
  for (i = 0; i < 26; ++i) {
    if (chars[i] > max_count) {
      max_count = chars[i];
    }
  }

  // 打印直方图
  for (i = max_count; i > 0; --i) {
    for (j = 0; j < 26; ++j) {
      if (chars[j] >= i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  // 打印字符标签
  for (i = 0; i < 26; ++i) {
    printf("%c ", 'a' + i);
  }
  printf("\n");

  return 0;
}

