#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//strcpy  --string copy -�ַ�������
//char * strcpy ( char * destination, const char * source );
//�ַ�����������
//int main()
//{
//	char arr1[20] = "#########";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




//memset
//�ڴ�����
//void * memset ( void * ptr, int value, size_t num );
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



//���������ֵ
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//
//}



//������������ֵ
//void Swap1(int x, int y)//void��ʾ�޷��أ�����Ҫ����
////x y���β�  ��ʽ����
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//void Swap2(int *pa, int *pb)
//{
//	int temp = 0;
//    temp=*pa;//�ȼ���temp=a
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//Swap( a , b );//a b��ʵ��  ʵ�ʴ��������Ĳ���
//	Swap2(&a,&b);
//	/*temp = a;
//	a = b;
//	b = temp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("a = %d\n", a);
//	return 0;
//}

//
//#include<math.h>
//int is_prime(int n)
//{
//    //�ж�n�Ƿ�Ϊ����
//	//2->n-1
//	int i = 0;
//	for (i = 2; i <=sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	//������
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int is_leap_year(int year)
//{
//	/*if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//*/
//	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

  




                  //int* arr
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//�Ҳ���
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//���鴫�ε�ʱ�򣬴���ȥһ���������������ϴ���ȥ�������Ԫ�صĵ�ַ
//	int ret = binary_search(arr , k ,sz);//�ҵ��˷����±꣬�Ҳ�������-1
//	//���鴫�η��������������Ԫ�صĵ�ַ
//	
//	if (ret == -1)
//
//	{
//		printf("�Ҳ���\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//		return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//
//int main()
//{
//
//	//����1
//	int len = strlen("bit");
//	printf("len=%d\n", len);
//
//	//����2
//	printf("len=%d\n", strlen("bit"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//��ʽ���� printf�ķ���ֵ
//	return 0;
//}




#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);//��������
	printf("sum=%d\n", sum);
	return 0;
}


