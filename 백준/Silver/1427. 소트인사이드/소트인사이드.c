#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int n;
int c = 10;//자릿수
int b[1000000] = { 0, };
int arr[10];
int j = 0;
int main() {
	scanf("%d", &n);
	for (int i = 1000000000; i > 0; i /= 10)
	{
		if (n / i > 0)
		{
			break;
		}
		else
		{
			c -= 1;
		}
	}
	for (int i = pow(10,c-1); i >=1; i/=10)
	{
		arr[j] = n / i;
		n %= i;
		j += 1;
	}
	mergeSort(arr, 0, c-1);
	for (int i = c-1; i>=0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
void merge(int a[], int low, int mid, int hight)    //분리된 배열 정렬 및 병합 함수
{
	int i = low;        //왼쪽 시작
	int j = mid + 1;    //오른쪽 시작
	int k = 0;          //배열 b의 인덱스 값

	while (i <= mid && j <= hight)
	{
		if (a[i] <= a[j])        //분리된 왼쪽 배열과 오른쪽 배열 비교
			b[k++] = a[i++]; //b[k]=a[i] 이후 k+=1 i+=1수행
		else
			b[k++] = a[j++];
	}
	while (i <= mid)             //비교하지 않은 왼쪽 배열이 있다면 배열 b에 전부 채우기
		b[k++] = a[i++];
	while (j <= hight)           //비교하지 않은 오른쪽 배열이 있다면 배열 b에 전부 채우기
		b[k++] = a[j++];
	k--;
	//k값은 hight-low와 동일
	while (k >= 0)               //배열 b 내용을 배열 a 내용에 덮어쓰기
	{
		a[low + k] = b[k];
		k--;
	}
}
int mergeSort(int a[], int low, int hight)    //배열의 요소를 분할하는 함수
{

	int mid;
	if (low < hight)
	{
		mid = (low + hight) / 2;           //인접한 두 수의 합/2는 두 수 중 작은 수의 값과 동일. 즉 인접한 두 수를 넣으면
		//mergesort가 종료되고 merge가 시작됨.
		mergeSort(a, low, mid);            //왼쪽 배열의 요소 분리
		mergeSort(a, mid + 1, hight);      //오른쪽 배열의 요소 분리
		merge(a, low, mid, hight);         //분리된 배열 정렬 및 병합 함수
	}
	return 0;
}
