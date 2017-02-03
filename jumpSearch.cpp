//Jump Search 
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int jump_search(vector<int> ve, int element)
{
	//get the block size
	int n = ve.size();
	int block_size = floor(sqrt(n)), prev=0;
	while(ve[min(block_size, n)-1] < element)
	{
		prev = block_size;
		block_size += floor(sqrt(n));
		if(prev >= n)
			return -1;
	}
	//now start linear search
	while(ve[prev]<element)
	{
		prev++;
		if(prev==min(block_size, n))
			return -1;
	}
	if(element == ve[prev])
		return prev;
	return -1;

}
int main()
{
	int n=0, element=0;
	cout<<"Enter the value of N: ";
	cin>>n;
	vector<int> ve(n);
	for(int i=0;i<n;i++)
	{
		cout<<(i+1)<<" element: ";
		cin>>ve[i];
	}
	cout<<"Enter the element to search: ";
	cin>>element;
	//sort the array
	std::sort(ve.begin(), ve.end());
	int pos = jump_search(ve,element);
	if(pos==-1)
		cout<<"No Luck!"<<endl;
	else cout<<"Success! found at : "<<(pos+1)<<endl;
	return 0;
}