#include<stdio.h>
int main()
{
	int a,b,c,sum;
	int d=10;
	scanf("%d %d %d",&a,&b,&c);
	sum= c>d ? a-b:b-a;
	printf("%d",sum); 
	return 0;
}

//��Ŀ����������� ? ���1 : ���2 
//�����������ʽb ? x : y���ȼ�������b��Ȼ������жϡ����b��ֵΪtrue��������Ϊx��ֵ������������Ϊy��ֵ��
