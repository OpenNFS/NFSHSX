#include "THISDUST.H"
#include "CARIO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_StartUp__Fv()
 // line 208, offset 0x800bbf10
	/* begin block 1 */
		// Start line: 209
		// Start offset: 0x800BBF10
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800BBF54
	// End Line: 224

	/* begin block 2 */
		// Start line: 416
	/* end block 2 */
	// End Line: 417

	/* begin block 3 */
		// Start line: 416
	/* end block 3 */
	// End Line: 417

	/* begin block 4 */
		// Start line: 421
	/* end block 4 */
	// End Line: 422

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CarIO_StartUp__Fv(void)

{
  Draw_tPixMap *pDVar1;
  int iVar2;
  
  if (CarIO_carPixMap == (Draw_tPixMap *)0x0) {
    CarIO_carPixMap = (Draw_tPixMap *)reservememadr(s_carPixMap_8005676c,(int)&DAT_00002640,0);
  }
  iVar2 = 0x263;
  pDVar1 = CarIO_carPixMap + 0x263;
  do {
    pDVar1->flag = 0;
    iVar2 = iVar2 + -1;
    pDVar1 = pDVar1 + -1;
  } while (-1 < iVar2);
  CarIO_carPixMapCount = 0;
  CarIO_carVRamCount = 0;
  CarIO_licenseSFX_Count = 0;
  CarIO_Plate12 = (shapetbl *)0x0;
  PTR_8013d74c = (shapetbl *)0x0;
  CarIO_Plate22 = (shapetbl *)0x0;
  PTR_8013d754 = (shapetbl *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_CleanUp__Fv()
 // line 233, offset 0x800bbf7c
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x800BBF7C
	/* end block 1 */
	// End offset: 0x800BBF94
	// End Line: 239

	/* begin block 2 */
		// Start line: 473
	/* end block 2 */
	// End Line: 474

	/* begin block 3 */
		// Start line: 477
	/* end block 3 */
	// End Line: 478

	/* begin block 4 */
		// Start line: 477
	/* end block 4 */
	// End Line: 478

	/* begin block 5 */
		// Start line: 480
	/* end block 5 */
	// End Line: 481

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CarIO_CleanUp__Fv(void)

{
  if (CarIO_carPixMap != (Draw_tPixMap *)0x0) {
    purgememadr((int)CarIO_carPixMap);
  }
  CarIO_carPixMap = (Draw_tPixMap *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_ReStart__Fv()
 // line 244, offset 0x800bbfa4
	/* begin block 1 */
		// Start line: 245
		// Start offset: 0x800BBFA4
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800BBFC8
	// End Line: 253

	/* begin block 2 */
		// Start line: 496
	/* end block 2 */
	// End Line: 497

	/* begin block 3 */
		// Start line: 502
	/* end block 3 */
	// End Line: 503

	/* begin block 4 */
		// Start line: 502
	/* end block 4 */
	// End Line: 503

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CarIO_ReStart__Fv(void)

{
  Draw_tPixMap *pDVar1;
  int iVar2;
  
  iVar2 = 0x263;
  pDVar1 = CarIO_carPixMap + 0x263;
  do {
    pDVar1->flag = 0;
    iVar2 = iVar2 + -1;
    pDVar1 = pDVar1 + -1;
  } while (-1 < iVar2);
  CarIO_carPixMapCount = 0;
  CarIO_carVRamCount = 0;
  CarIO_CleanUpLicense__Fi(0);
  CarIO_CleanUpLicense__Fi(1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_CopyFromShape__FPsT0iiii(short *source /*$a0*/, short *dest /*$a1*/, int w /*$a2*/, int h /*$a3*/, int x /*stack 16*/, int y /*stack 20*/)
 // line 258, offset 0x800bbff0
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x800BBFF0
		// Variables:
	// 		int columns; // $t0
	// 		int mask; // $a2
	// 		unsigned short firstMask; // $t7
	// 		unsigned short lastMask; // $t4
	// 		unsigned short lastLastMask; // $t5

		/* begin block 1.1 */
			// Start line: 273
			// Start offset: 0x800BC05C
			// Variables:
		// 		unsigned short rollOver; // $v1
		/* end block 1.1 */
		// End offset: 0x800BC068
		// End Line: 277

		/* begin block 1.2 */
			// Start line: 292
			// Start offset: 0x800BC0A0
			// Variables:
		// 		int i; // $t3
		// 		unsigned short current; // $t0
		// 		unsigned short next; // $t2

			/* begin block 1.2.1 */
				// Start line: 300
				// Start offset: 0x800BC0B8
				// Variables:
			// 		unsigned short rollOver; // $v1
			/* end block 1.2.1 */
			// End offset: 0x800BC0C4
			// End Line: 304

			/* begin block 1.2.2 */
				// Start line: 309
				// Start offset: 0x800BC0D8

				/* begin block 1.2.2.1 */
					// Start line: 311
					// Start offset: 0x800BC0F0

					/* begin block 1.2.2.1.1 */
						// Start line: 319
						// Start offset: 0x800BC10C
						// Variables:
					// 		unsigned short rollOver; // $v1
					/* end block 1.2.2.1.1 */
					// End offset: 0x800BC118
					// End Line: 323
				/* end block 1.2.2.1 */
				// End offset: 0x800BC12C
				// End Line: 328
			/* end block 1.2.2 */
			// End offset: 0x800BC144
			// End Line: 329
		/* end block 1.2 */
		// End offset: 0x800BC1A4
		// End Line: 343
	/* end block 1 */
	// End offset: 0x800BC1AC
	// End Line: 343

	/* begin block 2 */
		// Start line: 531
	/* end block 2 */
	// End Line: 532

	/* begin block 3 */
		// Start line: 536
	/* end block 3 */
	// End Line: 537

	/* begin block 4 */
		// Start line: 536
	/* end block 4 */
	// End Line: 537

	/* begin block 5 */
		// Start line: 537
	/* end block 5 */
	// End Line: 538

	/* begin block 6 */
		// Start line: 537
	/* end block 6 */
	// End Line: 538

void CarIO_CopyFromShape__FPsT0iiii(short *source,short *dest,int w,int h,int x,int y)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar7 = w >> 2;
  uVar5 = w & 3;
  if (uVar5 != 0) {
    iVar7 = iVar7 + 1;
  }
  puVar4 = (ushort *)(dest + (x >> 2) + y * 0xc);
  uVar12 = 0xffff;
  uVar11 = 0xffff;
  if (uVar5 == 0) {
    uVar11 = 0;
  }
  while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
    uVar11 = uVar11 << 4;
  }
  uVar13 = 0;
  uVar5 = x & 3;
  while( true ) {
    uVar5 = uVar5 - 1;
    if (uVar5 == 0xffffffff) break;
    uVar13 = uVar13 << 4 | 0xf;
    uVar1 = uVar11 & 0xf000;
    uVar11 = uVar11 << 4;
    uVar12 = uVar12 << 4 | uVar1 >> 0xc;
  }
  uVar10 = (ushort)uVar11;
  if ((uVar12 & 0xffff) != 0xffff) {
    iVar7 = iVar7 + 1;
    uVar10 = (ushort)uVar12;
  }
  while( true ) {
    h = h + -1;
    uVar5 = 0;
    if (h == -1) break;
    uVar1 = (uint)(ushort)*source;
    uVar11 = x & 3;
    while( true ) {
      uVar11 = uVar11 - 1;
      uVar2 = uVar1 & 0xf000;
      if (uVar11 == 0xffffffff) break;
      uVar1 = uVar1 << 4;
      uVar5 = uVar5 << 4 | uVar2 >> 0xc;
    }
    iVar9 = 1;
    *puVar4 = *puVar4 & (ushort)uVar13 | (ushort)uVar1;
    puVar3 = (ushort *)source;
    puVar8 = puVar4;
    while( true ) {
      puVar8 = puVar8 + 1;
      source = (short *)(puVar3 + 1);
      uVar11 = x & 3;
      if (iVar7 + -1 <= iVar9) break;
      *puVar8 = (ushort)uVar5;
      uVar1 = (uint)(ushort)*source;
      uVar5 = 0;
      while( true ) {
        uVar11 = uVar11 - 1;
        uVar2 = uVar1 & 0xf000;
        if (uVar11 == 0xffffffff) break;
        uVar1 = uVar1 << 4;
        uVar5 = uVar5 << 4 | uVar2 >> 0xc;
      }
      iVar9 = iVar9 + 1;
      *puVar8 = *puVar8 | (ushort)uVar1;
      puVar3 = (ushort *)source;
    }
    puVar4[iVar9] = puVar4[iVar9] & uVar10 | (ushort)uVar5;
    if ((uVar12 & 0xffff) == 0xffff) {
      uVar6 = *source;
      uVar5 = (uint)uVar6;
      source = (short *)(puVar3 + 2);
      while (uVar11 = uVar11 - 1, uVar11 != 0xffffffff) {
        uVar5 = uVar5 << 4;
        uVar6 = (ushort)uVar5;
      }
      puVar4[iVar9] = puVar4[iVar9] | uVar6;
    }
    puVar4 = puVar4 + 0xc;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_CopyToShape__FPsT0i(short *source /*$t2*/, short *dest /*$t0*/, int mirror /*$a2*/)
 // line 347, offset 0x800bc1b4
	/* begin block 1 */
		// Start line: 348
		// Start offset: 0x800BC1B4
		// Variables:
	// 		int h; // $t3

		/* begin block 1.1 */
			// Start line: 350
			// Start offset: 0x800BC1C4
			// Variables:
		// 		int i; // $a3

			/* begin block 1.1.1 */
				// Start line: 354
				// Start offset: 0x800BC1D0

				/* begin block 1.1.1.1 */
					// Start line: 355
					// Start offset: 0x800BC204

					/* begin block 1.1.1.1.1 */
						// Start line: 356
						// Start offset: 0x800BC204

						/* begin block 1.1.1.1.1.1 */
							// Start line: 356
							// Start offset: 0x800BC208
							// Variables:
						// 		unsigned short pixel3; // $v1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800BC210
						// End Line: 360
					/* end block 1.1.1.1.1 */
					// End offset: 0x800BC24C
					// End Line: 372
				/* end block 1.1.1.1 */
				// End offset: 0x800BC24C
				// End Line: 372
			/* end block 1.1.1 */
			// End offset: 0x800BC24C
			// End Line: 372
		/* end block 1.1 */
		// End offset: 0x800BC24C
		// End Line: 375
	/* end block 1 */
	// End offset: 0x800BC254
	// End Line: 375

	/* begin block 2 */
		// Start line: 715
	/* end block 2 */
	// End Line: 716

	/* begin block 3 */
		// Start line: 720
	/* end block 3 */
	// End Line: 721

	/* begin block 4 */
		// Start line: 720
	/* end block 4 */
	// End Line: 721

void CarIO_CopyToShape__FPsT0i(short *source,short *dest,int mirror)

{
  bool bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0x16;
  while (iVar6 = iVar6 + -1, iVar6 != -1) {
    iVar5 = 5;
    if (mirror == 0) {
      iVar5 = 0;
      puVar3 = (ushort *)source;
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
        *dest = uVar2;
        dest = (short *)((ushort *)dest + 1);
      } while (iVar5 < 6);
      source = (short *)((ushort *)source + 0xc);
    }
    else {
      puVar3 = (ushort *)source + 5;
      while (bVar1 = -1 < iVar5, iVar5 = iVar5 + -1, bVar1) {
        uVar2 = *puVar3;
        uVar4 = (uint)uVar2;
        puVar3 = puVar3 + -1;
        *dest = (ushort)((uVar4 & 0xf) << 0xc) | (ushort)((uVar4 & 0xf0) << 4) |
                (ushort)((uVar4 & 0xf00) >> 4) | uVar2 >> 0xc;
        dest = (short *)((ushort *)dest + 1);
      }
      source = (short *)((ushort *)source + 0xc);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_CreateLicense__FPcii(char *text /*$s7*/, int carType /*$a1*/, int player /*$s6*/)
 // line 379, offset 0x800bc25c
	/* begin block 1 */
		// Start line: 380
		// Start offset: 0x800BC25C
		// Variables:
	// 		int i; // $s2
	// 		struct shapetbl *clutPlate1; // $s4
	// 		struct shapetbl *clutPlate2; // $s5
	// 		short *thePlate; // $s3
	// 		struct shapetbl *shape; // $a3
	// 		struct shapetbl *clutptr; // $t0

		/* begin block 1.1 */
			// Start line: 411
			// Start offset: 0x800BC3BC
			// Variables:
		// 		int length; // $s1
		// 		int start; // $s0

			/* begin block 1.1.1 */
				// Start line: 411
				// Start offset: 0x800BC3BC

				/* begin block 1.1.1.1 */
					// Start line: 420
					// Start offset: 0x800BC458

					/* begin block 1.1.1.1.1 */
						// Start line: 422
						// Start offset: 0x800BC464

						/* begin block 1.1.1.1.1.1 */
							// Start line: 423
							// Start offset: 0x800BC478
							// Variables:
						// 		char letter[5]; // stack offset -48
						// 		char ascii; // $v1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800BC50C
						// End Line: 466
					/* end block 1.1.1.1.1 */
					// End offset: 0x800BC50C
					// End Line: 466
				/* end block 1.1.1.1 */
				// End offset: 0x800BC50C
				// End Line: 469
			/* end block 1.1.1 */
			// End offset: 0x800BC518
			// End Line: 470
		/* end block 1.1 */
		// End offset: 0x800BC518
		// End Line: 470
	/* end block 1 */
	// End offset: 0x800BC5C4
	// End Line: 483

	/* begin block 2 */
		// Start line: 789
	/* end block 2 */
	// End Line: 790

	/* begin block 3 */
		// Start line: 794
	/* end block 3 */
	// End Line: 795

	/* begin block 4 */
		// Start line: 794
	/* end block 4 */
	// End Line: 795

void CarIO_CreateLicense__FPcii(char *text,int carType,int player)

{
  short *dest;
  uint *puVar1;
  size_t sVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  shapetbl *psVar6;
  uint *puVar7;
  short *source;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  shapetbl *psVar11;
  shapetbl **ppsVar12;
  int iVar13;
  int mirror;
  char local_30;
  undefined local_2f;
  
  if (carType < 0x16) {
    psVar6 = (shapetbl *)reservememadr(s_plate1_8013d720,0x148,0);
    ppsVar12 = &CarIO_Plate12 + player;
    *ppsVar12 = psVar6;
    psVar6 = (shapetbl *)reservememadr(s_plate2_8013d728,0x148,0);
    (&CarIO_Plate22)[player] = psVar6;
    puVar9 = &psVar6[5].mipmaps;
    puVar5 = &(*ppsVar12)[5].mipmaps;
    dest = reservememadr(s_theplate_80056778,0x210,0x10);
    puVar1 = (uint *)locateshapez((int)R3DCar_LicenseShapeFile,(int *)&DAT_8013d730);
    puVar7 = (uint *)((int)puVar1 + ((int)*puVar1 >> 8));
    puVar10 = puVar1;
    mirror = 0;
    do {
      uVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      iVar13 = mirror + 1;
      psVar6 = *ppsVar12;
      (&(&CarIO_Plate22)[player]->type)[mirror] = uVar8;
      (&psVar6->type)[mirror] = uVar8;
      mirror = iVar13;
    } while (iVar13 < 4);
    mirror = 0;
    do {
      uVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      mirror = mirror + 1;
      *puVar9 = uVar8;
      *puVar5 = uVar8;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    } while (mirror < 0xc);
    psVar11 = (&CarIO_Plate22)[player];
    psVar6 = (&CarIO_Plate12)[player];
    psVar11->type = (uint)*(byte *)&psVar11->type | 0x11800;
    iVar13 = 0;
    psVar6->type = (uint)*(byte *)&psVar6->type | 0x11800;
    psVar6 = (&CarIO_Plate12)[player];
    *(undefined2 *)&(&CarIO_Plate22)[player]->next = 0x18;
    *(undefined2 *)&psVar6->next = 0x18;
    CarIO_CopyFromShape__FPsT0iiii((short *)(puVar1 + 4),dest,0x30,0x16,0,0);
    sVar2 = strlen(text);
    mirror = sVar2 * -3 + 0x18;
    while (iVar13 < (int)sVar2) {
      cVar4 = text[iVar13];
      if (cVar4 != ' ') {
        switch(cVar4) {
        case -0x40:
        case -0x3c:
        case -0x3b:
          cVar4 = 'a';
          break;
        case -0x38:
          cVar4 = 'e';
          break;
        case -0x34:
          cVar4 = 'i';
          break;
        case -0x2f:
          cVar4 = 'n';
          break;
        case -0x2e:
        case -0x2a:
          cVar4 = 'o';
          break;
        case -0x27:
        case -0x24:
          cVar4 = 'u';
        }
        local_2f = 0;
        local_30 = cVar4;
        strcat(&local_30,(char *)&PTR_DAT_8013d738);
        iVar3 = locateshapez((int)R3DCar_LicenseShapeFile,(int *)&local_30);
        CarIO_CopyFromShape__FPsT0iiii((short *)(iVar3 + 0x10),dest,7,0xc,mirror,5);
      }
      mirror = mirror + 6;
      iVar13 = iVar13 + 1;
    }
    if ((R3DCar_InMenu == 0) && (GameSetup_gData.mirrorTrack != 0)) {
      CarIO_CopyToShape__FPsT0i(dest + 6,(short *)&(&CarIO_Plate12)[player]->shapex,1);
      psVar6 = (&CarIO_Plate22)[player];
      mirror = 1;
      source = dest;
    }
    else {
      CarIO_CopyToShape__FPsT0i(dest,(short *)&(&CarIO_Plate12)[player]->shapex,0);
      source = dest + 6;
      psVar6 = (&CarIO_Plate22)[player];
      mirror = 0;
    }
    CarIO_CopyToShape__FPsT0i(source,(short *)&psVar6->shapex,mirror);
    purgememadr((int)dest);
  }
  else {
    (&CarIO_Plate22)[player] = (shapetbl *)0x0;
    (&CarIO_Plate12)[player] = (shapetbl *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_CleanUpLicense__Fi(int player /*$a0*/)
 // line 486, offset 0x800bc5f0
	/* begin block 1 */
		// Start line: 487
		// Start offset: 0x800BC5F0
	/* end block 1 */
	// End offset: 0x800BC650
	// End Line: 491

	/* begin block 2 */
		// Start line: 1051
	/* end block 2 */
	// End Line: 1052

	/* begin block 3 */
		// Start line: 1054
	/* end block 3 */
	// End Line: 1055

	/* begin block 4 */
		// Start line: 1054
	/* end block 4 */
	// End Line: 1055

void CarIO_CleanUpLicense__Fi(int player)

{
  shapetbl *psVar1;
  
  psVar1 = (&CarIO_Plate12)[player];
  if (psVar1 != (shapetbl *)0x0) {
    purgememadr((int)psVar1);
  }
  (&CarIO_Plate12)[player] = (shapetbl *)0x0;
  psVar1 = (&CarIO_Plate22)[player];
  if (psVar1 != (shapetbl *)0x0) {
    purgememadr((int)psVar1);
  }
  (&CarIO_Plate22)[player] = (shapetbl *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_LicenseCheck__FiPiT1P8Car_tObji(int reload /*$a0*/, int *license_vx /*$t0*/, int *license_vy /*$t1*/, struct Car_tObj *carObj /*$a3*/, int plate /*stack 16*/)
 // line 497, offset 0x800bc668
	/* begin block 1 */
		// Start line: 498
		// Start offset: 0x800BC668

		/* begin block 1.1 */
			// Start line: 498
			// Start offset: 0x800BC668

			/* begin block 1.1.1 */
				// Start line: 500
				// Start offset: 0x800BC690
				// Variables:
			// 		int sfx_vx; // $a2
			// 		int sfx_vy; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800BC690
			// End Line: 501
		/* end block 1.1 */
		// End offset: 0x800BC6FC
		// End Line: 512
	/* end block 1 */
	// End offset: 0x800BC6FC
	// End Line: 512

	/* begin block 2 */
		// Start line: 1072
	/* end block 2 */
	// End Line: 1073

	/* begin block 3 */
		// Start line: 1079
	/* end block 3 */
	// End Line: 1080

	/* begin block 4 */
		// Start line: 1079
	/* end block 4 */
	// End Line: 1080

void CarIO_LicenseCheck__FiPiT1P8Car_tObji
               (int reload,int *license_vx,int *license_vy,Car_tObj *carObj,int plate)

{
  short sVar1;
  short sVar2;
  
  if (((reload & 2U) != 0) && (CarIO_licenseSFX_Count < 0xc)) {
    plate = (int)&(carObj->N).objID + plate;
    sVar1 = (&CarIO_licenseSFX_Vram)[CarIO_licenseSFX_Count * 2];
    sVar2 = SHORT_ARRAY_8011ebea[CarIO_licenseSFX_Count * 2];
    *(char *)(plate + 0x8cc) = (((byte)sVar1 & 0x3f) - ((byte)*license_vx & 0x3f)) * '\x04';
    *(char *)(plate + 0x8ce) = (char)sVar2 - *(char *)license_vy;
    *license_vx = (int)sVar1;
    *license_vy = (int)sVar2;
    CarIO_licenseSFX_Count = CarIO_licenseSFX_Count + 1;
    return;
  }
  plate = (int)&(carObj->N).objID + plate;
  *(undefined *)(plate + 0x8ce) = 0;
  *(undefined *)(plate + 0x8cc) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_ReadInCarTextureData__FPcP8Car_tObjii(char *shpfile /*stack 0*/, struct Car_tObj *carObj /*stack 4*/, int reload /*stack 8*/, int player /*$s0*/)
 // line 515, offset 0x800bc704
	/* begin block 1 */
		// Start line: 516
		// Start offset: 0x800BC704
		// Variables:
	// 		int i; // $s3
	// 		int carType; // stack offset -72
	// 		int vx; // $s6
	// 		int vy; // $s7
	// 		int carPixMapCount; // stack offset -68
	// 		int recolor_flag; // stack offset -64

		/* begin block 1.1 */
			// Start line: 516
			// Start offset: 0x800BC704

			/* begin block 1.1.1 */
				// Start line: 528
				// Start offset: 0x800BC758

				/* begin block 1.1.1.1 */
					// Start line: 529
					// Start offset: 0x800BC758

					/* begin block 1.1.1.1.1 */
						// Start line: 530
						// Start offset: 0x800BC76C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 531
							// Start offset: 0x800BC76C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 535
								// Start offset: 0x800BC7B0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 536
									// Start offset: 0x800BC7B0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 537
										// Start offset: 0x800BC7C4
										// Variables:
									// 		int index; // $v0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800BC7C4
									// End Line: 538
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800BC808
								// End Line: 541
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800BC808
							// End Line: 541
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800BC818
						// End Line: 543
					/* end block 1.1.1.1.1 */
					// End offset: 0x800BC818
					// End Line: 543
				/* end block 1.1.1.1 */
				// End offset: 0x800BC828
				// End Line: 546
			/* end block 1.1.1 */
			// End offset: 0x800BC828
			// End Line: 546
		/* end block 1.1 */
		// End offset: 0x800BC894
		// End Line: 554

		/* begin block 1.2 */
			// Start line: 560
			// Start offset: 0x800BC8D0

			/* begin block 1.2.1 */
				// Start line: 561
				// Start offset: 0x800BC8E4

				/* begin block 1.2.1.1 */
					// Start line: 562
					// Start offset: 0x800BC8E4

					/* begin block 1.2.1.1.1 */
						// Start line: 563
						// Start offset: 0x800BC900
						// Variables:
					// 		int index; // $v1
					/* end block 1.2.1.1.1 */
					// End offset: 0x800BC938
					// End Line: 569
				/* end block 1.2.1.1 */
				// End offset: 0x800BC938
				// End Line: 569
			/* end block 1.2.1 */
			// End offset: 0x800BC950
			// End Line: 573
		/* end block 1.2 */
		// End offset: 0x800BC950
		// End Line: 573

		/* begin block 1.3 */
			// Start line: 580
			// Start offset: 0x800BC974

			/* begin block 1.3.1 */
				// Start line: 585
				// Start offset: 0x800BC9C4
				// Variables:
			// 		struct shapetbl *shape; // $s2
			// 		int palShare; // stack offset -60
			// 		int palette; // $s4

				/* begin block 1.3.1.1 */
					// Start line: 601
					// Start offset: 0x800BCA1C

					/* begin block 1.3.1.1.1 */
						// Start line: 602
						// Start offset: 0x800BCA24
						// Variables:
					// 		int license; // $s0

						/* begin block 1.3.1.1.1.1 */
							// Start line: 607
							// Start offset: 0x800BCA48

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 608
								// Start offset: 0x800BCA5C

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 609
									// Start offset: 0x800BCA5C

									/* begin block 1.3.1.1.1.1.1.1.1 */
										// Start line: 610
										// Start offset: 0x800BCA80
										// Variables:
									// 		int license_vx; // stack offset -104
									// 		int license_vy; // stack offset -100
									/* end block 1.3.1.1.1.1.1.1.1 */
									// End offset: 0x800BCA80
									// End Line: 611

									/* begin block 1.3.1.1.1.1.1.1.2 */
										// Start line: 623
										// Start offset: 0x800BCAF8

										/* begin block 1.3.1.1.1.1.1.1.2.1 */
											// Start line: 623
											// Start offset: 0x800BCAF8

											/* begin block 1.3.1.1.1.1.1.1.2.1.1 */
												// Start line: 624
												// Start offset: 0x800BCB08
												// Variables:
											// 		int license_vx; // stack offset -96
											// 		int license_vy; // stack offset -92
											/* end block 1.3.1.1.1.1.1.1.2.1.1 */
											// End offset: 0x800BCB84
											// End Line: 635
										/* end block 1.3.1.1.1.1.1.1.2.1 */
										// End offset: 0x800BCB84
										// End Line: 635
									/* end block 1.3.1.1.1.1.1.1.2 */
									// End offset: 0x800BCB84
									// End Line: 635
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x800BCB84
								// End Line: 635
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x800BCB84
							// End Line: 635
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x800BCB84
						// End Line: 635
					/* end block 1.3.1.1.1 */
					// End offset: 0x800BCBF8
					// End Line: 644
				/* end block 1.3.1.1 */
				// End offset: 0x800BCBF8
				// End Line: 644

				/* begin block 1.3.1.2 */
					// Start line: 647
					// Start offset: 0x800BCBF8

					/* begin block 1.3.1.2.1 */
						// Start line: 648
						// Start offset: 0x800BCC00
						// Variables:
					// 		int palIndex; // $s0

						/* begin block 1.3.1.2.1.1 */
							// Start line: 659
							// Start offset: 0x800BCC50

							/* begin block 1.3.1.2.1.1.1 */
								// Start line: 662
								// Start offset: 0x800BCC6C
								// Variables:
							// 		int license; // $s0
							// 		unsigned short clut; // $v1
							// 		int cx; // $s4
							// 		int cy; // $s5

								/* begin block 1.3.1.2.1.1.1.1 */
									// Start line: 663
									// Start offset: 0x800BCC6C

									/* begin block 1.3.1.2.1.1.1.1.1 */
										// Start line: 671
										// Start offset: 0x800BCC94

										/* begin block 1.3.1.2.1.1.1.1.1.1 */
											// Start line: 672
											// Start offset: 0x800BCC94

											/* begin block 1.3.1.2.1.1.1.1.1.1.1 */
												// Start line: 673
												// Start offset: 0x800BCCBC
												// Variables:
											// 		int license_vx; // stack offset -88
											// 		int license_vy; // stack offset -84
											/* end block 1.3.1.2.1.1.1.1.1.1.1 */
											// End offset: 0x800BCCBC
											// End Line: 674

											/* begin block 1.3.1.2.1.1.1.1.1.1.2 */
												// Start line: 686
												// Start offset: 0x800BCD30

												/* begin block 1.3.1.2.1.1.1.1.1.1.2.1 */
													// Start line: 686
													// Start offset: 0x800BCD30

													/* begin block 1.3.1.2.1.1.1.1.1.1.2.1.1 */
														// Start line: 687
														// Start offset: 0x800BCD40
														// Variables:
													// 		int license_vx; // stack offset -80
													// 		int license_vy; // stack offset -76
													/* end block 1.3.1.2.1.1.1.1.1.1.2.1.1 */
													// End offset: 0x800BCDB8
													// End Line: 698
												/* end block 1.3.1.2.1.1.1.1.1.1.2.1 */
												// End offset: 0x800BCDB8
												// End Line: 698
											/* end block 1.3.1.2.1.1.1.1.1.1.2 */
											// End offset: 0x800BCDB8
											// End Line: 698
										/* end block 1.3.1.2.1.1.1.1.1.1 */
										// End offset: 0x800BCDB8
										// End Line: 698
									/* end block 1.3.1.2.1.1.1.1.1 */
									// End offset: 0x800BCDB8
									// End Line: 698
								/* end block 1.3.1.2.1.1.1.1 */
								// End offset: 0x800BCDB8
								// End Line: 698
							/* end block 1.3.1.2.1.1.1 */
							// End offset: 0x800BCE38
							// End Line: 707
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x800BCE38
						// End Line: 707
					/* end block 1.3.1.2.1 */
					// End offset: 0x800BCE38
					// End Line: 707
				/* end block 1.3.1.2 */
				// End offset: 0x800BCE38
				// End Line: 707
			/* end block 1.3.1 */
			// End offset: 0x800BCE38
			// End Line: 711
		/* end block 1.3 */
		// End offset: 0x800BCE60
		// End Line: 712
	/* end block 1 */
	// End offset: 0x800BCE80
	// End Line: 714

	/* begin block 2 */
		// Start line: 1116
	/* end block 2 */
	// End Line: 1117

	/* begin block 3 */
		// Start line: 1120
	/* end block 3 */
	// End Line: 1121

	/* begin block 4 */
		// Start line: 1120
	/* end block 4 */
	// End Line: 1121

void CarIO_ReadInCarTextureData__FPcP8Car_tObjii
               (char *shpfile,Car_tObj *carObj,int reload,int player)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *n;
  int cx;
  uint cy;
  uint rx;
  int ry;
  CarIO_textureInfo *pCVar7;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  shapetbl **local_38;
  shapetbl **local_34;
  Car_tObj *local_30;
  
  local_40 = 8;
  local_48 = (int)(carObj->render).palNum;
  if ((reload & 1U) == 0) {
    if (R3DCar_InMenu == 0) {
      sVar1 = (&CarIO_carVRamSlots)[CarIO_carVRamCount * 2];
      (carObj->render).palCopyNum[3] = sVar1;
      rx = SEXT24(sVar1);
      ry = (int)SHORT_ARRAY_8011ea6a[CarIO_carVRamCount * 2];
      (carObj->render).palCopyNum[4] = SHORT_ARRAY_8011ea6a[CarIO_carVRamCount * 2];
      if (local_48 < 0x1c) {
        if (((carObj->render).palCopyNum[1] & 1U) == 0) {
          CarIO_carVRamCount = CarIO_carVRamCount + 3;
        }
        else {
          CarIO_carVRamCount =
               CarIO_carVRamCount + (int)CarIO_carVRamAdd[CarIO_carVRamCount / 3] * 3;
        }
      }
      else {
        CarIO_carVRamCount = CarIO_carVRamCount + 1;
      }
    }
    else {
      sVar1 = (&CarIO_carVRamSlotsMenu)[CarIO_carVRamCount * 2];
      (carObj->render).palCopyNum[3] = sVar1;
      rx = SEXT24(sVar1);
      sVar1 = SHORT_ARRAY_8011eab2[CarIO_carVRamCount * 2];
      (carObj->render).palCopyNum[4] = sVar1;
      CarIO_carVRamCount = CarIO_carVRamCount + (int)CarIO_carVRamAdd[CarIO_carVRamCount];
      ry = (int)sVar1;
    }
  }
  else {
    rx = SEXT24((carObj->render).palCopyNum[3]);
    ry = (int)(carObj->render).palCopyNum[4];
  }
  if ((reload & 0x10U) == 0) {
    local_44 = CarIO_carPixMapCount;
    carObj->audio[5].type = CarIO_carPixMapCount;
  }
  else {
    local_44 = carObj->audio[5].type;
  }
  if ((reload & 8U) != 0) {
    if (((carObj->render).palCopyNum[1] & 1U) != 0) {
      iVar4 = rx - 0x200;
      if (R3DCar_InMenu == 0) {
        iVar4 = rx - 0x280;
      }
      rx = rx + (int)CarIO_carVRamOffset[iVar4 >> 6];
    }
    (carObj->render).palCopyNum[5] = (short)((rx & 0x3f) << 2);
    (carObj->render).palCopyNum[6] = (ushort)ry & 0xff;
  }
  iVar4 = 0;
  if (R3DCar_InMenu == 0) {
    local_40 = 0x18;
  }
  Texture_palCopy = (Texture_pal8bit *)(carObj->render).currentPitch;
  iVar6 = local_44 << 4;
  Texture_ResetPaletteSharing__Fv();
  local_38 = &CarIO_Plate12 + player;
  local_34 = &CarIO_Plate22 + player;
  pCVar7 = CarIO_textureName;
  local_30 = carObj;
  while (iVar4 < 0x33) {
    bVar3 = true;
    n = (char *)locateshapez((int)shpfile,(int *)pCVar7->pal);
    local_3c = pCVar7->palShare;
    if ((n == (char *)0x0) && (local_3c == 0)) {
      bVar3 = false;
      n = (char *)locateshapez((int)shpfile,(int *)pCVar7->tex);
    }
    if (iVar4 == 0x14) {
      local_40 = 0;
    }
    if (n != (char *)0x0) {
      bVar2 = false;
      if (local_40 != 0) {
        *(undefined2 *)((int)&(local_30->render).currentRoll + 2) = (undefined2)Texture_palNum;
      }
      if (local_48 < 0x16) {
        if (iVar4 == (int)(&CarIO_licensePlate)[local_48 * 6]) {
          local_68 = rx + (int)(&SHORT_8011eae2)[local_48 * 6];
          local_64 = ry + (int)(&SHORT_8011eae4)[local_48 * 6];
          CarIO_LicenseCheck__FiPiT1P8Car_tObji(reload,&local_68,&local_64,carObj,0);
          Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                    ((char *)0x0,(char *)*local_38,local_40,local_68,local_64,-1,-1,
                     (Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar6));
          bVar2 = true;
          *(undefined2 *)((int)&CarIO_carPixMap->flag + iVar6) = 1;
        }
        else {
          if (iVar4 == (int)(&SHORT_8011eae6)[local_48 * 6]) {
            local_60 = rx + (int)(&SHORT_8011eae8)[local_48 * 6];
            local_5c = ry + (int)SHORT_ARRAY_8011eaea[local_48 * 6];
            CarIO_LicenseCheck__FiPiT1P8Car_tObji(reload,&local_60,&local_5c,carObj,1);
            Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                      ((char *)0x0,(char *)*local_34,local_40,local_60,local_5c,-1,-1,
                       (Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar6));
            bVar2 = true;
            *(undefined2 *)((int)&CarIO_carPixMap->flag + iVar6) = 2;
          }
        }
      }
      if (!bVar2) {
        Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                  ((char *)0x0,n,local_40,rx,ry,-1,-1,(Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar6)
                  );
      }
      if (iVar4 == 0x20) {
        ChangeTPage__FPUsi((ushort *)((int)&CarIO_carPixMap->tpage + iVar6),2);
      }
      *(ushort *)(&CarIO_carPixMap->u0 + iVar6 + 0xe) =
           *(ushort *)(&CarIO_carPixMap->u0 + iVar6 + 0xe) | 0x80;
    }
    if (bVar3) {
      iVar5 = local_44;
      if (local_3c != 0) {
        if (local_40 != 0) {
          *(undefined2 *)((int)&(local_30->render).currentRoll + 2) =
               *(undefined2 *)((int)&(carObj->render).currentRoll + (local_3c + -1) * 2 + 2);
        }
        iVar5 = local_3c + -1 + carObj->audio[5].type;
      }
      n = (char *)locateshapez((int)shpfile,(int *)pCVar7->tex);
      if (n != (char *)0x0) {
        bVar3 = false;
        cx = ((uint)CarIO_carPixMap[iVar5].clut & 0x3f) << 4;
        cy = (uint)(CarIO_carPixMap[iVar5].clut >> 6);
        if (local_48 < 0x16) {
          if (iVar4 == (int)(&CarIO_licensePlate)[local_48 * 6]) {
            local_58 = rx + (int)(&SHORT_8011eae2)[local_48 * 6];
            local_54 = ry + (int)(&SHORT_8011eae4)[local_48 * 6];
            CarIO_LicenseCheck__FiPiT1P8Car_tObji(reload,&local_58,&local_54,carObj,0);
            Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                      ((char *)0x0,(char *)*local_38,0x20,local_58,local_54,cx,cy,
                       (Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar6));
            bVar3 = true;
            *(undefined2 *)((int)&CarIO_carPixMap->flag + iVar6) = 1;
          }
          else {
            if (iVar4 == (int)(&SHORT_8011eae6)[local_48 * 6]) {
              local_50 = rx + (int)(&SHORT_8011eae8)[local_48 * 6];
              local_4c = ry + (int)SHORT_ARRAY_8011eaea[local_48 * 6];
              CarIO_LicenseCheck__FiPiT1P8Car_tObji(reload,&local_50,&local_4c,carObj,1);
              Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                        ((char *)0x0,(char *)*local_34,0x20,local_50,local_4c,cx,cy,
                         (Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar6));
              bVar3 = true;
              *(undefined2 *)((int)&CarIO_carPixMap->flag + iVar6) = 2;
            }
          }
        }
        if (!bVar3) {
          Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                    ((char *)0x0,n,0x20,rx,ry,cx,cy,(Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar6));
        }
        if (iVar4 == 0x20) {
          ChangeTPage__FPUsi((ushort *)((int)&CarIO_carPixMap->tpage + iVar6),2);
        }
        if (local_3c == 0) {
          *(ushort *)(&CarIO_carPixMap->u0 + iVar6 + 0xe) =
               *(ushort *)(&CarIO_carPixMap->u0 + iVar6 + 0xe) | 0x80;
        }
      }
    }
    iVar6 = iVar6 + 0x10;
    pCVar7 = pCVar7 + 1;
    iVar4 = iVar4 + 1;
    local_44 = local_44 + 1;
    local_30 = (Car_tObj *)((int)&(local_30->N).objID + 2);
  }
  if ((reload & 0x80U) != 0) {
    CarIO_carPixMapCount = local_44;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_UpdateCarTextureData__FPcP8Car_tObji(char *shpfile /*stack 0*/, struct Car_tObj *carObj /*stack 4*/, int player /*$s0*/)
 // line 718, offset 0x800bceb0
	/* begin block 1 */
		// Start line: 719
		// Start offset: 0x800BCEB0
		// Variables:
	// 		int i; // $s6
	// 		int carType; // stack offset -72
	// 		int vx; // stack offset -68
	// 		int vy; // stack offset -64
	// 		int carPixMapCount; // stack offset -60
	// 		int recolor_flag; // $fp

		/* begin block 1.1 */
			// Start line: 733
			// Start offset: 0x800BCF20

			/* begin block 1.1.1 */
				// Start line: 738
				// Start offset: 0x800BCF74
				// Variables:
			// 		struct shapetbl *shape; // $s1
			// 		int palShare; // stack offset -56
			// 		int palette; // stack offset -52

				/* begin block 1.1.1.1 */
					// Start line: 754
					// Start offset: 0x800BCFD4

					/* begin block 1.1.1.1.1 */
						// Start line: 760
						// Start offset: 0x800BCFFC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 761
							// Start offset: 0x800BCFFC

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 762
								// Start offset: 0x800BCFFC
								// Variables:
							// 		int license; // $s0
							// 		unsigned short clut; // $v1
							// 		int cx; // $s3
							// 		int cy; // $s4
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800BD14C
							// End Line: 795
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800BD14C
						// End Line: 795

						/* begin block 1.1.1.1.1.2 */
							// Start line: 798
							// Start offset: 0x800BD14C

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 799
								// Start offset: 0x800BD15C
								// Variables:
							// 		int palIndex; // $s0

								/* begin block 1.1.1.1.1.2.1.1 */
									// Start line: 810
									// Start offset: 0x800BD1A4

									/* begin block 1.1.1.1.1.2.1.1.1 */
										// Start line: 813
										// Start offset: 0x800BD1C0
										// Variables:
									// 		int license; // $s0
									// 		unsigned short clut; // $v1
									// 		int cx; // $s3
									// 		int cy; // $s4
									/* end block 1.1.1.1.1.2.1.1.1 */
									// End offset: 0x800BD304
									// End Line: 844
								/* end block 1.1.1.1.1.2.1.1 */
								// End offset: 0x800BD304
								// End Line: 844
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x800BD304
							// End Line: 844
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x800BD304
						// End Line: 844
					/* end block 1.1.1.1.1 */
					// End offset: 0x800BD304
					// End Line: 844
				/* end block 1.1.1.1 */
				// End offset: 0x800BD304
				// End Line: 844
			/* end block 1.1.1 */
			// End offset: 0x800BD304
			// End Line: 849
		/* end block 1.1 */
		// End offset: 0x800BD328
		// End Line: 850
	/* end block 1 */
	// End offset: 0x800BD328
	// End Line: 850

	/* begin block 2 */
		// Start line: 1603
	/* end block 2 */
	// End Line: 1604

	/* begin block 3 */
		// Start line: 1608
	/* end block 3 */
	// End Line: 1609

	/* begin block 4 */
		// Start line: 1608
	/* end block 4 */
	// End Line: 1609

void CarIO_UpdateCarTextureData__FPcP8Car_tObji(char *shpfile,Car_tObj *carObj,int player)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  shapetbl **ppsVar5;
  Draw_tPixMap *pmx;
  int iVar6;
  int rx;
  int ry;
  Car_tObj *pCVar7;
  int iVar8;
  char *n;
  int cx;
  int cx_00;
  uint cy;
  int iVar9;
  int iVar10;
  CarIO_textureInfo *pCVar11;
  int ctrl;
  int local_3c;
  
  local_3c = carObj->audio[5].type;
  iVar6 = (int)(carObj->render).palNum;
  rx = (int)(carObj->render).palCopyNum[3];
  ry = (int)(carObj->render).palCopyNum[4];
  ctrl = 8;
  if (R3DCar_InMenu == 0) {
    ctrl = 0x18;
  }
  Texture_palCopy = (Texture_pal8bit *)(carObj->render).currentPitch;
  iVar10 = 0;
  iVar9 = local_3c << 4;
  Texture_ResetPaletteSharing__Fv();
  pCVar11 = CarIO_textureName;
  pCVar7 = carObj;
  do {
    if (0x32 < iVar10) {
      return;
    }
    bVar4 = true;
    n = (char *)locateshapez((int)shpfile,(int *)pCVar11->pal);
    iVar8 = pCVar11->palShare;
    if ((n == (char *)0x0) && (iVar8 == 0)) {
      bVar4 = false;
      n = (char *)locateshapez((int)shpfile,(int *)pCVar11->tex);
    }
    if (iVar10 == 0x14) {
      ctrl = 0;
    }
    if (n == (char *)0x0) {
LAB_800bd14c:
      if (bVar4) {
        cx = local_3c;
        if (iVar8 != 0) {
          if (ctrl != 0) {
            *(undefined2 *)((int)&(pCVar7->render).currentRoll + 2) =
                 *(undefined2 *)((int)&(carObj->render).currentRoll + (iVar8 + -1) * 2 + 2);
          }
          cx = iVar8 + -1 + carObj->audio[5].type;
        }
        n = (char *)locateshapez((int)shpfile,(int *)pCVar11->tex);
        if (n != (char *)0x0) {
          bVar4 = false;
          cx_00 = ((uint)CarIO_carPixMap[cx].clut & 0x3f) << 4;
          cy = (uint)(CarIO_carPixMap[cx].clut >> 6);
          if (iVar6 < 0x16) {
            if (iVar10 == (int)(&CarIO_licensePlate)[iVar6 * 6]) {
              sVar1 = (&SHORT_8011eae2)[iVar6 * 6];
              sVar2 = (&SHORT_8011eae4)[iVar6 * 6];
              ppsVar5 = &CarIO_Plate12;
            }
            else {
              if (iVar10 != (int)(&SHORT_8011eae6)[iVar6 * 6]) goto LAB_800bd280;
              sVar1 = (&SHORT_8011eae8)[iVar6 * 6];
              sVar2 = SHORT_ARRAY_8011eaea[iVar6 * 6];
              ppsVar5 = &CarIO_Plate22;
            }
            bVar4 = true;
            Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                      ((char *)0x0,(char *)ppsVar5[player],0x20,rx + (int)sVar1,ry + (int)sVar2,
                       cx_00,cy,(Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar9));
          }
LAB_800bd280:
          if (!bVar4) {
            Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                      ((char *)0x0,n,0x20,rx,ry,cx_00,cy,
                       (Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar9));
          }
          if (iVar10 == 0x20) {
            ChangeTPage__FPUsi((ushort *)((int)&CarIO_carPixMap->tpage + iVar9),2);
          }
          if (iVar8 == 0) {
            *(ushort *)(&CarIO_carPixMap->u0 + iVar9 + 0xe) =
                 *(ushort *)(&CarIO_carPixMap->u0 + iVar9 + 0xe) | 0x80;
          }
        }
      }
    }
    else {
      pmx = (Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar9);
      bVar3 = false;
      if ((pmx->flag & 0x80) != 0) {
        cx = ((uint)pmx->clut & 0x3f) << 4;
        cy = (uint)(pmx->clut >> 6);
        if (ctrl != 0) {
          Texture_palNum = (int)*(short *)((int)&(pCVar7->render).currentRoll + 2);
        }
        if (iVar6 < 0x16) {
          if (iVar10 == (int)(&CarIO_licensePlate)[iVar6 * 6]) {
            sVar1 = (&SHORT_8011eae4)[iVar6 * 6];
            sVar2 = (&SHORT_8011eae2)[iVar6 * 6];
            ppsVar5 = &CarIO_Plate12;
          }
          else {
            if (iVar10 != (int)(&SHORT_8011eae6)[iVar6 * 6]) goto LAB_800bd0d8;
            sVar1 = SHORT_ARRAY_8011eaea[iVar6 * 6];
            sVar2 = (&SHORT_8011eae8)[iVar6 * 6];
            ppsVar5 = &CarIO_Plate22;
          }
          bVar3 = true;
          Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                    ((char *)0x0,(char *)ppsVar5[player],ctrl,rx + (int)sVar2,ry + (int)sVar1,cx,cy,
                     pmx);
        }
LAB_800bd0d8:
        if (!bVar3) {
          Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                    ((char *)0x0,n,ctrl,rx,ry,cx,cy,(Draw_tPixMap *)(&CarIO_carPixMap->u0 + iVar9));
        }
        if (iVar10 == 0x20) {
          ChangeTPage__FPUsi((ushort *)((int)&CarIO_carPixMap->tpage + iVar9),2);
        }
        *(ushort *)(&CarIO_carPixMap->u0 + iVar9 + 0xe) =
             *(ushort *)(&CarIO_carPixMap->u0 + iVar9 + 0xe) | 0x80;
        goto LAB_800bd14c;
      }
    }
    iVar9 = iVar9 + 0x10;
    pCVar11 = pCVar11 + 1;
    local_3c = local_3c + 1;
    iVar10 = iVar10 + 1;
    pCVar7 = (Car_tObj *)((int)&(pCVar7->N).objID + 2);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CarIO_ReleaseCarCluts__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 856, offset 0x800bd358
	/* begin block 1 */
		// Start line: 857
		// Start offset: 0x800BD358
		// Variables:
	// 		int i; // $s0
	// 		int carPixMapCount; // $s1
	/* end block 1 */
	// End offset: 0x800BD3AC
	// End Line: 872

	/* begin block 2 */
		// Start line: 1915
	/* end block 2 */
	// End Line: 1916

	/* begin block 3 */
		// Start line: 1922
	/* end block 3 */
	// End Line: 1923

	/* begin block 4 */
		// Start line: 1922
	/* end block 4 */
	// End Line: 1923

void CarIO_ReleaseCarCluts__FP8Car_tObj(Car_tObj *carObj)

{
  Draw_tPixMap *pDVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = carObj->audio[5].type;
  do {
    pDVar1 = CarIO_carPixMap + iVar3;
    if ((pDVar1->flag & 0x80) != 0) {
      pDVar1->flag = 0;
      Texture_MenuReleaseClutId__Fs(pDVar1->clut);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x33);
  return;
}





