#ifndef AIHIGH_H
#define AIHIGH_H


extern void AIHigh_StartUp__Fv(); // 0x8005AD94

extern void AIHigh_Restart1__Fv(); // 0x8005B13C

extern void AIHigh_Restart2__Fv(); // 0x8005B15C

extern void AIHigh_CleanUp__Fv(); // 0x8005B184

extern void AIHigh_Execute__Fv(); // 0x8005B210

extern struct AIHigh_Base * __11AIHigh_BaseP8Car_tObj(struct AIHigh_Base *this, struct Car_tObj *carObj); // 0x8005B318

extern void _._11AIHigh_Base(struct AIHigh_Base *this, int __in_chrg); // 0x8005B3C4


extern void HighExecute__11AIHigh_None(struct AIHigh_None *this); // 0x8005B460

extern void _._11AIHigh_None(struct AIHigh_None *this, int __in_chrg); // 0x8005B468

extern void _._16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this, int __in_chrg); // 0x8005C13C

extern void _._13AIHigh_Player(struct AIHigh_Player *this, int __in_chrg); // 0x80063248

extern void _._12AIHigh_Human(struct AIHigh_Human *this, int __in_chrg); // 0x800632E0

extern void _._15AIHigh_Opponent(struct AIHigh_Opponent *this, int __in_chrg); // 0x80063BD8

extern void _._15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this, int __in_chrg); // 0x8005B438

extern void _._15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this, int __in_chrg); // 0x80061348

extern void _._20AIHigh_BTC_HumanPerp(struct AIHigh_BTC_HumanPerp *this, int __in_chrg); // 0x80061320

extern void _._15AIHigh_BasicCop(struct AIHigh_BasicCop *this, int __in_chrg); // 0x8005CB4C

extern void _._10AIHigh_Cop(struct AIHigh_Cop *this, int __in_chrg); // 0x80065C6C

extern void _._14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this, int __in_chrg); // 0x8005F604

extern void _._19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this, int __in_chrg); // 0x8005F5E4

extern void _._18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this, int __in_chrg); // 0x8005F5C4

extern void _._14AIHigh_Traffic(struct AIHigh_Traffic *this, int __in_chrg); // 0x8006698C


// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__11AIHigh_None(struct AIHigh_None *this /*$a0*/)
 // line 132, offset 0x8005b460
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x8005B460
	/* end block 1 */
	// End offset: 0x8005B460
	// End Line: 133

	/* begin block 2 */
		// Start line: 408
	/* end block 2 */
	// End Line: 409

	/* begin block 3 */
		// Start line: 264
	/* end block 3 */
	// End Line: 265

	/* begin block 4 */
		// Start line: 408
	/* end block 4 */
	// End Line: 409

