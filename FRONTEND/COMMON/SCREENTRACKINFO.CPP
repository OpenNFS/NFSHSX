#include "THISDUST.H"
#include "SCREENTRACKINFO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__16tScreenTrackInfoRsT1PPcT3(struct tScreenTrackInfo *this /*$s1*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$s2*/, char **swapFileName /*stack 16*/)
 // line 46, offset 0x800421f8
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x800421F8
	/* end block 1 */
	// End offset: 0x800421F8
	// End Line: 47

	/* begin block 2 */
		// Start line: 92
	/* end block 2 */
	// End Line: 93

	/* begin block 3 */
		// Start line: 92
	/* end block 3 */
	// End Line: 93

void GetShapeInfo__16tScreenTrackInfoRsT1PPcT3
               (tScreenTrackInfo *this,short *numPermShapes,short *numSwapShapes,char **permFileName
               ,char **swapFileName)

{
  *numPermShapes = 0x2b;
  *numSwapShapes = 10;
  GetTrackToRace__18tTournamentManagerR10tTrackInfo
            (&tournamentManager,(tTrackInfo *)((this->tScreen)._vf + 6));
  *permFileName = s_zInfo_80011f58;
  sprintf(gSwapFileName,s_TR_02d_c_80011f60,(int)(char)(this->tScreen)._vf[6],
          (uint)(byte)(this->tScreen)._vf[9] * 2 + (uint)(byte)(this->fTrack).fTrackNumber + 0x61);
  *swapFileName = gSwapFileName;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__16tScreenTrackInfo(struct tScreenTrackInfo *this /*$s3*/)
 // line 58, offset 0x80042298
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x80042298
		// Variables:
	// 		unsigned int i; // $s0
	// 		short trackConditions[4]; // stack offset -40
	// 		struct tTrackInformation *trackInfo; // $s5

		/* begin block 1.1 */
			// Start line: 65
			// Start offset: 0x80042324

			/* begin block 1.1.1 */
				// Start line: 68
				// Start offset: 0x8004233C

				/* begin block 1.1.1.1 */
					// Start line: 68
					// Start offset: 0x8004234C

					/* begin block 1.1.1.1.1 */
						// Start line: 68
						// Start offset: 0x8004234C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004234C
					// End Line: 68
				/* end block 1.1.1.1 */
				// End offset: 0x8004234C
				// End Line: 68
			/* end block 1.1.1 */
			// End offset: 0x80042360
			// End Line: 72
		/* end block 1.1 */
		// End offset: 0x80042388
		// End Line: 72
	/* end block 1 */
	// End offset: 0x800423C8
	// End Line: 78

	/* begin block 2 */
		// Start line: 122
	/* end block 2 */
	// End Line: 123

	/* begin block 3 */
		// Start line: 126
	/* end block 3 */
	// End Line: 127

	/* begin block 4 */
		// Start line: 126
	/* end block 4 */
	// End Line: 127

void DrawBackground__16tScreenTrackInfo(tScreenTrackInfo *this)

{
  byte bVar1;
  short index;
  tTrackInformation *ptVar2;
  short *psVar3;
  tMenuTextState textState;
  int iVar4;
  uint uVar5;
  tVideoWall *this_00;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = DAT_80011f6c;
  local_24 = DAT_80011f70;
  ptVar2 = GetTrackByID__13tTrackManagers(&trackManager,(short)(char)(this->tScreen)._vf[6]);
  bVar1 = frontEnd.tournament;
  if (frontEnd.tier != '\0') {
    bVar1 = frontEnd.specialevent;
  }
  iVar4 = 0;
  psVar3 = GetTrackList__18tTournamentManagerss
                     (&tournamentManager,(ushort)(byte)frontEnd.tier,(ushort)bVar1);
  puVar7 = (undefined *)0x8f0000;
  while (*psVar3 != 0) {
    textState = textState_Selected;
    if (iVar4 == tournamentManager.fCurrentTrack) {
      textState = textState_Hilighted;
    }
    FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType
              (*psVar3,0xaa,(short)((uint)puVar7 >> 0x10),textState,textType_ScreenInfo);
    puVar7 = &DAT_00090000 + (int)puVar7;
    psVar3 = psVar3 + 1;
    iVar4 = iVar4 + 1;
  }
  uVar5 = 0;
  iVar4 = 0x8f0000;
  puVar6 = &local_28;
  do {
    index = *(short *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 2);
    uVar5 = uVar5 + 1;
    FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType
              (index,0x154,(short)((uint)iVar4 >> 0x10),textState_Selected,textType_ScreenInfo);
    iVar4 = iVar4 + 0x120000;
  } while (uVar5 < 4);
  FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
            (SelectListTrackDirection[(uint)(byte)(this->tScreen)._vf[7]],0x1e0,0x98,1,
             textState_Hilighted,textType_ScreenInfo);
  FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
            (SelectListOffOn[(uint)(byte)(this->tScreen)._vf[8]],0x1e0,0xaa,1,textState_Hilighted,
             textType_ScreenInfo);
  FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
            (SelectListOffOn[(uint)(byte)(this->tScreen)._vf[9]],0x1e0,0xbc,1,textState_Hilighted,
             textType_ScreenInfo);
  FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
            (SelectListOffOn[(uint)(byte)(this->fTrack).fTrackNumber],0x1e0,0xce,1,
             textState_Hilighted,textType_ScreenInfo);
  FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
            ((ushort)ptVar2->fSpeedoCountry + 0x43,0x1de,0x21,1,textState_Unselected,
             textType_TrackRecords);
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi
            ((tScreen *)this,0,0x21,(this->tScreen).fPermShapes.fShapes,0);
  PSXDrawTransSquare__Fiiiiis(0,0x140,0x1e,0xa0,10,1);
  FeDraw_SetABRMode__Fi(0);
  this_00 = (tVideoWall *)&this->tvConfigs[9].flip_axis;
  UpdateTransition__10tVideoWall(this_00);
  Draw__10tVideoWall(this_00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__16tScreenTrackInfo(struct tScreenTrackInfo *this /*$s0*/)
 // line 97, offset 0x80042520
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80042520
	/* end block 1 */
	// End offset: 0x80042520
	// End Line: 98

	/* begin block 2 */
		// Start line: 203
	/* end block 2 */
	// End Line: 204

	/* begin block 3 */
		// Start line: 208
	/* end block 3 */
	// End Line: 209

	/* begin block 4 */
		// Start line: 208
	/* end block 4 */
	// End Line: 209

void Initialize__16tScreenTrackInfo(tScreenTrackInfo *this)

{
  tVideoWall *this_00;
  
  Initialize__7tScreen((tScreen *)this);
  this_00 = (tVideoWall *)&this->tvConfigs[9].flip_axis;
  Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss
            (this_00,(tTVConfig *)(this->fTrack).fReserved,(this->tScreen).fSwapShapes.fShapes,0,10,
             tvOrder,0);
  UpdateImages__10tVideoWall(this_00);
  TurnOn__10tVideoWall(this_00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__16tScreenTrackInfo7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTrackInfo *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 108, offset 0x8004258c
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x8004258C

		/* begin block 1.1 */
			// Start line: 109
			// Start offset: 0x8004258C

			/* begin block 1.1.1 */
				// Start line: 113
				// Start offset: 0x800425A4

				/* begin block 1.1.1.1 */
					// Start line: 114
					// Start offset: 0x800425A4

					/* begin block 1.1.1.1.1 */
						// Start line: 114
						// Start offset: 0x800425A4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 114
							// Start offset: 0x800425A4
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800425A4
						// End Line: 114
					/* end block 1.1.1.1.1 */
					// End offset: 0x800425A4
					// End Line: 114

					/* begin block 1.1.1.1.2 */
						// Start line: 117
						// Start offset: 0x800425C4

						/* begin block 1.1.1.1.2.1 */
							// Start line: 117
							// Start offset: 0x800425C4

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 117
								// Start offset: 0x800425C4
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x800425C4
							// End Line: 117
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x800425C4
						// End Line: 117

						/* begin block 1.1.1.1.2.2 */
							// Start line: 117
							// Start offset: 0x800425C4

							/* begin block 1.1.1.1.2.2.1 */
								// Start line: 117
								// Start offset: 0x800425C4
							/* end block 1.1.1.1.2.2.1 */
							// End offset: 0x80042618
							// End Line: 119
						/* end block 1.1.1.1.2.2 */
						// End offset: 0x80042618
						// End Line: 119
					/* end block 1.1.1.1.2 */
					// End offset: 0x80042618
					// End Line: 119
				/* end block 1.1.1.1 */
				// End offset: 0x80042618
				// End Line: 119
			/* end block 1.1.1 */
			// End offset: 0x80042618
			// End Line: 119
		/* end block 1.1 */
		// End offset: 0x80042618
		// End Line: 119
	/* end block 1 */
	// End offset: 0x80042618
	// End Line: 119

	/* begin block 2 */
		// Start line: 225
	/* end block 2 */
	// End Line: 226

	/* begin block 3 */
		// Start line: 230
	/* end block 3 */
	// End Line: 231

	/* begin block 4 */
		// Start line: 230
	/* end block 4 */
	// End Line: 231

void ProcessInput__16tScreenTrackInfo7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenTrackInfo *this,tPlayer fromPlayer,tInputKeyType *keyval,
               tMenuCommand *command)

{
  if ((*keyval == kInput_KeyType_Triangle) &&
     (TurnOffInstant__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis),
     tournamentManager.fCurrentTrack == 0)) {
    tournamentManager.fMoney =
         tournamentManager.fMoney +
         (tournamentManager.fDefinition)->fTournaments
         [(uint)(tournamentManager.fDefinition)->fTiers[tournamentManager.fTier].fTournOffset +
          tournamentManager.fTournament].fEntranceFee;
  }
  return;
}





