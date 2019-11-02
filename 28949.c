//https://quera.ir/problemset/contest/28949/
//Solve by: Ahmadrezadl
#include <stdio.h>

int main()
{
	int n;
	//24 * 60 mishavad 1440, ma arayeye tedade mehman ha dar har saat ra 1500 tayi dar nazar migirim
    int tedadeMehmanHaDarSaat[1500] = {0};
	scanf("%d" , &n);
	char temp[500000];
	char c;
	int h,m;
	int time;
	for (int i = 0;i < n;i++)
	{
		scanf("%s" ,temp); //Esme Mehman Mohem nist
		scanf("%d:%d %c" , &h,&m,&c);
		time = m + h*60;
		if (c == '+')
		tedadeMehmanHaDarSaat[time]++;
		else
		tedadeMehmanHaDarSaat[time]--;
	}
	int maxMehmanHa = 0;
	int tedadeMehmanHa = 0;
	for (int i = 0;i< 1500;i++)
	{
		tedadeMehmanHa += tedadeMehmanHaDarSaat[i];
		if (tedadeMehmanHa > maxMehmanHa)
		{
			maxMehmanHa = tedadeMehmanHa;
			time = i;
		}
	}
	m = time;
	h = 0;
	while (m>59) //Tabdile Daghighe be H:M
	{
	h += 1;
	m += -60;
	}
	if (h < 10) //Gharar dadane 0 baraye aadade yek raghami
        printf("0");
    printf("%d:" , h);
    if (m<10)
        printf("0");
    printf("%d" , m);
			//	printf("\n");
}

