//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5, };
//	int to_find = 1;
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++);
//	{
//		if (to_find == arr[i])
//		{
//			break;
//		}
//
//	}
//	if (i == 5)
//	{
//		printf("û���ҵ�Ԥ�ڵ�Ԫ��\n");
//	}
//	else {
//		printf("�ҵ���!,�±�Ϊ%d\n", i);
//	}
//	system("pause");
//
//}
//�ڲ�������ʱ���������֮��,��������������ֵ
//��ʵ�������뷽��2�мӼ��ķ�����һ������,ֻ�������ڼ�����ڲ��Զ����Ƶķ�ʽ��������
//ע��:�������������㷽ʽΪ,��ͬΪ0,��ͬΪ1;
//���ַ�����ʵҲ��Ч����ߵ�һ��
//���������ֵ��ת��,����ͨ��ϵͳ�Դ��ļ���������ת��
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 30;
//	int b = 40;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("����֮�����ֵΪ%d %d", a,b);
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int t;
//	printf("��������������:\n");
//	scanf_s("%d%d%d", &a,&b,&c);
//	if (a < b)//����һ���������,���ϴ������ֵ�ŵ�a����
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)//������������a��
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("���������մӴ�С��˳������Ϊ%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int zhuti( int x,int y,int z )
//{
//	int t = 0;
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (x < z)
//	{
//		t = x;
//		x = z;
//		z = t;
//	}
//	if (y < z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("���������ɴ�С������˳��Ϊ%d %d %d", x, y, z);
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	int c;
//	printf("������������:");
//	scanf_s("%d %d %d", &a, &b, &c);
//	zhuti(a, b, c);//���ú���
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int t;
//	printf("�����������������ǵĹ�Լ��:");
//	scanf_s("%d %d", &a, &b);
//	if (a < b)//���ϴ������ֵ����a��
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a%b != 0)//����ȡ��,����ȡ�����õ�ֵ������С����
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("�������������Լ��Ϊ%d\n", b);
//	system("pause");
//	return 0;
//}
//���������������ǵ����Լ��
//����2
//ͨ��շת��������������������Լ��
//������������,���ϴ������ֵ����a��,����С������ֵ����b��
//����һ��whileѭ��,��a,b����������շת���
//������õ���ֵ������С����,ֱ��a��b����Ľ��Ϊ0,
//�����С������Ϊa,b�����Լ��
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int t;
//	printf("�����������������ǵ����Լ��:");
//	scanf_s("%d %d", &a, &b);
//	if (a < b)//���������if����ʱ,������������˳��,���ϴ����������a��
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a - b != 0)
//	{
//		t=a-b;
//		a = b;
//		b = t;
//	}
//	printf("�������������Լ��Ϊ:%d\n",b);
//	system("pause");
//	return 0;
//}
//���������������ǵ����Լ��
//������  ��ٷ�
//������������,���ϴ������ֵ������a��,����С������ֵ������b��
//����һ��forѭ��,����һ����ʱ����t,����С������ֵ����t;�ýϴ������С����ȥȡ��t
//������ʱ��t--,ֱ�������С����ȡ��t��ϴ����ȡ��t�Ľ����Ϊ0ʱ,����ѭ��
//���������Ϊֵt��Ϊ�����������Լ��
#include<stdio.h>
#include<windows.h>
int main()
{
	int a;
	int b;
	int t;
	printf("�����������������ǵ����Լ��:");
	scanf_s("%d %d", &a, &b);
	if (a < b)//���ϴ������ֵ����a��
	{
		t = a;
		a = b;
		b = t;
	}
	for (t = b; a%t || b % t; t--);
	printf("�������������Լ��Ϊ:%d\n", t);
	system("pause");
	//return 0;
}

