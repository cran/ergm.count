/*  File src/wtchangestats.c in package ergm.count, part of the Statnet suite
 *  of packages for network analysis, https://statnet.org .
 *
 *  This software is distributed under the GPL-3 license.  It is free,
 *  open source, and has the attribution requirements (GPL Section 7) at
 *  https://statnet.org/attribution
 *
 *  Copyright 2008-2019 Statnet Commons
 */
#include "wtchangestats.h"

/********************  changestats:   N    ***********/


/*****************
 stat: sumlogfactorial
 Turns a Poisson-reference or geometric-reference ERGM into a Conway-Maxwell-Poisson distribution
*****************/
WtD_CHANGESTAT_FN(d_sumlogfactorial){
  EXEC_THROUGH_TOGGLES({
      CHANGE_STAT[0] += lgamma1p(NEWWT)-lgamma1p(OLDWT);
  });
}