void HighExecute__11AIHigh_None(AIHigh_None *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._11AIHigh_None(struct AIHigh_None *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 134, offset 0x8005b468
	/* begin block 1 */
		// Start line: 410
	/* end block 1 */
	// End Line: 411

	/* begin block 2 */
		// Start line: 454
	/* end block 2 */
	// End Line: 455

	/* begin block 3 */
		// Start line: 268
	/* end block 3 */
	// End Line: 269

void ___11AIHigh_None(AIHigh_None *this,int __in_chrg)

{
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 164, offset 0x8005c13c
	/* begin block 1 */
		// Start line: 165
		// Start offset: 0x8005C13C
	/* end block 1 */
	// End offset: 0x8005C13C
	// End Line: 165

	/* begin block 2 */
		// Start line: 328
	/* end block 2 */
	// End Line: 329

void ___16AIHigh_BasicPerp(AIHigh_BasicPerp *this,int __in_chrg)

{
  *(undefined4 *)(this->AIHigh_Base)._vf = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._13AIHigh_Player(struct AIHigh_Player *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 202, offset 0x80063248
	/* begin block 1 */
		// Start line: 203
		// Start offset: 0x80063248
		// Variables:
	// 		struct AIHigh_BasicPerp *this; // $a0
	/* end block 1 */
	// End offset: 0x80063248
	// End Line: 203

	/* begin block 2 */
		// Start line: 203
		// Start offset: 0x80063248

		/* begin block 2.1 */
			// Start line: 203
			// Start offset: 0x80063248
		/* end block 2.1 */
		// End offset: 0x80063248
		// End Line: 203
	/* end block 2 */
	// End offset: 0x80063248
	// End Line: 203

	/* begin block 3 */
		// Start line: 404
	/* end block 3 */
	// End Line: 405

void ___13AIHigh_Player(AIHigh_Player *this,int __in_chrg)

{
  *(undefined4 *)(this->AIHigh_BasicPerp).AIHigh_Base._vf = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._12AIHigh_Human(struct AIHigh_Human *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 219, offset 0x800632e0
	/* begin block 1 */
		// Start line: 220
		// Start offset: 0x800632E0
		// Variables:
	// 		struct AIHigh_Player *this; // $a0

		/* begin block 1.1 */
			// Start line: 220
			// Start offset: 0x800632E0
			// Variables:
		// 		struct AIHigh_BasicPerp *this; // $a0
		/* end block 1.1 */
		// End offset: 0x800632E0
		// End Line: 220

		/* begin block 1.2 */
			// Start line: 220
			// Start offset: 0x800632E0

			/* begin block 1.2.1 */
				// Start line: 220
				// Start offset: 0x800632E0
			/* end block 1.2.1 */
			// End offset: 0x800632E0
			// End Line: 220
		/* end block 1.2 */
		// End offset: 0x800632E0
		// End Line: 220
	/* end block 1 */
	// End offset: 0x800632E0
	// End Line: 220

	/* begin block 2 */
		// Start line: 438
	/* end block 2 */
	// End Line: 439

void ___12AIHigh_Human(AIHigh_Human *this,int __in_chrg)

{
  *(undefined4 *)(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base._vf = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15AIHigh_Opponent(struct AIHigh_Opponent *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 242, offset 0x80063bd8
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x80063BD8
		// Variables:
	// 		struct AIHigh_Player *this; // $a0

		/* begin block 1.1 */
			// Start line: 243
			// Start offset: 0x80063BD8
			// Variables:
		// 		struct AIHigh_BasicPerp *this; // $a0
		/* end block 1.1 */
		// End offset: 0x80063BD8
		// End Line: 243

		/* begin block 1.2 */
			// Start line: 243
			// Start offset: 0x80063BD8

			/* begin block 1.2.1 */
				// Start line: 243
				// Start offset: 0x80063BD8
			/* end block 1.2.1 */
			// End offset: 0x80063BD8
			// End Line: 243
		/* end block 1.2 */
		// End offset: 0x80063BD8
		// End Line: 243
	/* end block 1 */
	// End offset: 0x80063BD8
	// End Line: 243

	/* begin block 2 */
		// Start line: 484
	/* end block 2 */
	// End Line: 485

void ___15AIHigh_Opponent(AIHigh_Opponent *this,int __in_chrg)

{
  *(undefined4 *)(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base._vf = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 267, offset 0x8005b438
	/* begin block 1 */
		// Start line: 268
		// Start offset: 0x8005B438
		// Variables:
	// 		struct AIHigh_BasicPerp *this; // $a0

		/* begin block 1.1 */
			// Start line: 268
			// Start offset: 0x8005B438
		/* end block 1.1 */
		// End offset: 0x8005B438
		// End Line: 268
	/* end block 1 */
	// End offset: 0x8005B438
	// End Line: 268

	/* begin block 2 */
		// Start line: 534
	/* end block 2 */
	// End Line: 535

void ___15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this,int __in_chrg)

{
  *(undefined4 *)(this->AIHigh_BasicPerp).AIHigh_Base._vf = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 267, offset 0x80061348
	/* begin block 1 */
		// Start line: 268
		// Start offset: 0x80061348
		// Variables:
	// 		struct AIHigh_BasicPerp *this; // $a0

		/* begin block 1.1 */
			// Start line: 268
			// Start offset: 0x80061348
		/* end block 1.1 */
		// End offset: 0x80061348
		// End Line: 268
	/* end block 1 */
	// End offset: 0x80061348
	// End Line: 268

	/* begin block 2 */
		// Start line: 2015
	/* end block 2 */
	// End Line: 2016

	/* begin block 3 */
		// Start line: 543
	/* end block 3 */
	// End Line: 544

	/* begin block 4 */
		// Start line: 534
	/* end block 4 */
	// End Line: 535

void ___15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this,int __in_chrg)

{
  *(undefined4 *)(this->AIHigh_BasicPerp).AIHigh_Base._vf = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._20AIHigh_BTC_HumanPerp(struct AIHigh_BTC_HumanPerp *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 281, offset 0x80061320
	/* begin block 1 */
		// Start line: 282
		// Start offset: 0x80061320
		// Variables:
	// 		struct AIHigh_BTC_Perp *this; // $a0

		/* begin block 1.1 */
			// Start line: 282
			// Start offset: 0x80061320
			// Variables:
		// 		struct AIHigh_BasicPerp *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 282
				// Start offset: 0x80061320
			/* end block 1.1.1 */
			// End offset: 0x80061320
			// End Line: 282
		/* end block 1.1 */
		// End offset: 0x80061320
		// End Line: 282
	/* end block 1 */
	// End offset: 0x80061320
	// End Line: 282

	/* begin block 2 */
		// Start line: 556
	/* end block 2 */
	// End Line: 557

	/* begin block 3 */
		// Start line: 557
	/* end block 3 */
	// End Line: 558

	/* begin block 4 */
		// Start line: 1295
	/* end block 4 */
	// End Line: 1296

	/* begin block 5 */
		// Start line: 562
	/* end block 5 */
	// End Line: 563

void ___20AIHigh_BTC_HumanPerp(AIHigh_BTC_HumanPerp *this,int __in_chrg)

{
  *(undefined4 *)(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15AIHigh_BasicCop(struct AIHigh_BasicCop *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 414, offset 0x8005cb4c
	/* begin block 1 */
		// Start line: 828
	/* end block 1 */
	// End Line: 829

void ___15AIHigh_BasicCop(AIHigh_BasicCop *this,int __in_chrg)

{
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._10AIHigh_Cop(struct AIHigh_Cop *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 448, offset 0x80065c6c
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x80065C6C
	/* end block 1 */
	// End offset: 0x80065C6C
	// End Line: 449

	/* begin block 2 */
		// Start line: 895
	/* end block 2 */
	// End Line: 896

	/* begin block 3 */
		// Start line: 895
	/* end block 3 */
	// End Line: 896

	/* begin block 4 */
		// Start line: 1644
	/* end block 4 */
	// End Line: 1645

	/* begin block 5 */
		// Start line: 896
	/* end block 5 */
	// End Line: 897

void ___10AIHigh_Cop(AIHigh_Cop *this,int __in_chrg)

{
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 471, offset 0x8005f604
	/* begin block 1 */
		// Start line: 472
		// Start offset: 0x8005F604
	/* end block 1 */
	// End offset: 0x8005F604
	// End Line: 472

	/* begin block 2 */
		// Start line: 939
	/* end block 2 */
	// End Line: 940

	/* begin block 3 */
		// Start line: 798
	/* end block 3 */
	// End Line: 799

	/* begin block 4 */
		// Start line: 2171
	/* end block 4 */
	// End Line: 2172

void ___14AIHigh_BTC_Cop(AIHigh_BTC_Cop *this,int __in_chrg)

{
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 527, offset 0x8005f5e4
	/* begin block 1 */
		// Start line: 528
		// Start offset: 0x8005F5E4

		/* begin block 1.1 */
			// Start line: 528
			// Start offset: 0x8005F5E4
		/* end block 1.1 */
		// End offset: 0x8005F5E4
		// End Line: 528
	/* end block 1 */
	// End offset: 0x8005F5E4
	// End Line: 528

	/* begin block 2 */
		// Start line: 1027
	/* end block 2 */
	// End Line: 1028

	/* begin block 3 */
		// Start line: 2083
	/* end block 3 */
	// End Line: 2084

	/* begin block 4 */
		// Start line: 1054
	/* end block 4 */
	// End Line: 1055

void ___19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this,int __in_chrg)

{
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 548, offset 0x8005f5c4
	/* begin block 1 */
		// Start line: 549
		// Start offset: 0x8005F5C4

		/* begin block 1.1 */
			// Start line: 549
			// Start offset: 0x8005F5C4
		/* end block 1.1 */
		// End offset: 0x8005F5C4
		// End Line: 549
	/* end block 1 */
	// End offset: 0x8005F5C4
	// End Line: 549

	/* begin block 2 */
		// Start line: 1096
	/* end block 2 */
	// End Line: 1097

void ___18AIHigh_BTC_Wingman(AIHigh_BTC_Wingman *this,int __in_chrg)

{
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14AIHigh_Traffic(struct AIHigh_Traffic *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 584, offset 0x8006698c
	/* begin block 1 */
		// Start line: 1167
	/* end block 1 */
	// End Line: 1168

	/* begin block 2 */
		// Start line: 1164
	/* end block 2 */
	// End Line: 1165

	/* begin block 3 */
		// Start line: 1025
	/* end block 3 */
	// End Line: 1026

	/* begin block 4 */
		// Start line: 1310
	/* end block 4 */
	// End Line: 1311

void ___14AIHigh_Traffic(AIHigh_Traffic *this,int __in_chrg)

{
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}





#endif
