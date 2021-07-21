#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 226
	/* end block 2 */
	// End Line: 227

	/* begin block 3 */
		// Start line: 226
	/* end block 3 */
	// End Line: 227

	/* begin block 4 */
		// Start line: 269
	/* end block 4 */
	// End Line: 270

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

	/* begin block 2 */
		// Start line: 421
	/* end block 2 */
	// End Line: 422

	/* begin block 3 */
		// Start line: 377
	/* end block 3 */
	// End Line: 378

	/* begin block 4 */
		// Start line: 377
	/* end block 4 */
	// End Line: 378

	/* begin block 5 */
		// Start line: 385
	/* end block 5 */
	// End Line: 386

void AudioClc_SetHorn__FP8Car_tObji(Car_tObj *car,int state)

{
  int *piVar1;
  AudioClc_tSource *pAVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar2 = &AudioClc_gClosest;
  piVar1 = &AudioClc_gClosest.hornCount;
  do {
    if (pAVar2->car == car) {
      if (state == 0) {
        if (piVar1[-3] != 0) {
          piVar1[-3] = 1;
          piVar1[-2] = 1;
          *piVar1 = 1;
        }
      }
      else {
        piVar1[-3] = 1;
        piVar1[-2] = 0;
      }
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0xe;
    pAVar2 = pAVar2 + 1;
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

	/* begin block 2 */
		// Start line: 441
	/* end block 2 */
	// End Line: 442

	/* begin block 3 */
		// Start line: 451
	/* end block 3 */
	// End Line: 452

	/* begin block 4 */
		// Start line: 451
	/* end block 4 */
	// End Line: 452

	/* begin block 5 */
		// Start line: 459
	/* end block 5 */
	// End Line: 460

void AudioClc_HonkHorn__FP8Car_tObjiii(Car_tObj *car,int numBeeps,int ticksOn,int ticksOff)

{
  int *piVar1;
  AudioClc_tSource *pAVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar2 = &AudioClc_gClosest;
  piVar1 = &AudioClc_gClosest.hornCount;
  do {
    if ((pAVar2->car == car) && (piVar1[-3] == 0)) {
      piVar1[-3] = ticksOn;
      piVar1[-2] = ticksOn;
      piVar1[-1] = -ticksOff;
      *piVar1 = numBeeps;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0xe;
    pAVar2 = pAVar2 + 1;
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

	/* begin block 2 */
		// Start line: 500
	/* end block 2 */
	// End Line: 501

	/* begin block 3 */
		// Start line: 507
	/* end block 3 */
	// End Line: 508

	/* begin block 4 */
		// Start line: 507
	/* end block 4 */
	// End Line: 508

	/* begin block 5 */
		// Start line: 508
	/* end block 5 */
	// End Line: 509

	/* begin block 6 */
		// Start line: 508
	/* end block 6 */
	// End Line: 509

	/* begin block 7 */
		// Start line: 509
	/* end block 7 */
	// End Line: 510

	/* begin block 8 */
		// Start line: 509
	/* end block 8 */
	// End Line: 510

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

	/* begin block 2 */
		// Start line: 539
	/* end block 2 */
	// End Line: 540

	/* begin block 3 */
		// Start line: 548
	/* end block 3 */
	// End Line: 549

	/* begin block 4 */
		// Start line: 548
	/* end block 4 */
	// End Line: 549

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioClc_StartUp__Fv(void)

{
  AudioClc_tPlayer *pAVar1;
  int iVar2;
  AudioClc_tSource *s;
  AudioClc_tPlayer *pAVar3;
  Car_tObj **ppCVar4;
  AudioClc_tSource *s_00;
  
  pAVar3 = &AudioClc_gPlayer;
  s_00 = &AudioClc_gClosest;
  iVar2 = 0;
  pAVar1 = &AudioClc_gPlayer;
  ppCVar4 = &Cars_gHumanRaceCarList9;
  AudioClc_gRandomPhrase = 0;
  AudioClc_gBullHornCount = 0;
  AudioClc_gBumpCopCount = 0;
  AudioClc_gLastVoice = -1;
  AudioClc_gLastphrase1 = -1;
  AudioClc_gLastphrase2 = -1;
  AudioClc_gLastphrase3 = -1;
  do {
    s = &pAVar1->source;
    pAVar3->cameraMode = -1;
    s->relVelocity = 0;
    s->gameTicks = 0;
    AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(s,(Car_tObj *)0x0);
    if (GameSetup_gData.commMode < 2) {
      if (iVar2 < Cars_gNumHumanRaceCars) {
        s->car = *ppCVar4;
      }
    }
    else {
      if ((iVar2 == 0) && (GameSetup_gData.localCar < Cars_gNumHumanRaceCars)) {
        s->car = (&Cars_gHumanRaceCarList9)[GameSetup_gData.localCar];
      }
    }
    ppCVar4 = ppCVar4 + 1;
    iVar2 = iVar2 + 1;
    pAVar1 = (AudioClc_tPlayer *)(s + 1);
    pAVar3 = pAVar3 + 1;
  } while (iVar2 < 2);
  iVar2 = 0;
  do {
    AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(s_00,(Car_tObj *)0x0);
    iVar2 = iVar2 + 1;
    s_00 = s_00 + 1;
  } while (iVar2 < 4);
  AudioClc_gCameraVelocity = (coorddef *)0x0;
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

	/* begin block 2 */
		// Start line: 760
	/* end block 2 */
	// End Line: 761

	/* begin block 3 */
		// Start line: 770
	/* end block 3 */
	// End Line: 771

	/* begin block 4 */
		// Start line: 770
	/* end block 4 */
	// End Line: 771

int AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(coorddef *objectPos,coorddef *objectVel)

{
  coorddef *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  coorddef local_20;
  
  pcVar1 = AudioClc_gCameraVelocity;
  local_20.x = objectPos->x - AudioClc_gRenderView.translation.x >> 8;
  local_20.y = objectPos->y - AudioClc_gRenderView.translation.y >> 8;
  local_20.z = objectPos->z - AudioClc_gRenderView.translation.z >> 8;
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
  if (pcVar1 != (coorddef *)0x0) {
    iVar2 = local_20.x;
    if (local_20.x < 0) {
      iVar2 = local_20.x + 0xff;
    }
    iVar6 = pcVar1->x;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = local_20.y;
    if (local_20.y < 0) {
      iVar3 = local_20.y + 0xff;
    }
    iVar7 = pcVar1->y;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar4 = local_20.z;
    if (local_20.z < 0) {
      iVar4 = local_20.z + 0xff;
    }
    iVar5 = pcVar1->z;
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

	/* begin block 2 */
		// Start line: 830
	/* end block 2 */
	// End Line: 831

	/* begin block 3 */
		// Start line: 837
	/* end block 3 */
	// End Line: 838

	/* begin block 4 */
		// Start line: 837
	/* end block 4 */
	// End Line: 838

	/* begin block 5 */
		// Start line: 840
	/* end block 5 */
	// End Line: 841

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

	/* begin block 2 */
		// Start line: 876
	/* end block 2 */
	// End Line: 877

	/* begin block 3 */
		// Start line: 883
	/* end block 3 */
	// End Line: 884

	/* begin block 4 */
		// Start line: 883
	/* end block 4 */
	// End Line: 884

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
  
  iVar8 = object->x - (view->translation).x;
  iVar9 = object->y - (view->translation).y;
  iVar6 = object->z - (view->translation).z;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar1 = (view->mrotation).m[0];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
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
  if (GameSetup_gData.mirrorTrack != 0) {
    iVar1 = -iVar1;
  }
  uVar5 = intatan(iVar1 >> 8,
                  (iVar8 >> 8) * (iVar4 >> 8) + (iVar9 >> 8) * (iVar2 >> 8) +
                  (iVar6 >> 8) * (iVar7 >> 8) >> 8);
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

	/* begin block 2 */
		// Start line: 922
	/* end block 2 */
	// End Line: 923

	/* begin block 3 */
		// Start line: 929
	/* end block 3 */
	// End Line: 930

	/* begin block 4 */
		// Start line: 929
	/* end block 4 */
	// End Line: 930

int AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj
              (DRender_tCalcView *view,Car_tObj *car)

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

	/* begin block 2 */
		// Start line: 955
	/* end block 2 */
	// End Line: 956

	/* begin block 3 */
		// Start line: 964
	/* end block 3 */
	// End Line: 965

	/* begin block 4 */
		// Start line: 964
	/* end block 4 */
	// End Line: 965

int AudioClc_CalcTrackAzimuth__FP17DRender_tCalcViewP8Car_tObj
              (DRender_tCalcView *view,Car_tObj *car)

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
  if (GameSetup_gData.mirrorTrack != 0) {
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

	/* begin block 2 */
		// Start line: 998
	/* end block 2 */
	// End Line: 999

	/* begin block 3 */
		// Start line: 1009
	/* end block 3 */
	// End Line: 1010

	/* begin block 4 */
		// Start line: 1009
	/* end block 4 */
	// End Line: 1010

void AudioClc_SoundOpponentHorn__Fiiii(int closestIndex,int azimuth,int dop,int dsquare)

{
  int iSFXnum;
  int iVar1;
  
  iVar1 = ((&AudioClc_gClosest)[closestIndex].car)->carInfo->carType;
  iSFXnum = 10;
  if (iVar1 == 0x30) {
    iSFXnum = 0xb;
  }
  AudioCmn_PlaySFX__Fiiiiii
            (closestIndex + 0x25,iSFXnum,(uint)(byte)(&DAT_8010e274)[iVar1],dop,
             ((int)(&DAT_00001324 + -dsquare) * 0x7f) / 0x1324,azimuth);
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

	/* begin block 2 */
		// Start line: 1209
	/* end block 2 */
	// End Line: 1210

	/* begin block 3 */
		// Start line: 1216
	/* end block 3 */
	// End Line: 1217

	/* begin block 4 */
		// Start line: 1216
	/* end block 4 */
	// End Line: 1217

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

	/* begin block 2 */
		// Start line: 1225
	/* end block 2 */
	// End Line: 1226

	/* begin block 3 */
		// Start line: 1232
	/* end block 3 */
	// End Line: 1233

	/* begin block 4 */
		// Start line: 1232
	/* end block 4 */
	// End Line: 1233

void AudioClc_SoundCloseCar__Fii(int playerIndex,int closestIndex)

{
  int doppler;
  uint dst;
  uint uVar1;
  int dir;
  int sndPlayer;
  int force;
  int relvel;
  s_type surface1;
  s_type surface2;
  coorddef *objectPos;
  int *piVar2;
  Car_tObj *car;
  int azimuth;
  undefined *dsquare;
  undefined *puVar3;
  undefined *local_38;
  
  car = (&AudioClc_gClosest)[closestIndex].car;
  objectPos = &(car->N).position;
  if (car == (Car_tObj *)0x0) {
    return;
  }
  doppler = AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(objectPos,&(car->N).linearVel);
  if (doppler < 0) {
    return;
  }
  dst = AudioClc_CalcDistance__FP17DRender_tCalcViewP8coorddef(&AudioClc_gRenderView,objectPos);
  uVar1 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
  dir = fixeddiv(uVar1,dst);
  if (dir < 0x10001) {
    uVar1 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
    dir = fixeddiv(uVar1,dst);
    if (-0x10001 < dir) goto LAB_800750fc;
    dir = -0x10000;
  }
  else {
LAB_800750fc:
    uVar1 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
    dir = fixeddiv(uVar1,dst);
    if (dir < 0x10001) {
      uVar1 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
      dir = fixeddiv(uVar1,dst);
    }
    else {
      dir = 0x10000;
    }
  }
  if (GameSetup_gData.commMode == 1) {
    azimuth = 0x3fff;
    if (playerIndex == 0) {
      azimuth = 0xc000;
    }
  }
  else {
    azimuth = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                        (&AudioClc_gRenderView,&(car->N).position);
  }
  uVar1 = dst;
  if ((int)dst < 0) {
    uVar1 = dst + 0xffff;
  }
  puVar3 = (undefined *)(((int)uVar1 >> 0x10) * ((int)uVar1 >> 0x10));
  dsquare = &DAT_00001324;
  if ((int)puVar3 < 0x1324) {
    dsquare = puVar3;
  }
  if (AudioClc_gCameraVelocity == (coorddef *)0x0) {
    sndPlayer = (car->script).lastActionTime;
    if (sndPlayer < 0) {
      sndPlayer = -sndPlayer;
    }
  }
  else {
    relvel = (car->script).lastActionTime;
    force = (((&AudioClc_gPlayer)[playerIndex].source.car)->script).lastActionTime;
    sndPlayer = relvel - force;
    if (sndPlayer < 1) {
      sndPlayer = force - relvel;
    }
  }
  (&AudioClc_gClosest)[closestIndex].relVelocity = sndPlayer;
  *(undefined **)&(&AudioClc_gClosest)[closestIndex].distSq = dsquare;
  sndPlayer = car->specs->redline;
  force = car->flywheelRpm << 0x10;
  if (sndPlayer == 0) {
    trap(0x1c00);
  }
  if ((sndPlayer == -1) && (force == -0x80000000)) {
    trap(0x1800);
  }
  relvel = (car->linearVel_ch).z;
  if (relvel < 0) {
    relvel = -relvel;
  }
  AudioCmn_TrafficSFX__Fiiiiiiii
            (closestIndex + 6,car->carInfo->carType,force / sndPlayer,doppler,dst,azimuth,relvel,dir
            );
  dir = car->gripFactor + -1;
  if (-1 < dir) {
    piVar2 = &(car->N).objID + dir * 6;
    do {
      sndPlayer = closestIndex + 0x20;
      if (piVar2[0x1e7] < 0) {
        surface1 = piVar2[0x1e8];
        surface2 = piVar2[0x1e9];
        force = piVar2[0x1ea];
        sndPlayer = -1;
        local_38 = dsquare;
      }
      else {
        surface1 = piVar2[0x1e8];
        surface2 = piVar2[0x1e9];
        force = piVar2[0x1ea];
        local_38 = puVar3;
      }
      piVar2 = piVar2 + 0x3e;
      AudioCmn_TrafficSkidSFX__Fi6s_typeT1iii
                (sndPlayer,surface1,surface2,force,(int)local_38,azimuth);
      dir = dir + -1;
    } while (-1 < dir);
  }
  if ((car->carFlags & 4U) == 0) {
    dir = (&AudioClc_gClosest)[closestIndex].horn;
    if (0 < dir) {
      if (0 < (&AudioClc_gClosest)[closestIndex].hornOn) {
        (&AudioClc_gClosest)[closestIndex].horn = dir + -1;
      }
      if ((&AudioClc_gClosest)[closestIndex].horn == 0) {
        (car->control).horn = '\0';
        AudioClc_SilenceOpponentHorn__Fi(closestIndex);
        dir = (&AudioClc_gClosest)[closestIndex].hornCount + -1;
        (&AudioClc_gClosest)[closestIndex].hornCount = dir;
        if (dir != 0) {
          (&AudioClc_gClosest)[closestIndex].horn = (&AudioClc_gClosest)[closestIndex].hornOff;
        }
      }
      else {
        (car->control).horn = '\x01';
        AudioClc_SoundOpponentHorn__Fiiii(closestIndex,azimuth,doppler,(int)dsquare);
      }
      goto LAB_800753f8;
    }
    if ((-1 < dir) || ((&AudioClc_gClosest)[closestIndex].horn = dir + 1, dir + 1 != 0))
    goto LAB_800753f8;
    dir = (&AudioClc_gClosest)[closestIndex].hornOn;
  }
  else {
    if ((car->control).horn == '\0') {
      if ((&AudioClc_gClosest)[closestIndex].horn != 0) {
        AudioClc_SilenceOpponentHorn__Fi(closestIndex);
        (&AudioClc_gClosest)[closestIndex].horn = 0;
      }
      goto LAB_800753f8;
    }
    AudioClc_SoundOpponentHorn__Fiiii(closestIndex,azimuth,doppler,(int)dsquare);
    dir = 1;
  }
  (&AudioClc_gClosest)[closestIndex].horn = dir;
LAB_800753f8:
  if (car->carInfo->carType - 0x16U < 6) {
    if (((car->speechInfo).speechSource & 2) == 0) {
      if (bSirenOn[closestIndex] != 0) {
        SirenOff__Fi(closestIndex);
        freeVoiceChannel__Fi(closestIndex + 0x2b);
      }
    }
    else {
      if (bSirenOn[closestIndex] == 0) {
        SirenOn__Fii(closestIndex,car->carFlags & 0x40);
      }
      else {
        UpdateSiren__Fiiiii(closestIndex,((int)(&DAT_00001324 + -(int)dsquare) * 0x7f) / 0x1324,
                            doppler,azimuth,car->carFlags & 0x40);
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

	/* begin block 2 */
		// Start line: 1531
	/* end block 2 */
	// End Line: 1532

	/* begin block 3 */
		// Start line: 1539
	/* end block 3 */
	// End Line: 1540

	/* begin block 4 */
		// Start line: 1539
	/* end block 4 */
	// End Line: 1540

void AudioClc_SoundPlayersCar__Fi(int playerIndex)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int Distsq;
  int trkazi;
  uint dst;
  int local_3c;
  coorddef *objectPos;
  undefined4 *sndPlayer;
  int doppler;
  int *piVar4;
  Car_tObj *car;
  int cardir;
  int azimuth;
  
  car = (&AudioClc_gPlayer)[playerIndex].source.car;
  if (car == (Car_tObj *)0x0) {
    return;
  }
  doppler = 0;
  if ((car->carFlags & 0x200U) == 0) {
    dst = fixedmult((car->N).orientMat.m[6],
                    (int)BWorldSm_slices[(int)(car->N).simRoadInfo.slice].forward[0]);
    uVar3 = fixedmult((car->N).orientMat.m[7],
                      (int)BWorldSm_slices[(int)(car->N).simRoadInfo.slice].forward[1]);
    uVar2 = fixedmult((car->N).orientMat.m[8],
                      (int)BWorldSm_slices[(int)(car->N).simRoadInfo.slice].forward[2]);
    doppler = dst + uVar3 + uVar2;
    if (GameSetup_gData.reverseTrack != 0) {
      doppler = -doppler;
    }
  }
  else {
    if ((car->script).lastReactionIndex[2] != (car->script).lastReactionIndex[3]) {
      doppler = -1;
    }
  }
  if (((car->stats).finishType == 2) ||
     (((((GameSetup_gData.raceType == 1 || (GameSetup_gData.raceType == 5)) &&
        (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
         ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) &&
       ((car->carFlags & 0x204U) == 4)) ||
      (((car->RSControl != 0 || (car->pullOver != 0)) || (-1 < doppler)))))) {
    car->wrongway = 0;
  }
  else {
    if (((car->N).flightTime == 0) && (car->lookAheadSlice == 0)) {
      dst = car->wrongway + 1;
      car->wrongway = dst;
      if (((0x3f < (int)dst) && ((dst & 0x1f) == 0)) &&
         (((int)dst < 0x94 || (Hud_BeTheCop != (void *)0x0)))) {
        AudioCmn_PlayWrongWaySFX__Fv();
      }
    }
  }
  objectPos = &(car->N).position;
  doppler = AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(objectPos,&(car->N).linearVel);
  if (GameSetup_gData.commMode == 1) {
    azimuth = 0xc000;
    if (playerIndex != 0) {
      azimuth = 0x3fff;
    }
  }
  else {
    if ((&Camera_gInfo.mode)[playerIndex * 0x88] == 0) {
      azimuth = 0;
    }
    else {
      azimuth = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                          (&AudioClc_gRenderView,objectPos);
    }
  }
  dst = AudioClc_CalcDistance__FP17DRender_tCalcViewP8coorddef
                  (&AudioClc_gRenderView,&(car->N).position);
  uVar3 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
  Distsq = fixeddiv(uVar3,dst);
  if (Distsq < 0x10001) {
    uVar3 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
    Distsq = fixeddiv(uVar3,dst);
    cardir = -0x10000;
    if (-0x10001 < Distsq) goto LAB_80075824;
  }
  else {
LAB_80075824:
    uVar3 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
    Distsq = fixeddiv(uVar3,dst);
    cardir = 0x10000;
    if (Distsq < 0x10001) {
      uVar3 = AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
      cardir = fixeddiv(uVar3,dst);
    }
  }
  uVar3 = dst;
  if ((int)dst < 0) {
    uVar3 = dst + 0xffff;
  }
  Distsq = ((int)uVar3 >> 0x10) * ((int)uVar3 >> 0x10);
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
  if (AudioClc_gCameraVelocity == (coorddef *)0x0) {
    trkazi = (car->script).lastActionTime;
    if (trkazi < 0) {
      trkazi = -trkazi;
    }
    (&AudioClc_gPlayer)[playerIndex].source.relVelocity = trkazi;
  }
  else {
    (&AudioClc_gPlayer)[playerIndex].source.relVelocity = 0;
  }
  trkazi = AudioClc_CalcTrackAzimuth__FP17DRender_tCalcViewP8Car_tObj(&AudioClc_gRenderView,car);
  AudioTrk_SoundTrack__FP8Car_tObji(car,trkazi);
  AudioCmn_SoundCar__FP8Car_tObjiiiiiii
            (car,dst,iVar1 / local_3c,doppler,azimuth,trkazi,
             (&AudioClc_gPlayer)[playerIndex].source.relVelocity,cardir);
  if (gMasterSFXLevel == 0) {
    return;
  }
  cardir = car->gripFactor + -1;
  if (-1 < cardir) {
    piVar4 = &(car->N).objID + cardir * 6;
    do {
      sndPlayer = (undefined4 *)piVar4[0x1e7];
      if (sndPlayer == (undefined4 *)((int)&DAT_00000010 + 2)) {
        sndPlayer = (undefined4 *)((int)&DAT_00000010 + 2);
        if (playerIndex != 0) {
          sndPlayer = (undefined4 *)((int)&DAT_00000010 + 3);
        }
      }
      else {
        if ((sndPlayer == &DAT_00000014) && (sndPlayer = &DAT_00000014, playerIndex != 0)) {
          sndPlayer = (undefined4 *)((int)&DAT_00000014 + 1);
        }
      }
      if (((piVar4[0x1e6] == 5) || (piVar4[0x1e6] == 3)) && (-1 < (int)sndPlayer)) {
        freeVoiceChannel__Fi((int)sndPlayer);
        if ((int)sndPlayer - 2U < 2) {
          freeVoiceChannel__Fi((int)(sndPlayer + 1));
        }
      }
      else {
        local_3c = azimuth;
        if ((((int)sndPlayer < 0) && (local_3c = azimuth, GameSetup_gData.commMode != 1)) &&
           ((local_3c = azimuth, piVar4[0x1e8] != 10 && (local_3c = azimuth, piVar4[0x1e8] != 8))))
        {
          local_3c = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                               (&AudioClc_gRenderView,&(car->N).collision.collisionPoint);
        }
        AudioCmn_SFX__Fi6s_typeT1iii
                  ((int)sndPlayer,piVar4[0x1e8],piVar4[0x1e9],piVar4[0x1ea],Distsq,local_3c);
      }
      piVar4 = piVar4 + 0x3e;
      cardir = cardir + -1;
    } while (-1 < cardir);
  }
  if ((car->control).horn == '\0') {
    if ((&AudioClc_gPlayer)[playerIndex].source.horn == 0) goto LAB_80075b0c;
    cardir = AudioCmn_PlayerHornOff__Fi(car->carIndex);
  }
  else {
    AudioCmn_PlayerHornOn__Fiiiii(car->carIndex,Distsq,0x40,azimuth,doppler);
    cardir = 1;
  }
  (&AudioClc_gPlayer)[playerIndex].source.horn = cardir;
LAB_80075b0c:
  if (car->carInfo->carType - 0x16U < 6) {
    if (((car->speechInfo).speechSource & 2) == 0) {
      doppler = car->carIndex + 4;
      if (bSirenOn[doppler] != 0) {
        SirenOff__Fi(doppler);
        freeVoiceChannel__Fi(car->carIndex + 0x2f);
      }
    }
    else {
      if (Distsq < 0x1324) {
        Distsq = ((int)(&DAT_00001324 + -Distsq) * 0x7f) / 0x1324;
      }
      else {
        Distsq = 0;
      }
      cardir = car->carIndex + 4;
      if (bSirenOn[cardir] == 0) {
        SirenOn__Fii(cardir,car->carFlags & 0x40);
      }
      else {
        UpdateSiren__Fiiiii(cardir,Distsq,doppler,azimuth,car->carFlags & 0x40);
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

	/* begin block 2 */
		// Start line: 1952
	/* end block 2 */
	// End Line: 1953

	/* begin block 3 */
		// Start line: 1958
	/* end block 3 */
	// End Line: 1959

	/* begin block 4 */
		// Start line: 1958
	/* end block 4 */
	// End Line: 1959

void AudioClc_ResetClosest__FiP8Car_tObji(int closestIndex,Car_tObj *car,int playerIndex)

{
  if ((&AudioClc_gClosest)[closestIndex].car != (Car_tObj *)0x0) {
    if (car == (Car_tObj *)0x0) {
      freeVoiceChannel__Fi(closestIndex + 6);
      freeVoiceChannel__Fi(closestIndex + 10);
      freeVoiceChannel__Fi(closestIndex + 0xe);
    }
    if (bSirenOn[closestIndex] != 0) {
      SirenOff__Fi(closestIndex);
    }
    freeVoiceChannel__Fi(closestIndex + 0x20);
    freeVoiceChannel__Fi(closestIndex + 0x25);
  }
  AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(&AudioClc_gClosest + closestIndex,car);
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
	// 		struct AudioClc_tCLCache (*cl)[0]; // $s6

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

	/* begin block 2 */
		// Start line: 2016
	/* end block 2 */
	// End Line: 2017

	/* begin block 3 */
		// Start line: 2037
	/* end block 3 */
	// End Line: 2038

	/* begin block 4 */
		// Start line: 2037
	/* end block 4 */
	// End Line: 2038

/* WARNING: Type propagation algorithm not settling */

void AudioClc_GetClosestCars__Fiii(int playerIndex,int closestIndex,int numclosest)

{
  int iVar1;
  Car_tObj *pCVar2;
  Car_tObj **ppCVar3;
  int patch;
  Car_tObj *pCVar4;
  int iVar5;
  Car_tObj **ppCVar6;
  Car_tObj **ppCVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined auStack64 [16];
  Car_tObj *local_30 [2];
  
  iVar1 = -((uint)(numclosest << 6) >> 3);
  iVar9 = 0;
  local_30[0] = (Car_tObj *)(&AudioClc_gClosest + closestIndex);
  ppCVar7 = (Car_tObj **)((int)local_30 + iVar1);
  ppCVar3 = ppCVar7;
  if (0 < numclosest) {
    do {
      *ppCVar3 = (Car_tObj *)0x0;
      ppCVar3[1] = (Car_tObj *)0x12c0000;
      iVar9 = iVar9 + 1;
      ppCVar3 = ppCVar3 + 2;
    } while (iVar9 < numclosest);
  }
  iVar9 = 0;
  ppCVar3 = &Cars_gList9;
LAB_80075da0:
  if (Cars_gNumCars <= iVar9) {
    iVar9 = 0;
    pCVar4 = local_30[0];
    if (0 < numclosest) {
      do {
        if ((pCVar4->N).objID != 0) {
          iVar5 = 0;
          ppCVar3 = ppCVar7;
          if (0 < numclosest) {
            do {
              if (*ppCVar3 == (Car_tObj *)(pCVar4->N).objID) {
                *ppCVar3 = (Car_tObj *)0x0;
                break;
              }
              iVar5 = iVar5 + 1;
              ppCVar3 = ppCVar3 + 2;
            } while (iVar5 < numclosest);
          }
          if (iVar5 == numclosest) {
            (pCVar4->N).objID = -1;
          }
        }
        iVar9 = iVar9 + 1;
        pCVar4 = (Car_tObj *)&(pCVar4->N).simRoadInfo.quadPts[3].y;
      } while (iVar9 < numclosest);
    }
    iVar9 = 0;
    if (0 < numclosest) {
      do {
        if ((*ppCVar7 != (Car_tObj *)0x0) && (iVar5 = 0, pCVar4 = local_30[0], 0 < numclosest)) {
          do {
            iVar8 = (pCVar4->N).objID;
            if ((iVar8 == 0) || (iVar8 == -1)) {
              AudioClc_ResetClosest__FiP8Car_tObji
                        (iVar5 + closestIndex,*ppCVar7,playerIndex,auStack64[iVar1]);
              break;
            }
            iVar5 = iVar5 + 1;
            pCVar4 = (Car_tObj *)&(pCVar4->N).simRoadInfo.quadPts[3].y;
          } while (iVar5 < numclosest);
        }
        ppCVar7 = ppCVar7 + 2;
        iVar9 = iVar9 + 1;
      } while (iVar9 < numclosest);
    }
    iVar9 = 0;
    pCVar4 = local_30[0];
    if (0 < numclosest) {
      do {
        if ((pCVar4->N).objID == -1) {
          AudioClc_ResetClosest__FiP8Car_tObji(iVar9 + closestIndex,0,playerIndex,auStack64[iVar1]);
        }
        iVar9 = iVar9 + 1;
        pCVar4 = (Car_tObj *)&(pCVar4->N).simRoadInfo.quadPts[3].y;
      } while (iVar9 < numclosest);
    }
    return;
  }
  if (GameSetup_gData.commMode == 1) {
    if (((*ppCVar3)->carFlags & 4U) == 0) {
LAB_80075e18:
      pCVar4 = *ppCVar3;
      if ((pCVar4->N).active != '\0') {
        puVar10 = (undefined *)0x12c0000;
        if ((pCVar4->carFlags & 0x10U) != 0) {
          puVar10 = &DAT_00320000;
        }
        iVar5 = (pCVar4->N).position.x - AudioClc_gRenderView.translation.x;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar8 = (pCVar4->N).position.y - AudioClc_gRenderView.translation.y;
        patch = (pCVar4->N).position.z - AudioClc_gRenderView.translation.z;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        if (patch < 0) {
          patch = -patch;
        }
        if (patch < iVar5) {
          iVar5 = iVar5 + (patch >> 2);
        }
        else {
          iVar5 = patch + (iVar5 >> 2);
        }
        if ((iVar5 < 0x1900000) &&
           (patch = CopSpeak_GetEnginePatch__Fii((*ppCVar3)->carInfo->carType,0,auStack64[iVar1]),
           -1 < patch)) {
          AudioCmn_GetAsyncSfx__Fiib(1,patch,0,auStack64[iVar1]);
        }
        if (iVar5 < (int)puVar10) {
          if (iVar5 < iVar8) {
            pCVar4 = (Car_tObj *)(iVar8 + (iVar5 >> 2));
          }
          else {
            pCVar4 = (Car_tObj *)(iVar5 + (iVar8 >> 2));
          }
          if (((int)pCVar4 < (int)puVar10) && (iVar5 = 0, ppCVar6 = ppCVar7, 0 < numclosest)) {
            do {
              iVar8 = numclosest + -1;
              if ((int)pCVar4 < (int)ppCVar6[1]) goto joined_r0x80075f4c;
              iVar5 = iVar5 + 1;
              ppCVar6 = ppCVar6 + 2;
            } while (iVar5 < numclosest);
          }
        }
      }
    }
  }
  else {
    if (*ppCVar3 != (&AudioClc_gPlayer)[playerIndex].source.car) goto LAB_80075e18;
  }
  goto LAB_80075fa8;
joined_r0x80075f4c:
  while (iVar5 < iVar8) {
    ppCVar7[iVar8 * 2] = ppCVar7[(iVar8 + -1) * 2];
    (ppCVar7 + iVar8 * 2)[1] = (ppCVar7 + (iVar8 + -1) * 2)[1];
    iVar8 = iVar8 + -1;
  }
  pCVar2 = *ppCVar3;
  ppCVar6[1] = pCVar4;
  *ppCVar6 = pCVar2;
LAB_80075fa8:
  iVar9 = iVar9 + 1;
  ppCVar3 = ppCVar3 + 1;
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

	/* begin block 2 */
		// Start line: 2282
	/* end block 2 */
	// End Line: 2283

	/* begin block 3 */
		// Start line: 2291
	/* end block 3 */
	// End Line: 2292

	/* begin block 4 */
		// Start line: 2291
	/* end block 4 */
	// End Line: 2292

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 2308
	/* end block 2 */
	// End Line: 2309

	/* begin block 3 */
		// Start line: 2319
	/* end block 3 */
	// End Line: 2320

	/* begin block 4 */
		// Start line: 2319
	/* end block 4 */
	// End Line: 2320

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioClc_SoundCars__Fv(void)

{
  int patch;
  GameSetup_tData *pGVar1;
  int iVar2;
  
  AudioClc_SoundSpeech__Fv();
  AudioCmn_UpdateThunder__Fv();
  pGVar1 = &GameSetup_gData;
  if ((((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
      (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
       ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) &&
     ((HudBustedOverlay != (void *)0x0 && (iVar2 = 0, 0 < GameSetup_gData.numPerps)))) {
    do {
      iVar2 = iVar2 + 1;
      patch = CopSpeak_GetEnginePatch__Fii(pGVar1->perpInfo[0].CarType,0);
      AudioCmn_GetAsyncSfx__Fiib(1,patch,(void *)0x0);
      patch = CopSpeak_GetEnginePatch__Fii(pGVar1->perpInfo[0].CarType,1);
      AudioCmn_GetAsyncSfx__Fiib(1,patch,(void *)0x0);
      pGVar1 = (GameSetup_tData *)&pGVar1->measurement;
    } while (iVar2 < GameSetup_gData.numPerps);
  }
  if (GameSetup_gData.commMode == 1) {
    Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
              (0,&AudioClc_gRenderView,&AudioClc_gCameraVelocity);
    AudioClc_GetClosestCars__Fiii(0,0,2);
    AudioClc_SoundPlayersCar__Fi(0);
    if (0 < gMasterAmbientLevel) {
      AudioClc_SoundCloseCar__Fii(0,0);
      AudioClc_SoundCloseCar__Fii(0,1);
    }
    AudioClc_gPlayer.lastview.x = AudioClc_gRenderView.translation.x;
    AudioClc_gPlayer.lastview.y = AudioClc_gRenderView.translation.y;
    AudioClc_gPlayer.lastview.z = AudioClc_gRenderView.translation.z;
    Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
              (1,&AudioClc_gRenderView,&AudioClc_gCameraVelocity);
    AudioClc_GetClosestCars__Fiii(1,2,2);
    AudioClc_SoundPlayersCar__Fi(1);
    if (0 < gMasterAmbientLevel) {
      AudioClc_SoundCloseCar__Fii(1,2);
      AudioClc_SoundCloseCar__Fii(1,3);
    }
    AudioClc_tPlayer_8010e2f8.lastview.x = AudioClc_gRenderView.translation.x;
    AudioClc_tPlayer_8010e2f8.lastview.y = AudioClc_gRenderView.translation.y;
    AudioClc_tPlayer_8010e2f8.lastview.z = AudioClc_gRenderView.translation.z;
  }
  else {
    Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
              (0,&AudioClc_gRenderView,&AudioClc_gCameraVelocity);
    AudioClc_GetClosestCars__Fiii(0,0,4);
    AudioClc_SoundPlayersCar__Fi(0);
    if (0 < gMasterAmbientLevel) {
      AudioClc_SoundCloseCar__Fii(0,0);
      AudioClc_SoundCloseCar__Fii(0,1);
      AudioClc_SoundCloseCar__Fii(0,2);
      AudioClc_SoundCloseCar__Fii(0,3);
    }
    AudioClc_gPlayer.lastview.x = AudioClc_gRenderView.translation.x;
    AudioClc_gPlayer.lastview.y = AudioClc_gRenderView.translation.y;
    AudioClc_gPlayer.lastview.z = AudioClc_gRenderView.translation.z;
  }
  return;
}





