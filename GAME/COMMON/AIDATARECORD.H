#ifndef AIDATARECORD_H
#define AIDATARECORD_H


extern struct AIDataRecord_t * __14AIDataRecord_t26AIDataRecord_WhichRecord_tPc(struct AIDataRecord_t *this, enum AIDataRecord_WhichRecord_t whichIsThis, char *preBuffer); // 0x8006CE24

extern void _._14AIDataRecord_t(struct AIDataRecord_t *this, int __in_chrg); // 0x8006CE6C

extern int AddRecordToCollection__14AIDataRecord_t(struct AIDataRecord_t *this); // 0x8006CEC4

extern int RemoveRecordFromCollection__14AIDataRecord_t(struct AIDataRecord_t *this); // 0x8006CF00

extern void StartUp1__14AIDataRecord_t(); // 0x8006CF3C

extern void StartUp2__14AIDataRecord_t(); // 0x8006CFA8

extern void CleanUp1__14AIDataRecord_t(); // 0x8006D014

extern void CleanUp2__14AIDataRecord_t(); // 0x8006D084

extern void Setup__14AIDataRecord_t(struct AIDataRecord_t *this); // 0x8006D08C

extern int Load__14AIDataRecord_t(struct AIDataRecord_t *this); // 0x8006D0DC

extern int SaveAndPurge__14AIDataRecord_t(struct AIDataRecord_t *this); // 0x8006D120

extern struct AIDataRecord_AccTable_t * __23AIDataRecord_AccTable_tPci26AIDataRecord_WhichRecord_t(struct AIDataRecord_AccTable_t *this, char *preBuffer, int scale, enum AIDataRecord_WhichRecord_t whichIsThis); // 0x8006D170

extern int Get__23AIDataRecord_AccTable_ti(struct AIDataRecord_AccTable_t *this, int speed); // 0x8006D1F4

extern void Setup__23AIDataRecord_AccTable_t(struct AIDataRecord_AccTable_t *this); // 0x8006D20C

extern struct AIDataRecord_BestLine_t * __23AIDataRecord_BestLine_t26AIDataRecord_WhichRecord_t(struct AIDataRecord_BestLine_t *this, enum AIDataRecord_WhichRecord_t whichIsThis); // 0x8006D278

extern struct AIDataRecord_TrackCurve_t * __25AIDataRecord_TrackCurve_t26AIDataRecord_WhichRecord_t(struct AIDataRecord_TrackCurve_t *this, enum AIDataRecord_WhichRecord_t whichIsThis); // 0x8006D30C

extern int Get__25AIDataRecord_TrackCurve_ti(struct AIDataRecord_TrackCurve_t *this, int slice); // 0x8006D3A4

extern struct AIDataRecord_CurveSpeedTable_t * __30AIDataRecord_CurveSpeedTable_tPc26AIDataRecord_WhichRecord_t(struct AIDataRecord_CurveSpeedTable_t *this, char *carName, enum AIDataRecord_WhichRecord_t whichIsThis); // 0x8006D3BC

extern int Get__30AIDataRecord_CurveSpeedTable_ti(struct AIDataRecord_CurveSpeedTable_t *this, int curve); // 0x8006D44C

extern void Upgrade__30AIDataRecord_CurveSpeedTable_ti(struct AIDataRecord_CurveSpeedTable_t *this, int handlingUpgrade); // 0x8006D480


extern void _._23AIDataRecord_AccTable_t(struct AIDataRecord_AccTable_t *this, int __in_chrg); // 0x8006D594

extern void _._23AIDataRecord_BestLine_t(struct AIDataRecord_BestLine_t *this, int __in_chrg); // 0x8006D574

extern void _._25AIDataRecord_TrackCurve_t(struct AIDataRecord_TrackCurve_t *this, int __in_chrg); // 0x8006D554

extern void _._30AIDataRecord_CurveSpeedTable_t(struct AIDataRecord_CurveSpeedTable_t *this, int __in_chrg); // 0x8006D534

extern int Get__26AIDataRecord_CarTracking_ti(struct AIDataRecord_CarTracking_t *this, int slice); // 0x8006D50C

