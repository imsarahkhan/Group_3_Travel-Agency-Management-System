#define _CRT_SECURE_NO_WARNINGS
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
void add_log(const char* string)
{
    FILE* output_file;
    char* file_name = "test_log.txt";
    output_file = fopen(file_name, "a");
    if (output_file != NULL)
    {
        fprintf(output_file, string);
        //fprintf(output_file, "  The expected output is %d.\n", expected);
        //fprintf(output_file, "  The actual output is %d.\n", actual);
        fclose(output_file);
    }
    else
    {
        printf("Can't open the log file.\n");
    }

    return;
}