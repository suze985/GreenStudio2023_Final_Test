#include"tou.h"
int binarysearch(int arr[],int left,int right,int target)
{
	
	while(left <= right)
	{
		int mid = (left + right) / 2;//中间元素下标定义
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] < target )//当所查找的元素比中间值大，说明要查找的元素在右半区
		{
			left = mid + 1;
		}
		else                        //当所查找的元素比中间值小，说明要查找的元素在左半区
		{
			right = mid - 1;
		}
	}
	return -1;                      //当跳出循环还没有返回值，说明没找到想要的元素，返回-1
}

int main ()
{
	int arr[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int target = 9;
	int len = sizeof(arr) / sizeof(arr[0]);                // 数组长度
	int location = binarysearch(arr, 0, len - 1, target);  // 引用上述函数
	if (location != -1)
	{
		cout << "目标元素9在数组中的位置为" << location << endl;
	}
	else 
	{
		cout << " 目标元素不在数组中 " << endl;
	}
	system("pause");
	return 0;
}







