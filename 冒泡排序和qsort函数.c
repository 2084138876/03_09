#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ð��������������Ԫ�ؽ��бȽϣ�Ȼ�󽻻�λ��

//������ ��һ����������������ڵ�Ԫ�ذ�������ķ�ʽ����

//void bubble_sort(int arr[], int sz)
//{
//	// n��Ԫ��Ҫ����n-1��ð������
//	int i = 0;// i ��������ǵڼ���ð������
//	for (i = 0; i < sz - 1; i++)//sz��Ԫ�أ�һ��Ҫ����sz-1��ð������
//	{
//		// ÿ��ð������Ҫ��ɵ�����
//		int j = 0;// j ���� ���Ԫ���±�
//		for (j = 0; j <= sz - 2 - i; j++)// ÿ����һ��ð��������Ҫ�����Ԫ�ؾͼ���1��
//		{
//			if (arr[j] > arr[j + 1])//ǰ���Ԫ�رȺ����
//			{
//				//ǰ�󽻻�λ��
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr [10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

// qsort()   �⺯��,�����������ʵ�������������ݵ�����Ĭ������������
// ���Ҫ���н������򣬽���cmp�����ķ���ֵ�߼����ɣ���  e1<e2����ֵ>0 ,e1==e2����0��e1>e2����ֵ<0����
// 
//void qsort(void* base,//���������ݵ���ʼλ��
//	size_t num,//���������ݵ�Ԫ�ظ���
//	size_t width,//���������ݵ�Ԫ�ش�С(��λ���ֽ�)
//	int(*cmp)(const void* e1, const void* e2)//����ָ�� -> �ȽϺ���// ����ʽ��Ӧ�ĺ����ĵ�ַ
//	// �ṩһ���ȽϺ������ȽϵĶ�����e1��e2)�������ķ���ֵ��int���ͣ��������������Ͷ��� const void*
//		);
// ����cmp��ָ��ĺ������涨��e1<e2������ֵ<0;
//							  e1==e2,���� 0��
//							  e1>e2,����ֵ>0;
// ����Ҫע����ǣ�e1��e2��������void*,����void*��ָ�룬�ǲ���ֱ�ӽ����õ�
// void* ��ָ����ָ���޾������͵�ָ�룬���Խ����������͵�ָ�룬����void* ���ܽ����ò�����Ҳ���ܽ��мӼ���������
// ��ˣ�Ҫʹ��void* ��ָ�룬��Ҫ�ȶ������ǿ������ת����ת��Ϊ����յ������͵�ָ��

//ʹ��qsort() ������ ����������� //qsort ���ÿ��������㷨
//#include <stdlib.h>
//#include <search.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//Ĭ������ -> ��������
//	//return *(int*)e2 - *(int*)e1;//��������
//}
//
//int main()
//{
//	int arr[10] = { 22,43,5,78,99,10,21,7,9,33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//ʹ��qsort()����������ṹ������

#include <string.h>

//struct Stu
//{
//	char name[20];
//	int  age;
//};
//
//int cmp_by_name(void* e1, void* e2)//��������������
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	//strcmp(str1,str2),���str1 > str2������ֵ����0��str1==str2,����0��str1<str2,����ֵ<0
//	//strcmp �����ķ���ֵ�պ����� Ĭ�ϵ���������
//}
//
//int cmp_by_age(void* e1, void* e2)//��������������
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	//strcmp(str1,str2),���str1 > str2������ֵ����0��str1==str2,����0��str1<str2,����ֵ<0
//	//strcmp �����ķ���ֵ�պ����� Ĭ�ϵ���������
//}
//
//int main()
//{
//	struct Stu s[] = { { "����",25 }, { "����",20 },{"����",15} };
//	//s �ǽṹ������
//	//qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]),cmp_by_name );//��������������
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]),cmp_by_age );//��������������
//}
