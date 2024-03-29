/* xxlog2.h -- common log2[fl] functionality */
#include "xmath.h"
_STD_BEGIN

FTYPE (FFUN(log2))(FTYPE x)
	{	/* compute log2(x) */
	return (FNAME(Log)(x, -1));
	}
_STD_END

/*
 * Copyright (c) 1992-2004 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V4.02:1476 */
