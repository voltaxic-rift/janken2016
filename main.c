#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int u = 0, c = 0;
	// 喉の痛み世界最高峰
	printf("じゃんけんゲーム\n");
	do
	{
		switch (judgement(userhand(), comphand()))
		{
		case 0: printf("あいこ\n");
			break;
			// 優勝
		case 1: printf("優勝！！！！！！！！！！！！！！！！！！！！！！！！！\n"); u++;
			break;
			// 優勝終了
		case -1: printf("勝ったのはパソコン\n"); c++;
			break;
		}
	} while (u <= 2 || c <= 2);
	return 0;

}

int comphand(void)
{
	int hand2;
	hand2 = rand() % 3;
	return hand2;
}

int userhand(void)
{
	int hand1;

	do
	{
		printf("入力:");
		scanf("%d", &hand1);
	} while (hand1 > 2);
	return hand1;
}

int judgement(int hand1, int hand2)
{
	int jdg = 0;
	
	switch (hand1 - hand2)
	{
		case -2: jdg = -1;
		case 1: jdg = -1;
			break;
		case -1: jdg = 1;
		case 2: jdg = 1;
			break;
		case 0: jdg = 0;
	}

	return jdg;

}
