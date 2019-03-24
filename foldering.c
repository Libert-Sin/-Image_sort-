#include <stdio.h>
#include <stdlib.h>

#define EACH 600
#define NAME 13
#define SORT 20



int main()
{
	int i,j,k;
	FILE *ls_r;
	char str[EACH*NAME-1];
	char cmd[256];

	printf("#### 이 프로그램의 저작권은 ⓒLibert Sin 에 있습니다. ####\n 자유로운 배포·수정은 허용하지만 원저작자와 출처를 표시해야 합니다.\n http://photoguraphy.com/\n#############\n\n\n");

	system("ls ~/Photoguraphy/ᅟdarktable_exported |grep .jpg > /tmp/lstmp");

	ls_r = fopen("/tmp/lstmp","r");
	

	for(i=0; i<EACH*NAME; i=i+NAME)
	{
		fscanf(ls_r, "%s\n", &str[i]);
	}
	
	fclose(ls_r);
        
	system("rm -f /tmp/lstmp");

	system("mkdir '~/Photoguraphy/prod'");

	for(i=1; i<=SORT; i++)
	{
		sprintf(cmd,"mkdir '~/Photoguraphy/prod/%d'",i);
		system(cmd);
	}

	j=1;
	k=1;

	for(i=0; i<EACH*NAME; i=i+NAME)
	{
		if(j>SORT)
                {
                        j=j-SORT;
                }




		sprintf(cmd,"mv '~/Photoguraphy/ᅟdarktable_exported/%s' '~/Photoguraphy/prod/%d' ", &str[i],j);
		system(cmd);
		j++;
		k++;
		if(k>SORT)
		{
			k=1;
			j++;
		}
	}

}