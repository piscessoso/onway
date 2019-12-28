//分治实现元素选择
#include <iostream>
using namespace std;
int a[100],b[100];
int select(int left,int right,int k)
{
    if(left>=right)
    	return a[left];
    int i=left;     
    int j=right+1;
    int pivot=a[left];
    while(true)
    {
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j)
            break;
        swap(a[i],a[j]);
    }
    if(j-left+1==k)
    	 return pivot;
    a[left]=a[j];      
    a[j]=pivot;
    if(j-left+1<k)
        return select(j+1,right,k-(j-left+1));
    else
        return select(left,j-1,k);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	int k,idex,ans;
	cin>>k;
	ans=select(0,n-1,k);
	for(int i=0;i<n;i++)
	{
		if(b[i]==ans)
		{
			idex=i+1;
			break;
		}
	}
	cout<<ans<<" "<<idex<<endl;
	return 0;
}
 
