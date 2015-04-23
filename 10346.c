#include <stdio.h>

main()  {
        int n, k, sum, nk;
        while((scanf("%d %d", &n, &k))==2)      {
                sum=n;
                nk=sum/k;
                sum+=nk;
                printf("%d\n", nk);
                int r, nr;
                r=n%k;
                nk=nk+r;
				while(nk>=k)    {
					r=nk%k;
					printf("%d\n", r);
                        nr=nk/k;
                        printf("%d\n", nr);
                        sum+=nr;
                        nk=nr+r;
                        printf("%d\n", nk);
                }
                printf("%d\n", sum);
        }
}
