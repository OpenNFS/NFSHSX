#include "NFS4.H"
#include "HUDPMX.H"

// decompiled code
// original method signature: 
// void /*$ra*/ HudPmx_LoadShape__FPcP13HudPmx_tShape(char *n /*$s1*/, struct HudPmx_tShape *s /*$s0*/)
 // line 24, offset 0x80092464
	/* begin block 1 */
		// Start line: 25
		// Start offset: 0x80092464
		// Variables:
	// 		struct shapetbl *shp; // $v0
	/* end block 1 */
	// End offset: 0x80092464
	// End Line: 25

void HudPmx_LoadShape__FPcP13HudPmx_tShape(char *n,HudPmx_tShape *s)
{
  char *f;
  int iVar1;
  uint uVar2;
  
  iVar1 = locateshape(_gShpfile,n);
  f = _gShpfile;
  uVar2 = (uint)loadShapeXOff;
  s->width = *(short *)(iVar1 + 4);
  s->height = *(short *)(iVar1 + 6);
  Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap(f,n,0x41,uVar2 + 0x80,0x80,-1,-1,(Draw_tPixMap *)s);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ HudPmx_InitTextures__Fv()
 // line 40, offset 0x800924dc
	/* begin block 1 */
		// Start line: 41
		// Start offset: 0x800924DC
		// Variables:
	// 		int carType0; // $a0
	// 		int carType1; // $a1
	// 		char name[256]; // stack offset -1608
	// 		int i; // $s1
	// 		char *tachs[29]; // stack offset -1352
	// 		char *ntachs[29]; // stack offset -1232
	// 		char mapname[5]; // stack offset -1112
	// 		char *shapes[132]; // stack offset -1104

		/* begin block 1.1 */
			// Start line: 102
			// Start offset: 0x80092BBC

			/* begin block 1.1.1 */
				// Start line: 102
				// Start offset: 0x80092BBC

				/* begin block 1.1.1.1 */
					// Start line: 126
					// Start offset: 0x80092C0C
					// Variables:
				// 		int u; // stack offset -48
				// 		int v; // stack offset -44
				// 		int w; // stack offset -40
				// 		int h; // stack offset -36
				// 		int yo; // stack offset -32
				/* end block 1.1.1.1 */
				// End offset: 0x80092C18
				// End Line: 129
			/* end block 1.1.1 */
			// End offset: 0x80092C68
			// End Line: 133
		/* end block 1.1 */
		// End offset: 0x80092C68
		// End Line: 133

		/* begin block 1.2 */
			// Start line: 167
			// Start offset: 0x80092D80

			/* begin block 1.2.1 */
				// Start line: 167
				// Start offset: 0x80092D94
				// Variables:
			// 		static char alph[5]; // offset 0x4e8
			/* end block 1.2.1 */
			// End offset: 0x80092DA0
			// End Line: 170
		/* end block 1.2 */
		// End offset: 0x80092DBC
		// End Line: 172

		/* begin block 1.3 */
			// Start line: 173
			// Start offset: 0x80092DBC

			/* begin block 1.3.1 */
				// Start line: 173
				// Start offset: 0x80092DD4
				// Variables:
			// 		static char alph[5]; // offset 0x4f0
			/* end block 1.3.1 */
			// End offset: 0x80092DE0
			// End Line: 176
		/* end block 1.3 */
		// End offset: 0x80092DFC
		// End Line: 178
	/* end block 1 */
	// End offset: 0x80092F08
	// End Line: 205

void HudPmx_InitTextures__Fv(void)
{
  undefined **ppuVar1;
  char **ppcVar2;
  char **ppcVar3;
  char *n;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  HudPmx_tShape *s;
  int iVar7;
  int iVar8;
  char acStack1608 [256];
  char *local_548 [30];
  char *local_4d0 [30];
  char acStack1112 [8];
  char *local_450;
  char *local_44c [73];
  char *local_328 [55];
  char *local_24c;
  char *local_244;
  char *local_240;
  undefined *local_23c;
  undefined *local_238;
  undefined *local_234;
  undefined *local_230;
  undefined *local_22c;
  undefined *local_228;
  undefined *local_224;
  undefined *local_220;
  undefined *local_21c;
  undefined *local_218;
  undefined *local_214;
  undefined *local_210;
  undefined *local_20c;
  undefined *local_208;
  undefined *local_204;
  undefined *local_200;
  undefined *local_1fc;
  undefined *local_1f8;
  undefined *local_1f4;
  undefined *local_1f0;
  undefined *local_1ec;
  undefined *local_1e8;
  undefined *local_1e4;
  undefined *local_1e0;
  undefined *local_1dc;
  undefined *local_1d8;
  undefined *local_1d4;
  undefined *local_1d0;
  undefined *local_1cc;
  undefined *local_1c8;
  undefined *local_1c4;
  undefined *local_1c0;
  undefined *local_1bc;
  undefined *local_1b8;
  undefined *local_1b4;
  undefined *local_1b0;
  undefined *local_1ac;
  undefined *local_1a8;
  undefined *local_1a4;
  undefined *local_1a0;
  undefined *local_19c;
  undefined *local_198;
  undefined *local_194;
  undefined *local_190;
  undefined *local_18c;
  undefined *local_188;
  undefined *local_184;
  undefined *local_180;
  undefined *local_17c;
  undefined *local_178;
  undefined *local_174;
  undefined *local_170;
  undefined *local_16c;
  undefined *local_168;
  undefined *local_164;
  undefined *local_160;
  undefined *local_15c;
  undefined *local_158;
  undefined *local_154;
  undefined *local_150;
  undefined *local_14c;
  undefined *local_148;
  undefined *local_144;
  undefined *local_140;
  undefined *local_13c;
  undefined *local_138;
  undefined *local_134;
  undefined *local_130;
  undefined *local_12c;
  undefined *local_128;
  undefined *local_124;
  undefined *local_120;
  undefined *local_11c;
  undefined *local_118;
  undefined *local_114;
  undefined *local_110;
  undefined *local_10c;
  undefined *local_108;
  undefined *local_104;
  undefined *local_100;
  undefined *local_fc;
  undefined *local_f8;
  undefined *local_f4;
  undefined *local_f0;
  undefined *local_ec;
  undefined *local_e8;
  undefined *local_e4;
  undefined *local_e0;
  undefined *local_dc;
  undefined *local_d8;
  undefined *local_d4;
  undefined *local_d0;
  undefined *local_cc;
  undefined *local_c8;
  undefined *local_c4;
  undefined *local_c0;
  undefined *local_bc;
  undefined *local_b8;
  undefined *local_b4;
  undefined *local_b0;
  undefined *local_ac;
  undefined *local_a8;
  undefined *local_a4;
  undefined *local_a0;
  undefined *local_9c;
  undefined *local_98;
  undefined *local_94;
  undefined *local_90;
  undefined *local_8c;
  undefined *local_88;
  undefined *local_84;
  undefined *local_80;
  undefined *local_7c;
  undefined *local_78;
  undefined *local_74;
  undefined *local_70;
  undefined *local_6c;
  undefined *local_68;
  undefined *local_64;
  char *local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  char *local_3c;
  undefined *local_38;
  char *local_34;
  undefined local_30 [4];
  undefined local_2c [4];
  int iStack40;
  int iStack36;
  int aiStack32 [2];
  
  ppcVar2 = local_548;
  ppuVar1 = &PTR_DAT_80055a54;
  do {
    n = ppuVar1[1];
    pcVar4 = ppuVar1[2];
    pcVar5 = ppuVar1[3];
    *ppcVar2 = *ppuVar1;
    ppcVar2[1] = n;
    ppcVar2[2] = pcVar4;
    ppcVar2[3] = pcVar5;
    ppuVar1 = ppuVar1 + 4;
    ppcVar2 = ppcVar2 + 4;
  } while (ppuVar1 != &PTR_DAT_80055ac4);
  *ppcVar2 = "tbon";
  ppcVar2 = local_4d0;
  ppuVar1 = &PTR_DAT_80055ac8;
  do {
    n = ppuVar1[1];
    pcVar4 = ppuVar1[2];
    pcVar5 = ppuVar1[3];
    *ppcVar2 = *ppuVar1;
    ppcVar2[1] = n;
    ppcVar2[2] = pcVar4;
    ppcVar2[3] = pcVar5;
    ppuVar1 = ppuVar1 + 4;
    ppcVar2 = ppcVar2 + 4;
  } while (ppuVar1 != &PTR_DAT_80055b38);
  local_60 = acStack1112;
  *ppcVar2 = "nbon";
  sprintf(local_60,"mp%02d",0);
  ppcVar3 = &local_450;
  ppcVar2 = &local_240;
  local_240 = "cmra";
  local_23c = &DAT_8013c96c;
  local_238 = &DAT_8013c974;
  local_234 = &DAT_8013c97c;
  local_230 = &DAT_8013c984;
  local_22c = &DAT_8013c98c;
  local_228 = &DAT_8013c994;
  local_224 = &DAT_8013c99c;
  local_220 = &DAT_8013c9a4;
  local_21c = &DAT_8013c9ac;
  local_218 = &DAT_8013c9b4;
  local_214 = &DAT_8013c9bc;
  local_210 = &DAT_8013c9c4;
  local_20c = &DAT_8013c9cc;
  local_208 = &DAT_8013c9d4;
  local_204 = &DAT_8013c9dc;
  local_200 = &DAT_8013c9e4;
  local_1fc = &DAT_8013c9ec;
  local_1f8 = &DAT_8013c9f4;
  local_1f4 = &DAT_8013c9fc;
  local_1f0 = &DAT_8013ca04;
  local_1ec = &DAT_8013ca0c;
  local_1e8 = &DAT_8013ca14;
  local_1e4 = &DAT_8013ca1c;
  local_1e0 = &DAT_8013ca24;
  local_1dc = &DAT_8013ca2c;
  local_1d8 = &DAT_8013ca34;
  local_1d4 = &DAT_8013ca3c;
  local_1d0 = &DAT_8013ca44;
  local_1cc = &DAT_8013ca4c;
  local_1c8 = &DAT_8013ca54;
  local_1c4 = &DAT_8013ca5c;
  local_1c0 = &DAT_8013ca64;
  local_1bc = &DAT_8013ca6c;
  local_1b8 = &DAT_8013ca74;
  local_1b4 = &DAT_8013ca7c;
  local_1b0 = &DAT_8013ca84;
  local_1ac = &DAT_8013ca8c;
  local_1a8 = &DAT_8013ca94;
  local_1a4 = &DAT_8013ca9c;
  local_1a0 = &DAT_8013caa4;
  local_19c = &DAT_8013caac;
  local_198 = &DAT_8013cab4;
  local_194 = &DAT_8013cabc;
  local_190 = &DAT_8013cac4;
  local_18c = &DAT_8013cacc;
  local_188 = &DAT_8013cad4;
  local_184 = &DAT_8013cadc;
  local_180 = &DAT_8013cae4;
  local_17c = &DAT_8013caec;
  local_178 = &DAT_8013caf4;
  local_174 = &DAT_8013cafc;
  local_170 = &DAT_8013cb04;
  local_16c = &DAT_8013cb0c;
  local_168 = &DAT_8013cb14;
  local_164 = &DAT_8013cb1c;
  local_160 = &DAT_8013cb24;
  local_15c = &DAT_8013cb2c;
  local_158 = &DAT_8013cb34;
  local_154 = &DAT_8013cb3c;
  local_150 = &DAT_8013cb44;
  local_14c = &DAT_8013cb4c;
  local_148 = &DAT_8013cb54;
  local_144 = &DAT_8013cb5c;
  local_140 = &DAT_8013cb64;
  local_13c = &DAT_8013cb6c;
  local_138 = &DAT_8013cb74;
  local_134 = &DAT_8013cb7c;
  local_130 = &DAT_8013cb84;
  local_12c = &DAT_8013cb8c;
  local_128 = &DAT_8013cb94;
  local_124 = &DAT_8013cb9c;
  local_120 = &DAT_8013cba4;
  local_11c = &DAT_8013cbac;
  local_118 = &DAT_8013cbb4;
  local_114 = &DAT_8013cbbc;
  local_110 = &DAT_8013cbc4;
  local_108 = &DAT_8013cbd4;
  local_104 = &DAT_8013cbdc;
  local_fc = &DAT_8013cbe4;
  local_f8 = &DAT_8013cbec;
  local_f4 = &DAT_8013cbf4;
  local_ec = &DAT_8013cbfc;
  local_e8 = &DAT_8013cc04;
  local_e4 = &DAT_8013cc0c;
  local_e0 = &DAT_8013cc14;
  local_dc = &DAT_8013cc1c;
  local_d4 = &DAT_8013cc24;
  local_d0 = &DAT_8013cc2c;
  local_cc = &DAT_8013cc34;
  local_c8 = &DAT_8013cc3c;
  local_c0 = &DAT_8013cc44;
  local_b4 = &DAT_8013cc4c;
  local_10c = &DAT_8013cbcc;
  local_100 = &DAT_8013cbcc;
  local_f0 = &DAT_8013cbcc;
  local_d8 = &DAT_8013cbcc;
  local_c4 = &DAT_8013cbcc;
  local_bc = &DAT_8013cbcc;
  local_b8 = &DAT_8013cbcc;
  local_b0 = &DAT_8013cc54;
  local_ac = &DAT_8013cc5c;
  local_a8 = &DAT_8013cc64;
  local_a4 = &DAT_8013cc6c;
  local_9c = &DAT_8013cc74;
  local_98 = &DAT_8013cc7c;
  local_94 = &DAT_8013cc84;
  local_90 = &DAT_8013cc8c;
  local_8c = &DAT_8013cc94;
  local_88 = &DAT_8013cc9c;
  local_84 = &DAT_8013cca4;
  local_80 = &DAT_8013ccac;
  local_7c = &DAT_8013ccb4;
  local_78 = &DAT_8013ccbc;
  local_74 = &DAT_8013ccc4;
  local_70 = &DAT_8013cccc;
  local_6c = &DAT_8013ccd4;
  local_68 = &DAT_8013ccdc;
  local_64 = &DAT_8013cce4;
  local_5c = &DAT_8013ccec;
  local_58 = &DAT_8013ccf4;
  local_54 = &DAT_8013ccfc;
  local_50 = &DAT_8013cd04;
  local_4c = &DAT_8013cd0c;
  local_48 = &DAT_8013cd14;
  local_44 = &DAT_8013cd1c;
  local_40 = &DAT_8013cd24;
  local_a0 = &DAT_8013cbcc;
  local_38 = &DAT_8013cd2c;
  local_3c = local_548[0];
  local_34 = local_548[0];
  do {
    n = ppcVar2[1];
    pcVar4 = ppcVar2[2];
    pcVar5 = ppcVar2[3];
    *ppcVar3 = *ppcVar2;
    ppcVar3[1] = n;
    ppcVar3[2] = pcVar4;
    ppcVar3[3] = pcVar5;
    ppcVar2 = ppcVar2 + 4;
    ppcVar3 = ppcVar3 + 4;
  } while (ppcVar2 != (char **)local_30);
  iVar7 = 0;
  loadShapeXOff = 0;
  sprintf(acStack1608,"%sfont.pfn",0);
  _gHudFont = (char *)loadfileadrz(acStack1608,0);
  Font_LoadFont__FPciic(_gHudFont,0x80,0x80,'\x01');
  puVar6 = &HudPmx_gHudNumberUV;
  while (iVar7 < 10) {
    Font_GetUVWH__FcPiN41
              ((char)iVar7 + '0',(int *)local_30,(int *)local_2c,&iStack40,&iStack36,aiStack32);
    *(undefined *)puVar6 = local_30[0];
    *(undefined *)((int)puVar6 + 1) = local_2c[0];
    iVar7 = iVar7 + 1;
    *(undefined2 *)((int)puVar6 + 2) = 0;
    puVar6 = puVar6 + 1;
  }
  sprintf(acStack1608,"%shud.psh",0);
  _gShpfile = loadfileadr(acStack1608,0);
  Texture_ResetPaletteSharing__Fv();
  if (DAT_80113240 == 0) {
    if (false) {
      local_24c = "tbon";
    }
    else {
      local_24c = local_548[0];
    }
    if (true) {
      local_244 = local_548[0];
    }
    else {
      local_244 = "tbon";
    }
  }
  else {
    if (false) {
      local_24c = "nbon";
    }
    else {
      local_24c = local_4d0[0];
    }
    if (true) {
      local_244 = local_4d0[0];
    }
    else {
      local_244 = "nbon";
    }
  }
  iVar7 = 0;
  ppcVar2 = &local_450;
  s = (HudPmx_tShape *)&HudPmx_gShapes;
  do {
    n = *ppcVar2;
    ppcVar2 = ppcVar2 + 1;
    iVar7 = iVar7 + 1;
    HudPmx_LoadShape__FPcP13HudPmx_tShape(n,s);
    s = s + 1;
  } while (iVar7 < 0x83);
  iVar7 = 0x84;
  s = (HudPmx_tShape *)&DAT_801116e8;
  while (iVar7 < 0x9e) {
    DAT_8013cd37 = (char)iVar7 + -0x43;
    HudPmx_LoadShape__FPcP13HudPmx_tShape("alpX",s);
    s = s + 1;
    iVar7 = iVar7 + 1;
  }
  iVar7 = 0x9e;
  s = (HudPmx_tShape *)&DAT_801118f0;
  while (iVar7 < 0xa8) {
    DAT_8013cd3f = (char)iVar7 + -0x6e;
    HudPmx_LoadShape__FPcP13HudPmx_tShape("alpX",s);
    s = s + 1;
    iVar7 = iVar7 + 1;
  }
  HudPmx_LoadShape__FPcP13HudPmx_tShape("alTR",(HudPmx_tShape *)&DAT_801119b8);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("alCI",(HudPmx_tShape *)&DAT_801119cc);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("alSQ",(HudPmx_tShape *)&DAT_801119e0);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("negA",(HudPmx_tShape *)&DAT_801119f4);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("negB",(HudPmx_tShape *)&DAT_80111a08);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("neg2",(HudPmx_tShape *)&DAT_80111a1c);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("alUP",(HudPmx_tShape *)&DAT_80111a30);
  iVar8 = 0;
  ppcVar2 = local_328;
  iVar7 = 0x128;
  s = (HudPmx_tShape *)&DAT_80111260;
  do {
    iVar8 = iVar8 + 1;
    HudPmx_LoadShape__FPcP13HudPmx_tShape(*ppcVar2,s);
    ppcVar2 = (char **)((int)local_44c + iVar7);
    iVar7 = iVar7 + 4;
    s = s + 1;
  } while (iVar8 < 0x1c);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("a229",(HudPmx_tShape *)&DAT_801114a4);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("ahyp",(HudPmx_tShape *)&DAT_80111238);
  HudPmx_LoadShape__FPcP13HudPmx_tShape("acol",(HudPmx_tShape *)&DAT_8011124c);
  if (DashHUD_gInfo != 0) {
    loadShapeXOff = 0x16;
    HudPmx_LoadShape__FPcP13HudPmx_tShape(local_244,(HudPmx_tShape *)&DAT_801116d4);
  }
  purgememadr(_gShpfile);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ HudPmx_Kill__Fv()
 // line 209, offset 0x80092f30
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x80092F30
	/* end block 1 */
	// End offset: 0x80092F30
	// End Line: 210

void HudPmx_Kill__Fv(void)
{
  purgememadr(uGp00001858);
  return;


}





