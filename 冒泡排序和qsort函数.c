#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 冒泡排序：相邻两个元素进行比较，然后交换位置

//举例： 把一个无须的整型数组内的元素按照升序的方式排序

//void bubble_sort(int arr[], int sz)
//{
//	// n个元素要进行n-1趟冒泡排序
//	int i = 0;// i 用来标记是第几趟冒泡排序
//	for (i = 0; i < sz - 1; i++)//sz个元素，一共要进行sz-1次冒泡排序
//	{
//		// 每趟冒泡排序要完成的事情
//		int j = 0;// j 用来 标记元素下标
//		for (j = 0; j <= sz - 2 - i; j++)// 每进行一趟冒泡排序，需要排序的元素就减少1个
//		{
//			if (arr[j] > arr[j + 1])//前面的元素比后面大
//			{
//				//前后交换位置
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

// qsort()   库函数,这个函数可以实现任意类型数据的排序，默认是升序排序
// 如果要进行降序排序，交换cmp函数的返回值逻辑即可，即  e1<e2返回值>0 ,e1==e2返回0，e1>e2返回值<0即可
// 
//void qsort(void* base,//待排序数据的起始位置
//	size_t num,//待排序数据的元素个数
//	size_t width,//待排序数据的元素大小(单位是字节)
//	int(*cmp)(const void* e1, const void* e2)//函数指针 -> 比较函数// 排序方式对应的函数的地址
//	// 提供一个比较函数（比较的对象是e1和e2)，函数的返回值是int类型，两个参数的类型都是 const void*
//		);
// 对于cmp所指向的函数，规定：e1<e2，返回值<0;
//							  e1==e2,返回 0；
//							  e1>e2,返回值>0;
// 但是要注意的是，e1和e2的类型是void*,对于void*的指针，是不能直接解引用的
// void* 的指针是指，无具体类型的指针，可以接收任意类型的指针，但是void* 不能解引用操作，也不能进行加减整数操作
// 因此，要使用void* 的指针，需要先对其进行强制类型转化，转化为其接收到的类型的指针

//使用qsort() 函数对 数组进行排序 //qsort 采用快速排序算法
//#include <stdlib.h>
//#include <search.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//默认排序 -> 升序排序
//	//return *(int*)e2 - *(int*)e1;//降序排序
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

//使用qsort()函数来排序结构体数据

#include <string.h>

//struct Stu
//{
//	char name[20];
//	int  age;
//};
//
//int cmp_by_name(void* e1, void* e2)//按照名字来排序
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	//strcmp(str1,str2),如果str1 > str2，返回值大于0；str1==str2,返回0；str1<str2,返回值<0
//	//strcmp 函数的返回值刚好满足 默认的升序排序；
//}
//
//int cmp_by_age(void* e1, void* e2)//按照年龄来排序
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	//strcmp(str1,str2),如果str1 > str2，返回值大于0；str1==str2,返回0；str1<str2,返回值<0
//	//strcmp 函数的返回值刚好满足 默认的升序排序；
//}
//
//int main()
//{
//	struct Stu s[] = { { "张三",25 }, { "李四",20 },{"王五",15} };
//	//s 是结构体数组
//	//qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]),cmp_by_name );//按照名字怕排序
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]),cmp_by_age );//按照年龄怕排序
//}
