#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*print the length of arbitrarily long input lines*/

int getline(char line[]);
void copy(char to[], char from[]);

/*print the longest input line*/
int main() 
{
  int len;                            /*current line length    */
  char **line = NULL;                 /*current input line     */
  char **longest = NULL;              /*longest line saved here*/

  max = 0;
  while ((len = getline(line)))
    if(len > max) {
      max = len;
      copy(longest , line);
    }
}


char* read_input() {
    char* str = NULL; // 初始化字符串指针为NULL
    int size = 0; // 初始化字符串长度为0
    int c = getchar(); // 从标准输入获取第一个字符

    while (c != '\n' && c != EOF) { // 当字符不是换行符也不是文件结束符时，继续循环
        str = (char*)realloc(str, (size + 1) * sizeof(char)); // 每次扩充一个字符的空间
        str[size++] = c; // 将字符添加到字符串中，同时更新字符串长度
        c = getchar(); // 继续获取下一个字符
    }

    str = (char*)realloc(str, (size + 1) * sizeof(char)); // 扩充一个字符的空间，用于存储字符串结束符'\0'
    str[size] = '\0'; // 将字符串结束符'\0'添加到字符串末尾

    return str; // 返回读入的字符串
}

int main() {
    printf("Please input a string:\n");
    char* str = read_input(); // 调用read_input函数读入字符串
    printf("Your input is: %s\n", str); // 打印读入的字符串
    free(str); // 释放字符串所占用的内存空间

    return 0;
}

/*copy : copy 'from' into 'to'; assume to  is big enough*/
void copy(char to[], char from[])
{
  int i;

  i=0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
