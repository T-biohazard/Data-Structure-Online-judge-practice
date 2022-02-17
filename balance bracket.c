 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 1000

struct stack {
    char stk[MAX_SIZE];
    int top;
} s;

void push(char c) {
    if (s.top < MAX_SIZE) {
        s.stk[++s.top] = c;
    }
}

char pop() {
    if (s.top > -1) {
        return  s.stk[s.top--];
    } else {
        return -1;
    }
}

int balancedParentheses(char *s, int length) {
    char target, c;
    if (length % 2 != 0) {
        return 0;
    }
    for(int i = 0; i < length; i++) {
        if ((s[i]=='(') || (s[i]=='{') || (s[i]=='[')) {
            push(s[i]);
        } else {
            switch(s[i]) {
                case ')': target = '('; break;
                case '}': target = '{'; break;
                case ']': target = '['; break;
            }
            c = pop();
            if (c == -1 || c != target) {
                return 0;
            }
        }
    }
    return pop() == -1;
}

int main() {
    int t, length;
    char str[1000], c;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        s.top = -1;
        length = 0;
        for (;;) {
            c = getchar();
            if (c == EOF || c == '\n') {
                break;
            }
            str[length] = c;
            length++;
        }
        printf("%s\n", balancedParentheses(str, length) == 0 ? "NO" : "YES");
    }
    return 0;
}
