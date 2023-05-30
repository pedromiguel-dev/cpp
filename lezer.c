#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 100

int main(int argc, char const *argv[])
{
    char const *filename = argv[1];

    FILE *file = fopen(filename, "r");

    if(!file)
    {
        printf("Error opening file\n");
        return -1;
    }

    char line[MAX_LINE_LENGTH];

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL)
    {
        /* printf("%s", line); */
        char *token = strtok(line, " ");
        while (token != NULL)
        {
            if(token[strlen(token) - 1] == '\n')
            {
                token[strlen(token) - 1] = '\0';
            }
            int empty_token = 0;
            for (int i = 0; i < strlen(token); i++)
            {
                if(token[i] == '\t' || token[i] == ' ')
                {
                    empty_token = 1;
                } else {
                    empty_token = 0;
                    break;
                }
            }
            if(empty_token)
            {
                break;
            }

            printf("[%s]\n", token);
            token = strtok(NULL, " ");
        }
        
    }

    fclose(file);
    return 0;
}
