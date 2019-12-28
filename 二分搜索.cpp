//二分搜索
//加一个注释 
#include <iostream>
using namespace std;
int Left,Right,idex;
void Binarysearch(int a[],int x,int n)
{
	int left=0,right=n-1;
	while(left<=right)
	{
		int middle=(left+right)/2;
		if(x==a[middle])
		{
			Left=Right=idex=middle;
			return ;
		}
		if(x>a[middle])   left=middle+1;
		else    right=middle-1;
	}
	Left=right;Right=left;
	idex=-1;
	return ;
}
int main()
{
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Binarysearch(a,x,n);
	cout<<Left<<" "<<Right<<endl;
	cout<<idex;
	return 0;
}
