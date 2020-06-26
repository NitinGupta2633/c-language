#include<iostream>
using namespace std;
namespace ns
{
	int value()
	{
	return 5;
}
}
namespace ns1
{
	int value()
{
		return 6;
}}
int main()
{
	cout<< ns::value()<<endl;
}
