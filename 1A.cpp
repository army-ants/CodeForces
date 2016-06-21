#include<iostream>
#include<cmath>

int main()
{
  long long a,m,n,numn,numm,num;
  std::cin>>n>>m>>a;
  numn=n/a;
  numm=m/a;
  if(n%a&&n>a)
	++numn;
  if(m%a&&m>a)
	++numm;
  num=numn*numm;
  if(num==0&&(n+m)!=0)
	++num;
  std::cout<<num;	
  return 0;
}
