/*
Sample Input
1
north
3
north
east
south
0
Sample Output
5
1
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int a[3][4]={0},temp;
		string in;
		if(n==0)
		{
			break;
		}
		
		a[0][0]=3; //�ֻ��� �⺻ �� �Է� , �������� top �� 1 north�� 2 , west��3 �ֻ����� ���� 7; 
		a[1][0]=1;
		a[2][0]=4;
		a[1][1]=2;
		a[1][2]=6;
		a[1][3]=5;
		
		while(n--)
		{
			cin>>in;
			
			if(in=="north")
			{
				temp=a[1][0]; //ȸ���ϴ� �� �Է�; 
				a[1][0]=a[1][3];
				a[1][3]=a[1][2];
				a[1][2]=a[1][1];
				a[1][1]=temp;
			}
			else if(in=="south")
			{
				temp=a[1][0];
				a[1][0]=a[1][1];
				a[1][1]=a[1][2];
				a[1][2]=a[1][3];
				a[1][3]=temp;
			}
			else if(in=="east")
			{
				temp=a[1][0];
				a[1][0]=a[0][0];
				a[0][0]=a[1][2];
				a[1][2]=a[2][0];
				a[2][0]=temp;
			}
			else if(in=="west")
			{
				temp=a[1][0];
				a[1][0]=a[2][0];
				a[2][0]=a[1][2];
				a[1][2]=a[0][0];
				a[0][0]=temp;
			}
		}
		cout<<a[1][0]<<endl; //����� �� ���; 
	}

return 0;
}

