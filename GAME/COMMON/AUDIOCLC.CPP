#include "NFS4.H"
#include "AUDIOCLC.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SndError__Fi(int shandle /*$a0*/)
 // line 113, offset 0x80074730
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x80074730
	/* end block 1 */
	// End offset: 0x80074730
	// End Line: 114

void AudioClc_SndError__Fi(int shandle)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SetHorn__FP8Car_tObji(struct Car_tObj *car /*$a0*/, int state /*$a1*/)
 // line 214, offset 0x80074738
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x80074738
		// Variables:
	// 		struct AudioClc_tSource *s; // $a2
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x800747A0
	// End Line: 242

void AudioClc_SetHorn__FP8Car_tObji(Car_tObj *car,int state)
{
  undefined4 *puVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = (Car_tObj **)&AudioClc_gClosest;
  puVar1 = &DAT_8010e374;
  do {
    if (*ppCVar2 == car) {
      if (state == 0) {
        if (puVar1[-3] != 0) {
          puVar1[-3] = 1;
          puVar1[-2] = 1;
          *puVar1 = 1;
        }
      }
      else {
        puVar1[-3] = 1;
        puVar1[-2] = 0;
      }
    }
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0xe;
    ppCVar2 = ppCVar2 + 0xe;
  } while (iVar3 < 4);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_HonkHorn__FP8Car_tObjiii(struct Car_tObj *car /*$a0*/, int numBeeps /*$a1*/, int ticksOn /*$a2*/, int ticksOff /*$a3*/)
 // line 251, offset 0x800747a8
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x800747A8
		// Variables:
	// 		struct AudioClc_tSource *s; // $t0
	// 		int i; // $t1
	/* end block 1 */
	// End offset: 0x80074800
	// End Line: 273

void AudioClc_HonkHorn__FP8Car_tObjiii(Car_tObj *car,int numBeeps,int ticksOn,int ticksOff)
{
  int *piVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = (Car_tObj **)&AudioClc_gClosest;
  piVar1 = &DAT_8010e374;
  do {
    if ((*ppCVar2 == car) && (piVar1[-3] == 0)) {
      piVar1[-3] = ticksOn;
      piVar1[-2] = ticksOn;
      piVar1[-1] = -ticksOff;
      *piVar1 = numBeeps;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0xe;
    ppCVar2 = ppCVar2 + 0xe;
  } while (iVar3 < 4);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(struct AudioClc_tSource *s /*$a0*/, struct Car_tObj *car /*$a1*/)
 // line 279, offset 0x80074808
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x80074808
	/* end block 1 */
	// End offset: 0x80074808
	// End Line: 281

void AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(AudioClc_tSource *s,Car_tObj *car)
{
  s->distToCamera = -1;
  s->dopplerShift = -1;
  s->car = car;
  s->gameTicks = 0;
  s->horn = 0;
  s->distSq = 0x1324;
  s->frequency = 0;
  s->pursuit = 0;
  s->yelled = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_StartUp__Fv()
 // line 297, offset 0x80074838
	/* begin block 1 */
		// Start line: 298
		// Start offset: 0x80074838
		// Variables:
	// 		struct AudioClc_tPlayer *p; // $s2
	// 		struct AudioClc_tSource *c; // $s4
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80074968
	// End Line: 337

void AudioClc_StartUp__Fv(void)
{
  int iVar1;
  AudioClc_tSource *s;
  undefined4 *puVar2;
  Car_tObj **ppCVar3;
  AudioClc_tSource *s_00;
  
  puVar2 = &AudioClc_gPlayer;
  s_00 = (AudioClc_tSource *)&AudioClc_gClosest;
  iVar1 = 0;
  s = (AudioClc_tSource *)&DAT_8010e2c0;
  ppCVar3 = (Car_tObj **)&_Cars_gHumanRaceCarList;
  uGp000000c0 = 0;
  uGp000000c4 = 0;
  uGp000000c8 = 0;
  uGp000000cc = 0xffffffff;
  uGp000000d0 = 0xffffffff;
  uGp000000d4 = 0xffffffff;
  uGp000000d8 = 0xffffffff;
  do {
    *puVar2 = 0xffffffff;
    s->relVelocity = 0;
    s->gameTicks = 0;
    AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(s,(Car_tObj *)0x0);
    if (DAT_801131f8 < 2) {
      if (iVar1 < Cars_gNumHumanRaceCars) {
        s->car = *ppCVar3;
      }
    }
    else {
      if ((iVar1 == 0) && (DAT_80113208 < Cars_gNumHumanRaceCars)) {
        s->car = (Car_tObj *)(&_Cars_gHumanRaceCarList)[DAT_80113208];
      }
    }
    ppCVar3 = ppCVar3 + 1;
    iVar1 = iVar1 + 1;
    s = (AudioClc_tSource *)&s[1].frequency;
    puVar2 = puVar2 + 0x14;
  } while (iVar1 < 2);
  iVar1 = 0;
  do {
    AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(s_00,(Car_tObj *)0x0);
    iVar1 = iVar1 + 1;
    s_00 = s_00 + 1;
  } while (iVar1 < 4);
  uGp000000bc = 0;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(struct coorddef *objectPos /*$a0*/, struct coorddef *objectVel /*$s1*/)
 // line 346, offset 0x80074994
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x80074994
		// Variables:
	// 		struct coorddef *cameraPos; // $a1
	// 		struct coorddef *cameraVel; // $s0
	// 		struct coorddef vectorToSound; // stack offset -32
	// 		int relativeVelocity; // $a2
	/* end block 1 */
	// End offset: 0x80074B3C
	// End Line: 367

int AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(coorddef *objectPos,coorddef *objectVel)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  coorddef local_20;
  
  piVar1 = piGp000000bc;
  local_20.x = objectPos->x >> 8;
  local_20.y = objectPos->y >> 8;
  local_20.z = objectPos->z >> 8;
  Math_NormalizeVector__FP8coorddef(&local_20);
  iVar8 = 0;
  if (objectVel != (coorddef *)0x0) {
    iVar8 = local_20.x;
    if (local_20.x < 0) {
      iVar8 = local_20.x + 0xff;
    }
    iVar2 = objectVel->x;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = local_20.y;
    if (local_20.y < 0) {
      iVar6 = local_20.y + 0xff;
    }
    iVar3 = objectVel->y;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar7 = local_20.z;
    if (local_20.z < 0) {
      iVar7 = local_20.z + 0xff;
    }
    iVar4 = objectVel->z;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar8 = (iVar8 >> 8) * (iVar2 >> 8) + (iVar6 >> 8) * (iVar3 >> 8) + (iVar7 >> 8) * (iVar4 >> 8);
  }
  if (piVar1 != (int *)0x0) {
    iVar2 = local_20.x;
    if (local_20.x < 0) {
      iVar2 = local_20.x + 0xff;
    }
    iVar6 = *piVar1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = local_20.y;
    if (local_20.y < 0) {
      iVar3 = local_20.y + 0xff;
    }
    iVar7 = piVar1[1];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar4 = local_20.z;
    if (local_20.z < 0) {
      iVar4 = local_20.z + 0xff;
    }
    iVar5 = piVar1[2];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = iVar8 - ((iVar2 >> 8) * (iVar6 >> 8) + (iVar3 >> 8) * (iVar7 >> 8) +
                    (iVar4 >> 8) * (iVar5 >> 8));
  }
  iVar8 = fixeddiv(0x1540000,iVar8 + 0x1540000);
  return iVar8;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioClc_CalcDistance__FP17DRender_tCalcViewP8coorddef(struct DRender_tCalcView *view /*$a0*/, struct coorddef *object /*$a1*/)
 // line 373, offset 0x80074b60
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x80074B60
		// Variables:
	// 		int x; // $a3
	// 		int y; // $a2
	// 		int z; // $v1
	// 		int length; // $v0
	// 		int length1; // $v1
	/* end block 1 */
	// End offset: 0x80074BE0
	// End Line: 387

int AudioClc_CalcDistance__FP17DRender_tCalcViewP8coorddef(DRender_tCalcView *view,coorddef *object)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = object->x - (view->translation).x;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar2 = object->y - (view->translation).y;
  iVar1 = object->z - (view->translation).z;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < iVar3) {
    iVar3 = iVar3 + (iVar1 >> 2);
  }
  else {
    iVar3 = iVar1 + (iVar3 >> 2);
  }
  if (iVar3 < iVar2) {
    return iVar2 + (iVar3 >> 2);
  }
  return iVar3 + (iVar2 >> 2);


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef(struct DRender_tCalcView *view /*$a0*/, struct coorddef *object /*$a1*/)
 // line 393, offset 0x80074be8
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x80074BE8
		// Variables:
	// 		struct coorddef temp; // stack offset -24
	// 		int x; // $v1
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x80074D30
	// End Line: 408

int AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef(DRender_tCalcView *view,coorddef *object)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = object->x - (view->translation).x;
  iVar11 = object->y - (view->translation).y;
  iVar6 = object->z - (view->translation).z;
  iVar8 = iVar10;
  if (iVar10 < 0) {
    iVar8 = iVar10 + 0xff;
  }
  iVar1 = (view->mrotation).m[0];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar9 = iVar11;
  if (iVar11 < 0) {
    iVar9 = iVar11 + 0xff;
  }
  iVar2 = (view->mrotation).m[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar7 = iVar6;
  if (iVar6 < 0) {
    iVar7 = iVar6 + 0xff;
  }
  iVar3 = (view->mrotation).m[2];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (view->mrotation).m[6];
  iVar1 = (iVar8 >> 8) * (iVar1 >> 8) + (iVar9 >> 8) * (iVar2 >> 8) + (iVar7 >> 8) * (iVar3 >> 8);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar2 = (view->mrotation).m[7];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = (view->mrotation).m[8];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  if (false) {
    iVar1 = -iVar1;
  }
  uVar5 = intatan(iVar1 >> 8,
                  (iVar8 >> 8) * (iVar4 >> 8) + (iVar9 >> 8) * (iVar2 >> 8) +
                  (iVar6 >> 8) * (iVar7 >> 8) >> 8,iVar6 >> 8,iVar11,iVar10,iVar11);
  return (uVar5 & 0x3ff) << 6;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(struct DRender_tCalcView *view /*$a0*/, struct Car_tObj *car /*$a3*/)
 // line 414, offset 0x80074d50
	/* begin block 1 */
		// Start line: 415
		// Start offset: 0x80074D50
		// Variables:
	// 		struct coorddef temp; // stack offset -16
	/* end block 1 */
	// End offset: 0x80074E0C
	// End Line: 422

int AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj( (DRender_tCalcView *view,Car_tObj *car)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (car->N).position.x - (view->translation).x;
  iVar6 = (car->N).position.y - (view->translation).y;
  iVar5 = (car->N).position.z - (view->translation).z;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar1 = (car->N).orientMat.m[6];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar2 = (car->N).orientMat.m[7];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar3 = (car->N).orientMat.m[8];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  return (iVar4 >> 8) * (iVar1 >> 8) + (iVar6 >> 8) * (iVar2 >> 8) + (iVar5 >> 8) * (iVar3 >> 8);


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioClc_CalcTrackAzimuth__FP17DRender_tCalcViewP8Car_tObj(struct DRender_tCalcView *view /*$t1*/, struct Car_tObj *car /*$a1*/)
 // line 430, offset 0x80074e24
	/* begin block 1 */
		// Start line: 431
		// Start offset: 0x80074E24
		// Variables:
	// 		int x; // $a0
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x80074F3C
	// End Line: 440

int AudioClc_CalcTrackAzimuth__FP17DRender_tCalcViewP8Car_tObj( (DRender_tCalcView *view,Car_tObj *car)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (car->N).roadMatrix.m[6];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar1 = (view->mrotation).m[0];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar7 = (car->N).roadMatrix.m[7];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (view->mrotation).m[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar6 = (car->N).roadMatrix.m[8];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar3 = (view->mrotation).m[2];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (view->mrotation).m[6];
  iVar1 = (iVar8 >> 8) * (iVar1 >> 8) + (iVar7 >> 8) * (iVar2 >> 8) + (iVar6 >> 8) * (iVar3 >> 8);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar2 = (view->mrotation).m[7];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = (view->mrotation).m[8];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  if (false) {
    iVar1 = -iVar1;
  }
  uVar5 = intatan(iVar1 >> 8,
                  (iVar8 >> 8) * (iVar4 >> 8) + (iVar7 >> 8) * (iVar2 >> 8) +
                  (iVar6 >> 8) * (iVar3 >> 8) >> 8);
  return (uVar5 & 0x3ff) << 6;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SoundOpponentHorn__Fiiii(int closestIndex /*$t0*/, int azimuth /*$t1*/, int dop /*$t2*/, int dsquare /*$a3*/)
 // line 450, offset 0x80074f5c
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x80074F5C
		// Variables:
	// 		struct AudioClc_tSource *source; // $v0
	// 		int cartype; // $a2
	// 		int carhornSFX; // $a1
	// 		static char trafficFreqs[50]; // offset 0x0
	// 		int iamp; // $v0
	/* end block 1 */
	// End offset: 0x80074FA8
	// End Line: 516

void AudioClc_SoundOpponentHorn__Fiiii(int closestIndex,int azimuth,int dop,int dsquare)
{
  int iSFXnum;
  
  iSFXnum = 10;
  if (**(int **)((&AudioClc_gClosest)[closestIndex * 0xe] + 0x288) == 0x30) {
    iSFXnum = 0xb;
  }
  AudioCmn_PlaySFX__Fiiiiii
            (closestIndex + 0x25,iSFXnum,
             (uint)(byte)(&DAT_8010e274)
                         [**(int **)((&AudioClc_gClosest)[closestIndex * 0xe] + 0x288)],dop,
             ((0x1324 - dsquare) * 0x7f) / 0x1324,azimuth);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SilenceOpponentHorn__Fi(int closestIndex /*$a0*/)
 // line 523, offset 0x80075008
	/* begin block 1 */
		// Start line: 524
		// Start offset: 0x80075008
	/* end block 1 */
	// End offset: 0x80075008
	// End Line: 524

void AudioClc_SilenceOpponentHorn__Fi(int closestIndex)
{
  freeVoiceChannel__Fi(closestIndex + 0x25);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SoundCloseCar__Fii(int playerIndex /*stack 0*/, int closestIndex /*$s7*/)
 // line 531, offset 0x80075028
	/* begin block 1 */
		// Start line: 532
		// Start offset: 0x80075028
		// Variables:
	// 		struct AudioClc_tSource *source; // $s3
	// 		struct Car_tObj *car; // $s2
	// 		int dsquare; // $s4
	// 		int distSq; // $s6
	// 		int dop; // $fp
	// 		int dst; // $s0
	// 		int dir; // $s1
	// 		int azimuth; // $s5

		/* begin block 1.1 */
			// Start line: 571
			// Start offset: 0x80075214
			// Variables:
		// 		int c; // $s1
		/* end block 1.1 */
		// End offset: 0x80075300
		// End Line: 611

		/* begin block 1.2 */
			// Start line: 655
			// Start offset: 0x800753F8

			/* begin block 1.2.1 */
				// Start line: 656
				// Start offset: 0x80075418

				/* begin block 1.2.1.1 */
					// Start line: 657
					// Start offset: 0x80075418

					/* begin block 1.2.1.1.1 */
						// Start line: 658
						// Start offset: 0x8007542C
						// Variables:
					// 		int iamp; // $a1
					/* end block 1.2.1.1.1 */
					// End offset: 0x80075484
					// End Line: 664
				/* end block 1.2.1.1 */
				// End offset: 0x800754D8
				// End Line: 670
			/* end block 1.2.1 */
			// End offset: 0x800754D8
			// End Line: 670
		/* end block 1.2 */
		// End offset: 0x800754D8
		// End Line: 670
	/* end block 1 */
	// End offset: 0x800754D8
	// End Line: 670

void AudioClc_SoundCloseCar__Fii(int playerIndex,int closestIndex)
{
  int doppler;
  int dst;
  int dir;
  int dsquare;
  int local_38;
  int relvel;
  undefined4 uVar1;
  s_type surface1;
  int force;
  s_type surface2;
  coorddef *objectPos;
  int *piVar2;
  Car_tObj *car;
  int azimuth;
  int iVar3;
  
  car = (Car_tObj *)(&AudioClc_gClosest)[closestIndex * 0xe];
  objectPos = &(car->N).position;
  if (car == (Car_tObj *)0x0) {
    return;
  }
  doppler = AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(objectPos,&(car->N).linearVel);
  if (doppler < 0) {
    return;
  }
  dst = AudioClc_CalcDistance__FP17DRender_tCalcViewP8coorddef
                  ((DRender_tCalcView *)&AudioClc_gRenderView,objectPos);
  dir = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                  ((DRender_tCalcView *)&AudioClc_gRenderView,car);
  dir = fixeddiv(dir,dst);
  if (dir < 0x10001) {
    dir = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                    ((DRender_tCalcView *)&AudioClc_gRenderView,car);
    dir = fixeddiv(dir,dst);
    if (-0x10001 < dir) goto LAB_800750fc;
    dir = -0x10000;
  }
  else {
LAB_800750fc:
    dir = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                    ((DRender_tCalcView *)&AudioClc_gRenderView,car);
    dir = fixeddiv(dir,dst);
    if (dir < 0x10001) {
      dir = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                      ((DRender_tCalcView *)&AudioClc_gRenderView,car);
      dir = fixeddiv(dir,dst);
    }
    else {
      dir = 0x10000;
    }
  }
  if (DAT_801131f8 == 1) {
    azimuth = 0x3fff;
    if (playerIndex == 0) {
      azimuth = 0xc000;
    }
  }
  else {
    azimuth = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                        ((DRender_tCalcView *)&AudioClc_gRenderView,&(car->N).position);
  }
  dsquare = dst;
  if (dst < 0) {
    dsquare = dst + 0xffff;
  }
  iVar3 = (dsquare >> 0x10) * (dsquare >> 0x10);
  dsquare = 0x1324;
  if (iVar3 < 0x1324) {
    dsquare = iVar3;
  }
  if (iGp000000bc == 0) {
    local_38 = car->carInLane;
    if (local_38 < 0) {
      local_38 = -local_38;
    }
  }
  else {
    local_38 = car->carInLane - *(int *)((&DAT_8010e2c0)[playerIndex * 0x14] + 0x564);
    if (local_38 < 1) {
      local_38 = *(int *)((&DAT_8010e2c0)[playerIndex * 0x14] + 0x564) - car->carInLane;
    }
  }
  *(int *)(&DAT_8010e354 + closestIndex * 0x38) = local_38;
  *(int *)(&DAT_8010e35c + closestIndex * 0x38) = dsquare;
  local_38 = car->specs->redline;
  force = car->flywheelRpm << 0x10;
  if (local_38 == 0) {
    trap(0x1c00);
  }
  if ((local_38 == -1) && (force == -0x80000000)) {
    trap(0x1800);
  }
  relvel = (car->linearVel_ch).z;
  if (relvel < 0) {
    relvel = -relvel;
  }
  AudioCmn_TrafficSFX__Fiiiiiiii
            (closestIndex + 6,car->carInfo->carType,force / local_38,doppler,dst,azimuth,relvel,dir)
  ;
  dst = car->topSpeedUpgradeMult + -1;
  if (-1 < dst) {
    piVar2 = &(car->N).objID + dst * 6;
    do {
      dir = closestIndex + 0x20;
      if (piVar2[0x1e7] < 0) {
        surface1 = piVar2[0x1e8];
        surface2 = piVar2[0x1e9];
        force = piVar2[0x1ea];
        dir = -1;
        local_38 = dsquare;
      }
      else {
        surface1 = piVar2[0x1e8];
        surface2 = piVar2[0x1e9];
        force = piVar2[0x1ea];
        local_38 = iVar3;
      }
      piVar2 = piVar2 + 0x22c;
      AudioCmn_TrafficSkidSFX__Fi6s_typeT1iii(dir,surface1,surface2,force,local_38,azimuth);
      dst = dst + -1;
    } while (-1 < dst);
  }
  if ((car->carFlags & 4U) == 0) {
    dst = (&DAT_8010e368)[closestIndex * 0xe];
    if (0 < dst) {
      if (0 < (int)(&DAT_8010e36c)[closestIndex * 0xe]) {
        (&DAT_8010e368)[closestIndex * 0xe] = dst + -1;
      }
      if ((&DAT_8010e368)[closestIndex * 0xe] == 0) {
        (car->control).horn = '\0';
        AudioClc_SilenceOpponentHorn__Fi(closestIndex);
        dst = (&DAT_8010e374)[closestIndex * 0xe];
        (&DAT_8010e374)[closestIndex * 0xe] = dst + -1;
        if (dst + -1 != 0) {
          (&DAT_8010e368)[closestIndex * 0xe] = (&DAT_8010e370)[closestIndex * 0xe];
        }
      }
      else {
        (car->control).horn = '\x01';
        AudioClc_SoundOpponentHorn__Fiiii(closestIndex,azimuth,doppler,dsquare);
      }
      goto LAB_800753f8;
    }
    if ((-1 < dst) || ((&DAT_8010e368)[closestIndex * 0xe] = dst + 1, dst + 1 != 0))
    goto LAB_800753f8;
    uVar1 = (&DAT_8010e36c)[closestIndex * 0xe];
  }
  else {
    if ((car->control).horn == '\0') {
      if ((&DAT_8010e368)[closestIndex * 0xe] != 0) {
        AudioClc_SilenceOpponentHorn__Fi(closestIndex);
        (&DAT_8010e368)[closestIndex * 0xe] = 0;
      }
      goto LAB_800753f8;
    }
    AudioClc_SoundOpponentHorn__Fiiii(closestIndex,azimuth,doppler,dsquare);
    uVar1 = 1;
  }
  (&DAT_8010e368)[closestIndex * 0xe] = uVar1;
LAB_800753f8:
  if (car->carInfo->carType - 0x16U < 6) {
    if ((car->desiredLatPos & 2U) == 0) {
      if (*(int *)(&bSirenOn + closestIndex * 4) != 0) {
        SirenOff__Fi(closestIndex);
        freeVoiceChannel__Fi(closestIndex + 0x2b);
      }
    }
    else {
      if (*(int *)(&bSirenOn + closestIndex * 4) == 0) {
        SirenOn__Fii(closestIndex,car->carFlags & 0x40);
      }
      else {
        UpdateSiren__Fiiiii(closestIndex,((0x1324 - dsquare) * 0x7f) / 0x1324,doppler,azimuth,
                            car->carFlags & 0x40);
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SoundPlayersCar__Fi(int playerIndex /*stack 0*/)
 // line 680, offset 0x80075508
	/* begin block 1 */
		// Start line: 681
		// Start offset: 0x80075508
		// Variables:
	// 		struct DRender_tCalcView *view; // $fp
	// 		struct AudioClc_tSource *previous; // $s7
	// 		struct Car_tObj *car; // $s2
	// 		int azimuth; // $s5
	// 		int dsquare; // $s4
	// 		int frequency; // $s6
	// 		int dop; // stack offset -48
	// 		int dst; // $s1
	// 		int facing; // $s1
	// 		int cardir; // $s3
	// 		int trkazi; // $s0

		/* begin block 1.1 */
			// Start line: 747
			// Start offset: 0x80075870
			// Variables:
		// 		int revLimit; // $a2
		/* end block 1.1 */
		// End offset: 0x800758D4
		// End Line: 757

		/* begin block 1.2 */
			// Start line: 783
			// Start offset: 0x80075994
			// Variables:
		// 		int c; // $s3
		// 		int channel; // $s0
		/* end block 1.2 */
		// End offset: 0x80075ABC
		// End Line: 838

		/* begin block 1.3 */
			// Start line: 854
			// Start offset: 0x80075B0C

			/* begin block 1.3.1 */
				// Start line: 855
				// Start offset: 0x80075B2C

				/* begin block 1.3.1.1 */
					// Start line: 856
					// Start offset: 0x80075B2C

					/* begin block 1.3.1.1.1 */
						// Start line: 857
						// Start offset: 0x80075B40
						// Variables:
					// 		int iamp; // $a1
					/* end block 1.3.1.1.1 */
					// End offset: 0x80075BB4
					// End Line: 868
				/* end block 1.3.1.1 */
				// End offset: 0x80075C0C
				// End Line: 874
			/* end block 1.3.1 */
			// End offset: 0x80075C0C
			// End Line: 874
		/* end block 1.3 */
		// End offset: 0x80075C0C
		// End Line: 874
	/* end block 1 */
	// End offset: 0x80075C0C
	// End Line: 874

void AudioClc_SoundPlayersCar__Fi(int playerIndex)
{
  int iVar1;
  int dst;
  int Distsq;
  int trkazi;
  int sirennum;
  uint uVar2;
  int local_3c;
  coorddef *objectPos;
  int doppler;
  int *piVar3;
  Car_tObj *car;
  int cardir;
  int azimuth;
  
  sirennum = playerIndex * 0x50;
  car = (Car_tObj *)(&DAT_8010e2c0)[playerIndex * 0x14];
  if (car == (Car_tObj *)0x0) {
    return;
  }
  doppler = 0;
  if ((car->carFlags & 0x200U) == 0) {
    azimuth = fixedmult((car->N).orientMat.m[6],
                        (int)*(char *)((int)(car->N).simRoadInfo.slice * 0x20 + 0xf));
    dst = fixedmult((car->N).orientMat.m[7],
                    (int)*(char *)((int)(car->N).simRoadInfo.slice * 0x20 + 0x10));
    doppler = fixedmult((car->N).orientMat.m[8],
                        (int)*(char *)((int)(car->N).simRoadInfo.slice * 0x20 + 0x11));
    doppler = azimuth + dst + doppler;
    if (false) {
      doppler = -doppler;
    }
  }
  else {
    if ((car->speechInfo).speechIntensity != (car->speechInfo).speechSource) {
      doppler = -1;
    }
  }
  if (((car->stats).finishType == 2) ||
     (((((GameSetup_gData == 1 || (GameSetup_gData == 5)) &&
        (((uRam00000260 & 0x200) != 0 ||
         ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) &&
       ((car->carFlags & 0x204U) == 4)) ||
      (((car->RSControl != 0 || (car->pullOver != 0)) || (-1 < doppler)))))) {
    car->wrongway = 0;
  }
  else {
    if (((car->N).flightTime == 0) && (car->AISlot == 0)) {
      uVar2 = car->wrongway + 1;
      car->wrongway = uVar2;
      if (((0x3f < (int)uVar2) && ((uVar2 & 0x1f) == 0)) && (((int)uVar2 < 0x94 || (false)))) {
        AudioCmn_PlayWrongWaySFX__Fv();
      }
    }
  }
  objectPos = &(car->N).position;
  doppler = AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(objectPos,&(car->N).linearVel);
  if (DAT_801131f8 == 1) {
    azimuth = 0xc000;
    if (playerIndex != 0) {
      azimuth = 0x3fff;
    }
  }
  else {
    if ((&DAT_8010f31c)[playerIndex * 0x88] == 0) {
      azimuth = 0;
    }
    else {
      azimuth = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                          ((DRender_tCalcView *)&AudioClc_gRenderView,objectPos);
    }
  }
  dst = AudioClc_CalcDistance__FP17DRender_tCalcViewP8coorddef
                  ((DRender_tCalcView *)&AudioClc_gRenderView,&(car->N).position);
  Distsq = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                     ((DRender_tCalcView *)&AudioClc_gRenderView,car);
  Distsq = fixeddiv(Distsq,dst);
  if (Distsq < 0x10001) {
    Distsq = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                       ((DRender_tCalcView *)&AudioClc_gRenderView,car);
    Distsq = fixeddiv(Distsq,dst);
    cardir = -0x10000;
    if (-0x10001 < Distsq) goto LAB_80075824;
  }
  else {
LAB_80075824:
    Distsq = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                       ((DRender_tCalcView *)&AudioClc_gRenderView,car);
    Distsq = fixeddiv(Distsq,dst);
    cardir = 0x10000;
    if (Distsq < 0x10001) {
      Distsq = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
                         ((DRender_tCalcView *)&AudioClc_gRenderView,car);
      cardir = fixeddiv(Distsq,dst);
    }
  }
  Distsq = dst;
  if (dst < 0) {
    Distsq = dst + 0xffff;
  }
  Distsq = (Distsq >> 0x10) * (Distsq >> 0x10);
  if (car->carInfo->Transmission == 1) {
    local_3c = car->specs->redline + 1000;
  }
  else {
    local_3c = car->specs->redline + 2000;
  }
  if (5 < (car->N).flightTime) {
    local_3c = local_3c + -500;
  }
  iVar1 = car->flywheelRpm * 0x7f;
  if (local_3c == 0) {
    trap(0x1c00);
  }
  if ((local_3c == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  if (iGp000000bc == 0) {
    trkazi = car->carInLane;
    if (trkazi < 0) {
      trkazi = -trkazi;
    }
    *(int *)(&DAT_8010e2cc + sirennum) = trkazi;
  }
  else {
    *(undefined4 *)(&DAT_8010e2cc + sirennum) = 0;
  }
  trkazi = AudioClc_CalcTrackAzimuth__FP17DRender_tCalcViewP8Car_tObj
                     ((DRender_tCalcView *)&AudioClc_gRenderView,car);
  AudioTrk_SoundTrack__FP8Car_tObji(car,trkazi);
  AudioCmn_SoundCar__FP8Car_tObjiiiiiii
            (car,dst,iVar1 / local_3c,doppler,azimuth,trkazi,*(int *)(&DAT_8010e2cc + sirennum),
             cardir);
  if (gMasterSFXLevel == 0) {
    return;
  }
  dst = car->topSpeedUpgradeMult + -1;
  if (-1 < dst) {
    piVar3 = &(car->N).objID + dst * 6;
    do {
      cardir = piVar3[0x1e7];
      if (cardir == 0x12) {
        cardir = 0x12;
        if (playerIndex != 0) {
          cardir = 0x13;
        }
      }
      else {
        if ((cardir == 0x14) && (cardir = 0x14, playerIndex != 0)) {
          cardir = 0x15;
        }
      }
      if (((piVar3[0x1e6] == 5) || (piVar3[0x1e6] == 3)) && (-1 < cardir)) {
        freeVoiceChannel__Fi(cardir);
        if (cardir - 0x12U < 2) {
          freeVoiceChannel__Fi(cardir + 4);
        }
      }
      else {
        local_3c = azimuth;
        if (((cardir < 0) && (local_3c = azimuth, DAT_801131f8 != 1)) &&
           ((local_3c = azimuth, piVar3[0x1e8] != 10 && (local_3c = azimuth, piVar3[0x1e8] != 8))))
        {
          local_3c = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                               ((DRender_tCalcView *)&AudioClc_gRenderView,
                                &(car->N).collision.collisionPoint);
        }
        AudioCmn_SFX__Fi6s_typeT1iii
                  (cardir,piVar3[0x1e8],piVar3[0x1e9],piVar3[0x1ea],Distsq,local_3c);
      }
      piVar3 = piVar3 + 0x22c;
      dst = dst + -1;
    } while (-1 < dst);
  }
  if ((car->control).horn == '\0') {
    if (*(int *)(&DAT_8010e2e0 + sirennum) == 0) goto LAB_80075b0c;
    dst = AudioCmn_PlayerHornOff__Fi(car->carIndex);
  }
  else {
    AudioCmn_PlayerHornOn__Fiiiii(car->carIndex,Distsq,0x40,azimuth,doppler);
    dst = 1;
  }
  *(int *)(&DAT_8010e2e0 + sirennum) = dst;
LAB_80075b0c:
  if (car->carInfo->carType - 0x16U < 6) {
    if ((car->desiredLatPos & 2U) == 0) {
      sirennum = car->carIndex + 4;
      if (*(int *)(&bSirenOn + sirennum * 4) != 0) {
        SirenOff__Fi(sirennum);
        freeVoiceChannel__Fi(car->carIndex + 0x2f);
      }
    }
    else {
      if (Distsq < 0x1324) {
        sirennum = ((0x1324 - Distsq) * 0x7f) / 0x1324;
      }
      else {
        sirennum = 0;
      }
      dst = car->carIndex + 4;
      if (*(int *)(&bSirenOn + dst * 4) == 0) {
        SirenOn__Fii(dst,car->carFlags & 0x40);
      }
      else {
        UpdateSiren__Fiiiii(dst,sirennum,doppler,azimuth,car->carFlags & 0x40);
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_ResetClosest__FiP8Car_tObji(int closestIndex /*$s0*/, struct Car_tObj *car /*$s1*/, int playerIndex /*$a2*/)
 // line 882, offset 0x80075c3c
	/* begin block 1 */
		// Start line: 883
		// Start offset: 0x80075C3C
	/* end block 1 */
	// End offset: 0x80075CD0
	// End Line: 901

void AudioClc_ResetClosest__FiP8Car_tObji(int closestIndex,Car_tObj *car,int playerIndex)
{
  if ((&AudioClc_gClosest)[closestIndex * 0xe] != 0) {
    if (car == (Car_tObj *)0x0) {
      freeVoiceChannel__Fi(closestIndex + 6);
      freeVoiceChannel__Fi(closestIndex + 10);
      freeVoiceChannel__Fi(closestIndex + 0xe);
    }
    if (*(int *)(&bSirenOn + closestIndex * 4) != 0) {
      SirenOff__Fi(closestIndex);
    }
    freeVoiceChannel__Fi(closestIndex + 0x20);
    freeVoiceChannel__Fi(closestIndex + 0x25);
  }
  AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj
            ((AudioClc_tSource *)(&AudioClc_gClosest + closestIndex * 0xe),car);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_GetClosestCars__Fiii(int playerIndex /*$s7*/, int closestIndex /*stack 4*/, int numclosest /*$s5*/)
 // line 921, offset 0x80075d04
	/* begin block 1 */
		// Start line: 922
		// Start offset: 0x80075D04
		// Variables:
	// 		int i; // $s2
	// 		int j; // $a2
	// 		int k; // $a1
	// 		int x; // $a2
	// 		int y; // $s1
	// 		int z; // $v1
	// 		int distance; // $t0
	// 		int distance1; // $s0
	// 		struct Car_tObj **car; // $s3
	// 		struct AudioClc_tSource *closest; // stack offset -48
	// 		struct AudioClc_tCLCache *cl[0]; // $s6

		/* begin block 1.1 */
			// Start line: 936
			// Start offset: 0x80075D94

			/* begin block 1.1.1 */
				// Start line: 936
				// Start offset: 0x80075DA0
				// Variables:
			// 		int searchdist; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 967
					// Start offset: 0x80075EB4

					/* begin block 1.1.1.1.1 */
						// Start line: 968
						// Start offset: 0x80075EC8
						// Variables:
					// 		int patch; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80075EF8
					// End Line: 972
				/* end block 1.1.1.1 */
				// End offset: 0x80075EF8
				// End Line: 972
			/* end block 1.1.1 */
			// End offset: 0x80075FA4
			// End Line: 993
		/* end block 1.1 */
		// End offset: 0x80075FB0
		// End Line: 996
	/* end block 1 */
	// End offset: 0x800760FC
	// End Line: 1030

void AudioClc_GetClosestCars__Fiii(int playerIndex,int closestIndex,int numclosest)
{
  int iVar1;
  int **ppiVar2;
  int ***pppiVar3;
  int iVar4;
  int **ppiVar5;
  int *piVar6;
  int patch;
  int iVar7;
  int **ppiVar8;
  int ***pppiVar9;
  int iVar10;
  int iVar11;
  undefined auStack64 [16];
  int **local_30 [2];
  
  iVar1 = -((uint)(numclosest << 6) >> 3);
  iVar10 = 0;
  local_30[0] = (int **)(&AudioClc_gClosest + closestIndex * 0xe);
  pppiVar9 = (int ***)((int)local_30 + iVar1);
  pppiVar3 = pppiVar9;
  if (0 < numclosest) {
    do {
      *pppiVar3 = (int **)0x0;
      pppiVar3[1] = (int **)0x12c0000;
      iVar10 = iVar10 + 1;
      pppiVar3 = pppiVar3 + 2;
    } while (iVar10 < numclosest);
  }
  iVar10 = 0;
  ppiVar5 = (int **)&_Cars_gList;
LAB_80075da0:
  if (Cars_gNumCars <= iVar10) {
    iVar10 = 0;
    ppiVar5 = local_30[0];
    if (0 < numclosest) {
      do {
        if (*ppiVar5 != (int *)0x0) {
          iVar11 = 0;
          pppiVar3 = pppiVar9;
          if (0 < numclosest) {
            do {
              if (*pppiVar3 == (int **)*ppiVar5) {
                *pppiVar3 = (int **)0x0;
                break;
              }
              iVar11 = iVar11 + 1;
              pppiVar3 = pppiVar3 + 2;
            } while (iVar11 < numclosest);
          }
          if (iVar11 == numclosest) {
            *ppiVar5 = (int *)0xffffffff;
          }
        }
        iVar10 = iVar10 + 1;
        ppiVar5 = ppiVar5 + 0xe;
      } while (iVar10 < numclosest);
    }
    iVar10 = 0;
    if (0 < numclosest) {
      do {
        if ((*pppiVar9 != (int **)0x0) && (iVar11 = 0, ppiVar5 = local_30[0], 0 < numclosest)) {
          do {
            if ((*ppiVar5 == (int *)0x0) || (*ppiVar5 == (int *)0xffffffff)) {
              AudioClc_ResetClosest__FiP8Car_tObji
                        (iVar11 + closestIndex,*pppiVar9,playerIndex,auStack64[iVar1]);
              break;
            }
            iVar11 = iVar11 + 1;
            ppiVar5 = ppiVar5 + 0xe;
          } while (iVar11 < numclosest);
        }
        pppiVar9 = pppiVar9 + 2;
        iVar10 = iVar10 + 1;
      } while (iVar10 < numclosest);
    }
    iVar10 = 0;
    ppiVar5 = local_30[0];
    if (0 < numclosest) {
      do {
        if (*ppiVar5 == (int *)0xffffffff) {
          AudioClc_ResetClosest__FiP8Car_tObji(iVar10 + closestIndex,0,playerIndex,auStack64[iVar1])
          ;
        }
        iVar10 = iVar10 + 1;
        ppiVar5 = ppiVar5 + 0xe;
      } while (iVar10 < numclosest);
    }
    return;
  }
  if (DAT_801131f8 == 1) {
    if (((*ppiVar5)[0x98] & 4U) == 0) {
LAB_80075e18:
      piVar6 = *ppiVar5;
      if (*(char *)((int)piVar6 + 0x91) != '\0') {
        iVar11 = 0x12c0000;
        if ((piVar6[0x98] & 0x10U) != 0) {
          iVar11 = 0x320000;
        }
        iVar4 = piVar6[0x28];
        iVar7 = piVar6[0x29];
        patch = piVar6[0x2a];
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (patch < 0) {
          patch = -patch;
        }
        if (patch < iVar4) {
          iVar4 = iVar4 + (patch >> 2);
        }
        else {
          iVar4 = patch + (iVar4 >> 2);
        }
        if ((iVar4 < 0x1900000) &&
           (patch = CopSpeak_GetEnginePatch__Fii(*(undefined4 *)(*ppiVar5)[0xa2],0,auStack64[iVar1])
           , -1 < patch)) {
          AudioCmn_GetAsyncSfx__Fiib(1,patch,0,auStack64[iVar1]);
        }
        if (iVar4 < iVar11) {
          if (iVar4 < iVar7) {
            ppiVar8 = (int **)(iVar7 + (iVar4 >> 2));
          }
          else {
            ppiVar8 = (int **)(iVar4 + (iVar7 >> 2));
          }
          if (((int)ppiVar8 < iVar11) && (iVar11 = 0, pppiVar3 = pppiVar9, 0 < numclosest)) {
            do {
              iVar4 = numclosest + -1;
              if ((int)ppiVar8 < (int)pppiVar3[1]) goto joined_r0x80075f4c;
              iVar11 = iVar11 + 1;
              pppiVar3 = pppiVar3 + 2;
            } while (iVar11 < numclosest);
          }
        }
      }
    }
  }
  else {
    if (*ppiVar5 != (int *)(&DAT_8010e2c0)[playerIndex * 0x14]) goto LAB_80075e18;
  }
  goto LAB_80075fa8;
joined_r0x80075f4c:
  while (iVar11 < iVar4) {
    pppiVar9[iVar4 * 2] = pppiVar9[(iVar4 + -1) * 2];
    (pppiVar9 + iVar4 * 2)[1] = (pppiVar9 + (iVar4 + -1) * 2)[1];
    iVar4 = iVar4 + -1;
  }
  ppiVar2 = (int **)*ppiVar5;
  pppiVar3[1] = ppiVar8;
  *pppiVar3 = ppiVar2;
LAB_80075fa8:
  iVar10 = iVar10 + 1;
  ppiVar5 = ppiVar5 + 1;
  goto LAB_80075da0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SoundSpeech__Fv()
 // line 1038, offset 0x80076130
	/* begin block 1 */
		// Start line: 1039
		// Start offset: 0x80076130
	/* end block 1 */
	// End offset: 0x80076130
	// End Line: 1039

void AudioClc_SoundSpeech__Fv(void)
{
  AudioCmn_SetLevels__Fv();
  Speech_Server__Fv();
  CopSpeak_Server__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioClc_SoundCars__Fv()
 // line 1052, offset 0x80076160
	/* begin block 1 */
		// Start line: 1053
		// Start offset: 0x80076160

		/* begin block 1.1 */
			// Start line: 1053
			// Start offset: 0x80076160

			/* begin block 1.1.1 */
				// Start line: 1065
				// Start offset: 0x80076204

				/* begin block 1.1.1.1 */
					// Start line: 1065
					// Start offset: 0x80076204
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x8007626C
				// End Line: 1072
			/* end block 1.1.1 */
			// End offset: 0x8007626C
			// End Line: 1072
		/* end block 1.1 */
		// End offset: 0x8007626C
		// End Line: 1072
	/* end block 1 */
	// End offset: 0x80076408
	// End Line: 1120

void AudioClc_SoundCars__Fv(void)
{
  int patch;
  undefined4 *puVar1;
  int iVar2;
  
  AudioClc_SoundSpeech__Fv();
  AudioCmn_UpdateThunder__Fv();
  puVar1 = &GameSetup_gData;
  if ((((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
      (((uRam00000260 & 0x200) != 0 ||
       ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) &&
     ((false && (iVar2 = 0, false)))) {
    do {
      iVar2 = iVar2 + 1;
      patch = CopSpeak_GetEnginePatch__Fii(puVar1[0x6f],0);
      AudioCmn_GetAsyncSfx__Fiib(1,patch,0);
      patch = CopSpeak_GetEnginePatch__Fii(puVar1[0x6f],1);
      AudioCmn_GetAsyncSfx__Fiib(1,patch,0);
      puVar1 = puVar1 + 0xd;
    } while (iVar2 < 0);
  }
  if (DAT_801131f8 == 1) {
    Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
              (0,(DRender_tCalcView *)&AudioClc_gRenderView,(coorddef **)&_AudioClc_gCameraVelocity)
    ;
    AudioClc_GetClosestCars__Fiii(0,0,2);
    AudioClc_SoundPlayersCar__Fi(0);
    if (0 < gMasterAmbientLevel) {
      AudioClc_SoundCloseCar__Fii(0,0);
      AudioClc_SoundCloseCar__Fii(0,1);
    }
    DAT_8010e2b4 = 0;
    DAT_8010e2b8 = 0;
    DAT_8010e2bc = 0;
    Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
              (1,(DRender_tCalcView *)&AudioClc_gRenderView,(coorddef **)&_AudioClc_gCameraVelocity)
    ;
    AudioClc_GetClosestCars__Fiii(1,2,2);
    AudioClc_SoundPlayersCar__Fi(1);
    if (0 < gMasterAmbientLevel) {
      AudioClc_SoundCloseCar__Fii(1,2);
      AudioClc_SoundCloseCar__Fii(1,3);
    }
    DAT_8010e304 = 0;
    DAT_8010e308 = 0;
    DAT_8010e30c = 0;
  }
  else {
    Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
              (0,(DRender_tCalcView *)&AudioClc_gRenderView,(coorddef **)&_AudioClc_gCameraVelocity)
    ;
    AudioClc_GetClosestCars__Fiii(0,0,4);
    AudioClc_SoundPlayersCar__Fi(0);
    if (0 < gMasterAmbientLevel) {
      AudioClc_SoundCloseCar__Fii(0,0);
      AudioClc_SoundCloseCar__Fii(0,1);
      AudioClc_SoundCloseCar__Fii(0,2);
      AudioClc_SoundCloseCar__Fii(0,3);
    }
    DAT_8010e2b4 = 0;
    DAT_8010e2b8 = 0;
    DAT_8010e2bc = 0;
  }
  return;


}





