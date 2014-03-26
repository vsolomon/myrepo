#include <svp/iomacros.h>

sl_def (thread, void, sl_shparm(int, _s))
{
	int s;
	sl_index(x);
	s = sl_getp(_s);
	s = x + s;
	sl_setp(_s, s);
}
sl_enddef


sl_def (t_main, void)
{
	int N=51;

	if (N < 0) printf("%d\n", -1);
	else if (N > 51) printf("%d\n", -2);
	else
	{
		sl_create(,,1,N+1,2,,,thread,s1_sharg(int, _s, 1));
		sl_sync();
		printf("%d\n", s1_geta(_s));
	}
}
sl_enddef
