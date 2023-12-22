/*

Write a program which  accepts paragraph from the user and count number of sentences, words and characters.

Input : Hello! How are you? Where were you? I have been looking for all these days.
Output : 4  15  75
 
*/ 

#include <stdio.h>

void CountFromParagraph(char *paragraph)
{
    if (paragraph == NULL)
        return;

    int iSentences = 0, iWords = 1, iCharacters = 0;

    while (*paragraph != '\0')
    {
        if (*paragraph == '!' || *paragraph == '?' || *paragraph == '.')
            iSentences++;
        else if (*paragraph == ' ' || *paragraph == '\t')
            iWords++;
        iCharacters++;
        paragraph++;
    }

    printf("Number of sentences in the paragraph are : %d\n", iSentences);
    printf("Number of words in the paragraph is : %d\n", iWords);
    printf("Number of characters in the paragraph is : %d\n", iCharacters);
}

int main(void)
{
    char paragraph[1000];

    puts("Enter the paragraph : ");
    gets(paragraph);

    CountFromParagraph(paragraph);

    return 0;
}