extern void _._26AIDataRecord_CarTracking_t(struct AIDataRecord_CarTracking_t *this, int __in_chrg); // 0x8006D514


// decompiled code
// original method signature: 
// void /*$ra*/ _._23AIDataRecord_AccTable_t(struct AIDataRecord_AccTable_t *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 109, offset 0x8006d594
	/* begin block 1 */
		// Start line: 2031
	/* end block 1 */
	// End Line: 2032

	/* begin block 2 */
		// Start line: 2641
	/* end block 2 */
	// End Line: 2642

	/* begin block 3 */
		// Start line: 218
	/* end block 3 */
	// End Line: 219

void ___23AIDataRecord_AccTable_t(AIDataRecord_AccTable_t *this,int __in_chrg)

{
  ___14AIDataRecord_t((AIDataRecord_t *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23AIDataRecord_BestLine_t(struct AIDataRecord_BestLine_t *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 150, offset 0x8006d574
	/* begin block 1 */
		// Start line: 310
	/* end block 1 */
	// End Line: 311

	/* begin block 2 */
		// Start line: 305
	/* end block 2 */
	// End Line: 306

	/* begin block 3 */
		// Start line: 300
	/* end block 3 */
	// End Line: 301

void ___23AIDataRecord_BestLine_t(AIDataRecord_BestLine_t *this,int __in_chrg)

{
  ___14AIDataRecord_t((AIDataRecord_t *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25AIDataRecord_TrackCurve_t(struct AIDataRecord_TrackCurve_t *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 163, offset 0x8006d554
	/* begin block 1 */
		// Start line: 2077
	/* end block 1 */
	// End Line: 2078

	/* begin block 2 */
		// Start line: 323
	/* end block 2 */
	// End Line: 324

	/* begin block 3 */
		// Start line: 2080
	/* end block 3 */
	// End Line: 2081

void ___25AIDataRecord_TrackCurve_t(AIDataRecord_TrackCurve_t *this,int __in_chrg)

{
  ___14AIDataRecord_t((AIDataRecord_t *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._30AIDataRecord_CurveSpeedTable_t(struct AIDataRecord_CurveSpeedTable_t *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 182, offset 0x8006d534
	/* begin block 1 */
		// Start line: 1513
	/* end block 1 */
	// End Line: 1514

	/* begin block 2 */
		// Start line: 1513
	/* end block 2 */
	// End Line: 1514

	/* begin block 3 */
		// Start line: 364
	/* end block 3 */
	// End Line: 365

void ___30AIDataRecord_CurveSpeedTable_t(AIDataRecord_CurveSpeedTable_t *this,int __in_chrg)

{
  ___14AIDataRecord_t((AIDataRecord_t *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Get__26AIDataRecord_CarTracking_ti(struct AIDataRecord_CarTracking_t *this /*$a0*/, int slice /*$a1*/)
 // line 191, offset 0x8006d50c
	/* begin block 1 */
		// Start line: 192
		// Start offset: 0x8006D50C
	/* end block 1 */
	// End offset: 0x8006D50C
	// End Line: 194

	/* begin block 2 */
		// Start line: 382
	/* end block 2 */
	// End Line: 383

	/* begin block 3 */
		// Start line: 384
	/* end block 3 */
	// End Line: 385

int Get__26AIDataRecord_CarTracking_ti(AIDataRecord_CarTracking_t *this,int slice)

{
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._26AIDataRecord_CarTracking_t(struct AIDataRecord_CarTracking_t *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 199, offset 0x8006d514
	/* begin block 1 */
		// Start line: 392
	/* end block 1 */
	// End Line: 393

	/* begin block 2 */
		// Start line: 964
	/* end block 2 */
	// End Line: 965

	/* begin block 3 */
		// Start line: 398
	/* end block 3 */
	// End Line: 399

void ___26AIDataRecord_CarTracking_t(AIDataRecord_CarTracking_t *this,int __in_chrg)

{
  ___14AIDataRecord_t((AIDataRecord_t *)this,__in_chrg);
  return;
}





#endif
