//基本递归算法
#include<iostream>
using namespace std;
void print(int sum, int k, int prio);
int a;
int mark[200];
int main()
{
   cin>>a;
   print(0, 0, a);
   return 0;
}
void print(int sum, int k, int prio)
{
    if (sum > a)
     return;
    if (sum == a)
	{
	for (int i = 0; i < k - 1; i++)
	cout << mark[i] << "+";
	cout << mark[i]<<"\n" ;
	}
	else {
    	for (int j = prio; j > 0; j--)
    	{
    	mark[k] = j;
    	sum += j;
    	print(sum, k + 1, j);//递归调用
    	sum -= j;//恢复现场
		}
	}
}

