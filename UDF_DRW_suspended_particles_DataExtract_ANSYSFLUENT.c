#include "udf.h"
#include "dpm.h"

DEFINE_DPM_SCALAR_UPDATE(suspended_particles, c, t, initialize, p)
{
  FILE *fpy1;
   real pressure, x[ND_ND],y[ND_ND];
   int ID;
   pressure=C_P(c,t);
   C_CENTROID(x,c,t);
   fpy1=fopen("calibration_inert_withoutturbine_DRW_500try_allvelprim_TL_Le0point5_CL0point01_TI1_final.txt","a");
   
       fprintf(fpy1,"%f %f %f %f %f %f %f %f %d %f\n",P_POS(p)[0], P_POS(p)[1], P_POS(p)[2],P_VEL(p)[1],p->V_prime[0],p->V_prime[1],p->V_prime[2],P_TIME(p),p->part_id,p->eddy_time);

   fclose(fpy1);
}

