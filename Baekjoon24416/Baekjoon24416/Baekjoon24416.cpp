// Baekjoon24416.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int fib(int n);
int fibonacci(int n);
int fibcount = 0, fibonaccicount = 0;
int DP[41];
int main()
{
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << fibcount << "\n" << fibonaccicount;
}
int fib(int n)
{
	if (n == 1 || n == 2)
	{
		fibcount++;
		return 1;
	}
	else
	{
		return (fib(n - 1) + fib(n - 2));
	}
}
int fibonacci(int n)
{
	DP[0] = DP[1] = 1;
	for (int i = 2; i < n; i++)
	{
		fibonaccicount++;
		DP[i] = DP[i - 1] + DP[i - 2];
	}
	return DP[n];
}

