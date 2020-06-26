#include<iostream>
#include<string>
using namespace std;
class X
{
  std::string y;
  public:
  void get(std::string d)
  {
  	y=d;
  	 }
	  
		   void array (X c[],std::string p,int m)
		   {
		   	for(int i=0;i<m;i++)
		   	{
		   		if(c[i].y==p)
		   		{
		   			cout<<c[i].y<<endl;
				   }
			   }
			   }	
};
int main()
{
	int n;
	cin>>n;
	X f[n];
	X g;
	std::string j,h;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the name of "<<i+1<<" st person"<<endl;
		cin>>h;
		f[i].get(h);
		
	}
	cin>>j;
	g.array(f,j,n);
	return 0;	
	
}
