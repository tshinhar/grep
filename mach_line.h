#ifndef GREP_MACH_LINE_H
#define GREP_MACH_LINE_H


typedef enum regex_type {OR, RANGE, ANY, SIMPLE_STRING} regex_type;

typedef struct basic_expression {
    char* string1;
    char* string2;
    int length1;
    int length2;
    char start_char;
    char end_char;
    regex_type type;
} basic_expression;

void parse_expression(char *line_p, basic_expression* full_expression);

#endif //GREP_MACH_LINE_H
