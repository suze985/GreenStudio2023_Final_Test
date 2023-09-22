#include"tou.h"
int binarysearch(int arr[],int left,int right,int target)
{
	
	while(left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ���±궨��
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] < target )//�������ҵ�Ԫ�ر��м�ֵ��˵��Ҫ���ҵ�Ԫ�����Ұ���
		{
			left = mid + 1;
		}
		else                        //�������ҵ�Ԫ�ر��м�ֵС��˵��Ҫ���ҵ�Ԫ���������
		{
			right = mid - 1;
		}
	}
	return -1;                      //������ѭ����û�з���ֵ��˵��û�ҵ���Ҫ��Ԫ�أ�����-1
}

int main ()
{
	int arr[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int target = 9;
	int len = sizeof(arr) / sizeof(arr[0]);                // ���鳤��
	int location = binarysearch(arr, 0, len - 1, target);  // ������������
	if (location != -1)
	{
		cout << "Ŀ��Ԫ��9�������е�λ��Ϊ" << location << endl;
	}
	else 
	{
		cout << " Ŀ��Ԫ�ز��������� " << endl;
	}
	system("pause");
	return 0;
}







