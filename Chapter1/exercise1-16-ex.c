#include <stdio.h>
#include <stdlib.h>

// 函数声明：用于获取输入行并返回行的长度
int getLine(char **line);

// 函数声明：用于复制源行到目标行
void copyLine(char **to, char **from);

// 函数声明：用于计算字符串的长度
int myStrlen(const char *str);

int main() {
    int currentLength; // 当前行的长度
    int maxLength = 0; // 最长行的长度
    char *currentLine = NULL; // 当前行的字符数组
    char *longestLine = NULL; // 最长行的字符数组

    while ((currentLength = getLine(&currentLine)) > 0) {
        if (currentLength > maxLength) {
            maxLength = currentLength;
            copyLine(&longestLine, &currentLine);
        }
    }

    if (maxLength > 0) {
        printf("Longest line with %d characters:\n", maxLength);
        printf("%s", longestLine);
    } else {
        printf("No input lines.\n");
    }

    free(currentLine);
    free(longestLine);

    return 0;
}

// 函数定义：获取输入行并返回行的长度
int getLine(char **line) {
    int c, i;
    int size = 0;

    // 分配初始内存
    *line = (char *)malloc(1);
    if (*line == NULL) {
        fprintf(stderr, "Memory allocation error.\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        // 动态增加内存
        *line = (char *)realloc(*line, size + 1);
        if (*line == NULL) {
            fprintf(stderr, "Memory allocation error.\n");
            exit(EXIT_FAILURE);
        }

        (*line)[i] = c;
        size++;
    }

    if (c == '\n') {
        // 动态增加内存
        *line = (char *)realloc(*line, size + 1);
        if (*line == NULL) {
            fprintf(stderr, "Memory allocation error.\n");
            exit(EXIT_FAILURE);
        }

        (*line)[i] = c;
        size++;
        ++i;
    }

    (*line)[i] = '\0';
    return size;
}

// 函数定义：复制源行到目标行
void copyLine(char **to, char **from) {
    int i = 0;

    // 释放目标行的内存
    free(*to);

    // 分配目标行的内存，并复制源行内容
    *to = (char *)malloc(myStrlen(*from) + 1);
    if (*to == NULL) {
        fprintf(stderr, "Memory allocation error.\n");
        exit(EXIT_FAILURE);
    }

    while (((*to)[i] = (*from)[i]) != '\0') {
        ++i;
    }
}

// 函数定义：计算字符串的长度
int myStrlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

