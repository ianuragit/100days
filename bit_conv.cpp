
#include <iostream>


using namespace std;

int main()
{
	int i = 0, N = 0 , sum = 0, j = 0;

	cout<<"enter n"<<endl;
	cin>>N;
	int A[N];
	cout<<"enter array numbers"<<endl;
	for (i = 0 ; i < N ; i++  )
	cin>>A[i];
	
	for (i = 0 ; i < N ; i++)
	{
		for (j = 1 ; j < N ; j++)
		if (i < j)
		sum+= (A[i] & A[j]);
			
		
	}
	
	cout<<sum;
	
	return 0;

}
