#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
unsigned long long t, i = 1, p, q, n, m, scL[100005], minimum, maximum, cov, scR[100005], cang[100005];
int main()
{
	scanf("%llu", &t);
	while (i <= t)
	{
		scanf("%llu %llu", &n, &m);
		for (p = 0; p<n; p++)
			scanf("%llu %llu", &scL[p], &scR[p]);
		for (q = 0; q<m; q++)
			scanf("%llu", &cang[q]);
		printf("Case %llu:\n", i++);
		for (p = 0; p<m; p++)
		{
			maximum = 0;
			for (q = 0; q<n; q++)
			{
				if (cang[p]<scL[q] || cang[p]>scR[q]) cov = 0;
				else cov = (cang[p] - scL[q]) <= (scR[q] - cang[p]) ? (cang[p] - scL[q]) : (scR[q] - cang[p]);
				if (q == 0)
					minimum = cov;
				if (cov<minimum) minimum = cov;
				if (minimum>maximum) maximum = minimum;
			}
			printf("%llu\n", maximum);
		}
	}
	return 0;
}