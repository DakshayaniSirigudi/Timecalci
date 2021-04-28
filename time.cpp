#include<iostream>
using namespace std;
int Timecalculation(int a,int b,int c);
class time
{
   public:	
	int hours,minutes,seconds;
   public:
   	int Timecalculation(int a,int b,int c);
};

int Timecalculation(int a,int b,int c)
{
	int timeinsec=((a*60*60)+(b*60)+c);
	return timeinsec;
};
 
int main()
{
	int x,y,z;
	time t;
	cout<<"enter the time as follows:\n";
	cout<<"1.enter hours:";
	cin>>x;
	cout<<"2.enter minutes:";
	cin>>y;
	cout<<"3.enter seconds:";
	cin>>z;
	cout<<"your entered time is:"<<x<<"hours\t"<<y<<"minutes\t"<<z<<"seconds";
	cout<<"\nyour entered time in seconds is: "<<Timecalculation(x,y,z);
	return 0;
}
