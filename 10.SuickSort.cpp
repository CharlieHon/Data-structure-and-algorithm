#include <iostream>

using namespace std;

template<class T>
void QuickSort(T *a, const int left, const int right)
{
	if(left<right){
		//选枢轴
		int i = left;
		int j = right+1;
		int pivot = a[left];
		
		//划分算法，小于枢轴放左边，大于枢轴放右边 
		do{
			do i++; while(a[i] < pivot);
			do j--; while(a[j] > pivot);
			if(i<j)	swap(a[i], a[j]);
		}while(i<j);
		swap(a[left], a[j]);
		
		QuickSort(a, left, j-1);
		QuickSort(a, j+1, right);
	}
}

int main()
{
	int k[] = {5, 8, 9, 4, 3, 1, 7, 6, 0, 2, 99};
	QuickSort(k, 0, 9);
	for(size_t i=0; i<10; ++i)
		cout << k[i] << " ";
	cout << endl;
	return 0;
}
