#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n=0;
	cout<<"Enter the value of N: ";
	cin>>n;
	std::vector<int> ve(n);
	for(int i=0;i<n;i++)
	{
		cout<<"Element "<<(i+1)<<": ";
		cin>>ve[i];
	}
	cout<<"Enter the element to search : ";
	int element =0, pos =-1;
	cin>>element;
	for(int i=0;i<n;i++)
		if(ve[i]==element)
		{
			pos=i;
			break;
		}
	if(pos==-1)
		cout<<"Sorry, out of search"<<endl;
	else 
		cout<<"Found at Position: "<<(pos+1)<<endl;
	return 0;

}