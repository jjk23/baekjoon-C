#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[1000000] = { 0, };
int b[1000000];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
	mergeSort(arr, 0, n - 1);    //배열의 요소를 분할하는 함수

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
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
/*
(2)
merge(a,0,0,1)이 들어가면 i=0,j=1 즉 i=mid j=hight가 됨. 즉 첫번째while은 한번만 시행
우선 a[0]과 a[1]을 비교하는 작업. 더 작은 수를 b[0]에 넣음
이후 둘 중 넣지 않은 배열(여기선 a[1]이 2고 a[0]이 4이므로 a[0]을 넣지않음)을 b뒤에 전부 채움
즉 한번 루프 후엔 a[0]=2 a[1]=4인 상태
이후 merge(a,2,2,3)을 넣으면 i=2 j=3 즉 i=mid j=hight가 됨. 
이후는 마찬가지로 a[2]와a[3]을 비교하교 b[0]에 1 b[1]에 3이 들어가지고
a[2]에 1,a[3]에 3이 들어가짐
즉{2,4,1,3}인 상태에서 최종 merge를 수행
merge(a,0,1,3)을 시행하면 i=0 j=2가되고 각각 mid와 hight랑은 다르므로
첫번째 while문에선 2번씩은 시행할 수 있음 
이때 i는 왼쪽배열{2,4} j는 오른쪽배열{1,3}를 의미하고 먼저 2와 1비교. 이후 2와 3비교 ... 하는 식으로 진행
그렇게 모두 정렬이 끝나면 전부 a에 복사해서 끝
*/
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

/*
(1)
예를들어 배열의 크기가 4인 {4,2,3,1}을 넣으면 mergesort에 low에는 0. hight에는 3이 들어감
이때의 mid는 1. 또다시 mergesort가 시행되는데 왼쪽배열인 mergeSort(a, low, mid) 에는 0,1이 들어가고
오른쪽 배열인 mergeSort(a, mid + 1, hight) 에는 2,3이 들어감.
이때 둘 다 인접한 수가 들어갔으므로 더이상의 mergesort는 시행되지 않고 merge만 시행
다음 단계는 위에서 설명*/
