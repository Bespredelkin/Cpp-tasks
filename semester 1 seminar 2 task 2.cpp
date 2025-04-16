#include <stdio.h>
#include <string.h>
#define LEN (1024)

int main(void)
{
    char line[LEN];
    char word[LEN];
    fgets(line, LEN, stdin);
    scanf("%1023s", word);
    int lenline = strlen(line);
    int lenword = strlen(word);
    int common = 0;
    if (lenline < lenword)
    {
        printf("слово не может быть длиннее предложения");
        return 0;
    }
    else
    {
        char* p = strstr(line, word);
        while (p)
        {

            common++;
            p++;
            p = strstr(p, word);

        }
        printf("слово в предложении нашлось %d раз\n", common);
        return 0;
    }

}
