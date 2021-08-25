#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char password[30];
	char password2[30];
	int i;

	int alpha_len = 0, digit_len = 0;


	printf("비밀번호를 등록합니다.\n");

	while (1)
	{
		alpha_len = 0;
		digit_len = 0;

		printf("비밀번호는 영문, 숫자 포함 최소한 8자리 이어야 합니다.\n");
		printf("새로운 비밀번호 입력 : ");
		gets(password);

		if (strlen(password) < 8)
		{ 
			continue;
		}
		
		else
		{
			for (i = 0; i < strlen(password); i++)
			{
				if (isalpha(password[i]) != 0)
					alpha_len++;

				else if (isdigit(password[i]) != 0)
					digit_len++;;
			}


			if (alpha_len == 0 || digit_len == 0)
				continue;

			if (alpha_len + digit_len != strlen(password))
			{
				continue;
			}

			else
			{
				printf("비밀번호를 한번 더 입력 : ");
				gets(password2);

				if (strcmp(password, password2) != 0)
				{
					printf("비밀번호를 정확히 입력하세요\n");
				}

				else
				{
					printf("비밀번호가 등록되었습니다.\n");
					break;
				}
			}
		}		
	}
	
	return 0;
}