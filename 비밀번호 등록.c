#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char password[30];
	char password2[30];
	int i;

	int alpha_len = 0, digit_len = 0;


	printf("��й�ȣ�� ����մϴ�.\n");

	while (1)
	{
		alpha_len = 0;
		digit_len = 0;

		printf("��й�ȣ�� ����, ���� ���� �ּ��� 8�ڸ� �̾�� �մϴ�.\n");
		printf("���ο� ��й�ȣ �Է� : ");
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
				printf("��й�ȣ�� �ѹ� �� �Է� : ");
				gets(password2);

				if (strcmp(password, password2) != 0)
				{
					printf("��й�ȣ�� ��Ȯ�� �Է��ϼ���\n");
				}

				else
				{
					printf("��й�ȣ�� ��ϵǾ����ϴ�.\n");
					break;
				}
			}
		}		
	}
	
	return 0;
}