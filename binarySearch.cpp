#include <iostream>
#include <vector>
using namespace std;
int binary_search(std::vector<int> ve, int start, int end, int element)
{
	if(start<=end)
	{
		int mid = (start+end)/2;
		if(ve[mid]==element)
			return mid;
		else if(ve[mid]<element)
			return binary_search(ve, mid+1, end, element);
		else
			return binary_search(ve, start, mid-1, element);
	}
	else return -1;
}
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
	//sort;
	std::sort(ve.begin(),ve.end());
	cout<<"Enter the element to search : ";
	int element =0;
	cin>>element;
	int pos = binary_search(ve, 0, ve.size()-1, element);
	if(pos==-1)
		cout<<"Sorry, out of search"<<endl;
	else 
		cout<<"Found at Position: "<<(pos+1)<<endl;
	return 0;
}