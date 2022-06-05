#include<stdio.h>
union un{
	int a;
	int b;
	int c;
};
union un g;
printf("%ld: \n", sizeof (union un));
printf("%ld: \n", sizeof (g));
g.a=10;
g.b=20;
g.c=30;
printf("%d: \n", g.a);
printf("%d: \n", g.b);
printf("%d: \n", g.c);
return 0;
}
	