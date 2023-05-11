#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* words[], int words_len, const char* word)
{
    int count = 0;

	int word_size = strlen(word);

	for (int i = 0; i < words_len; i++)
	{
		for (int j = 0; j < word_size; j++) 
		{
			if (word[j] != words[i][j]) 
			{
				count++;
			}
		}
	}

	return count;

}

int main()
{
	const char* words[3] = { "CODE", "COED" ,"CDEO" };
	int words_len = 3;
	const char* word = "CODE";
	int ret = solution(words, words_len, word);

	printf("solution 함수의 반환 값은 %d 입니다. \n", ret);

	return 0;
}
