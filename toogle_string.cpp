#include <iostream>
using namespace std;
long long raiser(int k,int j)
{
	long long val=1;
	for(int i=1;i<=k;i++)
	{
		val*=10;
	}
	return val+j;

}
int main()
{
    int n,mult=1,result=0;
    long long divs=raiser(9,7);
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    //cout<<divs<<"  divs"<<endl;
   for(int i=0;i<n;i++)
   {
   	mult=mult*arr[i];
   	if(mult>=divs)
   	{
   		result=(mult+result)%divs;
   		mult=1;
   	}
   }
   result=(mult+result)%divs;
   cout<<result<<endl;

    return 0;
}
