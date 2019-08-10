#include <iostream>
using namespace std;
 
int fiboc(int i)
{
	if (i == 1)
	return 2;
	if (i == 2)
	return 3;
	return fiboc(i-1) + fiboc(i-2);
}

int main()
{
	cout << fiboc(5);
	return 0;
}

#include <iostream>
using namespace std;

int count(int n) {
	// Base case
	if(n==1) return 2;
	if(n==2) return 3;
	// Recursive assumption
	int r1 = count(n-1);
	int r2 = count(n-2);
	// Selfwork
	return r1+r2;
}

int main(int argc, char const *argv[])
{
	cout<<count(6);
	return 0;
}