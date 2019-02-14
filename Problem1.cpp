/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. 求出1000以下3或者5的倍数的总和(答案: 233168 ) */

#include <iostream>
using namespace std;

int Multiple_three(int val)
{
	if (!(val % 3))
		return 1;
	else
		return 0;

}
int Multiple_five(int val)
{
	if (!(val % 5))
		return 1;
	else
		return 0;
}

int main()
{
	int sum = 0, Mix = 1000;
	for (int cnt = 0; cnt != Mix; cnt++)
	{
		if (Multiple_five(cnt) || Multiple_three(cnt))
		{
			sum += cnt;
		}
	}
	cout << sum << endl;
}
