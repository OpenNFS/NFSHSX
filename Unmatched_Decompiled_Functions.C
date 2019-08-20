// decompiled code
// original method signature: 
// void FUN_000000b0(void);
 // line 0, offset 0x000000b0
/* WARNING: Control flow encountered bad instruction data */

void FUN_000000b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




// decompiled code
// original method signature: 
// int FUN_000699e8(int param_1);
 // line 0, offset 0x000699e8
int FUN_000699e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x730);
  iVar1 = *(int *)(*(int *)(param_1 + 0x6b8) + 0x80);
  if (0x10000 < iVar2) {
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar1 = (iVar1 >> 8) * (iVar2 >> 8);
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// int FUN_00073128(int param_1,int param_2);
 // line 0, offset 0x00073128
int FUN_00073128(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = (int)*(short *)(param_1 + 8) - param_2;
  iVar2 = (int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1;
  if ((param_2 < 1) || (param_2 <= iVar2)) {
    iVar1 = param_2 * 2;
    if (-1 < param_2) goto code_r0x00073188;
    if (param_2 < -iVar2) {
      param_2 = param_2 + gNumSlices;
    }
  }
  else {
    param_2 = param_2 - gNumSlices;
  }
  iVar1 = param_2 << 1;
code_r0x00073188:
  return (iVar1 + param_2) * 0x20000;
}




// decompiled code
// original method signature: 
// int FUN_00073ce8(int param_1);
 // line 0, offset 0x00073ce8
int FUN_00073ce8(int param_1)

{
  int *piVar1;
  AnimScript *pAVar2;
  AnimScript **ppAVar3;
  int iVar4;
  
  iVar4 = 0;
  ppAVar3 = &__animSlots_32__;
  do {
    if (*ppAVar3 == (AnimScript *)0x0) break;
    iVar4 = iVar4 + 1;
    ppAVar3 = ppAVar3 + 1;
  } while (iVar4 < 0x20);
  piVar1 = (int *)FUN_000a3d5c(0x14);
  pAVar2 = (AnimScript *)FUN_00074360(piVar1,param_1);
  (&__animSlots_32__)[iVar4] = pAVar2;
  return iVar4;
}




// decompiled code
// original method signature: 
// undefined4 FUN_00073d6c(int param_1);
 // line 0, offset 0x00073d6c
undefined4 FUN_00073d6c(int param_1)

{
  AnimScript *pAVar1;
  
  pAVar1 = (&__animSlots_32__)[param_1];
  if (pAVar1 != (AnimScript *)0x0) {
    if (pAVar1->inst != (Trk_AnimateInst **)0x0) {
      FUN_000a3dcc((int)pAVar1->inst);
    }
    FUN_000a3dac((int)pAVar1);
  }
  (&__animSlots_32__)[param_1] = (AnimScript *)0x0;
  return 0;
}




// decompiled code
// original method signature: 
// AnimScript * FUN_00073dec(int param_1);
 // line 0, offset 0x00073dec
AnimScript * FUN_00073dec(int param_1)

{
  return (&__animSlots_32__)[param_1];
}




// decompiled code
// original method signature: 
// void FUN_00073e08(int iParm1,undefined4 *puParm2,int *piParm3,uint uParm4);
 // line 0, offset 0x00073e08
void FUN_00073e08(int iParm1,undefined4 *puParm2,int *piParm3,uint uParm4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint in_t0;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack16;
  uint uStack12;
  
  puVar4 = (undefined4 *)(((int)*(short *)(iParm1 + 8) + -1) * 0x14 + iParm1 + 0xc);
  uVar1 = (int)puVar4 + 0xfU & 3;
  uVar2 = (uint)(puVar4 + 3) & 3;
  uStack16 = (*(int *)(((int)puVar4 + 0xfU) - uVar1) << (3 - uVar1) * 8 |
             uParm4 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
             *(uint *)((int)(puVar4 + 3) - uVar2) >> uVar2 * 8;
  uVar1 = (int)puVar4 + 0x13U & 3;
  uVar2 = (uint)(puVar4 + 4) & 3;
  uStack12 = (*(int *)(((int)puVar4 + 0x13U) - uVar1) << (3 - uVar1) * 8 |
             in_t0 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
             *(uint *)((int)(puVar4 + 4) - uVar2) >> uVar2 * 8;
  uVar1 = (int)&uStack16 + 3U & 3;
  puVar3 = (uint *)(((int)&uStack16 + 3U) - uVar1);
  *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | uStack16 >> (3 - uVar1) * 8;
  uVar1 = (int)&uStack16 + 7U & 3;
  puVar3 = (uint *)(((int)&uStack16 + 7U) - uVar1);
  *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | uStack12 >> (3 - uVar1) * 8;
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  *puParm2 = *puVar4;
  puParm2[1] = uVar5;
  puParm2[2] = uVar6;
  FUN_000ad780((short *)&uStack16,piParm3);
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_00073e80(int param_1,uint param_2,undefined4 param_3,int param_4);
 // line 0, offset 0x00073e80
undefined4 FUN_00073e80(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00073e08((&__animScripts_10__)[param_1],param_3,param_4);
  if ((param_2 & 4) != 0) {
    iVar1 = *(int *)(param_4 + 0xc);
    iVar2 = *(int *)(param_4 + 0x10);
    iVar3 = *(int *)(param_4 + 0x14);
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_4 + 0x18);
    *(int *)(param_4 + 0x18) = -iVar1;
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_4 + 0x1c);
    *(int *)(param_4 + 0x1c) = -iVar2;
    *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 0x20);
    *(int *)(param_4 + 0x20) = -iVar3;
  }
  return 1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_00073f18(int param_1,uint param_2,int param_3,int *param_4,int *param_5);
 // line 0, offset 0x00073f18
undefined4 FUN_00073f18(int param_1,uint param_2,int param_3,int *param_4,int *param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint in_t3;
  uint in_t4;
  int iVar11;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  short asStack32 [4];
  undefined4 uStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  if ((*(char *)(param_1 + 2) == '\x03') ||
     (iVar10 = param_1 + 0x10, *(char *)(param_1 + 2) == '\a')) {
    iVar10 = param_1 + 0xc;
  }
  if ((uint)*(ushort *)(param_1 + 10) - 1 < 400) {
    iVar7 = (int)(short)*(ushort *)(param_1 + 10);
  }
  else {
    iVar7 = 6;
  }
  iVar11 = param_3 / iVar7;
  if (iVar7 == 0) {
    trap(0x1c00);
  }
  if ((iVar7 == -1) && (param_3 == -0x80000000)) {
    trap(0x1800);
  }
  if (((param_2 & 2) == 0) || (uVar4 = 0, iVar11 < (int)*(short *)(param_1 + 8) + -1)) {
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (param_3 == -0x80000000)) {
      trap(0x1800);
    }
    iVar5 = (int)*(short *)(param_1 + 8) + -1;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar11 == -0x80000000)) {
      trap(0x1800);
    }
    iVar9 = param_3 % iVar7 << 0x10;
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (iVar9 == -0x80000000)) {
      trap(0x1800);
    }
    piVar8 = (int *)((iVar11 % iVar5) * 0x14 + iVar10);
    piVar6 = (int *)((iVar11 % iVar5 + 1) * 0x14 + iVar10);
    uVar2 = (int)piVar8 + 0xfU & 3;
    uVar3 = (uint)(piVar8 + 3) & 3;
    uStack24 = (*(int *)(((int)piVar8 + 0xfU) - uVar2) << (3 - uVar2) * 8 |
               in_t3 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
               *(uint *)((int)(piVar8 + 3) - uVar3) >> uVar3 * 8;
    uVar2 = (int)piVar8 + 0x13U & 3;
    uVar3 = (uint)(piVar8 + 4) & 3;
    uStack20 = (*(int *)(((int)piVar8 + 0x13U) - uVar2) << (3 - uVar2) * 8 |
               in_t4 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
               *(uint *)((int)(piVar8 + 4) - uVar3) >> uVar3 * 8;
    puVar1 = &uStack24 + 3;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uStack24 >> (3 - uVar2) * 8;
    puVar1 = &uStack24 + 7;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uStack20 >> (3 - uVar2) * 8;
    uVar2 = (int)piVar6 + 0xfU & 3;
    uVar3 = (uint)(piVar6 + 3) & 3;
    uStack16 = (*(int *)(((int)piVar6 + 0xfU) - uVar2) << (3 - uVar2) * 8 |
               uStack24 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
               *(uint *)((int)(piVar6 + 3) - uVar3) >> uVar3 * 8;
    uVar2 = (int)piVar6 + 0x13U & 3;
    uVar3 = (uint)(piVar6 + 4) & 3;
    uStack12 = (*(int *)(((int)piVar6 + 0x13U) - uVar2) << (3 - uVar2) * 8 |
               uStack20 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
               *(uint *)((int)(piVar6 + 4) - uVar3) >> uVar3 * 8;
    puVar1 = &uStack24 + 0xb;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uStack16 >> (3 - uVar2) * 8;
    puVar1 = &uStack24 + 0xf;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uStack12 >> (3 - uVar2) * 8;
    local_40 = *piVar8;
    local_3c = piVar8[1];
    local_38 = piVar8[2];
    local_30 = *piVar6;
    local_2c = piVar6[1];
    local_28 = piVar6[2];
    FUN_000ad678((short *)&uStack24,(short *)(&uStack24 + 8),&local_40,&local_30,iVar9 / iVar7,
                 asStack32,param_4);
    FUN_000ad780(asStack32,param_5);
    uVar4 = 1;
  }
  return uVar4;
}




// decompiled code
// original method signature: 
// void FUN_00074360(int *param_1,int param_2);
 // line 0, offset 0x00074360
void FUN_00074360(int *param_1,int param_2)

{
  int iVar1;
  Trk_AnimateInst *pTVar2;
  
  pTVar2 = (Trk_AnimateInst *)FUN_000a3d84(4);
  *(Trk_AnimateInst **)(param_1 + 4) = pTVar2;
  *(Trk_AnimateInst **)pTVar2 = (&__animScripts_10__)[param_2];
  iVar1 = simGlobal.gameTicks;
  param_1[2] = 6;
  *param_1 = iVar1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000745f8(int *param_1,undefined4 param_2,int param_3);
 // line 0, offset 0x000745f8
void FUN_000745f8(int *param_1,undefined4 param_2,int param_3)

{
  FUN_00074624(param_1,0,param_2,param_3);
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_00074624(int *param_1,int param_2,undefined4 param_3,int param_4);
 // line 0, offset 0x00074624
undefined4 FUN_00074624(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_0007471c((int)param_1);
  uVar2 = 0xffffffff;
  if (uVar1 == 1) {
    iVar3 = FUN_00073f18(*(undefined4 *)(param_2 * 4 + param_1[4]),param_1[2],
                         simGlobal.gameTicks - *param_1,param_3,param_4);
    uVar2 = 0;
    if (iVar3 == 0) {
      *param_1 = -1;
      *(undefined4 *)(param_2 * 4 + param_1[4]) = 0;
    }
    else {
      uVar2 = 1;
      if ((param_1[2] & 4U) != 0) {
        iVar3 = *(int *)(param_4 + 0xc);
        iVar4 = *(int *)(param_4 + 0x10);
        iVar5 = *(int *)(param_4 + 0x14);
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_4 + 0x18);
        *(int *)(param_4 + 0x18) = -iVar3;
        *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_4 + 0x1c);
        *(int *)(param_4 + 0x1c) = -iVar4;
        *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 0x20);
        *(int *)(param_4 + 0x20) = -iVar5;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint FUN_0007471c(int param_1);
 // line 0, offset 0x0007471c
uint FUN_0007471c(int param_1)

{
  return (uint)(**(int **)(param_1 + 0x10) != 0);
}




// decompiled code
// original method signature: 
// int FUN_0007d5c4(int *param_1,int *param_2);
 // line 0, offset 0x0007d5c4
int FUN_0007d5c4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2 - *param_1 >> 0xc;
  iVar2 = param_2[2] - param_1[2] >> 0xc;
  return (iVar1 * iVar1 >> 6) + (iVar2 * iVar2 >> 6);
}




// decompiled code
// original method signature: 
// void FUN_0007e970(int *param_1,undefined2 *param_2);
 // line 0, offset 0x0007e970
void FUN_0007e970(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  iVar1 = iGp0000027c;
  iVar4 = 0x7fffffff;
  _uVar5 = -1;
  uVar5 = 0xffff;
  iVar3 = 0;
  if (0 < iGp0000027c) {
    do {
      iVar2 = FUN_0007d5c4((int *)(iGp00000274 + iVar3 * 0x20),param_1);
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
        _uVar5 = iVar3;
      }
      uVar5 = (undefined2)_uVar5;
      iVar3 = iVar3 + 8;
    } while (iVar3 < iVar1);
  }
  *param_2 = uVar5;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0007ea14(int *param_1,short *param_2);
 // line 0, offset 0x0007ea14
void FUN_0007ea14(int *param_1,short *param_2)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = *param_2;
  iVar3 = FUN_0009d3e4((int *)(iGp00000274 + (int)sVar2 * 0x20),param_1);
  if (0x800000 < iVar3) {
    FUN_0007e970(param_1,param_2);
  }
  FUN_0007eab0(param_1,param_2);
  uVar1 = *(undefined *)((int)*param_2 * 0x20 + iGp00000274 + 0x1c);
  *(bool *)((int)param_2 + 0x59) = *param_2 != sVar2;
  *(bool *)(param_2 + 0x2c) = *param_2 != sVar2;
  *(undefined *)((int)param_2 + 0x75) = uVar1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0007eab0(int *param_1,short *param_2);
 // line 0, offset 0x0007eab0
void FUN_0007eab0(int *param_1,short *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  
  sVar8 = *param_2;
  iVar9 = (int)sVar8;
  iVar10 = iGp0000027c + -1;
  if (iVar9 != -1) {
    do {
      if (iVar9 < iVar10) {
        iVar2 = *param_1;
        iVar3 = iVar9;
      }
      else {
        iVar3 = iVar9 % iGp0000027c;
        if (iGp0000027c == 0) {
          trap(0x1c00);
        }
        if ((iGp0000027c == -1) && (iVar9 == -0x80000000)) {
          trap(0x1800);
        }
        iVar2 = *param_1;
      }
      piVar6 = (int *)(iVar3 * 0x20 + iGp00000274);
      iVar3 = iVar2 - *piVar6 >> 9;
      iVar2 = param_1[2] - piVar6[2] >> 9;
      iVar3 = iVar3 * iVar3 + iVar2 * iVar2;
      if (iVar9 < iGp0000027c + -2) {
        iVar7 = iVar9 * 0x20 + iGp00000274;
        iVar2 = *param_1 - *(int *)(iVar7 + 0x20) >> 9;
        iVar7 = param_1[2] - *(int *)(iVar7 + 0x28) >> 9;
        if (iVar2 * iVar2 + iVar7 * iVar7 < iVar3) {
          iVar2 = iVar9 + 1;
        }
        else {
LAB_0007ec3c:
          if (iVar9 < 1) {
            iVar2 = iVar9 + 1 + iVar10;
            iVar7 = iVar2 + -1;
            if (iGp0000027c == 0) {
              trap(0x1c00);
            }
            if ((iGp0000027c == -1) && (iVar7 == -0x80000000)) {
              trap(0x1800);
            }
            piVar6 = (int *)((iVar7 % iGp0000027c) * 0x20 + iGp00000274);
            iVar4 = *param_1 - *piVar6 >> 9;
            iVar5 = param_1[2] - piVar6[2] >> 9;
            if (iVar4 * iVar4 + iVar5 * iVar5 < iVar3) {
              iVar2 = iVar7;
            }
            iVar3 = iVar2 + 1 + iVar10;
            iVar2 = iVar3 % iGp0000027c;
            if (iGp0000027c == 0) {
              trap(0x1c00);
            }
            if ((iGp0000027c == -1) && (iVar3 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar2 = iVar9 * 0x20 + iGp00000274;
            iVar7 = *param_1 - *(int *)(iVar2 + -0x20) >> 9;
            iVar4 = param_1[2] - *(int *)(iVar2 + -0x18) >> 9;
            iVar2 = iVar9;
            if (iVar7 * iVar7 + iVar4 * iVar4 < iVar3) {
              iVar2 = iVar9 + -1;
            }
          }
        }
      }
      else {
        iVar2 = (iVar9 + 1) % iGp0000027c;
        if (iGp0000027c == 0) {
          trap(0x1c00);
        }
        if ((iGp0000027c == -1) && (iVar9 + 1 == -0x80000000)) {
          trap(0x1800);
        }
        piVar6 = (int *)(iVar2 * 0x20 + iGp00000274);
        iVar7 = *param_1 - *piVar6 >> 9;
        iVar4 = param_1[2] - piVar6[2] >> 9;
        if (iVar3 <= iVar7 * iVar7 + iVar4 * iVar4) goto LAB_0007ec3c;
      }
      sVar8 = (short)iVar2;
      bVar1 = iVar9 != iVar2;
      iVar9 = iVar2;
    } while (bVar1);
  }
  *param_2 = sVar8;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0007edb8(int param_1,int *param_2);
 // line 0, offset 0x0007edb8
void FUN_0007edb8(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  Group *pGVar3;
  Group *pGVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_2;
  iVar6 = param_2[1];
  iVar5 = param_2[2];
  pGVar3 = Track_chunkList[(uint)*(byte *)(param_1 + 0x75)].vertexBuf + 1 +
           ((uint)**(byte **)(param_1 + 0x7c) + (int)*(short *)(param_1 + 2)) * 2;
  sVar1 = *(short *)((int)&pGVar3[2].m_num_elements + 2);
  sVar2 = *(short *)&pGVar3[3].m_num_elements;
  pGVar4 = Track_chunkList[(uint)*(byte *)(param_1 + 0x75)].vertexBuf + 1 +
           ((uint)(*(byte **)(param_1 + 0x7c))[1] + (int)*(short *)(param_1 + 2)) * 2;
  *(int *)(param_1 + 0x14) = iVar7 + (int)*(short *)&pGVar3[2].m_num_elements * 0x400;
  *(int *)(param_1 + 0x18) = iVar6 + (int)sVar1 * 0x400;
  *(int *)(param_1 + 0x1c) = iVar5 + (int)sVar2 * 0x400;
  sVar1 = *(short *)((int)&pGVar3->m_num_elements + 2);
  sVar2 = *(short *)&pGVar3[1].m_num_elements;
  *(int *)(param_1 + 0x20) = iVar7 + (int)*(short *)&pGVar3->m_num_elements * 0x400;
  *(int *)(param_1 + 0x24) = iVar6 + (int)sVar1 * 0x400;
  *(int *)(param_1 + 0x28) = iVar5 + (int)sVar2 * 0x400;
  sVar1 = *(short *)((int)&pGVar4->m_num_elements + 2);
  sVar2 = *(short *)&pGVar4[1].m_num_elements;
  *(int *)(param_1 + 0x2c) = iVar7 + (int)*(short *)&pGVar4->m_num_elements * 0x400;
  *(int *)(param_1 + 0x30) = iVar6 + (int)sVar1 * 0x400;
  *(int *)(param_1 + 0x34) = iVar5 + (int)sVar2 * 0x400;
  sVar1 = *(short *)((int)&pGVar4[2].m_num_elements + 2);
  sVar2 = *(short *)&pGVar4[3].m_num_elements;
  *(int *)(param_1 + 8) = iVar7 + (int)*(short *)&pGVar4[2].m_num_elements * 0x400;
  *(int *)(param_1 + 0xc) = iVar6 + (int)sVar1 * 0x400;
  *(int *)(param_1 + 0x10) = iVar5 + (int)sVar2 * 0x400;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0007eee0(int param_1);
 // line 0, offset 0x0007eee0
void FUN_0007eee0(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  
  iVar7 = 0;
  bVar2 = **(byte **)(param_1 + 0x80);
  *(Group **)(param_1 + 0x7c) = Track_chunkList[(uint)*(byte *)(param_1 + 0x75)].stripBuf + 1;
  if (bVar2 != 0) {
    do {
      iVar7 = iVar7 + 1;
      *(int *)(param_1 + 0x7c) =
           *(int *)(param_1 + 0x7c) + (uint)*(byte *)(*(int *)(param_1 + 0x7c) + 2) * 2 + 4;
    } while (iVar7 < (int)(uint)bVar2);
  }
  cVar1 = *(char *)(param_1 + 0x74);
  sVar6 = (short)cVar1;
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x7c) + 2);
  if ((int)uVar4 <= (int)cVar1) {
    iVar7 = (int)cVar1 - uVar4;
    do {
      iVar5 = *(int *)(param_1 + 0x7c) + uVar4 * 2 + 4;
      *(int *)(param_1 + 0x7c) = iVar5;
      bVar2 = *(byte *)(iVar5 + 2);
      uVar4 = (uint)bVar2;
      bVar3 = (int)uVar4 <= iVar7;
      iVar7 = iVar7 - uVar4;
    } while (bVar3);
    sVar6 = (short)iVar7 + (ushort)bVar2;
  }
  *(short *)(param_1 + 2) = sVar6;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0007ef98(int param_1,int param_2);
 // line 0, offset 0x0007ef98
void FUN_0007ef98(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  FUN_0007eee0(param_1);
  bVar1 = (*(byte **)(param_1 + 0x7c))[1];
  puVar3 = (undefined2 *)
           (((uint)**(byte **)(param_1 + 0x7c) + (int)*(short *)(param_1 + 2)) * 8 + param_2);
  uVar2 = puVar3[6];
  *(undefined2 *)(param_1 + 0x40) = puVar3[4];
  *(undefined2 *)(param_1 + 0x44) = uVar2;
  uVar2 = puVar3[2];
  puVar4 = (undefined2 *)(((uint)bVar1 + (int)*(short *)(param_1 + 2)) * 8 + param_2);
  *(undefined2 *)(param_1 + 0x48) = *puVar3;
  *(undefined2 *)(param_1 + 0x4c) = uVar2;
  uVar2 = puVar4[2];
  *(undefined2 *)(param_1 + 0x50) = *puVar4;
  *(undefined2 *)(param_1 + 0x54) = uVar2;
  uVar2 = puVar4[6];
  *(undefined2 *)(param_1 + 0x38) = puVar4[4];
  *(undefined2 *)(param_1 + 0x3c) = uVar2;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0007f034(short *param_1);
 // line 0, offset 0x0007f034
void FUN_0007f034(short *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)*param_1 * 0x20 + iGp00000274 + 0x1c);
  *(byte *)((int)param_1 + 0x75) = bVar1;
  *(int *)(param_1 + 0x40) =
       (int)Track_chunkList[(uint)bVar1].simSliceBuf +
       ((int)*param_1 - (int)Track_chunkList[(uint)bVar1].firstSimSliceInd) * 5 + 4;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0007f094(int param_1);
 // line 0, offset 0x0007f094
void FUN_0007f094(int param_1)

{
  Group *pGVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x80);
  iVar3 = (int)*(char *)(param_1 + 0x74) - (uint)*(byte *)(iVar2 + 4);
  if ((-1 < iVar3) && (iVar3 < (int)(uint)*(byte *)(iVar2 + 3))) {
    pGVar1 = Track_chunkList[(uint)*(byte *)(param_1 + 0x75)].simQuadBuf;
    *(Group **)(param_1 + 0x78) = pGVar1 + 1;
    *(int *)(param_1 + 0x78) = (int)(pGVar1 + 1) + (uint)*(byte *)(iVar2 + 2) + iVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 0x8013c7bc;
  return;
}




// decompiled code
// original method signature: 
// uint FUN_0007f11c(int param_1);
 // line 0, offset 0x0007f11c
uint FUN_0007f11c(int param_1)

{
  if (*(byte **)(param_1 + 0x78) == (byte *)0x0) {
    return 0;
  }
  return (uint)((**(byte **)(param_1 + 0x78) & 0xf) != 0xe);
}




// decompiled code
// original method signature: 
// undefined4 FUN_0007f14c(int *param_1,short *param_2);
 // line 0, offset 0x0007f14c
undefined4 FUN_0007f14c(int *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  Group *pGVar18;
  int iVar19;
  coorddef *pcVar20;
  int iVar21;
  undefined uVar22;
  
  iVar19 = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  param_2[2] = 0;
  FUN_0007f034(param_2);
  iVar6 = (int)*(char *)(param_2 + 0x3a);
  iVar21 = 0;
  if (((iVar6 < 0) || ((int)((uint)*(byte *)(*(int *)(param_2 + 0x40) + 1) - 1) <= iVar6)) ||
     (*(char *)(param_2 + 0x2d) != '\0')) {
    uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0x40) + 1) - 1;
    cVar5 = (char)((int)(uVar4 + (uVar4 >> 0x1f)) >> 1);
    iVar6 = (int)cVar5;
    *(char *)(param_2 + 0x3a) = cVar5;
  }
  uVar22 = 0;
  *(undefined *)(param_2 + 0x2d) = 0;
  cVar5 = (char)iVar6;
  *(char *)(param_2 + 0x3a) = cVar5;
  do {
    if (iGp00000288 <= iVar19) {
      iVar21 = (int)*param_2 - iVar21;
      if (iGp0000027c <= iVar21) {
        iVar21 = iVar21 - iGp0000027c;
      }
      sVar9 = (short)iVar21;
      if (iVar21 < 0) {
        sVar9 = sVar9 + (short)iGp0000027c;
      }
      *param_2 = sVar9;
      FUN_0007f034(param_2);
      *(undefined *)(param_2 + 0x2d) = uVar22;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      *(undefined *)((int)param_2 + 0x5b) = 0;
      return 0;
    }
    FUN_0007f034(param_2);
    *(char *)(param_2 + 0x3a) = cVar5;
    if ((int)((uint)*(byte *)(*(int *)(param_2 + 0x40) + 1) - 1) < iVar6) {
      *(byte *)(param_2 + 0x3a) = *(byte *)(*(int *)(param_2 + 0x40) + 1) - 2;
    }
    pcVar20 = Chunk_chunkCenters + (uint)*(byte *)((int)param_2 + 0x75);
    sVar9 = (short)(*param_1 - pcVar20->x >> 10);
    sVar2 = (short)(param_1[2] - pcVar20->z >> 10);
    pGVar18 = Track_chunkList[(uint)*(byte *)((int)param_2 + 0x75)].vertexBuf + 1;
    FUN_0007ef98((int)param_2,(int)pGVar18);
    FUN_0007f094((int)param_2);
    iVar3 = *(int *)(param_2 + 0x40);
    iVar10 = 0x7fffffff;
    while ((int)*(char *)(param_2 + 0x3a) <= (int)((uint)*(byte *)(iVar3 + 1) - 1)) {
      FUN_0007ef98((int)param_2,(int)pGVar18);
      iVar11 = (int)param_2[0x20];
      iVar15 = (int)param_2[0x24];
      iVar16 = (int)sVar2;
      iVar17 = (int)param_2[0x26];
      iVar14 = (int)sVar9;
      iVar3 = (int)param_2[0x22];
      if ((iVar11 - iVar15) * (iVar16 - iVar17) - (iVar14 - iVar15) * (iVar3 - iVar17) < 1) {
        iVar13 = (int)param_2[0x1c];
        iVar12 = (int)param_2[0x1e];
        if ((iVar13 - iVar11) * (iVar16 - iVar3) - (iVar14 - iVar11) * (iVar12 - iVar3) < 1) {
          iVar3 = (int)param_2[0x28];
          iVar11 = (int)param_2[0x2a];
          if ((((iVar15 - iVar3) * (iVar16 - iVar11) - (iVar14 - iVar3) * (iVar17 - iVar11) < 1) &&
              ((iVar3 - iVar13) * (iVar16 - iVar12) - (iVar14 - iVar13) * (iVar11 - iVar12) < 1)) &&
             (uVar4 = FUN_0007f11c((int)param_2), uVar4 != 0)) goto LAB_0007f1dc;
        }
      }
      if ((int)*(char *)(param_2 + 0x3a) == (uint)*(byte *)(*(int *)(param_2 + 0x40) + 1) - 1) {
        *(undefined *)(param_2 + 0x2d) = 2;
        break;
      }
      uVar4 = FUN_0007f11c((int)param_2);
      iVar11 = iVar10;
      if (uVar4 != 0) {
        iVar3 = (int)sVar9;
        iVar11 = iVar3 - (int)param_2[0x28];
        if (iVar11 < 1) {
          iVar11 = (int)param_2[0x28] - iVar3;
        }
        iVar14 = iVar3 - (int)param_2[0x24];
        if (iVar14 < 1) {
          iVar14 = (int)param_2[0x24] - iVar3;
        }
        iVar15 = iVar3 - (int)param_2[0x20];
        if (iVar15 < 1) {
          iVar15 = (int)param_2[0x20] - iVar3;
        }
        iVar16 = iVar3 - (int)param_2[0x1c];
        if (iVar16 < 1) {
          iVar16 = (int)param_2[0x1c] - iVar3;
        }
        iVar17 = (int)sVar2 - (int)param_2[0x1e];
        iVar3 = (int)param_2[0x1e] - (int)sVar2;
        if (0 < iVar17) {
          iVar3 = iVar17;
        }
        iVar12 = (int)sVar2 - (int)param_2[0x22];
        iVar17 = (int)param_2[0x22] - (int)sVar2;
        if (0 < iVar12) {
          iVar17 = iVar12;
        }
        iVar13 = (int)sVar2 - (int)param_2[0x26];
        iVar12 = (int)param_2[0x26] - (int)sVar2;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        iVar7 = (int)sVar2 - (int)param_2[0x2a];
        iVar13 = (int)param_2[0x2a] - (int)sVar2;
        if (0 < iVar7) {
          iVar13 = iVar7;
        }
        iVar11 = iVar16 + iVar3 + iVar15 + iVar17 + iVar14 + iVar12 + iVar11 + iVar13;
        if (0x28 < iVar11 - iVar10) break;
      }
      *(char *)(param_2 + 0x3a) = *(char *)(param_2 + 0x3a) + '\x01';
      FUN_0007f094((int)param_2);
      iVar3 = *(int *)(param_2 + 0x40);
      iVar10 = iVar11;
    }
    cVar1 = cVar5;
    if ((*(char *)(param_2 + 0x2d) != '\0') && (cVar1 = cVar5, iVar19 == 0)) {
      cVar1 = *(char *)(*(int *)(param_2 + 0x40) + 1);
    }
    *(char *)(param_2 + 0x3a) = cVar1 + -1;
    if (*(char *)(param_2 + 0x3a) < '\0') {
      *(undefined *)(param_2 + 0x3a) = 0;
    }
    FUN_0007ef98((int)param_2,(int)pGVar18);
    iVar10 = 0x7fffffff;
    while (FUN_0007f094((int)param_2), -1 < *(char *)(param_2 + 0x3a)) {
      FUN_0007ef98((int)param_2,(int)pGVar18);
      iVar11 = (int)param_2[0x20];
      iVar15 = (int)param_2[0x24];
      iVar16 = (int)sVar2;
      iVar17 = (int)param_2[0x26];
      iVar14 = (int)sVar9;
      iVar3 = (int)param_2[0x22];
      if ((iVar11 - iVar15) * (iVar16 - iVar17) - (iVar14 - iVar15) * (iVar3 - iVar17) < 1) {
        iVar13 = (int)param_2[0x1c];
        iVar12 = (int)param_2[0x1e];
        if ((iVar13 - iVar11) * (iVar16 - iVar3) - (iVar14 - iVar11) * (iVar12 - iVar3) < 1) {
          iVar3 = (int)param_2[0x28];
          iVar11 = (int)param_2[0x2a];
          if ((((iVar15 - iVar3) * (iVar16 - iVar11) - (iVar14 - iVar3) * (iVar17 - iVar11) < 1) &&
              ((iVar3 - iVar13) * (iVar16 - iVar12) - (iVar14 - iVar13) * (iVar11 - iVar12) < 1)) &&
             (uVar4 = FUN_0007f11c((int)param_2), uVar4 != 0)) {
LAB_0007f1dc:
            *(undefined *)((int)param_2 + 0x77) = 2;
            *(undefined *)(param_2 + 0x2d) = 0;
            FUN_0007edb8((int)param_2,(int *)pcVar20);
            return 1;
          }
        }
      }
      if (*(char *)(param_2 + 0x3a) == '\0') {
        *(undefined *)(param_2 + 0x2d) = 1;
        break;
      }
      uVar4 = FUN_0007f11c((int)param_2);
      iVar3 = iVar10;
      if (uVar4 != 0) {
        iVar3 = (int)sVar9;
        iVar11 = iVar3 - (int)param_2[0x28];
        if (iVar11 < 1) {
          iVar11 = (int)param_2[0x28] - iVar3;
        }
        iVar14 = iVar3 - (int)param_2[0x24];
        if (iVar14 < 1) {
          iVar14 = (int)param_2[0x24] - iVar3;
        }
        iVar15 = iVar3 - (int)param_2[0x20];
        if (iVar15 < 1) {
          iVar15 = (int)param_2[0x20] - iVar3;
        }
        iVar16 = iVar3 - (int)param_2[0x1c];
        if (iVar16 < 1) {
          iVar16 = (int)param_2[0x1c] - iVar3;
        }
        iVar17 = (int)sVar2 - (int)param_2[0x1e];
        iVar3 = (int)param_2[0x1e] - (int)sVar2;
        if (0 < iVar17) {
          iVar3 = iVar17;
        }
        iVar12 = (int)sVar2 - (int)param_2[0x22];
        iVar17 = (int)param_2[0x22] - (int)sVar2;
        if (0 < iVar12) {
          iVar17 = iVar12;
        }
        iVar13 = (int)sVar2 - (int)param_2[0x26];
        iVar12 = (int)param_2[0x26] - (int)sVar2;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        iVar7 = (int)sVar2 - (int)param_2[0x2a];
        iVar13 = (int)param_2[0x2a] - (int)sVar2;
        if (0 < iVar7) {
          iVar13 = iVar7;
        }
        iVar3 = iVar16 + iVar3 + iVar15 + iVar17 + iVar14 + iVar12 + iVar11 + iVar13;
        if (0x28 < iVar3 - iVar10) break;
      }
      *(char *)(param_2 + 0x3a) = *(char *)(param_2 + 0x3a) + -1;
      iVar10 = iVar3;
    }
    if (iVar19 == 0) {
      uVar22 = *(undefined *)(param_2 + 0x2d);
    }
    piVar8 = &DAT_8010f07c + iVar19;
    iVar10 = (int)*param_2 + *piVar8;
    if (iGp0000027c <= iVar10) {
      iVar10 = iVar10 - iGp0000027c;
    }
    sVar9 = (short)iVar10;
    if (iVar10 < 0) {
      sVar9 = sVar9 + (short)iGp0000027c;
    }
    *param_2 = sVar9;
    iVar19 = iVar19 + 1;
    iVar21 = iVar21 + *piVar8;
  } while( true );
}




// decompiled code
// original method signature: 
// int FUN_0007f8f8(int *param_1,short *param_2);
 // line 0, offset 0x0007f8f8
int FUN_0007f8f8(int *param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined uVar7;
  
  sVar2 = *param_2;
  cVar1 = *(char *)(param_2 + 0x3a);
  FUN_0007ea14(param_1,param_2);
  sVar3 = *param_2;
  iVar5 = FUN_0007f14c(param_1,param_2);
  if (iVar5 == 0) {
    if (*(char *)(param_2 + 0x2d) != '\0') {
      *param_2 = sVar3;
      FUN_0007f034(param_2);
      if (*(char *)(param_2 + 0x2d) == '\x01') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(*(int *)(param_2 + 0x40) + 1) + -1;
      }
      *(char *)(param_2 + 0x3a) = cVar4;
      FUN_0007f094((int)param_2);
      *(undefined *)((int)param_2 + 0x77) = 2;
      FUN_0007eee0((int)param_2);
      FUN_0007edb8((int)param_2,(int *)(Chunk_chunkCenters + (uint)*(byte *)((int)param_2 + 0x75)));
    }
    corrPt_47 = *param_1;
    DAT_8013dfc8 = param_1[1];
    DAT_8013dfcc = param_1[2];
    iVar6 = *(int *)(param_2 + 0x3c);
    iVar5 = 0;
    while ((iVar6 == 0 && (iVar5 < 10))) {
      corrPt_47 = corrPt_47 + (*(int *)((int)*param_2 * 0x20 + iGp00000274) - corrPt_47 >> 5);
      DAT_8013dfcc = DAT_8013dfcc +
                     (*(int *)((int)*param_2 * 0x20 + iGp00000274 + 8) - DAT_8013dfcc >> 5);
      FUN_0007f14c(&corrPt_47,param_2);
      iVar6 = *(int *)(param_2 + 0x3c);
      iVar5 = iVar5 + 1;
    }
  }
  uVar7 = 0;
  *(bool *)(param_2 + 0x2c) = sVar2 != *param_2;
  if ((cVar1 != *(char *)(param_2 + 0x3a)) || (sVar2 != *param_2)) {
    uVar7 = 1;
  }
  *(undefined *)((int)param_2 + 0x59) = uVar7;
  return (int)*(char *)(param_2 + 0x2c);
}




// decompiled code
// original method signature: 
// int FUN_0007fac4(int *param_1,short *param_2,int param_3);
 // line 0, offset 0x0007fac4
int FUN_0007fac4(int *param_1,short *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined *)((int)param_2 + 0x5b) = 3;
  if (param_3 == 0) {
    *(undefined *)(param_2 + 0x3b) = 1;
    *(undefined *)((int)param_2 + 0x77) = 1;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined *)(param_2 + 0x3a) = 0xff;
    *(undefined *)((int)param_2 + 0x5b) = 0;
    iVar4 = FUN_0007ea14(param_1,param_2);
  }
  else {
    *(undefined *)(param_2 + 0x3b) = 2;
    if (*(int *)(param_2 + 0x3c) != 0) {
      bVar1 = false;
      uVar2 = FUN_000e4328(*(int *)(param_2 + 10) - *(int *)(param_2 + 0x10),
                           param_1[2] - *(int *)(param_2 + 0x14));
      uVar3 = FUN_000e4328(*param_1 - *(int *)(param_2 + 0x10),
                           *(int *)(param_2 + 0xe) - *(int *)(param_2 + 0x14));
      if ((int)(uVar2 - uVar3) < 1) {
        uVar2 = FUN_000e4328(*(int *)(param_2 + 4) - *(int *)(param_2 + 10),
                             param_1[2] - *(int *)(param_2 + 0xe));
        uVar3 = FUN_000e4328(*param_1 - *(int *)(param_2 + 10),
                             *(int *)(param_2 + 8) - *(int *)(param_2 + 0xe));
        if ((int)(uVar2 - uVar3) < 1) {
          uVar2 = FUN_000e4328(*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0x16),
                               param_1[2] - *(int *)(param_2 + 0x1a));
          uVar3 = FUN_000e4328(*param_1 - *(int *)(param_2 + 0x16),
                               *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x1a));
          if ((int)(uVar2 - uVar3) < 1) {
            uVar2 = FUN_000e4328(*(int *)(param_2 + 0x16) - *(int *)(param_2 + 4),
                                 param_1[2] - *(int *)(param_2 + 8));
            uVar3 = FUN_000e4328(*param_1 - *(int *)(param_2 + 4),
                                 *(int *)(param_2 + 0x1a) - *(int *)(param_2 + 8));
            bVar1 = (int)(uVar2 - uVar3) < 1;
          }
        }
      }
      if (bVar1) {
        *(undefined *)((int)param_2 + 0x59) = 0;
        *(undefined *)(param_2 + 0x2c) = 0;
        return 0;
      }
    }
    iVar4 = FUN_0007f8f8(param_1,param_2);
  }
  return iVar4;
}




// decompiled code
// original method signature: 
// uint FUN_0007ffd4(short *param_1);
 // line 0, offset 0x0007ffd4
uint FUN_0007ffd4(short *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((int)*param_1 * 0x20 + iGp00000274 + 0x15) & 0x44) == 0) {
    if (*(byte **)(param_1 + 0x3c) == (byte *)0x0) {
      bVar1 = 0xe;
    }
    else {
      bVar1 = **(byte **)(param_1 + 0x3c) & 0xf;
    }
    return (uint)(bVar1 == 8);
  }
  return 1;
}




// decompiled code
// original method signature: 
// void FUN_0008002c(short *param_1);
 // line 0, offset 0x0008002c
void FUN_0008002c(short *param_1)

{
  tNormalCacheEntry *ptVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0xffffffff;
  iVar4 = -1;
  ptVar1 = &BWSM_NormalCache;
  iVar2 = 0;
  do {
    if (ptVar1->accessTime < uVar3) {
      uVar3 = ptVar1->accessTime;
      iVar4 = iVar2;
    }
    iVar2 = iVar2 + 1;
    ptVar1 = ptVar1 + 1;
  } while (iVar2 < 0x10);
  (&BWSM_NormalCache)[iVar4].accessTime = uGp0000028c + 1;
  iVar2 = *(int *)(param_1 + 0x36);
  iVar5 = *(int *)(param_1 + 0x38);
  (&BWSM_NormalCache)[iVar4].forward.x = *(int *)(param_1 + 0x34);
  (&BWSM_NormalCache)[iVar4].forward.y = iVar2;
  (&BWSM_NormalCache)[iVar4].forward.z = iVar5;
  iVar2 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x32);
  (&BWSM_NormalCache)[iVar4].normal.x = *(int *)(param_1 + 0x2e);
  (&BWSM_NormalCache)[iVar4].normal.y = iVar2;
  (&BWSM_NormalCache)[iVar4].normal.z = iVar5;
  (&BWSM_NormalCache)[iVar4].sliceInd = *param_1;
  (&BWSM_NormalCache)[iVar4].quadInd = *(char *)(param_1 + 0x3a);
  (&BWSM_NormalCache)[iVar4].triangleFlag = *(uchar *)((int)param_1 + 0x5b);
  uGp0000028c = uGp0000028c + 1;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_000800e8(short *param_1);
 // line 0, offset 0x000800e8
undefined4 FUN_000800e8(short *param_1)

{
  byte *pbVar1;
  tNormalCacheEntry *ptVar2;
  int iVar3;
  int iVar4;
  
  ptVar2 = &BWSM_NormalCache;
  iVar3 = 0;
  pbVar1 = &BWSM_NormalCache.triangleFlag;
  uGp0000028c = uGp0000028c + 1;
  while (((ptVar2->sliceInd != *param_1 || (pbVar1[1] != *(byte *)(param_1 + 0x3a))) ||
         ((uint)*pbVar1 != (int)*(char *)((int)param_1 + 0x5b)))) {
    pbVar1 = pbVar1 + 0x20;
    iVar3 = iVar3 + 1;
    ptVar2 = ptVar2 + 1;
    if (0xf < iVar3) {
LAB_00080154:
      if (0xf < iVar3) {
        return 0;
      }
      iVar3 = (ptVar2->normal).y;
      iVar4 = (ptVar2->normal).z;
      *(int *)(param_1 + 0x2e) = (ptVar2->normal).x;
      *(int *)(param_1 + 0x30) = iVar3;
      *(int *)(param_1 + 0x32) = iVar4;
      iVar3 = (ptVar2->forward).y;
      iVar4 = (ptVar2->forward).z;
      *(int *)(param_1 + 0x34) = (ptVar2->forward).x;
      *(int *)(param_1 + 0x36) = iVar3;
      *(int *)(param_1 + 0x38) = iVar4;
      return 1;
    }
  }
  ptVar2->accessTime = uGp0000028c;
  goto LAB_00080154;
}




// decompiled code
// original method signature: 
// void FUN_000801e8(short *param_1);
 // line 0, offset 0x000801e8
void FUN_000801e8(short *param_1)

{
  int iVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  if (((int)param_1[2] != (int)*(char *)((int)param_1 + 0x5b)) &&
     (iVar1 = FUN_000800e8(param_1), iVar1 != 1)) {
    if (*(char *)((int)param_1 + 0x5b) == '\x03') {
      iVar1 = *(int *)(param_1 + 10) - *(int *)(param_1 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      local_20 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x16)) + (iVar1 >> 3);
      iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 6);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      local_1c = (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 0x18)) + (iVar1 >> 3);
      iVar1 = *(int *)(param_1 + 0xe) - *(int *)(param_1 + 8);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      local_18 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1a)) + (iVar1 >> 3);
      iVar1 = *(int *)(param_1 + 10) - *(int *)(param_1 + 0x10);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      local_30 = (*(int *)(param_1 + 4) - *(int *)(param_1 + 0x16)) + (iVar1 >> 3);
      iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x12);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      local_2c = (*(int *)(param_1 + 6) - *(int *)(param_1 + 0x18)) + (iVar1 >> 3);
      iVar1 = *(int *)(param_1 + 0xe) - *(int *)(param_1 + 0x14);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      local_28 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x1a)) + (iVar1 >> 3);
    }
    else {
      if (*(char *)((int)param_1 + 0x5b) == '\x02') {
        local_20 = *(int *)(param_1 + 10) - *(int *)(param_1 + 4);
        local_1c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 6);
        local_18 = *(int *)(param_1 + 0xe) - *(int *)(param_1 + 8);
        local_30 = *(int *)(param_1 + 10) - *(int *)(param_1 + 0x10);
        local_2c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x12);
        local_28 = *(int *)(param_1 + 0xe) - *(int *)(param_1 + 0x14);
      }
      else {
        local_20 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x16);
        local_1c = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 0x18);
        local_18 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1a);
        local_30 = *(int *)(param_1 + 4) - *(int *)(param_1 + 0x16);
        local_2c = *(int *)(param_1 + 6) - *(int *)(param_1 + 0x18);
        local_28 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x1a);
      }
    }
    *(int *)(param_1 + 0x34) = local_20;
    *(int *)(param_1 + 0x36) = local_1c;
    *(int *)(param_1 + 0x38) = local_18;
    FUN_000eaae4(&local_20,&local_30,(int *)(param_1 + 0x2e));
    FUN_0009da1c((uint *)(param_1 + 0x2e));
    if (0xffff < *(int *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x30) = 0xfff9;
    }
    FUN_0009da1c((uint *)(param_1 + 0x34));
    FUN_0008002c(param_1);
  }
  param_1[2] = (short)*(char *)((int)param_1 + 0x5b);
  return;
}




// decompiled code
// original method signature: 
// short * FUN_00080520(short *param_1);
 // line 0, offset 0x00080520
short * FUN_00080520(short *param_1)

{
  FUN_000801e8(param_1);
  return param_1 + 0x2e;
}




// decompiled code
// original method signature: 
// int FUN_00080570(int *param_1,short *param_2,int param_3);
 // line 0, offset 0x00080570
int FUN_00080570(int *param_1,short *param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_0007fac4(param_1,param_2,param_3);
  if (*(int *)(param_2 + 0x3c) != 0) {
    uVar3 = FUN_000e4328(*(int *)(param_2 + 0x10) - *(int *)(param_2 + 4),
                         param_1[2] - *(int *)(param_2 + 8));
    uVar4 = FUN_000e4328(*param_1 - *(int *)(param_2 + 4),
                         *(int *)(param_2 + 0x14) - *(int *)(param_2 + 8));
    uVar1 = 2;
    if (0 < (int)(uVar3 - uVar4)) {
      uVar1 = 1;
    }
    *(undefined *)((int)param_2 + 0x5b) = uVar1;
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// void FUN_0008060c(int *param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x0008060c
void FUN_0008060c(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack184 [10];
  int aiStack144 [10];
  int aiStack104 [10];
  int local_40 [10];
  
  FUN_000eabac(aiStack184,param_2);
  FUN_000eac10(aiStack144,param_3);
  FUN_000eac74(aiStack104,param_4);
  FUN_0009dd8c(aiStack104,aiStack144,local_40);
  FUN_0009dd8c(local_40,aiStack184,param_1);
  iVar1 = param_1[3];
  iVar2 = param_1[4];
  iVar3 = param_1[5];
  param_1[3] = -param_1[6];
  param_1[5] = -param_1[8];
  param_1[4] = -param_1[7];
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  param_1[8] = iVar3;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000807c4(int param_1,int *param_2);
 // line 0, offset 0x000807c4
void FUN_000807c4(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  bVar1 = false;
  uVar2 = FUN_0007ffd4((short *)&(&Camera_gInfo)[param_1].slicePos);
  if ((uVar2 != 0) ||
     (uVar2 = FUN_0007ffd4((short *)&((&Camera_gInfo)[param_1].anchor)->simRoadInfo), uVar2 != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    piVar3 = (int *)FUN_00080520((short *)&(&Camera_gInfo)[param_1].slicePos);
    local_38 = *piVar3;
    local_34 = piVar3[1];
    local_30 = piVar3[2];
    local_28 = (&Camera_gInfo)[param_1].position.x;
    local_24 = (&Camera_gInfo)[param_1].position.y;
    local_20 = (&Camera_gInfo)[param_1].position.z;
    iVar4 = FUN_0009fb30(&local_28,&local_38,(int *)(&Camera_gInfo)[param_1].slicePos.quadPts);
    iVar5 = GameSetup_gData.track;
    if (0xf < GameSetup_gData.track) {
      iVar5 = GameSetup_gData.track + -7;
    }
    iVar4 = ((&gTunnelCamHeight)[iVar5] - (((&Camera_gInfo)[param_1].anchor)->position).y) + iVar4;
    if (iVar4 < *param_2) {
      *param_2 = iVar4;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_0008090c(int param_1);
 // line 0, offset 0x0008090c
void FUN_0008090c(int param_1)

{
  char cVar1;
  uint uVar2;
  BO_tNewtonObj *pBVar3;
  int local_40;
  undefined *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  local_40 = DAT_800558a4;
  local_3c = PTR_DAT_800558a8;
  local_38 = DAT_800558ac;
  if (((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
     (InBetween == 0)) {
    if (((&Camera_gInfo)[param_1].field_0x77 & 1) != 0) {
      local_38 = -DAT_800558ac;
    }
    FUN_000eaed8(&local_40,(int *)&((&Camera_gInfo)[param_1].anchor)->roadMatrix,&local_30);
    FUN_000807c4(param_1,&local_2c);
    local_20 = (&Camera_gInfo)[param_1].relpos.x;
    local_1c = (&Camera_gInfo)[param_1].relpos.y;
    local_18 = (&Camera_gInfo)[param_1].relpos.z;
    uVar2 = FUN_000e4328(local_30 - local_20,0x51e);
    (&Camera_gInfo)[param_1].relpos.x = local_20 + uVar2;
    uVar2 = FUN_000e4328(local_2c - local_1c,0x51e);
    (&Camera_gInfo)[param_1].relpos.y = local_1c + uVar2;
    uVar2 = FUN_000e4328(local_28 - local_18,0x51e);
    pBVar3 = (&Camera_gInfo)[param_1].anchor;
    (&Camera_gInfo)[param_1].relpos.z = local_18 + uVar2;
    (&Camera_gInfo)[param_1].position.x = (pBVar3->position).x + (&Camera_gInfo)[param_1].relpos.x;
    (&Camera_gInfo)[param_1].position.y = (pBVar3->position).y + (&Camera_gInfo)[param_1].relpos.y;
    cVar1 = (&Camera_gInfo)[param_1].tumbling;
    (&Camera_gInfo)[param_1].position.z = (pBVar3->position).z + (&Camera_gInfo)[param_1].relpos.z;
    if (cVar1 == '\0') {
      (&Camera_gInfo)[param_1].intransition = '2';
    }
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
         *(uint *)&(&Camera_gInfo)[param_1].field_0x74 & 0xfffffffb | 0x7a;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_00081ab8(int param_1);
 // line 0, offset 0x00081ab8
void FUN_00081ab8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  BO_tNewtonObj *pBVar4;
  uint uVar5;
  camera_info *pcVar6;
  uint local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined *local_28 [4];
  int local_18;
  int local_14;
  
  local_28[0] = PTR_DAT_800558b0;
  local_28[1] = PTR_DAT_800558b4;
  local_28[2] = PTR_DAT_800558b8;
  if ((((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
      (InBetween == 0)) && (simVar.pauseSim == 0)) {
    sVar1 = (&Camera_gInfo)[param_1].circleAngle + 1;
    (&Camera_gInfo)[param_1].circleAngle = sVar1;
    FUN_000eadbc((int)sVar1,&local_18,&local_14);
    local_48 = FUN_000e4328((int)&DAT_00048000,local_14);
    local_40 = FUN_000e4328(0x60000,local_18);
    if (((int)(&Camera_gInfo)[param_1].circleAngle + 0x100U & 0x1ff) == 0) {
      (&Camera_gInfo)[param_1].circleCounter = (&Camera_gInfo)[param_1].circleCounter + 1;
    }
    uVar5 = (int)(&Camera_gInfo)[param_1].circleAngle - 0x80;
    if ((uVar5 & 0x1ff) < 0x80) {
      iVar2 = (uint)(ushort)(&Camera_gInfo)[param_1].circleCounter << 0x10;
      iVar3 = iVar2 >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar3 + ((iVar3 / 3 + (iVar3 >> 0x1f)) - (iVar2 >> 0x1f)) * -3) * 0x10000
                         >> 0xe));
      local_44 = ((int)((int)(local_28[(iVar3 + 1) % 3] + -local_44) * (uVar5 & 0x7f)) >> 7) +
                 local_44;
    }
    else {
      iVar2 = (uint)(ushort)(&Camera_gInfo)[param_1].circleCounter << 0x10;
      iVar3 = iVar2 >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar3 + ((iVar3 / 3 + (iVar3 >> 0x1f)) - (iVar2 >> 0x1f)) * -3) * 0x10000
                         >> 0xe));
    }
    pcVar6 = &Camera_gInfo + param_1;
    FUN_000eaed8((int *)&local_48,(int *)&pcVar6->anchor->orientMat,&local_38);
    FUN_000807c4(param_1,&local_34);
    pBVar4 = pcVar6->anchor;
    (&Camera_gInfo)[param_1].position.x = (pcVar6->anchor->position).x + local_38;
    (&Camera_gInfo)[param_1].position.y = (pBVar4->position).y + local_34;
    (&Camera_gInfo)[param_1].position.z = (pBVar4->position).z + local_30;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_00082254(int param_1);
 // line 0, offset 0x00082254
void FUN_00082254(int param_1)

{
  int iVar1;
  AnimScript *pAVar2;
  BO_tNewtonObj *pBVar3;
  camera_info *pcVar4;
  int aiStack96 [4];
  int local_50;
  int local_4c;
  int local_48;
  int aiStack64 [10];
  
  pcVar4 = &Camera_gInfo + param_1;
  if ((&Camera_gInfo)[param_1].animHandle == -1) {
    iVar1 = FUN_00073ce8(1);
    (&Camera_gInfo)[param_1].animHandle = (char)iVar1;
  }
  pAVar2 = FUN_00073dec((int)(&Camera_gInfo)[param_1].animHandle);
  iVar1 = FUN_000745f8((int *)pAVar2,aiStack96,(int)aiStack64);
  if (iVar1 < 1) {
    FUN_00073e80(1,6,aiStack96,(int)aiStack64);
  }
  FUN_000eaed8(aiStack96,(int *)&pcVar4->anchor->orientMat,&local_50);
  pBVar3 = pcVar4->anchor;
  (&Camera_gInfo)[param_1].position.x = (pcVar4->anchor->position).x + local_50;
  (&Camera_gInfo)[param_1].position.y = (pBVar3->position).y + local_4c;
  (&Camera_gInfo)[param_1].position.z = (pBVar3->position).z + local_48;
  FUN_0009dd8c(aiStack64,(int *)&pBVar3->orientMat,(int *)&(&Camera_gInfo)[param_1].rotation);
  *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
       *(uint *)&(&Camera_gInfo)[param_1].field_0x74 & 0xfffffff1 | 0x70;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000824c0(int param_1);
 // line 0, offset 0x000824c0
void FUN_000824c0(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Trk_NewSlice *pTVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  BO_tNewtonObj *pBVar9;
  camera_info *pcVar10;
  
  pcVar10 = &Camera_gInfo + param_1;
  pBVar9 = pcVar10->anchor;
  iVar6 = ((0x10000 - (&camSpeedTable)[(uint)(byte)(&Camera_gInfo)[param_1].splineMode]) * 0xf >>
          0x10) + 1;
  iVar8 = 8;
  if (iVar6 < 9) {
    iVar8 = iVar6;
  }
  if ((&Replay_ReplayCamera)[param_1].defaultCamera == 0) {
    uVar2 = FUN_000e4328((&Camera_gInfo)[param_1].rotation.m[6],(pBVar9->roadMatrix).m[6]);
    uVar3 = FUN_000e4328((&Camera_gInfo)[param_1].rotation.m[7],(pcVar10->anchor->roadMatrix).m[7]);
    uVar4 = FUN_000e4328((&Camera_gInfo)[param_1].rotation.m[8],(pcVar10->anchor->roadMatrix).m[8]);
    if ((int)(uVar2 + uVar3 + uVar4) < 0) {
      iVar8 = -iVar8;
    }
    if (pBVar9[1].shadowMat.m[7] < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0) {
      sVar1 = (pBVar9->simRoadInfo).slice;
      sVar7 = sVar1 + (short)iVar8;
      if ((int)sVar1 + iVar8 < 0) {
        sVar7 = (short)gNumSlices + sVar7;
      }
      (&Camera_gInfo)[param_1].slicePos.slice = sVar7;
    }
    else {
      sVar1 = (pBVar9->simRoadInfo).slice;
      sVar7 = sVar1 + (short)iVar8;
      if (gNumSlices <= (int)sVar1 + iVar8) {
        sVar7 = sVar7 - (short)gNumSlices;
      }
      (&Camera_gInfo)[param_1].slicePos.slice = sVar7;
    }
    pTVar5 = BWorldSm_slices + (int)(&Camera_gInfo)[param_1].slicePos.slice;
    iVar8 = pTVar5->center[1];
    iVar6 = pTVar5->center[2];
    (&Camera_gInfo)[param_1].position.x = pTVar5->center[0];
    (&Camera_gInfo)[param_1].position.y = iVar8;
    (&Camera_gInfo)[param_1].position.z = iVar6;
    FUN_0007fac4((int *)&(&Camera_gInfo)[param_1].position,
                 (short *)&(&Camera_gInfo)[param_1].slicePos,1);
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_00082c3c(uint param_1);
 // line 0, offset 0x00082c3c
undefined4 FUN_00082c3c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & param_1 - 1;
  uVar2 = param_1 - uVar1;
  param_1 = param_1 & 0xffff;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 - (uVar1 & 0xffff) != (uVar2 & 0xffff)) break;
    param_1 = uVar1 & 0xffff;
    uVar2 = uVar2 << 1;
    uVar1 = uVar1 & uVar1 - 1;
  }
  return 1;
}




// decompiled code
// original method signature: 
// void FUN_00082c94(int param_1);
 // line 0, offset 0x00082c94
void FUN_00082c94(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  Trk_NewSlice *pTVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  camera_info *pcVar12;
  int local_40;
  int local_3c;
  int local_38;
  int local_1c;
  int local_18;
  
  if (((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
     (InBetween == 0)) {
    FUN_000eab9c(0xbe);
    pcVar12 = &Camera_gInfo + param_1;
    if (simGlobal.gameTicks < (&Camera_gInfo)[param_1].POInhibitor) {
      FUN_000831a8(param_1);
    }
    else {
      pTVar5 = BWorldSm_slices + (int)(pcVar12->anchor->simRoadInfo).slice;
      iVar10 = pTVar5->center[0];
      iVar11 = pTVar5->center[1];
      local_18 = pTVar5->center[2];
      cVar1 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].forward[2];
      iVar6 = (pcVar12->anchor->position).x;
      cVar2 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].right[0];
      local_40 = (int)cVar2 * 0x800;
      cVar3 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].right[1];
      local_3c = (int)cVar3 * 0x800;
      cVar4 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].right[2];
      local_38 = (int)cVar4 * 0x800;
      uVar7 = FUN_000e4328((pcVar12->anchor->position).z - local_18,
                           (int)BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].forward
                                [0] << 9);
      uVar8 = FUN_000e4328(iVar6 - iVar10,(int)cVar1 << 9);
      uVar9 = FUN_00082c3c((uint)(ushort)BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].
                                         pavedProfile);
      if ((int)(uVar7 - uVar8) < 0) {
        uVar9 = uVar9 ^ 1;
      }
      if (uVar9 != 0) {
        local_40 = (int)cVar2 * -0x800;
        local_38 = (int)cVar4 * -0x800;
        local_3c = (int)cVar3 * -0x800;
      }
      local_1c = 0x60000;
      FUN_000807c4(param_1,&local_1c);
      local_1c = local_1c + iVar11 + local_3c;
      local_18 = local_18 + local_38;
      uVar7 = FUN_000e4328((iVar10 + local_40) - (&Camera_gInfo)[param_1].position.x,0x7ae);
      iVar6 = (&Camera_gInfo)[param_1].position.y;
      (&Camera_gInfo)[param_1].position.x = (&Camera_gInfo)[param_1].position.x + uVar7;
      uVar7 = FUN_000e4328(local_1c - iVar6,0x7ae);
      iVar6 = (&Camera_gInfo)[param_1].position.z;
      (&Camera_gInfo)[param_1].position.y = (&Camera_gInfo)[param_1].position.y + uVar7;
      uVar7 = FUN_000e4328(local_18 - iVar6,0x7ae);
      uVar8 = *(uint *)&(&Camera_gInfo)[param_1].field_0x74;
      (&Camera_gInfo)[param_1].position.z = (&Camera_gInfo)[param_1].position.z + uVar7;
      *(uint *)&(&Camera_gInfo)[param_1].field_0x74 = uVar8 & 0xfffffff9 | 0x78;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000831a8(int param_1);
 // line 0, offset 0x000831a8
void FUN_000831a8(int param_1)

{
  int iVar1;
  BO_tNewtonObj *pBVar2;
  camera_info *pcVar3;
  uint local_18;
  int local_14;
  int local_10;
  
  pcVar3 = &Camera_gInfo + param_1;
  iVar1 = (((&Camera_gInfo)[param_1].target)->position).x - (pcVar3->anchor->position).x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  local_18 = iVar1 >> 2;
  local_14 = (((&Camera_gInfo)[param_1].target)->position).y - (pcVar3->anchor->position).y;
  if (local_14 < 0) {
    local_14 = local_14 + 3;
  }
  local_14 = local_14 >> 2;
  local_10 = (((&Camera_gInfo)[param_1].target)->position).z - (pcVar3->anchor->position).z;
  if (local_10 < 0) {
    local_10 = local_10 + 3;
  }
  local_10 = local_10 >> 2;
  FUN_0009da1c(&local_18);
  pBVar2 = pcVar3->anchor;
  (&Camera_gInfo)[param_1].position.x = (pcVar3->anchor->position).x + local_18 * -2;
  *(undefined **)&(&Camera_gInfo)[param_1].position.y = &DAT_00013333 + (pBVar2->position).y;
  (&Camera_gInfo)[param_1].position.z = (pBVar2->position).z + local_10 * -2;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000832b0(int param_1);
 // line 0, offset 0x000832b0
void FUN_000832b0(int param_1)

{
  char cVar1;
  forceFocus_t fVar2;
  
  fVar2 = (&Camera_gInfo)[param_1].forceFocus;
  if (fVar2 == FOCUS_AI) {
    cVar1 = (&Camera_gInfo)[param_1].focusOnAICar;
    *(Car_tObj **)&(&Camera_gInfo)[param_1].anchor =
         (&__Cars_gList_9__)[(int)(&Camera_gInfo)[param_1].focusOnAICar];
    *(Car_tObj **)&(&Camera_gInfo)[param_1].target = (&__Cars_gList_9__)[(int)cVar1];
    FUN_00081ab8(param_1);
  }
  else {
    if ((1 < (int)fVar2) && (fVar2 == FOCUS_COPANDAI)) {
      cVar1 = (&Camera_gInfo)[param_1].focusOnAICar;
      *(Car_tObj **)&(&Camera_gInfo)[param_1].anchor = (&__Cars_gList_9__)[param_1];
      *(Car_tObj **)&(&Camera_gInfo)[param_1].target = (&__Cars_gList_9__)[(int)cVar1];
      FUN_000831a8(param_1);
    }
  }
  (&Camera_gInfo)[param_1].POInhibitor = simGlobal.gameTicks + 0x140;
  *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
       *(uint *)&(&Camera_gInfo)[param_1].field_0x74 & 0xffffffb9 | 0x38;
  uGp00000290 = 0xbe;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000833d8(void);
 // line 0, offset 0x000833d8
/* WARNING: Type propagation algorithm not settling */

void FUN_000833d8(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  camera_info *pcVar11;
  int player;
  BO_tNewtonObj *pBVar12;
  int *piVar13;
  int *piVar14;
  Car_tObj **ppCVar15;
  int iVar16;
  
  player = 0;
  pcVar11 = &Camera_gInfo;
  iVar16 = 0;
  ppCVar15 = &__Cars_gHumanRaceCarList_9__;
  piVar13 = Camera_gInfo.rotation.m + 6;
  do {
    if ((int)(uint)(Camera_gInfo.field_0x74 >> 7) < player) {
      return;
    }
    pBVar12 = pcVar11->anchor;
    if ((*(uint *)&pcVar11->field_0x74 >> 6 & 1) == 0) {
LAB_00083500:
      if (((pBVar12[1].simRoadInfo.quadPts[1].y & 1U) != 0) && (pBVar12[1].roadMatrix.m[3] == 2)) {
        FUN_00082254(player);
        goto LAB_00083584;
      }
      if (0 < (int)pcVar11->forceFocus) {
        FUN_000832b0(player);
        goto LAB_00083584;
      }
      if (((*ppCVar15)->pullOver != 0) && (((*ppCVar15)->stats).finishType != 3)) {
        FUN_00082c94(player);
        goto LAB_00083584;
      }
      if ((pcVar11->field_0x74 & 1) != 0) {
        iVar9 = (int)pcVar11->mode;
        uVar8 = *(uint *)&pcVar11->field_0x74;
        uVar2 = ((&Camera_gFlags)[iVar9].field_0xc & 1) << 1;
        *(uint *)&pcVar11->field_0x74 = uVar8 & 0xfffffffd | uVar2;
        uVar3 = ((&Camera_gFlags)[iVar9].field_0xc & 2) << 1;
        *(uint *)&pcVar11->field_0x74 = uVar8 & 0xfffffff9 | uVar2 | uVar3;
        uVar4 = ((&Camera_gFlags)[iVar9].field_0xc & 4) << 1;
        *(uint *)&pcVar11->field_0x74 = uVar8 & 0xfffffff1 | uVar2 | uVar3 | uVar4;
        uVar5 = ((&Camera_gFlags)[iVar9].field_0xc & 8) << 1;
        *(uint *)&pcVar11->field_0x74 = uVar8 & 0xffffffe1 | uVar2 | uVar3 | uVar4 | uVar5;
        uVar6 = ((&Camera_gFlags)[iVar9].field_0xc & 0x10) << 1;
        *(uint *)&pcVar11->field_0x74 = uVar8 & 0xffffffc1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
        uVar7 = ((&Camera_gFlags)[iVar9].field_0xc & 0x20) << 1;
        *(uint *)&pcVar11->field_0x74 =
             uVar8 & 0xffffff81 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
        *(uint *)&pcVar11->field_0x74 =
             uVar8 & 0xf7ffff80 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 |
             (uint)(pcVar11->mode < 2) << 0x1b;
        *(Car_tObj **)&pcVar11->anchor = *ppCVar15;
        bVar1 = 1 < Replay_ReplayMode;
        *(Car_tObj **)&pcVar11->target = *ppCVar15;
        if ((bVar1) && (*(int *)((int)&Replay_ReplayCamera.cameraMode + iVar16) == 0x13)) {
          FUN_000b5b14(player,(int)(pcVar11->anchor->simRoadInfo).slice);
        }
      }
      switch(pcVar11->mode) {
      case 0:
      case 1:
switchD_80083708_caseD_0:
        Camera_UpdateBumperCam__Fi(player);
        pcVar11 = pcVar11 + 1;
        piVar14 = piVar13;
        iVar9 = iVar16;
LAB_80083428:
        iVar16 = iVar9 + 0x10;
        ppCVar15 = ppCVar15 + 1;
        piVar13 = piVar14 + 0x44;
        player = player + 1;
        if ((int)(uint)(Camera_gInfo.field_0x74 >> 7) < player) {
          return;
        }
        pBVar12 = pcVar11->anchor;
        if ((*(uint *)&pcVar11->field_0x74 >> 6 & 1) != 0) {
          if (pcVar11->tumbling == '\0') {
            if ((pBVar12->orientationToGround).y < 0x8000) {
              uVar2 = fixedmult(*piVar13,(pBVar12->roadMatrix).m[6]);
              uVar3 = fixedmult(piVar14[0x45],(pcVar11->anchor->roadMatrix).m[7]);
              uVar4 = fixedmult(piVar14[0x46],(pcVar11->anchor->roadMatrix).m[8]);
              *(uint *)&pcVar11->field_0x74 =
                   *(uint *)&pcVar11->field_0x74 & 0xfeffffff |
                   (uint)((int)(uVar2 + uVar3 + uVar4) < 0) << 0x18;
              pcVar11->tumbling = 'd';
            }
            goto LAB_80083500;
          }
          pcVar11->tumbling = pcVar11->tumbling + -1;
          Camera_UpdateCollisionCam__Fi(player);
LAB_80083584:
          *(uint *)&pcVar11->field_0x74 = *(uint *)&pcVar11->field_0x74 & 0xf7ffffff | 1;
          goto LAB_80083810;
        }
LAB_80083500:
        if (((pBVar12[1].simRoadInfo.quadPts[1].y & 1U) != 0) && (pBVar12[1].roadMatrix.m[3] == 2))
        {
          Camera_UpdateFinishCam__Fi(player);
          goto LAB_80083584;
        }
        if (0 < (int)pcVar11->forceFocus) {
          Camera_UpdateBTCopCam__Fi(player);
          goto LAB_80083584;
        }
        if (((*ppCVar15)->pullOver != 0) && (((*ppCVar15)->stats).finishType != 3)) {
          Camera_UpdatePulloverCam__Fi(player);
          goto LAB_80083584;
        }
        if ((pcVar11->field_0x74 & 1) != 0) {
          iVar10 = (int)pcVar11->mode;
          uVar8 = *(uint *)&pcVar11->field_0x74;
          uVar2 = ((&Camera_gFlags)[iVar10].field_0xc & 1) << 1;
          *(uint *)&pcVar11->field_0x74 = uVar8 & 0xfffffffd | uVar2;
          uVar3 = ((&Camera_gFlags)[iVar10].field_0xc & 2) << 1;
          *(uint *)&pcVar11->field_0x74 = uVar8 & 0xfffffff9 | uVar2 | uVar3;
          uVar4 = ((&Camera_gFlags)[iVar10].field_0xc & 4) << 1;
          *(uint *)&pcVar11->field_0x74 = uVar8 & 0xfffffff1 | uVar2 | uVar3 | uVar4;
          uVar5 = ((&Camera_gFlags)[iVar10].field_0xc & 8) << 1;
          *(uint *)&pcVar11->field_0x74 = uVar8 & 0xffffffe1 | uVar2 | uVar3 | uVar4 | uVar5;
          uVar6 = ((&Camera_gFlags)[iVar10].field_0xc & 0x10) << 1;
          *(uint *)&pcVar11->field_0x74 = uVar8 & 0xffffffc1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6
          ;
          uVar7 = ((&Camera_gFlags)[iVar10].field_0xc & 0x20) << 1;
          *(uint *)&pcVar11->field_0x74 =
               uVar8 & 0xffffff81 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
          *(uint *)&pcVar11->field_0x74 =
               uVar8 & 0xf7ffff80 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 |
               (uint)(pcVar11->mode < 2) << 0x1b;
          *(Car_tObj **)&pcVar11->anchor = *ppCVar15;
          bVar1 = 1 < Replay_ReplayMode;
          *(Car_tObj **)&pcVar11->target = *ppCVar15;
          if ((bVar1) && (*(int *)((int)&tReplayCameraModes_8011705c.cameraMode + iVar9) == 0x13)) {
            Replay_ReplayFindClosestCamera__Fii(player,(int)(pcVar11->anchor->simRoadInfo).slice);
          }
        }
        switch(pcVar11->mode) {
        case 2:
switchD_80083708_caseD_2:
          Camera_UpdateTailCam__Fii(player,0);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 3:
switchD_80083708_caseD_3:
          Camera_UpdateTailCam__Fii(player,1);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 4:
switchD_80083708_caseD_4:
          Camera_UpdateTailCam__Fii(player,2);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 5:
switchD_80083708_caseD_5:
          Camera_UpdateHeliCam__Fii(player,0);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 6:
switchD_80083708_caseD_6:
          Camera_UpdateHeliCam__Fii(player,1);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 7:
switchD_80083708_caseD_7:
          Camera_UpdateHeliCam__Fii(player,2);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 8:
        case 9:
        case 0xf:
switchD_80083708_caseD_8:
          Camera_UpdateSimpleCam__Fi(player);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 10:
switchD_80083708_caseD_a:
          Camera_UpdateCircleCam__Fi(player);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 0xb:
switchD_80083708_caseD_b:
          Camera_UpdateSplineCam__Fi(player);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 0xc:
switchD_80083708_caseD_c:
          Camera_UpdateTVCam__Fi(player);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 0xd:
switchD_80083708_caseD_d:
          Camera_UpdateBlimpCam__Fi(player);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 0xe:
switchD_80083708_caseD_e:
          Camera_UpdateAnimCam__Fi(player);
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 0x11:
        case 0x12:
switchD_80083708_caseD_11:
          Camera_UpdateCopCam2__Fi(player);
        default:
LAB_80083810:
          pcVar11 = pcVar11 + 1;
          piVar14 = piVar13;
          iVar9 = iVar16;
          goto LAB_80083428;
        case 0x10:
          goto switchD_80083708_caseD_10;
        case 0:
        case 1:
          goto switchD_80083708_caseD_0;
        }
      case 2:
        goto switchD_80083708_caseD_2;
      case 3:
        goto switchD_80083708_caseD_3;
      case 4:
        goto switchD_80083708_caseD_4;
      case 5:
        goto switchD_80083708_caseD_5;
      case 6:
        goto switchD_80083708_caseD_6;
      case 7:
        goto switchD_80083708_caseD_7;
      case 8:
      case 9:
      case 0xf:
        goto switchD_80083708_caseD_8;
      case 10:
        goto switchD_80083708_caseD_a;
      case 0xb:
        goto switchD_80083708_caseD_b;
      case 0xc:
        goto switchD_80083708_caseD_c;
      case 0xd:
        goto switchD_80083708_caseD_d;
      case 0xe:
        goto switchD_80083708_caseD_e;
      case 0x10:
        goto switchD_80083708_caseD_10;
      case 0x11:
      case 0x12:
        goto switchD_80083708_caseD_11;
      }
    }
    else {
      if (pcVar11->tumbling == '\0') {
        if ((pBVar12->orientationToGround).y < 0x8000) {
          uVar2 = FUN_000e4328(*piVar13,(pBVar12->roadMatrix).m[6]);
          uVar3 = FUN_000e4328(piVar13[1],(pcVar11->anchor->roadMatrix).m[7]);
          uVar4 = FUN_000e4328(piVar13[2],(pcVar11->anchor->roadMatrix).m[8]);
          *(uint *)&pcVar11->field_0x74 =
               *(uint *)&pcVar11->field_0x74 & 0xfeffffff |
               (uint)((int)(uVar2 + uVar3 + uVar4) < 0) << 0x18;
          pcVar11->tumbling = 'd';
        }
        goto LAB_00083500;
      }
      pcVar11->tumbling = pcVar11->tumbling + -1;
      FUN_0008090c(player);
LAB_00083584:
      *(uint *)&pcVar11->field_0x74 = *(uint *)&pcVar11->field_0x74 & 0xf7ffffff | 1;
    }
    pcVar11 = pcVar11 + 1;
    iVar16 = iVar16 + 0x10;
    ppCVar15 = ppCVar15 + 1;
    piVar13 = piVar13 + 0x44;
    player = player + 1;
  } while( true );
switchD_80083708_caseD_10:
  Camera_UpdateCopCam1__Fi(player);
  pcVar11 = pcVar11 + 1;
  piVar14 = piVar13;
  iVar9 = iVar16;
  goto LAB_80083428;
}




// decompiled code
// original method signature: 
// void FUN_00085608(int param_1,short param_2);
 // line 0, offset 0x00085608
void FUN_00085608(int param_1,short param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  InBetween = 0;
  if (((&Camera_gInfo)[param_1].field_0x74 & 1) == 0) {
    if ((uint)(ushort)(&Camera_gInfo)[param_1].mode - 0xb < 2) {
      uGp00000290 = 0xbe;
      FUN_000e1948(0,0,0x140,0xf0);
    }
    if (5 < (uint)(ushort)(&Camera_gInfo)[param_1].mode - 2) {
      FUN_00085cd4(param_1 + 1);
    }
    if (-1 < (int)(&Camera_gInfo)[param_1].animHandle) {
      FUN_00073d6c((int)(&Camera_gInfo)[param_1].animHandle);
      (&Camera_gInfo)[param_1].animHandle = -1;
    }
    (&Camera_gInfo)[param_1].mode = param_2;
    if (0x13 < param_2) {
      (&Camera_gInfo)[param_1].mode = *(short *)GameSetup_gData.carInfo[param_1].Camera;
    }
    if ((&Camera_gInfo)[param_1].mode == 0xb) {
      FUN_000824c0(param_1);
    }
    (&Camera_gInfo)[param_1].intransition = '2';
    iVar9 = (int)(&Camera_gInfo)[param_1].mode;
    uVar2 = *(uint *)&(&Camera_gInfo)[param_1].field_0x74;
    uVar3 = ((&Camera_gFlags)[iVar9].field_0xc & 1) << 1;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 = uVar2 & 0xfffffffd | uVar3;
    uVar4 = ((&Camera_gFlags)[iVar9].field_0xc & 2) << 1;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 = uVar2 & 0xfffffff9 | uVar3 | uVar4;
    uVar5 = ((&Camera_gFlags)[iVar9].field_0xc & 4) << 1;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 = uVar2 & 0xfffffff1 | uVar3 | uVar4 | uVar5;
    uVar6 = ((&Camera_gFlags)[iVar9].field_0xc & 8) << 1;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
         uVar2 & 0xffffffe1 | uVar3 | uVar4 | uVar5 | uVar6;
    uVar7 = ((&Camera_gFlags)[iVar9].field_0xc & 0x10) << 1;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
         uVar2 & 0xffffffc1 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
    uVar8 = ((&Camera_gFlags)[iVar9].field_0xc & 0x20) << 1;
    sVar1 = (&Camera_gInfo)[param_1].mode;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
         uVar2 & 0xffffff81 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
         uVar2 & 0xf7ffff81 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 |
         (uint)(sVar1 < 2) << 0x1b;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_00085bd0(int param_1,uint *param_2);
 // line 0, offset 0x00085bd0
void FUN_00085bd0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (((&Camera_gInfo)[param_1].field_0x74 & 1) == 0) {
    FUN_00085608(param_1,(ushort)*(byte *)param_2);
    uVar2 = *(uint *)&(&Camera_gInfo)[param_1].field_0x74;
    uVar1 = *param_2 >> 5 & 8;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 = uVar2 & 0xfffffff7 | uVar1;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
         uVar2 & 0xf9fffff7 | uVar1 | (*param_2 >> 9 & 3) << 0x19;
    (&Camera_gInfo)[param_1].splineMode = (byte)(*param_2 >> 0xb) & 7;
    iGp00000290 = (int)*(short *)((int)param_2 + 2);
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    (&Camera_gInfo)[param_1].position.x = param_2[1];
    (&Camera_gInfo)[param_1].position.y = uVar1;
    (&Camera_gInfo)[param_1].position.z = uVar2;
    (&Camera_gInfo)[param_1].TVHeight = param_2[4];
    FUN_0008060c((int *)&(&Camera_gInfo)[param_1].rotation,(int)*(short *)(param_2 + 6),
                 (int)*(short *)((int)param_2 + 0x1a),(int)*(short *)(param_2 + 7));
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_00085cd4(uint param_1);
 // line 0, offset 0x00085cd4
void FUN_00085cd4(uint param_1)

{
  if ((param_1 & 1) != 0) {
    Camera_gInfo.relpos.x = ((Camera_gInfo.anchor)->orientMat).m[6] * -4;
    Camera_gInfo.relpos.y = ((Camera_gInfo.anchor)->orientMat).m[7] * -4;
    Camera_gInfo.relpos.z = ((Camera_gInfo.anchor)->orientMat).m[8] * -4;
  }
  if ((param_1 & 2) != 0) {
    camera_info_8010f3bc.relpos.x = ((camera_info_8010f3bc.anchor)->orientMat).m[6] * -4;
    camera_info_8010f3bc.relpos.y = ((camera_info_8010f3bc.anchor)->orientMat).m[7] * -4;
    camera_info_8010f3bc.relpos.z = ((camera_info_8010f3bc.anchor)->orientMat).m[8] * -4;
  }
  return;
}




// decompiled code
// original method signature: 
// int FUN_0009d3e4(int *param_1,int *param_2);
 // line 0, offset 0x0009d3e4
int FUN_0009d3e4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1 - *param_2;
  if (iVar2 < 1) {
    iVar2 = *param_2 - *param_1;
  }
  iVar1 = param_1[2] - param_2[2];
  if (iVar1 < 1) {
    iVar1 = param_2[2] - param_1[2];
  }
  if (iVar1 < iVar2) {
    return iVar2 + (iVar1 >> 2);
  }
  return iVar1 + (iVar2 >> 2);
}




// decompiled code
// original method signature: 
// void FUN_0009da1c(uint *param_1);
 // line 0, offset 0x0009da1c
void FUN_0009da1c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar1 = uVar5;
  if ((int)uVar5 < 0) {
    uVar1 = -uVar5;
  }
  do {
    if ((int)uVar1 < 0x1000001) {
      uVar1 = uVar6;
      if ((int)uVar6 < 0) {
        uVar1 = -uVar6;
      }
      if ((int)uVar1 < 0x1000001) {
        uVar1 = uVar7;
        if ((int)uVar7 < 0) {
          uVar1 = -uVar7;
        }
        if ((int)uVar1 < 0x1000001) {
          uVar1 = FUN_000e4328(uVar5,uVar5);
          uVar2 = FUN_000e4328(uVar6,uVar6);
          uVar3 = FUN_000e4328(uVar7,uVar7);
          uVar4 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
          while (0x40000000 < uVar4) {
            uVar5 = (int)uVar5 >> 1;
            uVar6 = (int)uVar6 >> 1;
            uVar7 = (int)uVar7 >> 1;
            uVar1 = FUN_000e4328(uVar5,uVar5);
            uVar2 = FUN_000e4328(uVar6,uVar6);
            uVar3 = FUN_000e4328(uVar7,uVar7);
            uVar4 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
          }
          uVar1 = FUN_000eb0ac(uVar1 + uVar2 + uVar3);
          if (uVar1 != 0) {
            uVar5 = FUN_000e4404(uVar5,uVar1);
            *param_1 = uVar5;
            uVar5 = FUN_000e4404(uVar6,uVar1);
            param_1[1] = uVar5;
            uVar1 = FUN_000e4404(uVar7,uVar1);
            param_1[2] = uVar1;
          }
          return;
        }
      }
    }
    uVar5 = (int)uVar5 >> 1;
    uVar6 = (int)uVar6 >> 1;
    uVar7 = (int)uVar7 >> 1;
    uVar1 = uVar5;
    if ((int)uVar5 < 0) {
      uVar1 = -uVar5;
    }
  } while( true );
}




// decompiled code
// original method signature: 
// void FUN_0009dbd4(uint *param_1);
 // line 0, offset 0x0009dbd4
void FUN_0009dbd4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_000e4328(*param_1,*param_1);
  uVar2 = FUN_000e4328(param_1[1],param_1[1]);
  uVar3 = FUN_000e4328(param_1[2],param_1[2]);
  uVar1 = FUN_000eb0ac(uVar1 + uVar2 + uVar3);
  if (uVar1 != 0) {
    iVar4 = FUN_000e4404(0x10000,uVar1);
    uVar1 = FUN_000e4328(*param_1,iVar4);
    *param_1 = uVar1;
    uVar1 = FUN_000e4328(param_1[1],iVar4);
    param_1[1] = uVar1;
    uVar1 = FUN_000e4328(param_1[2],iVar4);
    param_1[2] = uVar1;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_0009dd8c(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x0009dd8c
void FUN_0009dd8c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar8 = 0;
  iVar11 = 8;
  iVar10 = 4;
  piVar9 = param_1;
  do {
    iVar4 = 0;
    iVar7 = 0x18;
    iVar6 = 0xc;
    piVar5 = param_2;
    do {
      iVar1 = *piVar5;
      piVar2 = (int *)((int)param_2 + iVar6);
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + 4;
      iVar3 = iVar8 + iVar4;
      iVar4 = iVar4 + 1;
      local_38[iVar3] =
           ((*piVar9 >> 3) * (iVar1 >> 3) >> 10) +
           ((*(int *)((int)param_1 + iVar10) >> 3) * (*piVar2 >> 3) >> 10) +
           ((*(int *)((int)param_1 + iVar11) >> 3) * (*(int *)((int)param_2 + iVar7) >> 3) >> 10);
      iVar7 = iVar7 + 4;
    } while (iVar4 < 3);
    iVar11 = iVar11 + 0xc;
    iVar10 = iVar10 + 0xc;
    iVar8 = iVar8 + 3;
    piVar9 = piVar9 + 3;
  } while (iVar8 < 9);
  *param_3 = local_38[0];
  param_3[1] = local_38[1];
  param_3[2] = local_38[2];
  param_3[3] = local_38[3];
  param_3[4] = local_28;
  param_3[5] = local_24;
  param_3[6] = local_20;
  param_3[7] = local_1c;
  param_3[8] = local_18;
  return;
}




// decompiled code
// original method signature: 
// void FUN_0009eaa0(void);
 // line 0, offset 0x0009eaa0
void FUN_0009eaa0(void)

{
  int iVar1;
  int iVar2;
  
  ChangedEnabling = (void *)0x0;
  if ((short)uGp0000186c < 1) {
    if ((-1 < (short)uGp0000186c) ||
       (uGp0000186c = uGp0000186c + sGp0000186e, (int)((uint)uGp0000186c << 0x10) < 1))
    goto LAB_0009eb10;
  }
  else {
    uGp0000186c = uGp0000186c + sGp0000186e;
    if (-1 < (int)((uint)uGp0000186c << 0x10)) goto LAB_0009eb10;
  }
  uGp0000186c = 0;
LAB_0009eb10:
  if (uGp0000186c == 0) {
    piGp00001874[1] = 1;
  }
  else {
    piGp00001874[1] = 0;
  }
  (**(code **)(piGp00001874[0x14] + 0x24))
            ((int)piGp00001874 + (int)*(short *)(piGp00001874[0x14] + 0x20));
  iVar1 = FUN_000a8600((int)piGp00001874);
  if (uGp0000186c == 0) {
    iVar2 = FUN_000a8650((int)piGp00001874,*piGp00001874);
    iVar2 = iVar2 * 0xd + 0x6a;
  }
  else {
    iVar2 = FUN_000a8650((int)piGp00001874,*piGp00001874);
    iVar2 = iVar2 * 0xd + (int)(short)uGp0000186c + 0x6a;
  }
  FUN_000d2984(1,0x50,iVar2,0xa0,0xd,0,'\0','\0');
  FUN_000d8ed0(0x50,100,0xa0,(iVar1 + 1) * 0xd + 0x14);
  return;
}




// decompiled code
// original method signature: 
// void FUN_0009ec80(void);
 // line 0, offset 0x0009ec80
void FUN_0009ec80(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iGp00001874 = iGp00000d1c + 0x60;
  (**(code **)(*(int *)(iGp00000d1c + 0xb0) + 0x14))
            (iGp00001874 + (int)*(short *)(*(int *)(iGp00000d1c + 0xb0) + 0x10));
  iVar1 = iGp00000d1c;
  uGp00001870 = 0;
  if ((GameSetup_gData.raceType == 6) || (GameSetup_gData.raceType == 2)) {
    uVar2 = FUN_000a86a8((uint *)(iGp00000d1c + 0x1c));
    if (uVar2 != 0) {
      uVar2 = *(uint *)(iVar1 + 0x1c) | 1;
      goto LAB_0009ed20;
    }
  }
  else {
    uVar2 = FUN_000a86bc((uint *)(iGp00000d1c + 0x1c));
    if (uVar2 != 0) {
      uVar2 = *(uint *)(iVar1 + 0x1c) & 0xfffffffe;
LAB_0009ed20:
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar1 + 0x1c) = uVar2;
    }
  }
  iVar1 = iGp00000d1c;
  if (GameSetup_gData.raceType == 6) {
    uVar2 = FUN_000a86bc((uint *)(iGp00000d1c + 0x50));
    iVar3 = iGp00000d1c;
    if (uVar2 != 0) {
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xfffffffe;
    }
    uVar2 = FUN_000a86a8((uint *)(iGp00000d1c + 0x40));
    if (uVar2 == 0) goto LAB_0009ede0;
    uVar2 = *(uint *)(iVar3 + 0x40) | 1;
  }
  else {
    uVar2 = FUN_000a86a8((uint *)(iGp00000d1c + 0x50));
    iVar3 = iGp00000d1c;
    if (uVar2 != 0) {
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 1;
    }
    uVar2 = FUN_000a86bc((uint *)(iGp00000d1c + 0x40));
    if (uVar2 == 0) goto LAB_0009ede0;
    uVar2 = *(uint *)(iVar3 + 0x40) & 0xfffffffe;
  }
  ChangedEnabling = &DAT_00000001;
  *(uint *)(iVar3 + 0x40) = uVar2;
LAB_0009ede0:
  iVar1 = iGp00000d1c;
  uVar2 = FUN_000a86bc((uint *)(iGp00000d1c + 0x164));
  if (uVar2 != 0) {
    ChangedEnabling = &DAT_00000001;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) & 0xfffffffe;
  }
  if (Replay_ReplayMode < 2) {
    *(uint *)(iGp00000d1c + 0x4c) = *(uint *)(iGp00000d1c + 0x4c) | 0x100;
    *(uint *)(iGp00000d1c + 0x28) = *(uint *)(iGp00000d1c + 0x28) | 0x100;
    uVar2 = *(uint *)(iGp00000d1c + 0x5c) | 0x100;
  }
  else {
    *(uint *)(iGp00000d1c + 0x4c) = *(uint *)(iGp00000d1c + 0x4c) & 0xfffffeff;
    *(uint *)(iGp00000d1c + 0x28) = *(uint *)(iGp00000d1c + 0x28) & 0xfffffeff;
    uVar2 = *(uint *)(iGp00000d1c + 0x5c) & 0xfffffeff;
  }
  *(uint *)(iGp00000d1c + 0x5c) = uVar2;
  return;
}




// decompiled code
// original method signature: 
// int FUN_0009fb30(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x0009fb30
int FUN_0009fb30(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_2[1];
  if ((int)uVar5 < 0x9eb9) {
    iVar4 = *param_2;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *param_1 - *param_3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar3 = param_2[2];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar2 = param_1[2] - param_3[2];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    uVar5 = FUN_000e4404(-((iVar3 >> 8) * (iVar2 >> 8)) - (iVar4 >> 8) * (iVar1 >> 8),uVar5);
  }
  else {
    iVar4 = *param_2;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *param_1 - *param_3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar3 = param_2[2];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar2 = param_1[2] - param_3[2];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    uVar5 = FUN_000e4328(-((iVar3 >> 8) * (iVar2 >> 8)) - (iVar4 >> 8) * (iVar1 >> 8),
                         (&divTable)[(int)(0x10000 - uVar5) >> 9]);
  }
  return uVar5 + param_3[1];
}




// decompiled code
// original method signature: 
// int FUN_0009fc8c(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x0009fc8c
int FUN_0009fc8c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = *param_2;
  iVar8 = 0;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar1 = *param_1 - *param_3;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar5 = param_2[2];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar2 = param_1[2] - param_3[2];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar6 = 0;
  uVar7 = -((iVar5 >> 8) * (iVar2 >> 8)) - (iVar4 >> 8) * (iVar1 >> 8);
  do {
    if (iVar6 == 0) {
      iVar4 = *param_1;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      iVar1 = param_1[2] >> 1;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar4) goto LAB_0009fd94;
LAB_0009fda4:
      iVar1 = iVar1 + (iVar4 >> 2);
    }
    else {
      iVar1 = param_1[2];
      iVar4 = *param_1 >> 2;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar4 <= iVar1) goto LAB_0009fda4;
LAB_0009fd94:
      iVar1 = iVar4 + (iVar1 >> 2);
    }
    iVar1 = iVar1 >> 0xf;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = iVar1 + 0x1f;
    }
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + (int)(&fudgeTable)[iVar1 + (iVar4 >> 5) * -0x20] * 0x80;
    if (1 < iVar6) {
      uVar3 = param_2[1];
      if ((int)uVar3 < 0x9eb9) {
        uVar7 = FUN_000e4404(uVar7,uVar3);
      }
      else {
        uVar7 = FUN_000e4328(uVar7,(&divTable)[(int)(0x10000 - uVar3) >> 9]);
      }
      return uVar7 + param_3[1] + iVar8;
    }
  } while( true );
}




// decompiled code
// original method signature: 
// int FUN_000a116c(int param_1,int *param_2,int *param_3);
 // line 0, offset 0x000a116c
int FUN_000a116c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  iVar6 = param_3[1];
  iVar2 = *(int *)(param_1 + 0xa8);
  iVar7 = param_3[2];
  uVar3 = FUN_000e4328(*param_2,*(int *)(param_1 + 0xa0) - *param_3);
  uVar4 = FUN_000e4328(param_2[1],iVar1 - iVar6);
  uVar5 = FUN_000e4328(param_2[2],iVar2 - iVar7);
  iVar1 = *(int *)(param_1 + 300);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0xb334) {
    iVar1 = *(int *)(param_1 + 0x134);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x138);
  }
  return (uVar3 + uVar4 + uVar5) - iVar1;
}




// decompiled code
// original method signature: 
// void FUN_000a3d5c(int param_1);
 // line 0, offset 0x000a3d5c
void FUN_000a3d5c(int param_1)

{
  FUN_000e533c(0,param_1,0);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000a3d84(int param_1);
 // line 0, offset 0x000a3d84
void FUN_000a3d84(int param_1)

{
  FUN_000e533c(0,param_1,0);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000a3dac(int param_1);
 // line 0, offset 0x000a3dac
void FUN_000a3dac(int param_1)

{
  FUN_000e5540(param_1);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000a3dcc(int param_1);
 // line 0, offset 0x000a3dcc
void FUN_000a3dcc(int param_1)

{
  FUN_000e5540(param_1);
  return;
}




// decompiled code
// original method signature: 
// int FUN_000a8600(int param_1);
 // line 0, offset 0x000a8600
int FUN_000a8600(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 1;
  iVar2 = param_1 + 4;
  iVar3 = *(int *)(param_1 + 0x4c);
  while (iVar1 <= *(int *)(param_1 + 0x4c)) {
    if ((**(uint **)(iVar2 + 8) & 1) != 0) {
      iVar3 = iVar3 + -1;
    }
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 1;
  }
  return iVar3;
}




// decompiled code
// original method signature: 
// int FUN_000a8650(int param_1,int param_2);
 // line 0, offset 0x000a8650
int FUN_000a8650(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_2;
  while (iVar1 < param_2) {
    if ((**(uint **)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + -1;
    }
    param_1 = param_1 + 4;
    iVar1 = iVar1 + 1;
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// uint FUN_000a86a8(uint *param_1);
 // line 0, offset 0x000a86a8
uint FUN_000a86a8(uint *param_1)

{
  return (*param_1 ^ 1) & 1;
}




// decompiled code
// original method signature: 
// uint FUN_000a86bc(uint *param_1);
 // line 0, offset 0x000a86bc
uint FUN_000a86bc(uint *param_1)

{
  return *param_1 & 1;
}




// decompiled code
// original method signature: 
// void FUN_000ad5c8(int *param_1,int *param_2,int param_3,int *param_4);
 // line 0, offset 0x000ad5c8
void FUN_000ad5c8(int *param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  
  uVar1 = FUN_000e4328(*param_2 - *param_1,param_3);
  *param_4 = *param_1 + uVar1;
  uVar1 = FUN_000e4328(param_2[1] - param_1[1],param_3);
  param_4[1] = param_1[1] + uVar1;
  uVar1 = FUN_000e4328(param_2[2] - param_1[2],param_3);
  param_4[2] = param_1[2] + uVar1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000ad678(short *param_1,short *param_2,int *param_3,int *param_4,int param_5,short *param_6,int *param_7);
 // line 0, offset 0x000ad678
void FUN_000ad678(short *param_1,short *param_2,int *param_3,int *param_4,int param_5,short *param_6
                 ,int *param_7)

{
  uint uVar1;
  
  uVar1 = FUN_000e4328((int)*param_2 - (int)*param_1,param_5);
  *param_6 = *param_1 + (short)uVar1;
  uVar1 = FUN_000e4328((int)param_2[1] - (int)param_1[1],param_5);
  param_6[1] = param_1[1] + (short)uVar1;
  uVar1 = FUN_000e4328((int)param_2[2] - (int)param_1[2],param_5);
  param_6[2] = param_1[2] + (short)uVar1;
  uVar1 = FUN_000e4328((int)param_2[3] - (int)param_1[3],param_5);
  param_6[3] = param_1[3] + (short)uVar1;
  FUN_000ad5c8(param_3,param_4,param_5,param_7);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000ad780(short *param_1,int *param_2);
 // line 0, offset 0x000ad780
void FUN_000ad780(short *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (int)*param_1;
  iVar5 = (int)param_1[3];
  iVar7 = iVar5 * iVar2 * 2;
  iVar3 = (int)param_1[1];
  iVar6 = iVar3 * 2;
  iVar4 = (int)param_1[2] * 2;
  iVar8 = (int)param_1[2] * iVar4;
  iVar1 = 0x10000000 - iVar2 * iVar2 * 2;
  *param_2 = (0x10000000 - iVar3 * iVar6) - iVar8 >> 0xc;
  param_2[1] = iVar2 * iVar6 + iVar5 * iVar4 >> 0xc;
  param_2[3] = iVar2 * iVar6 - iVar5 * iVar4 >> 0xc;
  param_2[4] = iVar1 - iVar8 >> 0xc;
  param_2[8] = iVar1 - iVar3 * iVar6 >> 0xc;
  param_2[2] = iVar2 * iVar4 - iVar5 * iVar6 >> 0xc;
  param_2[6] = iVar2 * iVar4 + iVar5 * iVar6 >> 0xc;
  param_2[5] = iVar3 * iVar4 + iVar7 >> 0xc;
  param_2[7] = iVar3 * iVar4 - iVar7 >> 0xc;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000b3430(void);
 // line 0, offset 0x000b3430
void FUN_000b3430(void)

{
  int iVar1;
  
  gCView.id = iGp00000e9c;
  FUN_000be060(iGp00000e9c);
  FUN_0009eaa0();
  iVar1 = gFlip;
  gFlip = 0;
  FUN_000be118(iGp00000e9c);
  gFlip = iVar1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000b5b14(int param_1,int param_2);
 // line 0, offset 0x000b5b14
void FUN_000b5b14(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  Camera_tCamSlot *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Camera_tCamSlot *pCVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  pCVar8 = &gReplayCameraSlots;
  iVar6 = 1;
  iVar7 = (int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1;
  while (iVar4 = 0, iVar10 < iGp00000ea4) {
    iVar4 = param_2 - (int)pCVar8->slice;
    if (iVar7 < iVar4) {
      if (0 < gNumSlices - iVar4) goto LAB_000b5b8c;
LAB_000b5bb0:
      iVar4 = param_2 - (int)pCVar8->slice;
      iVar2 = iVar4 - gNumSlices;
      if (iVar4 <= iVar7) {
        iVar2 = (int)pCVar8->slice - param_2;
      }
    }
    else {
      if (iVar4 < 1) goto LAB_000b5bb0;
LAB_000b5b8c:
      iVar2 = param_2 - (int)pCVar8->slice;
      if (iVar7 < iVar2) {
        iVar2 = gNumSlices - iVar2;
      }
    }
    bVar1 = iVar6 < iGp00000ea4;
    iVar4 = 0;
    if (bVar1) {
      iVar4 = iVar6 << 5;
    }
    if (iVar7 < param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)) {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (0 < gNumSlices - (param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)))
      goto LAB_000b5c4c;
LAB_000b5cb8:
      bVar1 = iVar6 < iGp00000ea4;
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 * 0x20;
      }
      if (iVar7 < param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = (param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)) - gNumSlices;
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4) - param_2;
      }
    }
    else {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4) < 1) goto LAB_000b5cb8;
LAB_000b5c4c:
      bVar1 = iVar6 < iGp00000ea4;
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (iVar7 < param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = gNumSlices - (param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4));
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = param_2 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4);
      }
    }
    iVar5 = (int)pCVar8->slice;
    bVar1 = iVar6 < iGp00000ea4;
    iVar4 = 0;
    if (bVar1) {
      iVar4 = iVar6 << 5;
    }
    if (iVar7 < iVar5 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)) {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (0 < gNumSlices - (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)))
      goto LAB_000b5da4;
LAB_000b5e14:
      iVar5 = (int)pCVar8->slice;
      bVar1 = iVar6 < iGp00000ea4;
      pCVar3 = &gReplayCameraSlots;
      if (bVar1) {
        pCVar3 = &gReplayCameraSlots + iVar6;
      }
      if (iVar7 < iVar5 - (int)pCVar3->slice) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)) - gNumSlices;
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4) - iVar5;
      }
    }
    else {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4) < 1) goto LAB_000b5e14;
LAB_000b5da4:
      iVar5 = (int)pCVar8->slice;
      bVar1 = iVar6 < iGp00000ea4;
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (iVar7 < iVar5 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4)) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = gNumSlices - (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4));
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = iVar5 - (int)*(short *)((int)&gReplayCameraSlots.slice + iVar4);
      }
    }
    pCVar8 = pCVar8 + 1;
    iVar4 = iVar10;
    if (iVar2 + iVar9 <= iVar5) break;
    iVar6 = iVar6 + 1;
    iVar10 = iVar10 + 1;
  }
  (&Replay_ReplayCamera)[param_1].cutToNextCamera = iVar4;
  if ((&gReplayCameraSlots)[iVar4].mode == '\v') {
    (&Replay_ReplayCamera)[param_1].defaultCamera = 0;
    *(uint *)&(&Camera_gInfo)[param_1].field_0x74 =
         *(uint *)&(&Camera_gInfo)[param_1].field_0x74 & 0xf9ffffff |
         (*(uint *)(&gReplayCameraSlots + iVar4) >> 9 & 3) << 0x19;
    (&Camera_gInfo)[param_1].splineMode =
         (byte)(*(uint *)(&gReplayCameraSlots + (&Replay_ReplayCamera)[param_1].cutToNextCamera) >>
               0xb) & 7;
    FUN_00085608(param_1,0xb);
  }
  else {
    iVar6 = (&Replay_ReplayCamera)[param_1].cutToNextCamera;
    (&Replay_ReplayCamera)[param_1].defaultCamera = 1;
    FUN_00085bd0(param_1,(uint *)(&gReplayCameraSlots + iVar6));
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000bbff0(ushort *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6);
 // line 0, offset 0x000bbff0
void FUN_000bbff0(ushort *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

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
  
  iVar7 = (int)param_3 >> 2;
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    iVar7 = iVar7 + 1;
  }
  puVar4 = (ushort *)(param_2 + (((int)param_5 >> 2) + param_6 * 0xc) * 2);
  uVar12 = 0xffff;
  uVar11 = 0xffff;
  if (param_3 == 0) {
    uVar11 = 0;
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    uVar11 = uVar11 << 4;
  }
  uVar13 = 0;
  uVar5 = param_5 & 3;
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
    param_4 = param_4 + -1;
    uVar11 = 0;
    if (param_4 == -1) break;
    uVar1 = (uint)*param_1;
    uVar5 = param_5 & 3;
    while( true ) {
      uVar5 = uVar5 - 1;
      uVar2 = uVar1 & 0xf000;
      if (uVar5 == 0xffffffff) break;
      uVar1 = uVar1 << 4;
      uVar11 = uVar11 << 4 | uVar2 >> 0xc;
    }
    iVar9 = 1;
    *puVar4 = *puVar4 & (ushort)uVar13 | (ushort)uVar1;
    puVar3 = param_1;
    puVar8 = puVar4;
    while( true ) {
      puVar8 = puVar8 + 1;
      param_1 = puVar3 + 1;
      uVar5 = param_5 & 3;
      if (iVar7 + -1 <= iVar9) break;
      *puVar8 = (ushort)uVar11;
      uVar1 = (uint)*param_1;
      uVar11 = 0;
      while( true ) {
        uVar5 = uVar5 - 1;
        uVar2 = uVar1 & 0xf000;
        if (uVar5 == 0xffffffff) break;
        uVar1 = uVar1 << 4;
        uVar11 = uVar11 << 4 | uVar2 >> 0xc;
      }
      iVar9 = iVar9 + 1;
      *puVar8 = *puVar8 | (ushort)uVar1;
      puVar3 = param_1;
    }
    puVar4[iVar9] = puVar4[iVar9] & uVar10 | (ushort)uVar11;
    if ((uVar12 & 0xffff) == 0xffff) {
      uVar6 = *param_1;
      uVar11 = (uint)uVar6;
      param_1 = puVar3 + 2;
      while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
        uVar11 = uVar11 << 4;
        uVar6 = (ushort)uVar11;
      }
      puVar4[iVar9] = puVar4[iVar9] | uVar6;
    }
    puVar4 = puVar4 + 0xc;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000bc1b4(ushort *param_1,ushort *param_2,int param_3);
 // line 0, offset 0x000bc1b4
void FUN_000bc1b4(ushort *param_1,ushort *param_2,int param_3)

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
    if (param_3 == 0) {
      iVar5 = 0;
      puVar3 = param_1;
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
      } while (iVar5 < 6);
      param_1 = param_1 + 0xc;
    }
    else {
      puVar3 = param_1 + 5;
      while (bVar1 = -1 < iVar5, iVar5 = iVar5 + -1, bVar1) {
        uVar2 = *puVar3;
        uVar4 = (uint)uVar2;
        puVar3 = puVar3 + -1;
        *param_2 = (ushort)((uVar4 & 0xf) << 0xc) | (ushort)((uVar4 & 0xf0) << 4) |
                   (ushort)((uVar4 & 0xf00) >> 4) | uVar2 >> 0xc;
        param_2 = param_2 + 1;
      }
      param_1 = param_1 + 0xc;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000bc25c(int param_1,int param_2,int param_3);
 // line 0, offset 0x000bc25c
void FUN_000bc25c(int param_1,int param_2,int param_3)

{
  ushort *dest;
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  shapetbl *psVar5;
  undefined4 *puVar6;
  ushort *source;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  shapetbl *psVar10;
  shapetbl **ppsVar11;
  uint x;
  int iVar12;
  int mirror;
  char local_30;
  undefined local_2f;
  
  if (param_2 < 0x16) {
    psVar5 = (shapetbl *)FUN_000e533c((int)s_plate1_8013d720,0x148,0);
    ppsVar11 = &__CarIO_Plate1_2__ + param_3;
    *ppsVar11 = psVar5;
    psVar5 = (shapetbl *)FUN_000e533c((int)s_plate2_8013d728,0x148,0);
    (&__CarIO_Plate2_2__)[param_3] = psVar5;
    puVar8 = (undefined4 *)&psVar5[8].width;
    puVar4 = (undefined4 *)&(*ppsVar11)[8].width;
    dest = (ushort *)FUN_000e533c((int)s_theplate_80056778,0x210,0x10);
    piVar1 = (int *)FUN_000eb170((int)R3DCar_LicenseShapeFile,(int *)&DAT_8013d730);
    puVar6 = (undefined4 *)((int)piVar1 + (*piVar1 >> 8));
    piVar9 = piVar1;
    mirror = 0;
    do {
      iVar7 = *piVar9;
      piVar9 = piVar9 + 1;
      iVar12 = mirror + 1;
      psVar5 = *ppsVar11;
      (&(&__CarIO_Plate2_2__)[param_3]->field_0x0)[mirror] = iVar7;
      (&psVar5->field_0x0)[mirror] = iVar7;
      mirror = iVar12;
    } while (iVar12 < 4);
    mirror = 0;
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      mirror = mirror + 1;
      *puVar8 = uVar2;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (mirror < 0xc);
    psVar10 = (&__CarIO_Plate2_2__)[param_3];
    psVar5 = (&__CarIO_Plate1_2__)[param_3];
    psVar10->field_0x0 = (uint)*(byte *)&psVar10->field_0x0 | 0x11800;
    iVar7 = 0;
    psVar5->field_0x0 = (uint)*(byte *)&psVar5->field_0x0 | 0x11800;
    psVar5 = (&__CarIO_Plate1_2__)[param_3];
    *(undefined2 *)&(&__CarIO_Plate2_2__)[param_3]->field_0x4 = 0x18;
    *(undefined2 *)&psVar5->field_0x4 = 0x18;
    FUN_000bbff0((ushort *)(piVar1 + 4),(int)dest,0x30,0x16,0,0);
    mirror = FUN_000e9f74();
    x = mirror * -3 + 0x18;
    while (iVar7 < mirror) {
      cVar3 = *(char *)(param_1 + iVar7);
      if (cVar3 != ' ') {
        switch(cVar3) {
        case -0x40:
        case -0x3c:
        case -0x3b:
switchD_800bc490_caseD_c0:
          cVar3 = 'a';
        case -0x3f:
        case -0x3e:
        case -0x3d:
        case -0x3a:
        case -0x39:
        case -0x37:
        case -0x36:
        case -0x35:
        case -0x33:
        case -0x32:
        case -0x31:
        case -0x30:
        case -0x2d:
        case -0x2c:
        case -0x2b:
        case -0x29:
        case -0x28:
        case -0x26:
        case -0x25:
          goto switchD_800bc490_caseD_c1;
        case -0x38:
          goto switchD_800bc490_caseD_c8;
        case -0x34:
          goto switchD_800bc490_caseD_cc;
        case -0x2f:
          goto switchD_800bc490_caseD_d1;
        case -0x2e:
        case -0x2a:
          goto switchD_800bc490_caseD_d2;
        case -0x27:
        case -0x24:
          goto switchD_800bc490_caseD_d9;
        default:
          local_2f = 0;
          local_30 = cVar3;
          FUN_000e78e8();
          iVar12 = FUN_000eb170((int)R3DCar_LicenseShapeFile,(int *)&local_30);
          FUN_000bbff0((ushort *)(iVar12 + 0x10),(int)dest,7,0xc,x,5);
        }
      }
      x = x + 6;
      iVar7 = iVar7 + 1;
    }
    if ((R3DCar_InMenu == 0) && (GameSetup_gData.mirrorTrack != 0)) {
      FUN_000bc1b4(dest + 6,(ushort *)&(&__CarIO_Plate1_2__)[param_3]->field_0x10,1);
      psVar5 = (&__CarIO_Plate2_2__)[param_3];
      mirror = 1;
      source = dest;
    }
    else {
      FUN_000bc1b4(dest,(ushort *)&(&__CarIO_Plate1_2__)[param_3]->field_0x10,0);
      source = dest + 6;
      psVar5 = (&__CarIO_Plate2_2__)[param_3];
      mirror = 0;
    }
    FUN_000bc1b4(source,(ushort *)&psVar5->field_0x10,mirror);
    FUN_000e5540((int)dest);
  }
  else {
    (&__CarIO_Plate2_2__)[param_3] = (shapetbl *)0x0;
    (&__CarIO_Plate1_2__)[param_3] = (shapetbl *)0x0;
  }
  return;
  switch(cVar3) {
  case -0x40:
  case -0x3c:
  case -0x3b:
    goto switchD_800bc490_caseD_c0;
  case -0x38:
switchD_800bc490_caseD_c8:
    cVar3 = 'e';
  default:
switchD_800bc490_caseD_c1:
    local_2f = 0;
    local_30 = cVar3;
    strcat(&local_30,(char *)&PTR_DAT_8013d738);
    iVar12 = locateshapez((int)R3DCar_LicenseShapeFile,(int *)&local_30);
    CarIO_CopyFromShape__FPsT0iiii((short *)(iVar12 + 0x10),(short *)dest,7,0xc,x,5);
    do {
      x = x + 6;
      iVar7 = iVar7 + 1;
      if (mirror <= iVar7) {
        if ((R3DCar_InMenu == 0) && (GameSetup_gData.mirrorTrack != 0)) {
          CarIO_CopyToShape__FPsT0i
                    ((short *)(dest + 6),(short *)&(&__CarIO_Plate1_2__)[param_3]->field_0x10,1);
          psVar5 = (&__CarIO_Plate2_2__)[param_3];
          mirror = 1;
          source = dest;
        }
        else {
          CarIO_CopyToShape__FPsT0i
                    ((short *)dest,(short *)&(&__CarIO_Plate1_2__)[param_3]->field_0x10,0);
          source = dest + 6;
          psVar5 = (&__CarIO_Plate2_2__)[param_3];
          mirror = 0;
        }
        CarIO_CopyToShape__FPsT0i((short *)source,(short *)&psVar5->field_0x10,mirror);
        purgememadr((int)dest);
        return;
      }
      cVar3 = *(char *)(param_1 + iVar7);
    } while (cVar3 == ' ');
    break;
  case -0x34:
switchD_800bc490_caseD_cc:
    cVar3 = 'i';
    goto switchD_800bc490_caseD_c1;
  case -0x2f:
switchD_800bc490_caseD_d1:
    cVar3 = 'n';
    goto switchD_800bc490_caseD_c1;
  case -0x2e:
  case -0x2a:
switchD_800bc490_caseD_d2:
    cVar3 = 'o';
    goto switchD_800bc490_caseD_c1;
  case -0x27:
  case -0x24:
switchD_800bc490_caseD_d9:
    cVar3 = 'u';
    goto switchD_800bc490_caseD_c1;
  }
}




// decompiled code
// original method signature: 
// void FUN_000bc5f0(int param_1);
 // line 0, offset 0x000bc5f0
void FUN_000bc5f0(int param_1)

{
  shapetbl *psVar1;
  
  psVar1 = (&__CarIO_Plate1_2__)[param_1];
  if (psVar1 != (shapetbl *)0x0) {
    FUN_000e5540((int)psVar1);
  }
  (&__CarIO_Plate1_2__)[param_1] = (shapetbl *)0x0;
  psVar1 = (&__CarIO_Plate2_2__)[param_1];
  if (psVar1 != (shapetbl *)0x0) {
    FUN_000e5540((int)psVar1);
  }
  (&__CarIO_Plate2_2__)[param_1] = (shapetbl *)0x0;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000bc668(uint param_1,int *param_2,int *param_3,int param_4,int param_5);
 // line 0, offset 0x000bc668
void FUN_000bc668(uint param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  
  if (((param_1 & 2) != 0) && (iGp000011f8 < 0xc)) {
    sVar1 = (&CarIO_licenseSFX_Vram)[iGp000011f8 * 2];
    sVar2 = (&SHORT_8011ebea)[iGp000011f8 * 2];
    *(char *)(param_4 + param_5 + 0x8cc) = (((byte)sVar1 & 0x3f) - ((byte)*param_2 & 0x3f)) * '\x04'
    ;
    *(char *)(param_4 + param_5 + 0x8ce) = (char)sVar2 - *(char *)param_3;
    *param_2 = (int)sVar1;
    *param_3 = (int)sVar2;
    iGp000011f8 = iGp000011f8 + 1;
    return;
  }
  *(undefined *)(param_4 + param_5 + 0x8ce) = 0;
  *(undefined *)(param_4 + param_5 + 0x8cc) = 0;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000bc704(int param_1,int param_2,uint param_3,int param_4);
 // line 0, offset 0x000bc704
void FUN_000bc704(int param_1,int param_2,uint param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  CarIO_textureInfo *pCVar13;
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
  uint local_40;
  int local_3c;
  shapetbl **local_38;
  shapetbl **local_34;
  int local_30;
  
  local_40 = 8;
  local_48 = (int)*(short *)(param_2 + 0x8bc);
  if ((param_3 & 1) == 0) {
    if (R3DCar_InMenu == 0) {
      sVar1 = (&CarIO_carVRamSlots)[iGp000011f4 * 2];
      *(short *)(param_2 + 0x8c4) = sVar1;
      uVar11 = SEXT24(sVar1);
      iVar12 = (int)(&SHORT_8011ea6a)[iGp000011f4 * 2];
      *(short *)(param_2 + 0x8c6) = (&SHORT_8011ea6a)[iGp000011f4 * 2];
      if (local_48 < 0x1c) {
        if ((*(ushort *)(param_2 + 0x8c0) & 1) == 0) {
          iGp000011f4 = iGp000011f4 + 3;
        }
        else {
          iGp000011f4 = iGp000011f4 + (int)(&CarIO_carVRamAdd)[iGp000011f4 / 3] * 3;
        }
      }
      else {
        iGp000011f4 = iGp000011f4 + 1;
      }
    }
    else {
      sVar1 = (&CarIO_carVRamSlotsMenu)[iGp000011f4 * 2];
      *(short *)(param_2 + 0x8c4) = sVar1;
      uVar11 = SEXT24(sVar1);
      sVar1 = (&SHORT_8011eab2)[iGp000011f4 * 2];
      *(short *)(param_2 + 0x8c6) = sVar1;
      iGp000011f4 = iGp000011f4 + (int)(&CarIO_carVRamAdd)[iGp000011f4];
      iVar12 = (int)sVar1;
    }
  }
  else {
    uVar11 = SEXT24(*(short *)(param_2 + 0x8c4));
    iVar12 = (int)*(short *)(param_2 + 0x8c6);
  }
  if ((param_3 & 0x10) == 0) {
    local_44 = iGp000011f0;
    *(int *)(param_2 + 0x844) = iGp000011f0;
  }
  else {
    local_44 = *(int *)(param_2 + 0x844);
  }
  if ((param_3 & 8) != 0) {
    if ((*(ushort *)(param_2 + 0x8c0) & 1) != 0) {
      iVar5 = uVar11 - 0x200;
      if (R3DCar_InMenu == 0) {
        iVar5 = uVar11 - 0x280;
      }
      uVar11 = uVar11 + (int)(&CarIO_carVRamOffset)[iVar5 >> 6];
    }
    *(undefined2 *)(param_2 + 0x8c8) = (short)((uVar11 & 0x3f) << 2);
    *(ushort *)(param_2 + 0x8ca) = (ushort)iVar12 & 0xff;
  }
  iVar5 = 0;
  if (R3DCar_InMenu == 0) {
    local_40 = 0x18;
  }
  Texture_palCopy = *(Texture_pal8bit **)(param_2 + 0x884);
  iVar7 = local_44 << 4;
  FUN_000df678();
  local_38 = &__CarIO_Plate1_2__ + param_4;
  local_34 = &__CarIO_Plate2_2__ + param_4;
  pCVar13 = &CarIO_textureName;
  local_30 = param_2;
  while (iVar5 < 0x33) {
    bVar4 = true;
    puVar8 = (uint *)FUN_000eb170(param_1,(int *)pCVar13->pal);
    local_3c = pCVar13->palShare;
    if ((puVar8 == (uint *)0x0) && (local_3c == 0)) {
      bVar4 = false;
      puVar8 = (uint *)FUN_000eb170(param_1,(int *)pCVar13->tex);
    }
    if (iVar5 == 0x14) {
      local_40 = 0;
    }
    if (puVar8 != (uint *)0x0) {
      bVar3 = false;
      if (local_40 != 0) {
        *(undefined2 *)(local_30 + 0x88a) = (undefined2)Texture_palNum;
      }
      if (local_48 < 0x16) {
        if (iVar5 == (int)(&CarIO_licensePlate)[local_48 * 6]) {
          local_68 = uVar11 + (int)(&SHORT_8011eae2)[local_48 * 6];
          local_64 = iVar12 + (int)(&SHORT_8011eae4)[local_48 * 6];
          FUN_000bc668(param_3,&local_68,&local_64,param_2,0);
          FUN_000dff18(0,(uint *)*local_38,local_40,local_68,local_64,(uint *)0xffffffff,0xffffffff,
                       (char *)(iGp000011d0 + iVar7));
          bVar3 = true;
          *(undefined2 *)(iVar7 + iGp000011d0 + 0xe) = 1;
        }
        else {
          if (iVar5 == (int)(&SHORT_8011eae6)[local_48 * 6]) {
            local_60 = uVar11 + (int)(&SHORT_8011eae8)[local_48 * 6];
            local_5c = iVar12 + (int)(&SHORT_8011eaea)[local_48 * 6];
            FUN_000bc668(param_3,&local_60,&local_5c,param_2,1);
            FUN_000dff18(0,(uint *)*local_34,local_40,local_60,local_5c,(uint *)0xffffffff,
                         0xffffffff,(char *)(iGp000011d0 + iVar7));
            bVar3 = true;
            *(undefined2 *)(iVar7 + iGp000011d0 + 0xe) = 2;
          }
        }
      }
      if (!bVar3) {
        FUN_000dff18(0,puVar8,local_40,uVar11,iVar12,(uint *)0xffffffff,0xffffffff,
                     (char *)(iGp000011d0 + iVar7));
      }
      if (iVar5 == 0x20) {
        FUN_000be6d0((ushort *)(iGp000011d0 + iVar7 + 6),2);
      }
      *(ushort *)(iVar7 + iGp000011d0 + 0xe) = *(ushort *)(iVar7 + iGp000011d0 + 0xe) | 0x80;
    }
    if (bVar4) {
      iVar6 = local_44;
      if (local_3c != 0) {
        if (local_40 != 0) {
          *(undefined2 *)(local_30 + 0x88a) = *(undefined2 *)(param_2 + (local_3c + -1) * 2 + 0x88a)
          ;
        }
        iVar6 = local_3c + -1 + *(int *)(param_2 + 0x844);
      }
      puVar8 = (uint *)FUN_000eb170(param_1,(int *)pCVar13->tex);
      if (puVar8 != (uint *)0x0) {
        bVar4 = false;
        uVar2 = *(ushort *)(iVar6 * 0x10 + iGp000011d0 + 2);
        puVar9 = (uint *)(((uint)uVar2 & 0x3f) << 4);
        uVar10 = (uint)(uVar2 >> 6);
        if (local_48 < 0x16) {
          if (iVar5 == (int)(&CarIO_licensePlate)[local_48 * 6]) {
            local_58 = uVar11 + (int)(&SHORT_8011eae2)[local_48 * 6];
            local_54 = iVar12 + (int)(&SHORT_8011eae4)[local_48 * 6];
            FUN_000bc668(param_3,&local_58,&local_54,param_2,0);
            FUN_000dff18(0,(uint *)*local_38,0x20,local_58,local_54,puVar9,uVar10,
                         (char *)(iGp000011d0 + iVar7));
            bVar4 = true;
            *(undefined2 *)(iVar7 + iGp000011d0 + 0xe) = 1;
          }
          else {
            if (iVar5 == (int)(&SHORT_8011eae6)[local_48 * 6]) {
              local_50 = uVar11 + (int)(&SHORT_8011eae8)[local_48 * 6];
              local_4c = iVar12 + (int)(&SHORT_8011eaea)[local_48 * 6];
              FUN_000bc668(param_3,&local_50,&local_4c,param_2,1);
              FUN_000dff18(0,(uint *)*local_34,0x20,local_50,local_4c,puVar9,uVar10,
                           (char *)(iGp000011d0 + iVar7));
              bVar4 = true;
              *(undefined2 *)(iVar7 + iGp000011d0 + 0xe) = 2;
            }
          }
        }
        if (!bVar4) {
          FUN_000dff18(0,puVar8,0x20,uVar11,iVar12,puVar9,uVar10,(char *)(iGp000011d0 + iVar7));
        }
        if (iVar5 == 0x20) {
          FUN_000be6d0((ushort *)(iGp000011d0 + iVar7 + 6),2);
        }
        if (local_3c == 0) {
          *(ushort *)(iVar7 + iGp000011d0 + 0xe) = *(ushort *)(iVar7 + iGp000011d0 + 0xe) | 0x80;
        }
      }
    }
    iVar7 = iVar7 + 0x10;
    pCVar13 = pCVar13 + 1;
    iVar5 = iVar5 + 1;
    local_44 = local_44 + 1;
    local_30 = local_30 + 2;
  }
  if ((param_3 & 0x80) != 0) {
    iGp000011f0 = local_44;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000bceb0(int param_1,int param_2,int param_3);
 // line 0, offset 0x000bceb0
void FUN_000bceb0(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  shapetbl **ppsVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  CarIO_textureInfo *pCVar19;
  uint uVar20;
  int local_3c;
  
  local_3c = *(int *)(param_2 + 0x844);
  iVar8 = (int)*(short *)(param_2 + 0x8bc);
  iVar9 = (int)*(short *)(param_2 + 0x8c4);
  iVar10 = (int)*(short *)(param_2 + 0x8c6);
  uVar20 = 8;
  if (R3DCar_InMenu == 0) {
    uVar20 = 0x18;
  }
  Texture_palCopy = *(Texture_pal8bit **)(param_2 + 0x884);
  iVar18 = 0;
  iVar17 = local_3c << 4;
  FUN_000df678();
  pCVar19 = &CarIO_textureName;
  iVar12 = param_2;
  do {
    if (0x32 < iVar18) {
      return;
    }
    bVar5 = true;
    puVar14 = (uint *)FUN_000eb170(param_1,(int *)pCVar19->pal);
    iVar11 = pCVar19->palShare;
    if ((puVar14 == (uint *)0x0) && (iVar11 == 0)) {
      bVar5 = false;
      puVar14 = (uint *)FUN_000eb170(param_1,(int *)pCVar19->tex);
    }
    if (iVar18 == 0x14) {
      uVar20 = 0;
    }
    if (puVar14 == (uint *)0x0) {
LAB_000bd14c:
      if (bVar5) {
        iVar13 = local_3c;
        if (iVar11 != 0) {
          if (uVar20 != 0) {
            *(undefined2 *)(iVar12 + 0x88a) = *(undefined2 *)(param_2 + (iVar11 + -1) * 2 + 0x88a);
          }
          iVar13 = iVar11 + -1 + *(int *)(param_2 + 0x844);
        }
        puVar14 = (uint *)FUN_000eb170(param_1,(int *)pCVar19->tex);
        if (puVar14 != (uint *)0x0) {
          bVar5 = false;
          uVar3 = *(ushort *)(iVar13 * 0x10 + iGp000011d0 + 2);
          puVar15 = (uint *)(((uint)uVar3 & 0x3f) << 4);
          uVar16 = (uint)(uVar3 >> 6);
          if (iVar8 < 0x16) {
            if (iVar18 == (int)(&CarIO_licensePlate)[iVar8 * 6]) {
              sVar1 = (&SHORT_8011eae2)[iVar8 * 6];
              sVar2 = (&SHORT_8011eae4)[iVar8 * 6];
              ppsVar6 = &__CarIO_Plate1_2__;
            }
            else {
              if (iVar18 != (int)(&SHORT_8011eae6)[iVar8 * 6]) goto LAB_000bd280;
              sVar1 = (&SHORT_8011eae8)[iVar8 * 6];
              sVar2 = (&SHORT_8011eaea)[iVar8 * 6];
              ppsVar6 = &__CarIO_Plate2_2__;
            }
            bVar5 = true;
            FUN_000dff18(0,(uint *)ppsVar6[param_3],0x20,iVar9 + (int)sVar1,iVar10 + (int)sVar2,
                         puVar15,uVar16,(char *)(iGp000011d0 + iVar17));
          }
LAB_000bd280:
          if (!bVar5) {
            FUN_000dff18(0,puVar14,0x20,iVar9,iVar10,puVar15,uVar16,(char *)(iGp000011d0 + iVar17));
          }
          if (iVar18 == 0x20) {
            FUN_000be6d0((ushort *)(iGp000011d0 + iVar17 + 6),2);
          }
          if (iVar11 == 0) {
            *(ushort *)(iVar17 + iGp000011d0 + 0xe) = *(ushort *)(iVar17 + iGp000011d0 + 0xe) | 0x80
            ;
          }
        }
      }
    }
    else {
      pcVar7 = (char *)(iVar17 + iGp000011d0);
      bVar4 = false;
      if ((*(ushort *)(pcVar7 + 0xe) & 0x80) != 0) {
        puVar15 = (uint *)(((uint)*(ushort *)(pcVar7 + 2) & 0x3f) << 4);
        uVar16 = (uint)(*(ushort *)(pcVar7 + 2) >> 6);
        if (uVar20 != 0) {
          Texture_palNum = (int)*(short *)(iVar12 + 0x88a);
        }
        if (iVar8 < 0x16) {
          if (iVar18 == (int)(&CarIO_licensePlate)[iVar8 * 6]) {
            sVar1 = (&SHORT_8011eae4)[iVar8 * 6];
            sVar2 = (&SHORT_8011eae2)[iVar8 * 6];
            ppsVar6 = &__CarIO_Plate1_2__;
          }
          else {
            if (iVar18 != (int)(&SHORT_8011eae6)[iVar8 * 6]) goto LAB_000bd0d8;
            sVar1 = (&SHORT_8011eaea)[iVar8 * 6];
            sVar2 = (&SHORT_8011eae8)[iVar8 * 6];
            ppsVar6 = &__CarIO_Plate2_2__;
          }
          bVar4 = true;
          FUN_000dff18(0,(uint *)ppsVar6[param_3],uVar20,iVar9 + (int)sVar2,iVar10 + (int)sVar1,
                       puVar15,uVar16,pcVar7);
        }
LAB_000bd0d8:
        if (!bVar4) {
          FUN_000dff18(0,puVar14,uVar20,iVar9,iVar10,puVar15,uVar16,(char *)(iGp000011d0 + iVar17));
        }
        if (iVar18 == 0x20) {
          FUN_000be6d0((ushort *)(iGp000011d0 + iVar17 + 6),2);
        }
        *(ushort *)(iVar17 + iGp000011d0 + 0xe) = *(ushort *)(iVar17 + iGp000011d0 + 0xe) | 0x80;
        goto LAB_000bd14c;
      }
    }
    iVar17 = iVar17 + 0x10;
    pCVar19 = pCVar19 + 1;
    local_3c = local_3c + 1;
    iVar18 = iVar18 + 1;
    iVar12 = iVar12 + 2;
  } while( true );
}




// decompiled code
// original method signature: 
// int FUN_000bdd9c(int param_1,int param_2);
 // line 0, offset 0x000bdd9c
int FUN_000bdd9c(int param_1,int param_2)

{
  return param_1 * 200 + -0x7fee13a4 + param_2 * 0x5c;
}




// decompiled code
// original method signature: 
// void FUN_000be060(int param_1);
 // line 0, offset 0x000be060
void FUN_000be060(int param_1)

{
  int iVar1;
  
  iGp00001264 = (&Draw_gView)[param_1].otsize;
  iVar1 = iGp00001264 * 7;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  if ((param_1 == Draw_gPlayer1View) || (param_1 == Draw_gPlayer2View)) {
    DAT_1f800008 = DAT_1f800004 + (&Draw_gView)[param_1].membudget;
  }
  else {
    DAT_1f800008 = iGp00001274;
  }
  DAT_1f800000 = (&(&Draw_gView)[param_1].otsize)[iGp00001268 + 0x30];
  DAT_1f80000c = 0;
  DAT_1f800010 = (&Draw_gView)[param_1].drawenv[0].clip.w;
  DAT_1f800012 = (&Draw_gView)[param_1].drawenv[0].clip.h;
  iGp00001270 = iVar1 >> 3;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000be118(int param_1);
 // line 0, offset 0x000be118
void FUN_000be118(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  Draw_tView *pDVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_68 [24];
  
  pDVar5 = &Draw_gView + param_1;
  piVar4 = &pDVar5->otsize + iGp00001268 * 0x17 + 2;
  piVar2 = local_68;
  do {
    piVar7 = piVar2;
    piVar3 = piVar4;
    iVar8 = piVar3[1];
    iVar9 = piVar3[2];
    iVar10 = piVar3[3];
    *piVar7 = *piVar3;
    piVar7[1] = iVar8;
    piVar7[2] = iVar9;
    piVar7[3] = iVar10;
    piVar4 = piVar3 + 4;
    piVar2 = piVar7 + 4;
  } while (piVar4 != &pDVar5->otsize + iGp00001268 * 0x17 + 0x16);
  iVar8 = piVar3[5];
  iVar9 = piVar3[6];
  piVar7[4] = *piVar4;
  piVar7[5] = iVar8;
  piVar7[6] = iVar9;
  puVar1 = DAT_1f800004;
  iVar8 = DAT_1f800000;
  *DAT_1f800004 =
       *DAT_1f800004 & 0xff000000 | *(uint *)(pDVar5->otsize * 4 + DAT_1f800000 + -4) & 0xffffff;
  iVar8 = pDVar5->otsize * 4 + iVar8;
  uVar6 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 0x10;
  *(uint *)(iVar8 + -4) = *(uint *)(iVar8 + -4) & 0xff000000 | uVar6;
  FUN_000ee410((int)puVar1,(ushort *)local_68);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000be2c0(void);
 // line 0, offset 0x000be2c0
void FUN_000be2c0(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  Draw_tView *pDVar4;
  int iVar5;
  
  iVar5 = 0;
  pDVar4 = &Draw_gView;
  while (bVar1 = iVar5 < iGp00001260, iVar5 = iVar5 + 1, bVar1) {
    piVar2 = &pDVar4->otsize;
    piVar3 = &pDVar4->otsize;
    pDVar4 = pDVar4 + 1;
    FUN_000edc08((undefined4 *)piVar3[iGp00001268 + 0x30],*piVar2);
  }
  DAT_1f800004 = (&gEnviro)[iGp00001268].server;
  pcGp00001274 = (&gEnviro)[iGp00001268].server + iGp00001278;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000be6d0(ushort *param_1,int param_2);
 // line 0, offset 0x000be6d0
void FUN_000be6d0(ushort *param_1,int param_2)

{
  *param_1 = *param_1 & 0xff9f | (ushort)(param_2 << 5);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000ce568(uint *param_1,uint *param_2,int param_3);
 // line 0, offset 0x000ce568
void FUN_000ce568(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar1 = DAT_1f800004;
  puVar3 = (uint *)(param_3 * 4 + DAT_1f800000);
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
  *puVar3 = *puVar3 & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
  uVar2 = *param_2;
  puVar3 = DAT_1f800004 + 3;
  DAT_1f800004 = DAT_1f800004 + 9;
  *puVar3 = 0;
  puVar1[1] = uVar2;
  uVar2 = *param_2;
  *(undefined *)((int)puVar1 + 3) = 8;
  puVar1[7] = 0;
  *(undefined *)((int)puVar1 + 7) = 0x3a;
  puVar1[5] = uVar2;
  puVar1[2] = *param_1;
  puVar1[4] = param_1[1];
  puVar1[6] = param_1[2];
  puVar1[8] = param_1[3];
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d2288(int param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5);
 // line 0, offset 0x000d2288
void FUN_000d2288(int param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5)

{
  *(undefined *)(param_1 + 3) = 0xc;
  *(uint *)(param_1 + 8) = param_4 << 0x10 | param_3;
  *(uint *)(param_1 + 4) = param_5 | 0x3e000000;
  *(uint *)(param_1 + 0x10) = param_5;
  *(uint *)(param_1 + 0x1c) = param_5;
  *(uint *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(uint *)(param_1 + 0x14) = param_4 << 0x10 | param_3 + (int)*(short *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(uint *)(param_1 + 0x20) = (param_4 + (int)*(short *)((int)param_2 + 0x12)) * 0x10000 | param_3;
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  *(uint *)(param_1 + 0x2c) =
       (param_4 + (int)*(short *)((int)param_2 + 0x12)) * 0x10000 |
       param_3 + (int)*(short *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x30) = param_2[3];
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d2334(int param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 param_5,int param_6);
 // line 0, offset 0x000d2334
void FUN_000d2334(int param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  *(undefined4 *)(param_1 + 4) = param_5;
  FUN_000f3650(param_1);
  FUN_000f30fc(param_1,param_6);
  *(uint *)(param_1 + 8) = param_4 << 0x10 | param_3;
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(uint *)(param_1 + 0x10) = param_4 << 0x10 | param_3 + (int)*(short *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(uint *)(param_1 + 0x18) = (param_4 + (int)*(short *)((int)param_2 + 0x12)) * 0x10000 | param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(uint *)(param_1 + 0x20) =
       (param_4 + (int)*(short *)((int)param_2 + 0x12)) * 0x10000 |
       param_3 + (int)*(short *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x24) = param_2[3];
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d2794(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,undefined4 param_7,char param_8,char param_9);
 // line 0, offset 0x000d2794
void FUN_000d2794(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,char param_8,char param_9)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_7;
  FUN_000f3610(param_1);
  FUN_000f30fc(param_1,param_2);
  uVar1 = (param_4 + param_6) * 0x10000;
  *(uint *)(param_1 + 8) = param_4 << 0x10 | param_3 + (int)param_8;
  *(uint *)(param_1 + 0xc) = param_4 << 0x10 | param_3 + param_5 + (int)param_9;
  *(uint *)(param_1 + 0x10) = uVar1 | param_3;
  *(uint *)(param_1 + 0x14) = uVar1 | param_3 + param_5;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d2868(undefined4 *param_1,uint param_2,int param_3,uint param_4);
 // line 0, offset 0x000d2868
void FUN_000d2868(undefined4 *param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_1f800004;
  puVar1 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar3 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 0xd;
  *puVar1 = *puVar1 & 0xff000000 | uVar3;
  FUN_000d2288((int)puVar2,param_1,param_2,param_3,param_4);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d28f4(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4);
 // line 0, offset 0x000d28f4
void FUN_000d28f4(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_1f800004;
  puVar1 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar3 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 10;
  *puVar1 = *puVar1 & 0xff000000 | uVar3;
  FUN_000d2334((int)puVar2,param_1,param_2,param_3,param_4,0);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d2984(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined4 param_6,char param_7,char param_8);
 // line 0, offset 0x000d2984
void FUN_000d2984(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 char param_7,char param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_1f800004;
  puVar1 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar3 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 6;
  *puVar1 = *puVar1 & 0xff000000 | uVar3;
  FUN_000d2794((int)puVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d7abc(int param_1,int param_2,int param_3,int param_4);
 // line 0, offset 0x000d7abc
void FUN_000d7abc(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  sVar1 = HudPmx_tShape_80110dec.height;
  iVar2 = param_2 + -2;
  iVar7 = (int)HudPmx_tShape_80110dec.width;
  uVar8 = (param_1 + iVar7) - 2;
  iVar6 = param_3 + iVar7 * -2 + 2;
  FUN_000d2984(0,uVar8,iVar2,iVar6,2,0,'\0','\0');
  uVar9 = param_1 - 2;
  iVar5 = (int)sVar1;
  iVar4 = param_2 + iVar5 + -2;
  iVar3 = param_4 + iVar5 * -2 + 4;
  FUN_000d2984(0,uVar9,iVar4,2,iVar3,0,'\0','\0');
  FUN_000d2984(0,(param_1 + param_3) - 2,iVar4,2,iVar3,0,'\0','\0');
  FUN_000d2984(0,uVar8,param_2 + param_4,iVar6,2,0,'\0','\0');
  FUN_000d2868((undefined4 *)&HudPmx_tShape_80110db0,uVar9,iVar2,0);
  uVar8 = (param_1 + param_3) - iVar7;
  FUN_000d2868((undefined4 *)&HudPmx_tShape_80110dc4,uVar8,iVar2,0);
  iVar2 = (param_2 + param_4) - (iVar5 + -2);
  FUN_000d2868((undefined4 *)&HudPmx_tShape_80110dd8,uVar9,iVar2,0);
  FUN_000d2868((undefined4 *)&HudPmx_tShape_80110dec,uVar8,iVar2,0);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000d8ed0(uint param_1,int param_2,int param_3,int param_4);
 // line 0, offset 0x000d8ed0
void FUN_000d8ed0(uint param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  sVar2 = HudPmx_tShape_80110dec.height;
  sVar1 = HudPmx_tShape_80110dec.width;
  FUN_000d28f4((undefined4 *)&HudPmx_tShape_80110db0,param_1 - 2,param_2 + 10,0);
  uVar4 = (param_1 + param_3) - (int)sVar1;
  FUN_000d28f4((undefined4 *)&HudPmx_tShape_80110dc4,uVar4,param_2 + 10,0);
  iVar3 = (param_2 + param_4) - (int)sVar2;
  FUN_000d28f4((undefined4 *)&HudPmx_tShape_80110dd8,param_1 - 2,iVar3,0);
  FUN_000d28f4((undefined4 *)&HudPmx_tShape_80110dec,uVar4,iVar3,0);
  FUN_000d2984(0,param_1,param_2 + param_4 + -2,param_3,2,0,'\0','\0');
  FUN_000d7abc(param_1,param_2,param_3,param_4);
  FUN_000d2984(0,param_1,param_2,param_3,0xc,0,'\0','\0');
  FUN_000d2984(1,param_1,param_2 + 0xc,param_3,param_4 + -0xc,&DAT_00461414,'\0','\0');
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dcec4(void);
 // line 0, offset 0x000dcec4
/* WARNING: Could not reconcile some variable overlaps */

void FUN_000dcec4(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  short *psVar7;
  uint in_t0;
  uint uVar8;
  uint in_t1;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar6 = FUN_000bdd9c(Draw_gPlayer1View,1);
  uVar1 = uVar6 + 3 & 3;
  uVar3 = uVar6 & 3;
  uVar8 = (*(int *)((uVar6 + 3) - uVar1) << (3 - uVar1) * 8 | in_t0 & 0xffffffffU >> (uVar1 + 1) * 8
          ) & -1 << (4 - uVar3) * 8 | *(uint *)(uVar6 - uVar3) >> uVar3 * 8;
  uVar1 = uVar6 + 7 & 3;
  iVar2 = *(int *)((uVar6 + 7) - uVar1);
  uVar3 = uVar6 + 4 & 3;
  uVar6 = *(uint *)((uVar6 + 4) - uVar3);
  uVar4 = (int)&local_10 + 3U & 3;
  puVar5 = (uint *)(((int)&local_10 + 3U) - uVar4);
  *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
  uVar4 = (int)&local_10 + 7U & 3;
  puVar5 = (uint *)(((int)&local_10 + 7U) - uVar4);
  *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 |
            ((iVar2 << (3 - uVar1) * 8 | in_t1 & 0xffffffffU >> (uVar1 + 1) * 8) &
             -1 << (4 - uVar3) * 8 | uVar6 >> uVar3 * 8) >> (3 - uVar4) * 8;
  local_10._0_2_ = (short)uVar8;
  local_c = CONCAT22(gPauseMenuRect.h,gPauseMenuRect.w);
  local_10 = CONCAT22((short)(uVar8 >> 0x10) + gPauseMenuRect.y,(short)local_10 + gPauseMenuRect.x);
  psVar7 = (short *)FUN_000bdd9c(Draw_gPlayer1View,0);
  FUN_000edb50((undefined4 *)&local_10,(int)*psVar7 + (int)gPauseMenuRect.x,
               (int)psVar7[1] + (int)gPauseMenuRect.y);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dcf84(void);
 // line 0, offset 0x000dcf84
void FUN_000dcf84(void)

{
  FUN_000be2c0();
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dcfa4(void);
 // line 0, offset 0x000dcfa4
void FUN_000dcfa4(void)

{
  FUN_000edde4((ushort *)&dflip_8011f43c);
  FUN_000ed87c(0);
  FUN_000f231c(0);
  FUN_000dcec4();
  FUN_000edcb4((&Draw_gView)[Render_gPauseMenuView].ot[gFlip] +
               (&Draw_gView)[Render_gPauseMenuView].otsize * 4 + -4);
  FUN_000e6c04(0);
  gFlip = 1 - gFlip;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000df678(void);
 // line 0, offset 0x000df678
void FUN_000df678(void)

{
  uGp000015c8 = 0;
  uGp000015cc = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_000df688(int iParm1,int *piParm2,uint uParm3,int iParm4);
 // line 0, offset 0x000df688
undefined4 FUN_000df688(int iParm1,int *piParm2,uint uParm3,int iParm4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int **ppiVar10;
  int **ppiVar11;
  uint in_t5;
  uint uVar12;
  uint in_t6;
  uint uVar13;
  uint in_t7;
  uint uVar14;
  uint in_t8;
  uint uVar15;
  
  if (iParm1 == 0) {
    return 0;
  }
  iVar9 = 0;
  ppiVar11 = ppiGp000015d8;
  ppiVar10 = ppiGp000015dc;
  if (iParm4 == 0) {
    while (iVar9 < iGp000015c8) {
      piVar7 = *ppiVar11;
      iVar6 = 0;
      piVar8 = piParm2;
      do {
        iVar5 = *piVar7;
        piVar7 = piVar7 + 1;
        iVar3 = *piVar8;
        piVar8 = piVar8 + 1;
        if (iVar3 != iVar5) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 8);
      iVar3 = iGp000015d0;
      if (iVar6 == 8) goto LAB_000df6a0;
      iVar9 = iVar9 + 1;
      ppiVar11 = ppiVar11 + 1;
    }
  }
  else {
    while (iVar9 < iGp000015cc) {
      piVar7 = *ppiVar10;
      iVar6 = 0;
      piVar8 = piParm2;
      do {
        iVar5 = *piVar7;
        piVar7 = piVar7 + 1;
        iVar3 = *piVar8;
        piVar8 = piVar8 + 1;
        if (iVar3 != iVar5) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x80);
      iVar3 = iGp000015d4;
      if (iVar6 == 0x80) {
LAB_000df6a0:
        uVar4 = *(uint *)(iVar9 * 4 + iVar3);
        uVar1 = uVar4 + 3 & 3;
        uVar15 = uVar4 & 3;
        uVar12 = (*(int *)((uVar4 + 3) - uVar1) << (3 - uVar1) * 8 |
                 in_t5 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8 |
                 *(uint *)(uVar4 - uVar15) >> uVar15 * 8;
        uVar1 = uVar4 + 7 & 3;
        uVar15 = uVar4 + 4 & 3;
        uVar13 = (*(int *)((uVar4 + 7) - uVar1) << (3 - uVar1) * 8 |
                 in_t6 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8 |
                 *(uint *)((uVar4 + 4) - uVar15) >> uVar15 * 8;
        uVar1 = uVar4 + 0xb & 3;
        uVar15 = uVar4 + 8 & 3;
        uVar14 = (*(int *)((uVar4 + 0xb) - uVar1) << (3 - uVar1) * 8 |
                 in_t7 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8 |
                 *(uint *)((uVar4 + 8) - uVar15) >> uVar15 * 8;
        uVar1 = uVar4 + 0xf & 3;
        uVar15 = uVar4 + 0xc & 3;
        uVar15 = (*(int *)((uVar4 + 0xf) - uVar1) << (3 - uVar1) * 8 |
                 in_t8 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8 |
                 *(uint *)((uVar4 + 0xc) - uVar15) >> uVar15 * 8;
        uVar1 = uParm3 + 3 & 3;
        puVar2 = (uint *)((uParm3 + 3) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar12 >> (3 - uVar1) * 8;
        uVar1 = uParm3 & 3;
        *(uint *)(uParm3 - uVar1) =
             *(uint *)(uParm3 - uVar1) & 0xffffffffU >> (4 - uVar1) * 8 | uVar12 << uVar1 * 8;
        uVar1 = uParm3 + 7 & 3;
        puVar2 = (uint *)((uParm3 + 7) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar13 >> (3 - uVar1) * 8;
        uVar1 = uParm3 + 4 & 3;
        puVar2 = (uint *)((uParm3 + 4) - uVar1);
        *puVar2 = *puVar2 & 0xffffffffU >> (4 - uVar1) * 8 | uVar13 << uVar1 * 8;
        uVar1 = uParm3 + 0xb & 3;
        puVar2 = (uint *)((uParm3 + 0xb) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar14 >> (3 - uVar1) * 8;
        uVar1 = uParm3 + 8 & 3;
        puVar2 = (uint *)((uParm3 + 8) - uVar1);
        *puVar2 = *puVar2 & 0xffffffffU >> (4 - uVar1) * 8 | uVar14 << uVar1 * 8;
        uVar1 = uParm3 + 0xf & 3;
        puVar2 = (uint *)((uParm3 + 0xf) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar15 >> (3 - uVar1) * 8;
        uVar1 = uParm3 + 0xc & 3;
        puVar2 = (uint *)((uParm3 + 0xc) - uVar1);
        *puVar2 = *puVar2 & 0xffffffffU >> (4 - uVar1) * 8 | uVar15 << uVar1 * 8;
        return 1;
      }
      iVar9 = iVar9 + 1;
      ppiVar10 = ppiVar10 + 1;
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void FUN_000df7bc(undefined4 param_1,undefined4 param_2,int param_3);
 // line 0, offset 0x000df7bc
void FUN_000df7bc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *(undefined4 *)(iGp000015c8 * 4 + iGp000015d8) = param_1;
    *(undefined4 *)(iGp000015c8 * 4 + iGp000015d0) = param_2;
    iGp000015c8 = iGp000015c8 + 1;
    return;
  }
  if (param_3 == 1) {
    iVar1 = iGp000015cc * 4;
    iGp000015cc = iGp000015cc + 1;
    *(undefined4 *)(iVar1 + iGp000015dc) = param_1;
    *(undefined4 *)(iVar1 + iGp000015d4) = param_2;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000df938(int param_1,int *param_2,int *param_3);
 // line 0, offset 0x000df938
void FUN_000df938(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 == 0) {
    iVar3 = iGp000015e4 + -1;
    iVar5 = iGp000015e0;
    iVar1 = iVar3;
    iVar2 = iGp000015ec;
    if (iGp000015e4 == 0) goto code_r0x000df988;
  }
  else {
    iVar3 = iGp000015ec + -1;
    iVar5 = iGp000015e8;
    iVar1 = iGp000015e4;
    iVar2 = iVar3;
    if (iGp000015ec == 0) goto code_r0x000df988;
  }
  iGp000015ec = iVar2;
  iGp000015e4 = iVar1;
  uVar4 = (uint)*(ushort *)(iVar3 * 2 + iVar5);
code_r0x000df988:
  *param_2 = (uVar4 & 0x3f) << 4;
  *param_3 = (int)(uVar4 << 0x10) >> 0x16;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dfa04(int param_1,undefined2 *param_2,int param_3);
 // line 0, offset 0x000dfa04
void FUN_000dfa04(int param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = param_3 + -1;
  puVar3 = (undefined2 *)(param_1 + iGp000015bc * 0x20);
  if (param_3 != 0) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (iVar2 != -1);
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dfa3c(undefined2 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
 // line 0, offset 0x000dfa3c
void FUN_000dfa3c(undefined2 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar2 = (undefined4 *)(iGp000015c4 * 0x208 + iGp000015c0);
  puVar4 = puVar2 + 2;
  *puVar2 = param_3;
  puVar2[1] = param_4;
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + 1;
      *(undefined2 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    } while (iVar3 < param_2);
  }
  iGp000015c4 = iGp000015c4 + 1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dfb48(short *param_1,undefined4 param_2);
 // line 0, offset 0x000dfb48
void FUN_000dfb48(short *param_1,undefined4 param_2)

{
  if ((param_1[2] & 1U) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  FUN_000eda90(param_1,param_2);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dfb8c(uint *param_1,uint param_2,ushort param_3,uint param_4,ushort param_5);
 // line 0, offset 0x000dfb8c
void FUN_000dfb8c(uint *param_1,uint param_2,ushort param_3,uint param_4,ushort param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  short local_40;
  ushort local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  
  if (param_1 != (uint *)0x0) {
    do {
      bVar3 = *(byte *)param_1 & 0xf7;
      if (bVar3 == 0x23) {
        if (-1 < (int)param_4) {
          param_1[3] = param_1[3] & 0xf000f000 | param_4 & 0xfff | ((uint)param_5 & 0xfff) << 0x10;
          *(byte *)param_1 = *(byte *)param_1 | 8;
          local_40 = (short)param_4;
          local_3e = param_5;
          local_3c = *(undefined2 *)(param_1 + 1);
          local_3a = 1;
          goto LAB_000dfcd8;
        }
      }
      else {
        if (((0x22 < bVar3) && (bVar3 < 0x44)) && (0x3f < bVar3)) {
          param_1[3] = param_1[3] & 0xf000f000 | param_2 & 0xfff | ((uint)param_3 & 0xfff) << 0x10;
          *(byte *)param_1 = *(byte *)param_1 | 8;
          local_40 = (short)param_2;
          local_3e = param_3;
          iVar1 = FUN_000f43e4((byte *)param_1);
          iVar2 = (int)*(short *)(param_1 + 1) * iVar1 + 0xf;
          if (iVar2 < 0) {
            iVar2 = (int)*(short *)(param_1 + 1) * iVar1 + 0x1e;
          }
          local_3c = (undefined2)(iVar2 >> 4);
          local_3a = *(undefined2 *)((int)param_1 + 6);
LAB_000dfcd8:
          FUN_000dfb48(&local_40,param_1 + 4);
        }
      }
      if ((*param_1 & 0xffffff00) == 0) {
        param_1 = (uint *)0x0;
      }
      else {
        param_1 = (uint *)((int)param_1 + ((int)*param_1 >> 8));
      }
    } while (param_1 != (uint *)0x0);
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000dfd38(uint *param_1,uint param_2,ushort param_3,uint param_4,ushort param_5);
 // line 0, offset 0x000dfd38
void FUN_000dfd38(uint *param_1,uint param_2,ushort param_3,uint param_4,ushort param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short local_30;
  short local_2e;
  short local_2c;
  undefined2 local_2a;
  
  iVar2 = FUN_000f43e4((byte *)param_1);
  uVar4 = (int)*(short *)(param_1 + 1) * iVar2 + 0xfU & 0xfffffff0;
  uVar3 = (int)uVar4 >> 3;
  if (((uVar3 & 2) == 0) || (uVar1 = *(ushort *)((int)param_1 + 6), (uVar1 & 1) != 0)) {
    FUN_000dfb8c(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_2e = param_3 + uVar1 + -2;
    local_2c = 1;
    local_2a = 2;
    iVar2 = (int)param_1 + ((int)(short)uVar1 + -1) * uVar3 + 0x10;
    local_30 = (short)param_2;
    FUN_000eda90(&local_30,iVar2 + -2);
    local_30 = (short)param_2 + 1;
    local_2e = param_3 + uVar1 + -1;
    local_2c = (short)((int)uVar4 >> 4) + -1;
    local_2a = 1;
    FUN_000eda90(&local_30,iVar2 + 2);
    *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
    FUN_000dfb8c(param_1,param_2,param_3,param_4,param_5);
    *(ushort *)((int)param_1 + 6) = uVar1;
  }
  return;
}




// decompiled code
// original method signature: 
// uint FUN_000dfea0(uint *param_1);
 // line 0, offset 0x000dfea0
uint FUN_000dfea0(uint *param_1)

{
  uint uVar1;
  
  while( true ) {
    if (param_1 == (uint *)0x0) {
      return 0;
    }
    if (*(char *)param_1 == 'k') break;
    if ((*param_1 & 0xffffff00) == 0) {
      param_1 = (uint *)0x0;
    }
    else {
      param_1 = (uint *)((int)param_1 + ((int)*param_1 >> 8));
    }
  }
  uVar1 = (uint)(*(ushort *)(param_1 + 1) >> 5) & 3;
  if (uVar1 == 3) {
    return 2;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint * FUN_000dff18(int param_1,uint *param_2,uint param_3,int param_4,int param_5,uint *param_6,uint param_7,char *param_8);
 // line 0, offset 0x000dff18
uint * FUN_000dff18(int param_1,uint *param_2,uint param_3,int param_4,int param_5,uint *param_6,
                   uint param_7,char *param_8)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  char local_48;
  
  puVar10 = param_6;
  if (param_1 != 0) {
    param_2 = (uint *)FUN_000eb170(param_1,(int *)param_2);
    puVar10 = param_2;
  }
  if (param_2 != (uint *)0x0) {
    uVar7 = param_2[3];
    bVar1 = *(byte *)param_2;
    uVar14 = (uint)bVar1 & 3;
    uVar2 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined2 *)((int)param_2 + 6);
    if (((param_3 & 8) != 0) && ((bVar1 & 3) != 0)) {
      uVar14 = 0;
    }
    uVar11 = param_2[3];
    if (param_4 == -1) {
      uVar15 = 0;
      uVar16 = 0xa0;
      *(undefined2 *)(param_2 + 1) = 1;
      *(undefined2 *)((int)param_2 + 6) = 1;
    }
    else {
      uVar15 = ((int)(uVar11 << 0x14) >> 0x14) + param_4;
      uVar16 = ((int)(uVar11 << 4) >> 0x14) + param_5;
    }
    local_48 = (char)*(undefined2 *)(param_2 + 1);
    cVar17 = (char)*(undefined2 *)((int)param_2 + 6);
    if ((param_3 & 1) == 0) {
      local_48 = local_48 + -1;
      cVar17 = cVar17 + -1;
    }
    if (uVar14 == 2) {
      FUN_000dfd38(param_2,uVar15,(ushort)uVar16,0,0);
    }
    else {
      iVar13 = (int)param_2 + ((int)*param_2 >> 8);
      sVar4 = *(short *)(iVar13 + 4);
      if (uVar14 == 0) {
        uVar6 = 0x10;
      }
      else {
        uVar6 = 0x100;
      }
      *(undefined2 *)(iVar13 + 4) = uVar6;
      iVar8 = FUN_000df688(param_3 & 0x40,(ushort *)(iVar13 + 0x10),param_8,uVar14);
      if (iVar8 == 0) {
        if (param_6 == (uint *)0xffffffff) {
          FUN_000df938(uVar14,(int *)&param_6,(int *)&param_7);
        }
        else {
          if (param_6 == (uint *)0xfffffffd) {
            iVar8 = FUN_000e0ac0((ushort *)(iVar13 + 0x10),(int)*(short *)(iVar13 + 4));
            *(short *)(param_8 + 10) = (short)iVar8;
          }
          else {
            if (param_6 == (uint *)0xfffffffe) {
              param_7 = 0xa0;
              param_6 = (uint *)0x0;
              *(undefined2 *)(iVar13 + 4) = 1;
            }
          }
        }
        if ((param_3 & 2) != 0) {
          uVar9 = FUN_000e0884((ushort *)(iVar13 + 0x10),(int)*(short *)(iVar13 + 4));
          *(short *)(param_8 + 0xe) = (short)(uVar9 << 1);
        }
        if (((param_3 & 8) != 0) && ((bVar1 & 3) != 0)) {
          if (iGp000015c0 != 0) {
            FUN_000dfa3c((undefined2 *)(iVar13 + 0x10),(int)sVar4,param_6,param_7);
          }
          if ((param_3 & 0x10) != 0) {
            FUN_000dfa04(iVar13 + 0x10,(undefined2 *)(iVar13 + 0x10),0x10);
          }
        }
        if ((int)param_6 < 0) {
          *(undefined2 *)(param_8 + 2) = 0xffff;
        }
        else {
          uVar9 = FUN_000f4450((int)param_6,param_7);
          *(short *)(param_8 + 2) = (short)uVar9;
        }
        if ((param_3 & 0x40) != 0) {
          FUN_000df7bc(iVar13 + 0x10,param_8,uVar14);
        }
      }
      puVar10 = param_6;
      if ((param_3 & 0x20) != 0) {
        param_7._0_2_ = 0xffff;
        puVar10 = (uint *)0xffffffff;
      }
      FUN_000dfd38(param_2,uVar15,(ushort)uVar16,(uint)puVar10,(ushort)param_7);
      *(short *)(iVar13 + 4) = sVar4;
    }
    uVar9 = FUN_000dfea0(param_2);
    uVar9 = FUN_000f1bfc(uVar14,uVar9,uVar15,uVar16);
    *(short *)(param_8 + 6) = (short)uVar9;
    uVar9 = uVar15;
    if ((int)uVar15 < 0) {
      uVar9 = uVar15 + 0x3f;
    }
    iVar13 = uVar15 + ((int)uVar9 >> 6) * -0x40;
    if (uVar14 == 0) {
      iVar13 = iVar13 * 4;
    }
    cVar12 = (char)iVar13;
    if (uVar14 == 1) {
      cVar12 = (char)(iVar13 << 1);
    }
    cVar5 = (char)uVar16;
    if ((uVar11 & 0x4000) == 0) {
      *param_8 = cVar12;
      param_8[1] = cVar5;
      param_8[4] = cVar12 + local_48;
      param_8[5] = cVar5;
      param_8[8] = cVar12;
      param_8[9] = cVar5 + cVar17;
      param_8[0xc] = cVar12 + local_48;
      param_8[0xd] = cVar5 + cVar17;
    }
    else {
      *param_8 = cVar12;
      param_8[1] = cVar5 + cVar17;
      param_8[4] = cVar12;
      param_8[5] = cVar5;
      param_8[8] = cVar12 + local_48;
      param_8[9] = cVar5 + cVar17;
      param_8[0xc] = cVar12 + local_48;
      param_8[0xd] = cVar5;
    }
    *(undefined2 *)(param_2 + 1) = uVar2;
    *(undefined2 *)((int)param_2 + 6) = uVar3;
    puVar10 = (uint *)(((int)(uVar7 << 4) >> 0x14 & 0xfffU) << 0x10);
    param_2[3] = param_2[3] & 0xf000f000 | (int)(uVar7 << 0x14) >> 0x14 & 0xfffU | (uint)puVar10;
  }
  return puVar10;
}




// decompiled code
// original method signature: 
// uint FUN_000e0884(ushort *param_1,int param_2);
 // line 0, offset 0x000e0884
uint FUN_000e0884(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (param_2 = param_2 + -1, param_2 != -1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 | (uint)(0x8000 < uVar1);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void FUN_000e08b8(int param_1,int param_2,ushort *param_3,int param_4,short param_5,undefined2 param_6);
 // line 0, offset 0x000e08b8
void FUN_000e08b8(int param_1,int param_2,ushort *param_3,int param_4,short param_5,
                 undefined2 param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined2 local_resc;
  ushort local_230 [256];
  short local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  iVar10 = 0;
  puVar9 = local_230;
  param_2 = param_2 + -1;
  iVar11 = (TrackSpec_gSpec.fogspec.contrast * param_1) / param_2;
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if ((param_2 == -1) && (TrackSpec_gSpec.fogspec.contrast * param_1 == -0x80000000)) {
    trap(0x1800);
  }
  do {
    if (param_4 <= iVar10) {
      local_resc = (undefined2)param_4;
      local_30 = param_5;
      local_2c = local_resc;
      local_2e = param_6;
      local_2a = 1;
      FUN_000eda90(&local_30,local_230);
      return;
    }
    uVar1 = *param_3;
    if (uVar1 == 0) {
      *puVar9 = 0;
    }
    else {
      uVar5 = (uint)(uVar1 >> 7) & 0xf8;
      uVar8 = (uint)(uVar1 >> 2) & 0xf8;
      iVar6 = ((uint)uVar1 & 0x1f) * 8;
      uVar3 = FUN_000e4328(iVar6 - (uint)TrackSpec_gSpec.fogspec.color.r,iVar11);
      iVar6 = iVar6 - uVar3;
      iVar7 = 0;
      if ((-1 < iVar6) && (iVar7 = iVar6, 0xff < iVar6)) {
        iVar7 = 0xff;
      }
      uVar3 = FUN_000e4328(uVar8 - (uint)TrackSpec_gSpec.fogspec.color.g,iVar11);
      iVar4 = uVar8 - uVar3;
      iVar6 = 0;
      if ((-1 < iVar4) && (iVar6 = iVar4, 0xff < iVar4)) {
        iVar6 = 0xff;
      }
      uVar3 = FUN_000e4328(uVar5 - (uint)TrackSpec_gSpec.fogspec.color.b,iVar11);
      uVar5 = uVar5 - uVar3;
      uVar3 = 0;
      if ((int)uVar5 < 0) {
LAB_000e0a14:
        bVar2 = uVar3 < 8;
      }
      else {
        bVar2 = (int)uVar5 < 8;
        uVar3 = uVar5;
        if (0xff < (int)uVar5) {
          uVar3 = 0xff;
          goto LAB_000e0a14;
        }
      }
      uVar3 = (int)uVar3 >> 3;
      if (bVar2) {
        uVar3 = 1;
      }
      *puVar9 = uVar1 & 0x8000 | (ushort)((uVar3 & 0x1f) << 10) |
                (ushort)((iVar6 >> 3 & 0x1fU) << 5) | (ushort)(iVar7 >> 3) & 0x1f;
    }
    param_3 = param_3 + 1;
    puVar9 = puVar9 + 1;
    iVar10 = iVar10 + 1;
  } while( true );
}




// decompiled code
// original method signature: 
// int FUN_000e0ac0(ushort *param_1,int param_2);
 // line 0, offset 0x000e0ac0
/* WARNING: Could not reconcile some variable overlaps */

int FUN_000e0ac0(ushort *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  
  FUN_000ed87c(0);
  bVar1 = true;
  iVar2 = 0;
  while (bVar1) {
    FUN_000df938((uint)(param_2 < 0x11) ^ 1,&local_20,&local_1c);
    (&gClutDepth)[iGp0000162c * 0x10 + iVar2] =
         (short)local_1c << 6 | (ushort)(local_20 >> 4) & 0x3f;
    FUN_000e08b8(iVar2,0x10,param_1,param_2,(short)local_20,(short)local_1c);
    bVar1 = iVar2 + 1 < 0x10;
    iVar2 = iVar2 + 1;
  }
  iVar2 = iGp0000162c;
  iGp0000162c = iGp0000162c + 1;
  return iVar2;
}




// decompiled code
// original method signature: 
// uint FUN_000e1948(int param_1,int param_2,uint param_3,uint param_4);
 // line 0, offset 0x000e1948
uint FUN_000e1948(int param_1,int param_2,uint param_3,uint param_4)

{
  FUN_000eab9c(Camera_gGeomScreen);
  setCopControlWord(2,0xc000,(param_1 + ((int)(param_3 + (param_3 >> 0x1f)) >> 1)) * 0x10000);
  setCopControlWord(2,0xc800,(param_2 + ((int)(param_4 + (param_4 >> 0x1f)) >> 1)) * 0x10000);
  return param_4 >> 0x1f;
}




// decompiled code
// original method signature: 
// uint FUN_000e4328(int param_1,int param_2);
 // line 0, offset 0x000e4328
uint FUN_000e4328(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (int)((longlong)param_1 * (longlong)param_2) + 0x8000;
  return uVar1 >> 0x10 |
         ((int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) + (uint)(uVar1 < 0x8000)
         ) * 0x10000;
}




// decompiled code
// original method signature: 
// void FUN_000e4358(undefined4 *param_1,undefined4 *param_2);
 // line 0, offset 0x000e4358
void FUN_000e4358(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == param_2) {
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    param_2[1] = param_2[3];
    param_2[2] = param_2[6];
    uVar3 = param_2[7];
    param_2[3] = uVar2;
    param_2[6] = uVar1;
    param_2[7] = param_2[5];
    param_2[5] = uVar3;
    return;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[3];
  param_2[2] = param_1[6];
  param_2[3] = param_1[1];
  param_2[4] = param_1[4];
  param_2[5] = param_1[7];
  param_2[6] = param_1[2];
  param_2[7] = param_1[5];
  param_2[8] = param_1[8];
  return;
}




// decompiled code
// original method signature: 
// int FUN_000e4404(uint param_1,uint param_2);
 // line 0, offset 0x000e4404
int FUN_000e4404(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = (int)param_1 < 0;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  bVar2 = (int)param_2 < 0;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar6 = param_1 % param_2;
  uVar4 = (uint)(bVar1 != bVar2);
  uVar5 = 0x10000;
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = param_1 / param_2 << 0x10;
  if ((int)uVar6 < 0) {
    param_2 = param_2 >> 1;
    goto LAB_000e4478;
  }
  uVar6 = uVar6 << 1;
  do {
    bVar1 = uVar6 < param_2;
    while (-1 < (int)uVar6) {
      uVar5 = uVar5 >> 1;
      if (!bVar1) {
        uVar3 = uVar3 | uVar5;
        uVar6 = uVar6 - param_2;
      }
      uVar6 = uVar6 << 1;
      if (uVar5 == 1) {
        return (uVar3 ^ -uVar4) + uVar4;
      }
LAB_000e4478:
      bVar1 = uVar6 < param_2;
    }
    uVar5 = uVar5 >> 1;
    if (!bVar1) {
      uVar3 = uVar3 | uVar5;
      uVar6 = uVar6 - param_2;
    }
    param_2 = param_2 >> 1;
    if (uVar5 == 1) {
      return (uVar3 ^ -uVar4) + uVar4;
    }
  } while( true );
}




// decompiled code
// original method signature: 
// short * FUN_000e4d4c(int param_1,int param_2,int param_3);
 // line 0, offset 0x000e4d4c
short * FUN_000e4d4c(int param_1,int param_2,int param_3)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1 + 0x10);
  if (param_3 == 0) {
    do {
      psVar1 = *(short **)(psVar1 + 8);
    } while (*(int *)(psVar1 + 2) < param_2);
  }
  else {
    do {
      psVar1 = *(short **)(psVar1 + 10);
    } while (*(int *)(psVar1 + 2) < param_2);
  }
  if (*psVar1 == 0x4253) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}




// decompiled code
// original method signature: 
// short * FUN_000e4db0(int param_1,int param_2,int param_3);
 // line 0, offset 0x000e4db0
short * FUN_000e4db0(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  param_2 = param_2 + -1;
  psVar3 = (short *)(param_1 + 0x10);
  if (param_2 < 0) {
    param_2 = 0;
  }
  psVar2 = (short *)0x0;
  if (param_3 == 0) {
    psVar3 = *(short **)(param_1 + 0x20);
    psVar2 = (short *)0x0;
    if (*(int *)(psVar3 + 2) <= param_2) goto LAB_000e4e00;
    sVar1 = *psVar3;
    psVar2 = (short *)0x0;
    while (sVar1 != 0x4253) {
      param_2 = *(int *)(psVar3 + 2);
      psVar2 = psVar3;
LAB_000e4e00:
      do {
        psVar3 = *(short **)(psVar3 + 8);
      } while (*(int *)(psVar3 + 2) <= param_2);
      sVar1 = *psVar3;
    }
  }
  else {
    while( true ) {
      do {
        psVar3 = *(short **)(psVar3 + 10);
      } while (*(int *)(psVar3 + 2) <= param_2);
      if (*psVar3 == 0x4253) break;
      param_2 = *(int *)(psVar3 + 2);
      psVar2 = psVar3;
    }
  }
  return psVar2;
}




// decompiled code
// original method signature: 
// void FUN_000e4e70(int param_1,undefined2 *param_2);
 // line 0, offset 0x000e4e70
void FUN_000e4e70(int param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0x10);
  puVar2 = puVar1;
  if ((undefined2 *)
      (*(int *)(param_1 + 0x20) + ((uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) >> 1)
      ) < param_2) {
    do {
      puVar2 = *(undefined2 **)(puVar2 + 10);
    } while (param_2 < puVar2);
    puVar1 = *(undefined2 **)(puVar2 + 8);
    *(undefined2 **)(param_2 + 8) = puVar1;
  }
  else {
    do {
      puVar1 = *(undefined2 **)(puVar1 + 8);
    } while (puVar1 < param_2);
    puVar2 = *(undefined2 **)(puVar1 + 10);
    *(undefined2 **)(param_2 + 8) = puVar1;
  }
  *(undefined2 **)(param_2 + 10) = puVar2;
  *(int *)(param_2 + 2) = (*(int *)(param_2 + 4) - (int)param_2) + -0x10;
  *(undefined2 **)(puVar2 + 8) = param_2;
  *(undefined2 **)(puVar1 + 10) = param_2;
  *param_2 = 0x4246;
  param_2[1] = param_2[1] | 0x4000;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000e4f04(undefined4 param_1,undefined2 *param_2);
 // line 0, offset 0x000e4f04
void FUN_000e4f04(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 10);
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(iVar2 + 0x10) = iVar1;
  *(int *)(iVar1 + 0x14) = iVar2;
  *param_2 = 0;
  param_2[1] = param_2[1] & 0xbfff;
  return;
}




// decompiled code
// original method signature: 
// int FUN_000e4f2c(undefined2 *param_1,int param_2,int param_3,int param_4,ushort param_5,undefined4 param_6,undefined4 param_7);
 // line 0, offset 0x000e4f2c
int FUN_000e4f2c(undefined2 *param_1,int param_2,int param_3,int param_4,ushort param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + param_3 + 0x10;
  *param_1 = 0x424d;
  *(int *)(param_1 + 2) = param_3;
  param_1[1] = param_5;
  *(undefined4 *)(param_1 + 4) = param_7;
  *(undefined4 *)(param_1 + 6) = param_6;
  if ((param_5 & 0x200) != 0) {
    FUN_000f30ac(iVar2,0x42454e44,4);
  }
  if ((param_5 & 0x800) != 0) {
    FUN_000f30d4((undefined *)(iVar2 + 0xc),0,4);
  }
  iVar2 = iVar2 + param_4;
  if (param_2 != 0) {
    if ((param_5 & 0x100) == 0) {
      return iVar2 - (int)param_1;
    }
    FUN_000e5b28();
    iVar1 = FUN_000e9f74();
    iVar2 = iVar2 + iVar1 + 1;
  }
  return iVar2 - (int)param_1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_000e5008(uint param_1);
 // line 0, offset 0x000e5008
undefined4 FUN_000e5008(uint param_1)

{
  return *(undefined4 *)((&memclass)[param_1 & 0xf] + 0x30);
}




// decompiled code
// original method signature: 
// int FUN_000e5030(int param_1,uint param_2);
 // line 0, offset 0x000e5030
int FUN_000e5030(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (&memclass)[param_2 & 0xf];
  iVar1 = 0;
  if ((param_1 != 0) && ((*(uint *)(iVar2 + 0x34) & 0x100) != 0)) {
    iVar1 = FUN_000e9f74();
    iVar1 = iVar1 + 1;
  }
  return *(int *)(iVar2 + 0x30) + iVar1;
}




// decompiled code
// original method signature: 
// int FUN_000e52e0(int param_1);
 // line 0, offset 0x000e52e0
int FUN_000e52e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(ushort *)(param_1 + -0xe) & 0x100) != 0) {
    iVar1 = FUN_000e5008((uint)*(ushort *)(param_1 + -0xe));
    iVar1 = param_1 + *(int *)(param_1 + -0xc) + iVar1;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// short * FUN_000e533c(int param_1,int param_2,uint param_3);
 // line 0, offset 0x000e533c
short * FUN_000e533c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  
  psVar10 = (short *)0x0;
  iVar8 = (&memclass)[param_3 & 0xf];
  iVar5 = param_2;
  if ((7 < param_2) || (iVar5 = 8, -1 < param_2)) {
    iVar1 = FUN_000e5030(param_1,param_3);
    uVar9 = *(int *)(iVar8 + 0x28) - 1;
    uVar2 = iVar5 + iVar1 + *(int *)(iVar8 + 0x28) + 0xf & ~uVar9;
    iVar5 = uVar2 - 0x10;
    if ((param_3 & 0x20) == 0) {
      psVar3 = FUN_000e4d4c(iVar8,iVar5,param_3 & 0x10);
    }
    else {
      psVar3 = FUN_000e4db0(iVar8,iVar5,param_3 & 0x10);
    }
    if (psVar3 != (short *)0x0) {
      FUN_000e4f04(iVar8,psVar3);
      if (0x40 < *(int *)(psVar3 + 2) - iVar5) {
        if ((param_3 & 0x10) == 0) {
          puVar6 = (undefined2 *)((int)psVar3 + uVar2);
          *(undefined2 **)(*(int *)(psVar3 + 4) + 0xc) = puVar6;
          FUN_000e4f2c(puVar6,0,0,0,0,psVar3,*(undefined4 *)(psVar3 + 4));
          FUN_000e4e70(iVar8,puVar6);
          *(undefined2 **)(psVar3 + 4) = puVar6;
        }
        else {
          psVar10 = (short *)((int)psVar3 + (*(int *)(psVar3 + 2) - iVar5 & ~uVar9));
          *(short **)(*(int *)(psVar3 + 4) + 0xc) = psVar10;
          uVar4 = *(undefined4 *)(psVar3 + 4);
          *(short **)(psVar10 + 6) = psVar3;
          *(undefined4 *)(psVar10 + 4) = uVar4;
          FUN_000e4f2c(psVar3,0,0,0,0,*(undefined4 *)(psVar3 + 6),psVar10);
          FUN_000e4e70(iVar8,psVar3);
          psVar3 = psVar10;
        }
      }
      uVar7 = (ushort)param_3 | (ushort)*(undefined4 *)(iVar8 + 0x34) & 0x700;
      if (param_1 == 0) {
        uVar7 = uVar7 & 0xfeff;
      }
      psVar10 = psVar3 + 8;
      FUN_000e4f2c(psVar3,param_1,param_2,*(int *)(iVar8 + 0x30),uVar7,*(undefined4 *)(psVar3 + 6),
                   *(undefined4 *)(psVar3 + 4));
    }
  }
  return psVar10;
}




// decompiled code
// original method signature: 
// undefined4 FUN_000e5540(int param_1);
 // line 0, offset 0x000e5540
undefined4 FUN_000e5540(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  if (param_1 != 0) {
    puVar2 = *(undefined2 **)(param_1 + -8);
    puVar4 = *(undefined2 **)(param_1 + -4);
    iVar6 = (&memclass)[(uint)*(ushort *)(param_1 + -0xe) & 0xf];
    puVar1 = (undefined2 *)(param_1 + -0x10);
    puVar5 = puVar4;
    if ((puVar4[1] & 0x4000) != 0) {
      FUN_000e4f04(iVar6,puVar4);
      puVar5 = *(undefined2 **)(puVar4 + 6);
      *(undefined2 **)(puVar4 + 4) = puVar2;
      *(undefined2 **)(puVar5 + 4) = puVar4;
      *(undefined2 **)(puVar2 + 6) = puVar4;
      puVar1 = puVar4;
    }
    if ((puVar2[1] & 0x4000) != 0) {
      FUN_000e4f04(iVar6,puVar2);
      iVar3 = *(int *)(puVar2 + 4);
      *(undefined2 **)(puVar1 + 6) = puVar5;
      *(int *)(puVar1 + 4) = iVar3;
      *(undefined2 **)(iVar3 + 0xc) = puVar1;
    }
    FUN_000e4e70(iVar6,puVar1);
  }
  return 1;
}




// decompiled code
// original method signature: 
// void FUN_000e5b28(void);
 // line 0, offset 0x000e5b28
void FUN_000e5b28(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void FUN_000e62dc(undefined4 *puParm1,undefined4 *puParm2,int iParm3);
 // line 0, offset 0x000e62dc
/* WARNING: Instruction at (ram,0x000e65d8) overlaps instruction at (ram,0x000e65d4)
    */

void FUN_000e62dc(undefined4 *puParm1,undefined4 *puParm2,int iParm3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_t0;
  uint in_t1;
  undefined4 uVar8;
  uint in_t2;
  undefined4 uVar9;
  uint in_t3;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (((int)puParm1 < (int)puParm2) && ((int)puParm2 < (int)puParm1 + iParm3)) {
    uVar5 = (int)puParm1 + iParm3;
    uVar6 = (int)puParm2 + iParm3;
    if (((uVar5 | uVar6) & 3) == 0) {
      iParm3 = iParm3 + -0x10;
      while (-1 < iParm3) {
        in_t0 = *(uint *)(uVar5 - 0x10);
        uVar8 = *(undefined4 *)(uVar5 - 0xc);
        uVar9 = *(undefined4 *)(uVar5 - 8);
        uVar10 = *(undefined4 *)(uVar5 - 4);
        *(uint *)(uVar6 - 0x10) = in_t0;
        *(undefined4 *)(uVar6 - 0xc) = uVar8;
        *(undefined4 *)(uVar6 - 8) = uVar9;
        *(undefined4 *)(uVar6 - 4) = uVar10;
        uVar5 = uVar5 - 0x10;
        iParm3 = iParm3 + -0x10;
        uVar6 = uVar6 - 0x10;
      }
    }
    else {
      iParm3 = iParm3 + -0x10;
      while (-1 < iParm3) {
        uVar2 = uVar5 - 0xd & 3;
        uVar3 = uVar5 - 0x10 & 3;
        in_t0 = (*(int *)((uVar5 - 0xd) - uVar2) << (3 - uVar2) * 8 |
                in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
                *(uint *)((uVar5 - 0x10) - uVar3) >> uVar3 * 8;
        uVar2 = uVar5 - 9 & 3;
        uVar3 = uVar5 - 0xc & 3;
        in_t1 = (*(int *)((uVar5 - 9) - uVar2) << (3 - uVar2) * 8 |
                in_t1 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
                *(uint *)((uVar5 - 0xc) - uVar3) >> uVar3 * 8;
        uVar2 = uVar5 - 5 & 3;
        uVar3 = uVar5 - 8 & 3;
        in_t2 = (*(int *)((uVar5 - 5) - uVar2) << (3 - uVar2) * 8 |
                in_t2 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
                *(uint *)((uVar5 - 8) - uVar3) >> uVar3 * 8;
        uVar2 = uVar5 - 1 & 3;
        uVar3 = uVar5 - 4 & 3;
        in_t3 = (*(int *)((uVar5 - 1) - uVar2) << (3 - uVar2) * 8 |
                in_t3 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
                *(uint *)((uVar5 - 4) - uVar3) >> uVar3 * 8;
        uVar2 = uVar6 - 0xd & 3;
        puVar4 = (uint *)((uVar6 - 0xd) - uVar2);
        *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | in_t0 >> (3 - uVar2) * 8;
        uVar2 = uVar6 - 0x10 & 3;
        puVar4 = (uint *)((uVar6 - 0x10) - uVar2);
        *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | in_t0 << uVar2 * 8;
        uVar2 = uVar6 - 9 & 3;
        puVar4 = (uint *)((uVar6 - 9) - uVar2);
        *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | in_t1 >> (3 - uVar2) * 8;
        uVar2 = uVar6 - 0xc & 3;
        puVar4 = (uint *)((uVar6 - 0xc) - uVar2);
        *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | in_t1 << uVar2 * 8;
        uVar2 = uVar6 - 5 & 3;
        puVar4 = (uint *)((uVar6 - 5) - uVar2);
        *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | in_t2 >> (3 - uVar2) * 8;
        uVar2 = uVar6 - 8 & 3;
        puVar4 = (uint *)((uVar6 - 8) - uVar2);
        *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | in_t2 << uVar2 * 8;
        uVar2 = uVar6 - 1 & 3;
        puVar4 = (uint *)((uVar6 - 1) - uVar2);
        *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | in_t3 >> (3 - uVar2) * 8;
        uVar2 = uVar6 - 4 & 3;
        puVar4 = (uint *)((uVar6 - 4) - uVar2);
        *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | in_t3 << uVar2 * 8;
        iParm3 = iParm3 + -0x10;
        uVar5 = uVar5 - 0x10;
        uVar6 = uVar6 - 0x10;
      }
    }
    iParm3 = iParm3 + 0xc;
    while (-1 < iParm3) {
      uVar2 = uVar5 - 1 & 3;
      uVar3 = uVar5 - 4 & 3;
      in_t0 = (*(int *)((uVar5 - 1) - uVar2) << (3 - uVar2) * 8 |
              in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
              *(uint *)((uVar5 - 4) - uVar3) >> uVar3 * 8;
      iParm3 = iParm3 + -4;
      uVar2 = uVar6 - 1 & 3;
      puVar4 = (uint *)((uVar6 - 1) - uVar2);
      *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | in_t0 >> (3 - uVar2) * 8;
      uVar2 = uVar6 - 4 & 3;
      puVar4 = (uint *)((uVar6 - 4) - uVar2);
      *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | in_t0 << uVar2 * 8;
      uVar5 = uVar5 - 4;
      uVar6 = uVar6 - 4;
    }
    iVar7 = iParm3 + 2;
    if (-1 < iParm3 + 3) {
      while( true ) {
        puVar1 = (undefined *)(uVar5 - 1);
        uVar5 = uVar5 - 1;
        *(undefined *)(uVar6 - 1) = *puVar1;
        uVar6 = uVar6 - 1;
        if (iVar7 < 0) break;
        iVar7 = iVar7 + -1;
      }
    }
    return;
  }
  if ((((uint)puParm1 | (uint)puParm2) & 3) != 0) {
    iParm3 = iParm3 + -0x10;
    while (-1 < iParm3) {
      uVar5 = (uint)(undefined *)((int)puParm1 + 3U) & 3;
      uVar6 = (uint)puParm1 & 3;
      in_t0 = (*(int *)((undefined *)((int)puParm1 + 3U) + -uVar5) << (3 - uVar5) * 8 |
              in_t0 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)puParm1 - uVar6) >> uVar6 * 8;
      uVar5 = (uint)(undefined *)((int)puParm1 + 7U) & 3;
      uVar6 = (uint)(puParm1 + 1) & 3;
      in_t1 = (*(int *)((undefined *)((int)puParm1 + 7U) + -uVar5) << (3 - uVar5) * 8 |
              in_t1 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)(puParm1 + 1) - uVar6) >> uVar6 * 8;
      uVar5 = (uint)(undefined *)((int)puParm1 + 0xbU) & 3;
      uVar6 = (uint)(puParm1 + 2) & 3;
      in_t2 = (*(int *)((undefined *)((int)puParm1 + 0xbU) + -uVar5) << (3 - uVar5) * 8 |
              in_t2 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)(puParm1 + 2) - uVar6) >> uVar6 * 8;
      uVar5 = (uint)(undefined *)((int)puParm1 + 0xfU) & 3;
      uVar6 = (uint)(puParm1 + 3) & 3;
      in_t3 = (*(int *)((undefined *)((int)puParm1 + 0xfU) + -uVar5) << (3 - uVar5) * 8 |
              in_t3 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)(puParm1 + 3) - uVar6) >> uVar6 * 8;
      uVar5 = (uint)(undefined *)((int)puParm2 + 3U) & 3;
      puVar4 = (uint *)((undefined *)((int)puParm2 + 3U) + -uVar5);
      *puVar4 = *puVar4 & -1 << (uVar5 + 1) * 8 | in_t0 >> (3 - uVar5) * 8;
      uVar5 = (uint)puParm2 & 3;
      *(uint *)((int)puParm2 - uVar5) =
           *(uint *)((int)puParm2 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | in_t0 << uVar5 * 8;
      uVar5 = (uint)(undefined *)((int)puParm2 + 7U) & 3;
      puVar4 = (uint *)((undefined *)((int)puParm2 + 7U) + -uVar5);
      *puVar4 = *puVar4 & -1 << (uVar5 + 1) * 8 | in_t1 >> (3 - uVar5) * 8;
      uVar5 = (uint)(puParm2 + 1) & 3;
      puVar4 = (uint *)((int)(puParm2 + 1) - uVar5);
      *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar5) * 8 | in_t1 << uVar5 * 8;
      uVar5 = (uint)(undefined *)((int)puParm2 + 0xbU) & 3;
      puVar4 = (uint *)((undefined *)((int)puParm2 + 0xbU) + -uVar5);
      *puVar4 = *puVar4 & -1 << (uVar5 + 1) * 8 | in_t2 >> (3 - uVar5) * 8;
      uVar5 = (uint)(puParm2 + 2) & 3;
      puVar4 = (uint *)((int)(puParm2 + 2) - uVar5);
      *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar5) * 8 | in_t2 << uVar5 * 8;
      uVar5 = (uint)(undefined *)((int)puParm2 + 0xfU) & 3;
      puVar4 = (uint *)((undefined *)((int)puParm2 + 0xfU) + -uVar5);
      *puVar4 = *puVar4 & -1 << (uVar5 + 1) * 8 | in_t3 >> (3 - uVar5) * 8;
      uVar5 = (uint)(puParm2 + 3) & 3;
      puVar4 = (uint *)((int)(puParm2 + 3) - uVar5);
      *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar5) * 8 | in_t3 << uVar5 * 8;
      iParm3 = iParm3 + -0x10;
      puParm1 = puParm1 + 4;
      puParm2 = puParm2 + 4;
    }
    iParm3 = iParm3 + 0xc;
    while (-1 < iParm3) {
      uVar5 = (uint)(undefined *)((int)puParm1 + 3U) & 3;
      uVar6 = (uint)puParm1 & 3;
      in_t0 = (*(int *)((undefined *)((int)puParm1 + 3U) + -uVar5) << (3 - uVar5) * 8 |
              in_t0 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)puParm1 - uVar6) >> uVar6 * 8;
      iParm3 = iParm3 + -4;
      uVar5 = (uint)(undefined *)((int)puParm2 + 3U) & 3;
      puVar4 = (uint *)((undefined *)((int)puParm2 + 3U) + -uVar5);
      *puVar4 = *puVar4 & -1 << (uVar5 + 1) * 8 | in_t0 >> (3 - uVar5) * 8;
      uVar5 = (uint)puParm2 & 3;
      *(uint *)((int)puParm2 - uVar5) =
           *(uint *)((int)puParm2 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | in_t0 << uVar5 * 8;
      puParm1 = puParm1 + 1;
      puParm2 = puParm2 + 1;
    }
    iParm3 = iParm3 + 3;
    while (-1 < iParm3) {
      iParm3 = iParm3 + -1;
      *(undefined *)puParm2 = *(undefined *)puParm1;
      puParm1 = (undefined4 *)((int)puParm1 + 1);
      puParm2 = (undefined4 *)((int)puParm2 + 1);
    }
    return;
  }
  iParm3 = iParm3 + -0x40;
  while (-1 < iParm3) {
    uVar8 = puParm1[1];
    uVar9 = puParm1[2];
    uVar10 = puParm1[3];
    uVar11 = puParm1[4];
    uVar12 = puParm1[5];
    uVar13 = puParm1[6];
    uVar14 = puParm1[7];
    *puParm2 = *puParm1;
    puParm2[1] = uVar8;
    puParm2[2] = uVar9;
    puParm2[3] = uVar10;
    puParm2[4] = uVar11;
    puParm2[5] = uVar12;
    puParm2[6] = uVar13;
    puParm2[7] = uVar14;
    uVar8 = puParm1[9];
    uVar9 = puParm1[10];
    uVar10 = puParm1[0xb];
    uVar11 = puParm1[0xc];
    uVar12 = puParm1[0xd];
    uVar13 = puParm1[0xe];
    uVar14 = puParm1[0xf];
    puParm2[8] = puParm1[8];
    puParm2[9] = uVar8;
    puParm2[10] = uVar9;
    puParm2[0xb] = uVar10;
    puParm2[0xc] = uVar11;
    puParm2[0xd] = uVar12;
    puParm2[0xe] = uVar13;
    puParm2[0xf] = uVar14;
    iParm3 = iParm3 + -0x40;
    puParm1 = puParm1 + 0x10;
    puParm2 = puParm2 + 0x10;
  }
  iParm3 = iParm3 + 0x30;
  while (-1 < iParm3) {
    uVar8 = puParm1[1];
    uVar9 = puParm1[2];
    uVar10 = puParm1[3];
    *puParm2 = *puParm1;
    puParm2[1] = uVar8;
    puParm2[2] = uVar9;
    puParm2[3] = uVar10;
    iParm3 = iParm3 + -0x10;
    puParm1 = puParm1 + 4;
    puParm2 = puParm2 + 4;
  }
  iParm3 = iParm3 + 0xc;
  while (-1 < iParm3) {
    iParm3 = iParm3 + -4;
    *puParm2 = *puParm1;
    puParm1 = puParm1 + 1;
    puParm2 = puParm2 + 1;
  }
  iParm3 = iParm3 + 3;
  while (-1 < iParm3) {
    iParm3 = iParm3 + -1;
    *(undefined *)puParm2 = *(undefined *)puParm1;
    puParm1 = (undefined4 *)((int)puParm1 + 1);
    puParm2 = (undefined4 *)((int)puParm2 + 1);
  }
  return;
}




// decompiled code
// original method signature: 
// uint FUN_000e6c04(undefined4 param_1);
 // line 0, offset 0x000e6c04
uint FUN_000e6c04(undefined4 param_1)

{
  uchar *puVar1;
  uint uVar2;
  code **ppcVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (puGp000016f0 != libticks) {
    iVar4 = 0;
    ppcVar3 = (code **)&systemtasksubs;
    puGp000016f0 = libticks;
    do {
      if (((*ppcVar3 != (code *)0x0) && ((int)ppcVar3[2] <= (int)libticks)) &&
         (ppcVar3[3] == (code *)0x0)) {
        ppcVar3[3] = &DAT_00000001;
        uVar2 = (**ppcVar3)(param_1,libticks + -(int)ppcVar3[2]);
        puVar1 = libticks;
        uVar5 = uVar5 | uVar2;
        ppcVar3[3] = (code *)0x0;
        *(uchar **)(ppcVar3 + 2) = puVar1 + (int)ppcVar3[1];
      }
      iVar4 = iVar4 + 1;
      ppcVar3 = ppcVar3 + 4;
    } while (iVar4 < 0x10);
  }
  return uVar5;
}




// decompiled code
// original method signature: 
// void FUN_000e78e8(void);
 // line 0, offset 0x000e78e8
void FUN_000e78e8(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void FUN_000e80cc(void);
 // line 0, offset 0x000e80cc
void FUN_000e80cc(void)

{
                    /* WARNING: Treating indirect jump as call */
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void FUN_000e9f74(void);
 // line 0, offset 0x000e9f74
void FUN_000e9f74(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eaac4(void);
 // line 0, offset 0x000eaac4
void FUN_000eaac4(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eaae4(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x000eaae4
void FUN_000eaae4(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_000e4328(param_1[1],param_2[2]);
  uVar2 = FUN_000e4328(param_1[2],param_2[1]);
  *param_3 = uVar1 - uVar2;
  uVar1 = FUN_000e4328(*param_1,param_2[2]);
  uVar2 = FUN_000e4328(param_1[2],*param_2);
  param_3[1] = uVar2 - uVar1;
  uVar1 = FUN_000e4328(*param_1,param_2[1]);
  uVar2 = FUN_000e4328(param_1[1],*param_2);
  param_3[2] = uVar1 - uVar2;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eab9c(undefined4 param_1);
 // line 0, offset 0x000eab9c
void FUN_000eab9c(undefined4 param_1)

{
  setCopControlWord(2,0xd000,param_1);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eabac(undefined4 *param_1,uint param_2);
 // line 0, offset 0x000eabac
void FUN_000eabac(undefined4 *param_1,uint param_2)

{
  int local_10;
  int local_c;
  
  FUN_000f3670(param_2,&local_10,&local_c);
  *param_1 = 0x10000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = local_10;
  param_1[4] = local_c;
  param_1[7] = -local_10;
  param_1[8] = local_c;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eac10(int *param_1,uint param_2);
 // line 0, offset 0x000eac10
void FUN_000eac10(int *param_1,uint param_2)

{
  int local_10;
  int local_c;
  
  FUN_000f3670(param_2,&local_10,&local_c);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0x10000;
  param_1[5] = 0;
  param_1[7] = 0;
  *param_1 = local_c;
  param_1[2] = -local_10;
  param_1[6] = local_10;
  param_1[8] = local_c;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eac74(int *param_1,uint param_2);
 // line 0, offset 0x000eac74
void FUN_000eac74(int *param_1,uint param_2)

{
  int local_10;
  int local_c;
  
  FUN_000f3670(param_2,&local_10,&local_c);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x10000;
  param_1[1] = local_10;
  *param_1 = local_c;
  param_1[3] = -local_10;
  param_1[4] = local_c;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eadbc(uint param_1,int *param_2,int *param_3);
 // line 0, offset 0x000eadbc
void FUN_000eadbc(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 3;
  param_1 = param_1 & 0xff;
  if (uVar2 == 1) {
    *param_2 = *(int *)(&sintbl + (0x100 - param_1) * 4);
LAB_000eae5c:
    *param_3 = -*(int *)(&sintbl + param_1 * 4);
    return;
  }
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      return;
    }
    *param_2 = *(int *)(&sintbl + param_1 * 4);
    iVar1 = (0x100 - param_1) * 4;
  }
  else {
    if (uVar2 == 2) {
      *param_2 = -*(int *)(&sintbl + param_1 * 4);
      param_1 = 0x100 - param_1;
      goto LAB_000eae5c;
    }
    if (uVar2 != 3) {
      return;
    }
    *param_2 = -*(int *)(&sintbl + (0x100 - param_1) * 4);
    iVar1 = param_1 << 2;
  }
  *param_3 = *(int *)(&sintbl + iVar1);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eaed8(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x000eaed8
void FUN_000eaed8(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = FUN_000e4328(*param_1,*param_2);
  uVar2 = FUN_000e4328(param_1[1],param_2[3]);
  uVar3 = FUN_000e4328(param_1[2],param_2[6]);
  uVar4 = FUN_000e4328(*param_1,param_2[1]);
  uVar5 = FUN_000e4328(param_1[1],param_2[4]);
  uVar6 = FUN_000e4328(param_1[2],param_2[7]);
  uVar7 = FUN_000e4328(*param_1,param_2[2]);
  uVar8 = FUN_000e4328(param_1[1],param_2[5]);
  uVar9 = FUN_000e4328(param_1[2],param_2[8]);
  *param_3 = uVar1 + uVar2 + uVar3;
  param_3[1] = uVar4 + uVar5 + uVar6;
  param_3[2] = uVar7 + uVar8 + uVar9;
  return;
}




// decompiled code
// original method signature: 
// int FUN_000eb0ac(uint param_1);
 // line 0, offset 0x000eb0ac
int FUN_000eb0ac(uint param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0x80000000;
  if (param_1 != 0) {
    piVar3 = (int *)0x8012356c;
    do {
      piVar2 = piVar3;
      uVar5 = param_1 & uVar4;
      piVar3 = piVar2 + -1;
      uVar4 = uVar4 >> 1;
    } while (uVar5 == 0);
    lVar1 = (longlong)(int)param_1 * (longlong)*piVar3;
    return ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + piVar2[0x20];
  }
  return 0;
}




// decompiled code
// original method signature: 
// int FUN_000eb170(int param_1,int *param_2);
 // line 0, offset 0x000eb170
int FUN_000eb170(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar3 = iVar2 * 8 + param_1;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) break;
      piVar1 = (int *)(iVar3 + 8);
      iVar3 = iVar3 + -8;
    } while (*piVar1 != *param_2);
    iVar2 = iVar2 * 8 + param_1;
    if (*(int *)(iVar2 + 0x10) == *param_2) {
      return param_1 + *(int *)(iVar2 + 0x14);
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// int FUN_000eb310(short param_1);
 // line 0, offset 0x000eb310
int FUN_000eb310(short param_1)

{
  int iVar1;
  short **ppsVar2;
  
  if ((gVoxBanks != (short **)0x0) && (iVar1 = 0, ppsVar2 = gVoxBanks, 0 < gNumBanks)) {
    do {
      if ((*ppsVar2 != (short *)0x0) && (**ppsVar2 == param_1)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      ppsVar2 = ppsVar2 + 1;
    } while (iVar1 < gNumBanks);
  }
  return -1;
}




// decompiled code
// original method signature: 
// void FUN_000ed87c(undefined4 param_1);
 // line 0, offset 0x000ed87c
void FUN_000ed87c(undefined4 param_1)

{
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_DrawSync__d_____80056db4,param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x3c))(param_1);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000ed8e4(undefined4 param_1,short *param_2);
 // line 0, offset 0x000ed8e4
void FUN_000ed8e4(undefined4 param_1,short *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  if (DAT_8012369e == '\x01') {
    iVar3 = (int)param_2[2];
    if ((iVar3 <= (int)DAT_801236a0) && (iVar3 + (int)*param_2 <= (int)DAT_801236a0)) {
      iVar1 = (int)param_2[1];
      if (((iVar1 <= (int)DAT_801236a2) &&
          (((iVar1 + (int)param_2[3] <= (int)DAT_801236a2 && (0 < iVar3)) && (-1 < (int)*param_2))))
         && ((-1 < iVar1 && (0 < (int)param_2[3])))) {
        return;
      }
    }
    ppuVar2 = (undefined **)s__s_bad_RECT_80056dc8;
  }
  else {
    if (DAT_8012369e != '\x02') {
      return;
    }
    ppuVar2 = &PTR_DAT_80056de8;
  }
  (*(code *)GPU_printf)(ppuVar2,param_1);
  (*(code *)GPU_printf)
            (s___d__d____d__d__80056dd4,(int)*param_2,(int)param_2[1],(int)param_2[2],
             (int)param_2[3]);
  return;
}




// decompiled code
// original method signature: 
// void FUN_000eda90(short *param_1,undefined4 param_2);
 // line 0, offset 0x000eda90
void FUN_000eda90(short *param_1,undefined4 param_2)

{
  FUN_000ed8e4(s_LoadImage_80056e04,param_1);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x20),param_1,8,
             param_2);
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_000edb50(undefined4 *param_1,uint param_2,int param_3);
 // line 0, offset 0x000edb50
undefined4 FUN_000edb50(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_000ed8e4(s_MoveImage_80056e1c,(short *)param_1);
  uVar1 = 0xffffffff;
  if (*(short *)(param_1 + 1) != 0) {
    if (*(short *)((int)param_1 + 6) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      DAT_80123740 = param_3 << 0x10 | param_2 & 0xffff;
      DAT_8012373c = *param_1;
      DAT_80123744 = param_1[1];
      uVar1 = (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
                        (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x18)
                         ,&DAT_80123734,0x14,0);
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void FUN_000edc08(undefined4 *param_1,undefined4 param_2);
 // line 0, offset 0x000edc08
void FUN_000edc08(undefined4 *param_1,undefined4 param_2)

{
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_ClearOTagR__08x__d_____80056e40,param_1,param_2);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x2c))(param_1,param_2);
  DAT_8012375c = 0x4123748;
  *param_1 = 0x12375c;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000edcb4(undefined4 param_1);
 // line 0, offset 0x000edcb4
void FUN_000edcb4(undefined4 param_1)

{
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_DrawOTag__08x_____80056e58,param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x18),param_1,0,0
            );
  return;
}




// decompiled code
// original method signature: 
// ushort * FUN_000edde4(ushort *param_1);
 // line 0, offset 0x000edde4
ushort * FUN_000edde4(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = 0x8000000;
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_PutDispEnv__08x_____80056ea0,param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))
            (((uint)param_1[1] & 0x3ff) << 10 | (uint)*param_1 & 0x3ff | 0x5000000);
  if ((((DAT_80123718 != *(int *)(param_1 + 8)) || (DAT_80123708 != *param_1)) ||
      (DAT_8012370a != param_1[1])) ||
     ((DAT_8012370c != param_1[2] || (DAT_8012370e != param_1[3])))) {
    uVar3 = FUN_000f1784();
    *(char *)(param_1 + 9) = (char)uVar3;
    if ((uVar3 & 0xff) == 1) {
      uVar10 = 0x8000008;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      uVar10 = uVar10 | 0x10;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      uVar10 = uVar10 | 0x20;
    }
    if (DAT_8012369f != '\0') {
      uVar10 = uVar10 | 0x80;
    }
    uVar1 = param_1[2];
    if (0x118 < (short)uVar1) {
      if ((short)uVar1 < 0x161) {
        uVar10 = uVar10 | 1;
      }
      else {
        if ((short)uVar1 < 0x191) {
          uVar10 = uVar10 | 0x40;
        }
        else {
          if ((short)uVar1 < 0x231) {
            uVar10 = uVar10 | 2;
          }
          else {
            uVar10 = uVar10 | 3;
          }
        }
      }
    }
    bVar2 = (short)param_1[3] < 0x121;
    if (*(char *)(param_1 + 9) == '\0') {
      bVar2 = (short)param_1[3] < 0x101;
    }
    if (!bVar2) {
      uVar10 = uVar10 | 0x24;
    }
    (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))(uVar10);
    *(undefined *)(param_1 + 9) = 8;
  }
  if (((DAT_80123710 == param_1[4]) && (DAT_80123712 == param_1[5])) &&
     ((DAT_80123714 == param_1[6] &&
      ((DAT_80123716 == param_1[7] && (*(char *)(param_1 + 9) != '\b')))))) goto LAB_000ee2ac;
  uVar10 = FUN_000f1784();
  *(char *)(param_1 + 9) = (char)uVar10;
  uVar3 = (int)(short)param_1[5] + 0x13;
  if ((uVar10 & 0xff) == 0) {
    uVar3 = (int)(short)param_1[5] + 0x10;
  }
  uVar10 = uVar3 + (int)(short)param_1[7];
  if ((int)(short)param_1[7] == 0) {
    uVar10 = uVar3 + 0xf0;
  }
  uVar1 = param_1[2];
  iVar9 = 0;
  if ((((0x118 < (short)uVar1) && (iVar9 = 1, 0x160 < (short)uVar1)) &&
      (iVar9 = 2, 400 < (short)uVar1)) && (iVar9 = 4, (short)uVar1 < 0x231)) {
    iVar9 = 3;
  }
  iVar4 = ((uint)*(byte *)(param_1 + 9) * 5 + iVar9) * 4;
  iVar5 = (uint)*(ushort *)(&DAT_80123772 + iVar4) - (uint)*(ushort *)(&DAT_80123770 + iVar4);
  uVar7 = (uint)*(ushort *)(&DAT_80123770 + iVar4) +
          (int)(short)param_1[4] * (uint)(byte)(&DAT_80123798)[iVar9];
  if ((int)(short)param_1[6] != 0) {
    iVar5 = iVar5 * (int)(short)param_1[6] >> 8;
  }
  uVar6 = uVar7 + iVar5;
  if (*(char *)(param_1 + 9) == '\0') {
    uVar8 = 500;
    if ((499 < (int)uVar7) && (uVar8 = 0xcb2, (int)uVar7 < 0xcb3)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(byte)(&DAT_80123798)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcda, (int)uVar6 < 0xcdb)) {
      uVar7 = uVar6;
    }
    if ((int)uVar3 < 0x10) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x101;
      if ((int)uVar3 < 0x102) {
        uVar6 = uVar3;
      }
    }
    uVar3 = uVar6 + 2;
    bVar2 = (int)uVar10 < 0x103;
    if ((int)uVar3 <= (int)uVar10) {
      uVar3 = 0x102;
      goto LAB_000ee244;
    }
  }
  else {
    uVar8 = 0x21c;
    if ((0x21b < (int)uVar7) && (uVar8 = 0xc94, (int)uVar7 < 0xc95)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(byte)(&DAT_80123798)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcbc, (int)uVar6 < 0xcbd)) {
      uVar7 = uVar6;
    }
    if ((int)uVar3 < 0x13) {
      uVar6 = 0x13;
    }
    else {
      uVar6 = 0x12f;
      if ((int)uVar3 < 0x130) {
        uVar6 = uVar3;
      }
    }
    bVar2 = (int)uVar10 < 0x132;
    uVar3 = uVar6 + 2;
    if ((int)(uVar6 + 2) <= (int)uVar10) {
      uVar3 = 0x131;
LAB_000ee244:
      if (bVar2) {
        uVar3 = uVar10;
      }
    }
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))
            ((uVar7 & 0xfff) << 0xc | uVar8 & 0xfff | 0x6000000);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))
            ((uVar3 & 0x3ff) << 10 | uVar6 & 0x3ff | 0x7000000);
LAB_000ee2ac:
  FUN_000eaac4();
  return param_1;
}




// decompiled code
// original method signature: 
// void FUN_000ee410(int param_1,ushort *param_2);
 // line 0, offset 0x000ee410
void FUN_000ee410(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = FUN_000ee898((int)(short)*param_2,(int)(short)param_2[1]);
  *(uint *)(param_1 + 4) = uVar4;
  uVar4 = FUN_000ee930((int)(((uint)param_2[2] + (uint)*param_2 + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2[1] + (uint)param_2[3] + -1) * 0x10000) >> 0x10);
  *(uint *)(param_1 + 8) = uVar4;
  uVar4 = FUN_000ee9c8((int)(short)param_2[4],(int)(short)param_2[5]);
  *(uint *)(param_1 + 0xc) = uVar4;
  uVar4 = FUN_000ee878((uint)*(byte *)((int)param_2 + 0x17),(uint)*(byte *)(param_2 + 0xb),
                       (uint)param_2[10]);
  *(uint *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_000ee9e4((byte *)(param_2 + 6));
  *(uint *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = 0xe6000000;
  cVar5 = '\a';
  if (*(char *)(param_2 + 0xc) != '\0') {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    uVar2 = 0;
    if ((-1 < (int)(short)uVar3) &&
       (uVar2 = DAT_801236a0 - 1, (int)(short)uVar3 <= (int)DAT_801236a0 + -1)) {
      uVar2 = uVar3;
    }
    if ((int)(short)uVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_801236a2 - 1;
      if ((int)(short)uVar1 <= (int)DAT_801236a2 + -1) {
        uVar3 = uVar1;
      }
    }
    cVar5 = '\n';
    local_14 = CONCAT22(uVar3,uVar2);
    local_18 = CONCAT22(param_2[1] - param_2[5],*param_2 - param_2[4]);
    *(uint *)(param_1 + 0x1c) =
         (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 |
         (uint)*(byte *)(param_2 + 0xd) << 8 | 0x60000000 | (uint)*(byte *)((int)param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x20) = local_18;
    *(undefined4 *)(param_1 + 0x24) = local_14;
  }
  *(char *)(param_1 + 3) = cVar5 + -1;
  return;
}




// decompiled code
// original method signature: 
// uint FUN_000ee878(int param_1,int param_2,uint param_3);
 // line 0, offset 0x000ee878
uint FUN_000ee878(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0xe1000000;
  if (param_2 != 0) {
    uVar1 = 0xe1000200;
  }
  param_3 = param_3 & 0x9ff;
  if (param_1 != 0) {
    param_3 = param_3 | 0x400;
  }
  return uVar1 | param_3;
}




// decompiled code
// original method signature: 
// uint FUN_000ee898(uint param_1,uint param_2);
 // line 0, offset 0x000ee898
uint FUN_000ee898(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((-1 < (int)(short)param_1) &&
     (uVar1 = (uint)DAT_801236a0 - 1, (int)(short)param_1 <= (int)(short)DAT_801236a0 + -1)) {
    uVar1 = param_1;
  }
  if ((int)(short)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 0x3ff;
    if ((int)(short)param_2 <= (int)(short)DAT_801236a2 + -1) goto LAB_000ee918;
    uVar2 = (uint)DAT_801236a2 - 1;
  }
  uVar2 = uVar2 & 0x3ff;
LAB_000ee918:
  return uVar2 << 10 | uVar1 & 0x3ff | 0xe3000000;
}




// decompiled code
// original method signature: 
// uint FUN_000ee930(uint param_1,uint param_2);
 // line 0, offset 0x000ee930
uint FUN_000ee930(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((-1 < (int)(short)param_1) &&
     (uVar1 = (uint)DAT_801236a0 - 1, (int)(short)param_1 <= (int)(short)DAT_801236a0 + -1)) {
    uVar1 = param_1;
  }
  if ((int)(short)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 0x3ff;
    if ((int)(short)param_2 <= (int)(short)DAT_801236a2 + -1) goto LAB_000ee9b0;
    uVar2 = (uint)DAT_801236a2 - 1;
  }
  uVar2 = uVar2 & 0x3ff;
LAB_000ee9b0:
  return uVar2 << 10 | uVar1 & 0x3ff | 0xe4000000;
}




// decompiled code
// original method signature: 
// uint FUN_000ee9c8(uint param_1,uint param_2);
 // line 0, offset 0x000ee9c8
uint FUN_000ee9c8(uint param_1,uint param_2)

{
  return (param_2 & 0x7ff) << 0xb | param_1 & 0x7ff | 0xe5000000;
}




// decompiled code
// original method signature: 
// uint FUN_000ee9e4(byte *param_1);
 // line 0, offset 0x000ee9e4
uint FUN_000ee9e4(byte *param_1)

{
  uint uVar1;
  
  if (param_1 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1[2] >> 3) << 0xf | (uint)(*param_1 >> 3) << 10 | 0xe2000000 |
            ((int)(-(int)*(short *)(param_1 + 6) & 0xffU) >> 3) << 5 |
            (int)(-(int)*(short *)(param_1 + 4) & 0xffU) >> 3;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_000f1784(void);
 // line 0, offset 0x000f1784
undefined4 FUN_000f1784(void)

{
  return DAT_80134838;
}




// decompiled code
// original method signature: 
// int FUN_000f1950(int param_1,int param_2);
 // line 0, offset 0x000f1950
int FUN_000f1950(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(param_1 + -0xe);
  puVar6 = *(undefined2 **)(param_1 + -8);
  iVar7 = (&memclass)[(uint)uVar1 & 0xf];
  if ((puVar6[1] & 0x4000) != 0) {
    FUN_000e4f04(iVar7,puVar6);
    puVar6 = *(undefined2 **)(puVar6 + 4);
    *(undefined2 **)(param_1 + -8) = puVar6;
  }
  iVar3 = param_2;
  if (param_2 < 8) {
    if (param_2 == -1) {
      iVar3 = 0x40000000;
    }
    else {
      iVar3 = param_2;
      if (-1 < param_2) {
        iVar3 = 8;
      }
    }
  }
  iVar2 = FUN_000e52e0(param_1);
  iVar2 = FUN_000e5030(iVar2,(uint)uVar1);
  iVar3 = (iVar3 + iVar2 + *(int *)(iVar7 + 0x28) + 0xf & -*(int *)(iVar7 + 0x28)) - 0x10;
  iVar5 = (int)puVar6 + (-0x10 - (param_1 + -0x10));
  if (iVar5 < iVar3) {
    param_2 = iVar5 - iVar2;
    iVar3 = iVar5;
  }
  FUN_000e62dc(param_1 + *(int *)(param_1 + -0xc),param_1 + param_2);
  *(int *)(param_1 + -0xc) = param_2;
  if (0x40 < iVar5 - iVar3) {
    puVar4 = (undefined2 *)(iVar3 + param_1 + 0x10);
    FUN_000e4f2c(puVar4,0,0,0,0,param_1 + -0x10,puVar6);
    FUN_000e4e70(iVar7,puVar4);
    *(undefined2 **)(puVar6 + 6) = puVar4;
    *(undefined2 **)(param_1 + -8) = puVar4;
  }
  return param_1;
}




// decompiled code
// original method signature: 
// uint FUN_000f1bfc(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x000f1bfc
uint FUN_000f1bfc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return (param_1 & 3) << 7 | (param_2 & 3) << 5 | (int)(param_4 & 0x100) >> 4 |
         (int)(param_3 & 0x3ff) >> 6 | (param_4 & 0x200) << 2;
}




// decompiled code
// original method signature: 
// uint FUN_000f231c(int param_1);
 // line 0, offset 0x000f231c
uint FUN_000f231c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  do {
  } while (*(int *)PTR_TMR_HRETRACE_VAL_80134a8c != *(int *)PTR_TMR_HRETRACE_VAL_80134a8c);
  uVar3 = *(int *)PTR_TMR_HRETRACE_VAL_80134a8c - Hcount & 0xffff;
  uVar2 = Vcount;
  if ((-1 < param_1) && (uVar2 = uVar3, param_1 != 1)) {
    uVar2 = DAT_80134a94;
    if (0 < param_1) {
      uVar2 = (DAT_80134a94 - 1) + param_1;
    }
    iVar1 = 0;
    if (0 < param_1) {
      iVar1 = param_1 + -1;
    }
    FUN_000f2494(uVar2,iVar1);
    uVar2 = *(uint *)PTR_GPU_REG1_80134a88;
    FUN_000f2494(Vcount + 1,1);
    if (((uVar2 & 0x400000) != 0) && (-1 < (int)(uVar2 ^ *(uint *)PTR_GPU_REG1_80134a88))) {
      do {
      } while (((uVar2 ^ *(uint *)PTR_GPU_REG1_80134a88) & 0x80000000) == 0);
    }
    DAT_80134a94 = Vcount;
    do {
      Hcount = *(int *)PTR_TMR_HRETRACE_VAL_80134a8c;
      uVar2 = uVar3;
    } while (Hcount != *(int *)PTR_TMR_HRETRACE_VAL_80134a8c);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void FUN_000f2494(int param_1,int param_2);
 // line 0, offset 0x000f2494
void FUN_000f2494(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= Vcount) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  FUN_000e80cc();
  FUN_00106654();
  FUN_00106664();
  return;
}




// decompiled code
// original method signature: 
// void FUN_000f30ac(int param_1,uint param_2,int param_3);
 // line 0, offset 0x000f30ac
void FUN_000f30ac(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  
  param_3 = param_3 + -1;
  puVar1 = (undefined *)(param_1 + param_3);
  while (-1 < param_3) {
    *puVar1 = (char)param_2;
    param_2 = param_2 >> 8;
    param_3 = param_3 + -1;
    puVar1 = puVar1 + -1;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000f30d4(undefined *param_1,uint param_2,int param_3);
 // line 0, offset 0x000f30d4
void FUN_000f30d4(undefined *param_1,uint param_2,int param_3)

{
  param_3 = param_3 + -1;
  while (-1 < param_3) {
    *param_1 = (char)param_2;
    param_2 = param_2 >> 8;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_000f30fc(int param_1,int param_2);
 // line 0, offset 0x000f30fc
void FUN_000f30fc(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 7) & 0xfd;
  }
  else {
    bVar1 = *(byte *)(param_1 + 7) | 2;
  }
  *(byte *)(param_1 + 7) = bVar1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000f3610(int param_1);
 // line 0, offset 0x000f3610
void FUN_000f3610(int param_1)

{
  *(undefined *)(param_1 + 3) = 5;
  *(undefined *)(param_1 + 7) = 0x28;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000f3650(int param_1);
 // line 0, offset 0x000f3650
void FUN_000f3650(int param_1)

{
  *(undefined *)(param_1 + 3) = 9;
  *(undefined *)(param_1 + 7) = 0x2c;
  return;
}




// decompiled code
// original method signature: 
// void FUN_000f3670(uint param_1,int *param_2,int *param_3);
 // line 0, offset 0x000f3670
void FUN_000f3670(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  
  FUN_000eadbc((int)param_1 >> 6,&local_18,&local_14);
  iVar1 = (int)((param_1 & 0x3f) * 0x6487e) >> 9;
  *param_2 = local_18 + ((local_14 >> 2) * iVar1 >> 0x15);
  *param_3 = local_14 - ((local_18 >> 2) * iVar1 >> 0x15);
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_000f43e4(byte *param_1);
 // line 0, offset 0x000f43e4
undefined4 FUN_000f43e4(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1 & 0x77;
  if (bVar1 == 0x41) {
    return 8;
  }
  if (bVar1 == 0x40) {
    return 4;
  }
  if ((bVar1 == 0x42) || (bVar1 == 0x23)) {
    return 0x10;
  }
  if (bVar1 != 0x44) {
    if (bVar1 == 0x43) {
      return 0x18;
    }
    if (bVar1 == 0x72) {
      return 8;
    }
  }
  return 1;
}




// decompiled code
// original method signature: 
// uint FUN_000f4450(int param_1,uint param_2);
 // line 0, offset 0x000f4450
uint FUN_000f4450(int param_1,uint param_2)

{
  return (param_2 & 0x3ff) << 6 | param_1 >> 4 & 0x3fU;
}




// decompiled code
// original method signature: 
// undefined4 FUN_00100710(int param_1,int param_2);
 // line 0, offset 0x00100710
undefined4 FUN_00100710(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4 + 8);
}




// decompiled code
// original method signature: 
// int FUN_00100748(int param_1,int param_2,int param_3);
 // line 0, offset 0x00100748
int FUN_00100748(int param_1,int param_2,int param_3)

{
  return param_1 + (uint)*(byte *)(param_2 + param_3) * 4;
}




// decompiled code
// original method signature: 
// int FUN_0010077c(undefined4 param_1,int param_2,int param_3,int param_4);
 // line 0, offset 0x0010077c
int FUN_0010077c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)*(char *)(param_3 + 3);
  iVar6 = 1;
  if (iVar7 < 5) {
    iVar4 = 0;
    iVar2 = param_2;
    if (0 < iVar7) {
      while( true ) {
        iVar6 = 0;
        if (0x1f < *(byte *)(iVar2 + 0xc)) break;
        bVar1 = *(byte *)(param_3 + iVar4 + 4);
        uVar5 = 1 << ((uint)*(byte *)(iVar2 + 0xc) & 0x1f);
        uVar3 = FUN_00100710(param_3,iVar4);
        if (((uVar5 & uVar3) != 0) &&
           (((bVar1 & 0xf) == 0 || ((uVar5 & *(uint *)(((uint)bVar1 & 0xf) * 4 + param_4)) != 0))))
        {
          iVar6 = 1;
        }
        iVar4 = iVar4 + 1;
        if (iVar6 == 0) {
          return 0;
        }
        iVar2 = param_2 + iVar4;
        if (iVar7 <= iVar4) {
          return iVar6;
        }
      }
    }
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}




// decompiled code
// original method signature: 
// uint FUN_00100880(short *param_1,int param_2,short *param_3);
 // line 0, offset 0x00100880
uint FUN_00100880(short *param_1,int param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  sVar2 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  param_3[1] = -1;
  *param_3 = -1;
  bVar3 = bVar1 >> 4;
  uVar6 = (uint)bVar1 & 0xf;
  if (bVar3 == 1) {
    iVar4 = *(int *)(uVar6 * 4 + param_2);
    sVar5 = (short)iVar4;
    if ((-1 < iVar4) && (**(short **)(iVar4 * 4 + gVoxBanks) != sVar2)) {
      sVar5 = -1;
    }
  }
  else {
    if (bVar3 == 0) {
      iVar4 = FUN_000eb310(sVar2);
      *param_3 = (short)iVar4;
      goto LAB_0010096c;
    }
    if (bVar3 != 2) goto LAB_0010096c;
    iVar4 = FUN_000eb310(sVar2);
    sVar5 = (short)iVar4;
    puVar7 = (undefined4 *)(uVar6 * 4 + param_2);
    iVar4 = func_0x000eb37c(iVar4,*puVar7);
    if (iVar4 == 0) {
      sVar5 = -1;
    }
    else {
      param_3[1] = *(short *)puVar7;
    }
  }
  *param_3 = sVar5;
LAB_0010096c:
  return (uint)~(int)*param_3 >> 0x1f;
}




// decompiled code
// original method signature: 
// int FUN_00100994(int param_1);
 // line 0, offset 0x00100994
int FUN_00100994(int param_1)

{
  return param_1 + 8 + (uint)*(byte *)(param_1 + 3) * (((uint)*(byte *)(param_1 + 2) & 0xf) + 2);
}




// decompiled code
// original method signature: 
// uint FUN_00100a1c(int param_1,int param_2);
 // line 0, offset 0x00100a1c
uint FUN_00100a1c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = param_2 + 7;
  }
  iVar1 = FUN_00100994(param_1);
  return (uint)*(byte *)(iVar1 + (iVar2 >> 3)) & 1 << (param_2 + (iVar2 >> 3) * -8 & 0x1fU);
}




// decompiled code
// original method signature: 
// uint FUN_00100a70(int param_1,int param_2,int param_3);
 // line 0, offset 0x00100a70
uint FUN_00100a70(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((int)*(short *)(param_1 + 2) < (int)(uint)*(ushort *)(param_2 + 6)) {
    uVar1 = FUN_00100a1c(param_2,param_3 + (uint)*(byte *)(param_2 + 3) *
                                           (int)*(short *)(param_1 + 2));
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint FUN_00100ac0(int param_1,int param_2,int param_3);
 // line 0, offset 0x00100ac0
uint FUN_00100ac0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((int)(uint)*(byte *)(param_2 + 3) < param_3) {
    uVar1 = 0;
  }
  else {
    if (*(short *)(param_1 + 2) != -1) {
      uVar1 = FUN_00100a70(param_1,param_2,param_3);
    }
    if ((*(byte *)(param_2 + 2) & 0xf0) != 0) {
      uVar1 = FUN_00100a1c(param_2,param_3 + 8);
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// int FUN_00100b4c(short *param_1,int param_2,int param_3,int param_4);
 // line 0, offset 0x00100b4c
int FUN_00100b4c(short *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int aiStack56 [4];
  
  uVar5 = 0;
  sVar2 = *param_1;
  iVar8 = *(int *)((int)sVar2 * 4 + gVoxBanks);
  bVar1 = *(byte *)(iVar8 + 3);
  iVar7 = (int)param_1[3];
  iVar6 = 0;
  if (bVar1 != 0) {
    do {
      iVar3 = FUN_0010b5d4(iVar8,uVar5,aiStack56);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_0010077c((int)sVar2,(int)aiStack56,param_3,param_4), iVar3 != 0)) {
        uVar4 = FUN_00100ac0((int)param_1,iVar8,uVar5);
        if (uVar4 != 0) {
          (&ispch_gPickSamples)[iVar7] = (char)uVar5;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 1;
          if (param_2 <= iVar6) {
            return iVar6;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(uint)bVar1);
  }
  return iVar6;
}




// decompiled code
// original method signature: 
// void FUN_00106654(void);
 // line 0, offset 0x00106654
void FUN_00106654(void)

{
                    /* WARNING: Treating indirect jump as call */
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void FUN_00106664(void);
 // line 0, offset 0x00106664
void FUN_00106664(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xc0)();
  return;
}




// decompiled code
// original method signature: 
// void FUN_0010b5ac(undefined4 *param_1);
 // line 0, offset 0x0010b5ac
void FUN_0010b5ac(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined *)(param_1 + 3) = 0xff;
  *(undefined *)((int)param_1 + 0xd) = 0xff;
  *(undefined *)((int)param_1 + 0xe) = 0xff;
  *(undefined *)((int)param_1 + 0xf) = 0xff;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_0010b5d4(int param_1,uint param_2,int *param_3);
 // line 0, offset 0x0010b5d4
undefined4 FUN_0010b5d4(int param_1,uint param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  uVar11 = 0;
  bVar2 = false;
  FUN_0010b5ac(param_3);
  iVar10 = 0;
  if ((int)param_2 < (int)(uint)*(byte *)(param_1 + 3)) {
    bVar1 = *(byte *)(param_1 + 2);
    uVar6 = (uint)bVar1 & 0xf;
    iVar9 = uVar6 + 2;
    iVar4 = 0;
    param_3[2] = uVar6;
    pbVar7 = (byte *)(param_1 + 8 + param_2 * iVar9);
    piVar3 = param_3;
    if ((bVar1 & 0xf) != 0) {
      do {
        iVar8 = iVar4 + 2;
        iVar4 = iVar4 + 1;
        *(byte *)(piVar3 + 3) = pbVar7[iVar8];
        piVar3 = (int *)((int)param_3 + iVar4);
      } while (iVar4 < (int)uVar6);
    }
    if ((*pbVar7 & 0x80) != 0) {
      param_2 = (uint)pbVar7[1];
      pbVar7 = (byte *)(param_1 + 8 + param_2 * iVar9);
    }
    pbVar5 = pbVar7 + iVar9;
    iVar4 = param_2 + 1;
    iVar8 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
    param_3[1] = iVar8 * 0x100;
    do {
      if (iVar4 < (int)(uint)*(byte *)(param_1 + 3)) {
        if ((*pbVar5 & 0x80) == 0) {
          bVar2 = true;
          iVar10 = ((uint)*pbVar5 * 0x100 + (uint)pbVar5[1]) * 0x100;
        }
        else {
          pbVar5 = pbVar5 + iVar9;
          iVar4 = iVar4 + 1;
        }
      }
      else {
        bVar2 = true;
        iVar10 = (uint)*(ushort *)(param_1 + 4) << 8;
      }
    } while (!bVar2);
    *param_3 = iVar10 + iVar8 * -0x100;
    uVar11 = 1;
  }
  return uVar11;
}




// decompiled code
// original method signature: 
// void __main(void);
 // line 0, offset 0x800e4024
void __main(void)

{
  return;
}




// decompiled code
// original method signature: 
// void entry(void);
 // line 0, offset 0x800e402c
/* WARNING: Control flow encountered bad instruction data */

void entry(void)

{
  uchar **ppuVar1;
  undefined *puVar2;
  undefined4 unaff_retaddr;
  
  ppuVar1 = &AIState_Purgatory_numTrafficCarsInPurgatory;
  do {
    *ppuVar1 = (uchar *)0x0;
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &endofcode);
  puVar2 = (undefined *)((uint)PTR_DAT_800e40dc | 0x80000000);
  DAT_8013de5c = unaff_retaddr;
  InitHeap(*puVar2);
  main(*puVar2);
  trap(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




// decompiled code
// original method signature: 
// void * memset(void *__s,int __c,size_t __n);
 // line 0, offset 0x800e4318
void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)0xa0)();
  return pvVar1;
}




// decompiled code
// original method signature: 
// uint fixedmult(int param_1,int param_2);
 // line 0, offset 0x800e4328
uint fixedmult(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (int)((longlong)param_1 * (longlong)param_2) + 0x8000;
  return uVar1 >> 0x10 |
         ((int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) + (uint)(uVar1 < 0x8000)
         ) * 0x10000;
}




// decompiled code
// original method signature: 
// void transpose(undefined4 *param_1,undefined4 *param_2);
 // line 0, offset 0x800e4358
void transpose(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == param_2) {
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    param_2[1] = param_2[3];
    param_2[2] = param_2[6];
    uVar3 = param_2[7];
    param_2[3] = uVar2;
    param_2[6] = uVar1;
    param_2[7] = param_2[5];
    param_2[5] = uVar3;
    return;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[3];
  param_2[2] = param_1[6];
  param_2[3] = param_1[1];
  param_2[4] = param_1[4];
  param_2[5] = param_1[7];
  param_2[6] = param_1[2];
  param_2[7] = param_1[5];
  param_2[8] = param_1[8];
  return;
}




// decompiled code
// original method signature: 
// int fixeddiv(uint param_1,uint param_2);
 // line 0, offset 0x800e4404
int fixeddiv(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = (int)param_1 < 0;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  bVar2 = (int)param_2 < 0;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar6 = param_1 % param_2;
  uVar4 = (uint)(bVar1 != bVar2);
  uVar5 = 0x10000;
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = param_1 / param_2 << 0x10;
  if ((int)uVar6 < 0) {
    param_2 = param_2 >> 1;
    goto LAB_800e4478;
  }
  uVar6 = uVar6 << 1;
  do {
    bVar1 = uVar6 < param_2;
    while (-1 < (int)uVar6) {
      uVar5 = uVar5 >> 1;
      if (!bVar1) {
        uVar3 = uVar3 | uVar5;
        uVar6 = uVar6 - param_2;
      }
      uVar6 = uVar6 << 1;
      if (uVar5 == 1) {
        return (uVar3 ^ -uVar4) + uVar4;
      }
LAB_800e4478:
      bVar1 = uVar6 < param_2;
    }
    uVar5 = uVar5 >> 1;
    if (!bVar1) {
      uVar3 = uVar3 | uVar5;
      uVar6 = uVar6 - param_2;
    }
    param_2 = param_2 >> 1;
    if (uVar5 == 1) {
      return (uVar3 ^ -uVar4) + uVar4;
    }
  } while( true );
}




// decompiled code
// original method signature: 
// void SetSp(void);
 // line 0, offset 0x800e44ac
void SetSp(void)

{
  return;
}




// decompiled code
// original method signature: 
// int sprintf(char *__s,char *__format,...);
 // line 0, offset 0x800e44bc
/* WARNING: Could not reconcile some variable overlaps */

int sprintf(char *__s,char *__format,...)

{
  char *__dest;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *in_a2;
  undefined4 in_a3;
  int *__n;
  int *__s_00;
  int iVar6;
  char *local_res4;
  int *local_res8;
  undefined4 local_resc;
  undefined local_41;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  int **local_30;
  
  local_30 = &local_res8;
  cVar4 = *__format;
  iVar6 = 0;
  local_res4 = __format;
  local_res8 = in_a2;
  local_resc = in_a3;
joined_r0x800e4508:
  if (cVar4 != '\0') {
    local_40 = DAT_8012348c;
    if (cVar4 == '%') {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                __dest = local_res4 + 1;
                iVar5 = (int)local_res4[1];
                if (iVar5 != 0x2d) break;
                local_40 = local_40 | 1;
                local_res4 = __dest;
              }
              if (iVar5 != 0x2b) break;
              local_40 = local_40 | 2;
              local_res4 = __dest;
            }
            if (iVar5 != 0x20) break;
            local_40._0_2_ = CONCAT11(local_res4[1],(undefined)local_40);
            local_40 = local_40 & 0xffff0000 | (uint)(ushort)local_40;
            local_res4 = __dest;
          }
          if (iVar5 != 0x23) break;
          local_40 = local_40 | 4;
          local_res4 = __dest;
        }
        if (iVar5 != 0x30) break;
        local_40 = local_40 | 8;
        local_res4 = __dest;
      }
      local_3c = DAT_80123490;
      if (iVar5 == 0x2a) {
        local_3c = *local_30;
        local_30 = local_30 + 1;
        if ((int)local_3c < 0) {
          local_3c = (int *)-(int)local_3c;
          local_40 = local_40 | 1;
        }
        iVar5 = (int)local_res4[2];
        local_res4 = local_res4 + 2;
      }
      else {
        while (local_res4 = __dest, iVar5 - 0x30U < 10) {
          local_3c = (int *)((int)local_3c * 10 + -0x30 + iVar5);
          iVar5 = (int)local_res4[1];
          __dest = local_res4 + 1;
        }
      }
      local_38 = DAT_80123494;
      if (iVar5 == 0x2e) {
        iVar5 = (int)local_res4[1];
        local_38 = DAT_80123494;
        __dest = local_res4;
        if (iVar5 == 0x2a) {
          local_38 = *local_30;
          local_30 = local_30 + 1;
          iVar5 = (int)local_res4[2];
          local_res4 = local_res4 + 2;
        }
        else {
          while (local_res4 = __dest + 1, iVar5 - 0x30U < 10) {
            local_38 = (int *)((int)local_38 * 10 + -0x30 + iVar5);
            iVar5 = (int)__dest[2];
            __dest = local_res4;
          }
        }
        if (-1 < (int)local_38) {
          local_40 = local_40 | 0x10;
        }
      }
      __s_00 = &local_40;
      if ((local_40 & 1) != 0) {
        local_40 = local_40 & 0xfffffff7;
      }
      do {
        cVar4 = (char)iVar5;
        switch(iVar5) {
        case 0x4c:
          local_40 = local_40 | 0x80;
          break;
        default:
          goto switchD_800e4778_caseD_4d;
        case 99:
          __s_00 = (int *)&local_41;
          __n = (int *)&DAT_00000001;
          local_41 = *(undefined *)local_30;
          local_30 = local_30 + 1;
          goto LAB_800e4c5c;
        case 100:
        case 0x69:
          piVar3 = *local_30;
          if ((local_40 >> 5 & 1) != 0) {
            piVar3 = (int *)(int)(short)piVar3;
          }
          if ((int)piVar3 < 0) {
            piVar3 = (int *)-(int)piVar3;
            local_40._0_2_ = CONCAT11(0x2d,(undefined)local_40);
            local_40 = local_40 & 0xffff0000 | (uint)(ushort)local_40;
          }
          else {
            if ((local_40 >> 1 & 1) != 0) {
              local_40._0_2_ = CONCAT11(0x2b,(undefined)local_40);
              local_40 = local_40 & 0xffff0000 | (uint)(ushort)local_40;
            }
          }
          goto LAB_800e4850;
        case 0x68:
          local_40 = local_40 | 0x20;
          break;
        case 0x6c:
          local_40 = local_40 | 0x40;
          break;
        case 0x6e:
          __s_00 = *local_30;
          local_30 = local_30 + 1;
          if ((local_40 >> 5 & 1) == 0) {
            *__s_00 = iVar6;
          }
          else {
            *(short *)__s_00 = (short)iVar6;
          }
          goto LAB_800e4ce8;
        case 0x6f:
          piVar3 = *local_30;
          local_30 = local_30 + 1;
          if ((local_40 >> 5 & 1) != 0) {
            piVar3 = (int *)((uint)piVar3 & 0xffff);
          }
          if ((local_40 >> 4 & 1) == 0) {
            if ((local_40 >> 3 & 1) != 0) {
              local_38 = local_3c;
            }
            if ((int)local_38 < 1) {
              local_38 = (int *)&DAT_00000001;
            }
          }
          __n = (int *)0x0;
          while (piVar3 != (int *)0x0) {
            __s_00 = (int *)((int)__s_00 + -1);
            *(byte *)__s_00 = ((byte)piVar3 & 7) + 0x30;
            piVar3 = (int *)((uint)piVar3 >> 3);
            __n = (int *)((int)__n + 1);
          }
          if ((((local_40 >> 2 & 1) != 0) && (__n != (int *)0x0)) && (*(byte *)__s_00 != 0x30)) {
            __s_00 = (int *)((int)__s_00 + -1);
            *(byte *)__s_00 = 0x30;
            __n = (int *)((int)__n + 1);
          }
          while ((int)__n < (int)local_38) {
            __s_00 = (int *)((int)__s_00 + -1);
            *(byte *)__s_00 = 0x30;
            __n = (int *)((int)__n + 1);
          }
          goto LAB_800e4c5c;
        case 0x70:
          local_38 = (int *)0x8;
          local_40 = local_40 | 0x50;
        case 0x58:
          __dest = s_0123456789ABCDEF_80056b38;
          goto LAB_800e4a64;
        case 0x73:
          __s_00 = *local_30;
          local_30 = local_30 + 1;
          if ((local_40 >> 2 & 1) == 0) {
            if ((local_40 >> 4 & 1) == 0) {
              __n = (int *)strlen((char *)__s_00);
            }
            else {
              pvVar2 = memchr(__s_00,0,(size_t)local_38);
              __n = (int *)((int)pvVar2 - (int)__s_00);
              if (pvVar2 == (void *)0x0) {
                __n = local_38;
              }
            }
          }
          else {
            __n = (int *)(uint)*(byte *)__s_00;
            __s_00 = (int *)((int)__s_00 + 1);
            if (((local_40 >> 4 & 1) != 0) && ((int)local_38 < (int)__n)) {
              __n = local_38;
            }
          }
          goto LAB_800e4c5c;
        case 0x75:
          piVar3 = *local_30;
          if ((local_40 >> 5 & 1) != 0) {
            piVar3 = (int *)((uint)piVar3 & 0xffff);
          }
          local_40 = local_40 & 0xffff00ff;
LAB_800e4850:
          local_30 = local_30 + 1;
          if ((local_40 >> 4 & 1) == 0) {
            if (((local_40 >> 3 & 1) != 0) && (local_38 = local_3c, local_40._1_1_ != 0)) {
              local_38 = (int *)((int)local_3c + -1);
            }
            if ((int)local_38 < 1) {
              local_38 = (int *)&DAT_00000001;
            }
          }
          __n = (int *)0x0;
          while (piVar3 != (int *)0x0) {
            __s_00 = (int *)((int)__s_00 + -1);
            __n = (int *)((int)__n + 1);
            *(byte *)__s_00 = (char)piVar3 + (char)(int *)((uint)piVar3 / 10) * -10 + 0x30;
            piVar3 = (int *)((uint)piVar3 / 10);
          }
          while ((int)__n < (int)local_38) {
            __s_00 = (int *)((int)__s_00 + -1);
            *(byte *)__s_00 = 0x30;
            __n = (int *)((int)__n + 1);
          }
          if (local_40._1_1_ != 0) {
            __s_00 = (int *)((int)__s_00 + -1);
            *(byte *)__s_00 = local_40._1_1_;
            __n = (int *)((int)__n + 1);
          }
          goto LAB_800e4c5c;
        case 0x78:
          __dest = s_0123456789abcdef_80056b4c;
LAB_800e4a64:
          piVar3 = *local_30;
          local_30 = local_30 + 1;
          if ((local_40 >> 5 & 1) != 0) {
            piVar3 = (int *)((uint)piVar3 & 0xffff);
          }
          if ((local_40 >> 4 & 1) == 0) {
            if (((local_40 >> 3 & 1) != 0) && (local_38 = local_3c, (local_40 >> 2 & 1) != 0)) {
              local_38 = (int *)((int)local_3c + -2);
            }
            if ((int)local_38 < 1) {
              local_38 = (int *)&DAT_00000001;
            }
          }
          __n = (int *)0x0;
          while (piVar3 != (int *)0x0) {
            __s_00 = (int *)((int)__s_00 + -1);
            uVar1 = (uint)piVar3 & 0xf;
            piVar3 = (int *)((uint)piVar3 >> 4);
            __n = (int *)((int)__n + 1);
            *(char *)__s_00 = __dest[uVar1];
          }
          while ((int)__n < (int)local_38) {
            __s_00 = (int *)((int)__s_00 + -1);
            *(byte *)__s_00 = 0x30;
            __n = (int *)((int)__n + 1);
          }
          if ((local_40 >> 2 & 1) != 0) {
            *(char *)((int)__s_00 + -1) = cVar4;
            __s_00 = (int *)((int)__s_00 + -2);
            *(byte *)__s_00 = 0x30;
            __n = (int *)((int)__n + 2);
          }
LAB_800e4c5c:
          __dest = __s + iVar6;
          if (((int)__n < (int)local_3c) && ((local_40 & 1) == 0)) {
            do {
              __s[iVar6] = ' ';
              local_3c = (int *)((int)local_3c + -1);
              iVar6 = iVar6 + 1;
            } while ((int)__n < (int)local_3c);
            __dest = __s + iVar6;
          }
          memmove(__dest,__s_00,(size_t)__n);
          iVar6 = iVar6 + (int)__n;
          while ((int)__n < (int)local_3c) {
            __s[iVar6] = ' ';
            __n = (int *)((int)__n + 1);
            iVar6 = iVar6 + 1;
          }
          goto LAB_800e4ce8;
        }
        iVar5 = (int)local_res4[1];
        local_res4 = local_res4 + 1;
      } while( true );
    }
    goto LAB_800e4c50;
  }
LAB_800e4d08:
  __s[iVar6] = '\0';
  return iVar6;
switchD_800e4778_caseD_4d:
  if (iVar5 != 0x25) goto LAB_800e4d08;
LAB_800e4c50:
  __s[iVar6] = cVar4;
  iVar6 = iVar6 + 1;
LAB_800e4ce8:
  cVar4 = local_res4[1];
  local_res4 = local_res4 + 1;
  goto joined_r0x800e4508;
}




// decompiled code
// original method signature: 
// short * FREE_find(int param_1,int param_2,int param_3);
 // line 0, offset 0x800e4d4c
short * FREE_find(int param_1,int param_2,int param_3)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1 + 0x10);
  if (param_3 == 0) {
    do {
      psVar1 = *(short **)(psVar1 + 8);
    } while (*(int *)(psVar1 + 2) < param_2);
  }
  else {
    do {
      psVar1 = *(short **)(psVar1 + 10);
    } while (*(int *)(psVar1 + 2) < param_2);
  }
  if (*psVar1 == 0x4253) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}




// decompiled code
// original method signature: 
// short * FREE_findlargest(int param_1,int param_2,int param_3);
 // line 0, offset 0x800e4db0
short * FREE_findlargest(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  param_2 = param_2 + -1;
  psVar3 = (short *)(param_1 + 0x10);
  if (param_2 < 0) {
    param_2 = 0;
  }
  psVar2 = (short *)0x0;
  if (param_3 == 0) {
    psVar3 = *(short **)(param_1 + 0x20);
    psVar2 = (short *)0x0;
    if (*(int *)(psVar3 + 2) <= param_2) goto LAB_800e4e00;
    sVar1 = *psVar3;
    psVar2 = (short *)0x0;
    while (sVar1 != 0x4253) {
      param_2 = *(int *)(psVar3 + 2);
      psVar2 = psVar3;
LAB_800e4e00:
      do {
        psVar3 = *(short **)(psVar3 + 8);
      } while (*(int *)(psVar3 + 2) <= param_2);
      sVar1 = *psVar3;
    }
  }
  else {
    while( true ) {
      do {
        psVar3 = *(short **)(psVar3 + 10);
      } while (*(int *)(psVar3 + 2) <= param_2);
      if (*psVar3 == 0x4253) break;
      param_2 = *(int *)(psVar3 + 2);
      psVar2 = psVar3;
    }
  }
  return psVar2;
}




// decompiled code
// original method signature: 
// void FREE_add(int param_1,undefined2 *param_2);
 // line 0, offset 0x800e4e70
void FREE_add(int param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0x10);
  puVar2 = puVar1;
  if ((undefined2 *)
      (*(int *)(param_1 + 0x20) + ((uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) >> 1)
      ) < param_2) {
    do {
      puVar2 = *(undefined2 **)(puVar2 + 10);
    } while (param_2 < puVar2);
    puVar1 = *(undefined2 **)(puVar2 + 8);
    *(undefined2 **)(param_2 + 8) = puVar1;
  }
  else {
    do {
      puVar1 = *(undefined2 **)(puVar1 + 8);
    } while (puVar1 < param_2);
    puVar2 = *(undefined2 **)(puVar1 + 10);
    *(undefined2 **)(param_2 + 8) = puVar1;
  }
  *(undefined2 **)(param_2 + 10) = puVar2;
  *(int *)(param_2 + 2) = (*(int *)(param_2 + 4) - (int)param_2) + -0x10;
  *(undefined2 **)(puVar2 + 8) = param_2;
  *(undefined2 **)(puVar1 + 10) = param_2;
  *param_2 = 0x4246;
  param_2[1] = param_2[1] | 0x4000;
  return;
}




// decompiled code
// original method signature: 
// void FREE_remove(undefined4 param_1,undefined2 *param_2);
 // line 0, offset 0x800e4f04
void FREE_remove(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 10);
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(iVar2 + 0x10) = iVar1;
  *(int *)(iVar1 + 0x14) = iVar2;
  *param_2 = 0;
  param_2[1] = param_2[1] & 0xbfff;
  return;
}




// decompiled code
// original method signature: 
// char * initmemblock(undefined2 *param_1,char *param_2,int param_3,int param_4,ushort param_5,undefined4 param_6,undefined4 param_7);
 // line 0, offset 0x800e4f2c
char * initmemblock(undefined2 *param_1,char *param_2,int param_3,int param_4,ushort param_5,
                   undefined4 param_6,undefined4 param_7)

{
  size_t sVar1;
  int iVar2;
  char *__dest;
  
  iVar2 = (int)param_1 + param_3 + 0x10;
  *param_1 = 0x424d;
  *(int *)(param_1 + 2) = param_3;
  param_1[1] = param_5;
  *(undefined4 *)(param_1 + 4) = param_7;
  *(undefined4 *)(param_1 + 6) = param_6;
  if ((param_5 & 0x200) != 0) {
    putm(iVar2,0x42454e44,4);
  }
  if ((param_5 & 0x800) != 0) {
    puti((undefined *)(iVar2 + 0xc),0,4);
  }
  __dest = (char *)(iVar2 + param_4);
  if (param_2 != (char *)0x0) {
    if ((param_5 & 0x100) == 0) {
      return __dest + -(int)param_1;
    }
    strcpy(__dest,param_2);
    sVar1 = strlen(__dest);
    __dest = __dest + sVar1 + 1;
  }
  return __dest + -(int)param_1;
}




// decompiled code
// original method signature: 
// undefined4 MEM_infosize(uint param_1);
 // line 0, offset 0x800e5008
undefined4 MEM_infosize(uint param_1)

{
  return *(undefined4 *)((&memclass)[param_1 & 0xf] + 0x30);
}




// decompiled code
// original method signature: 
// int MEM_tailsize(char *param_1,uint param_2);
 // line 0, offset 0x800e5030
int MEM_tailsize(char *param_1,uint param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (&memclass)[param_2 & 0xf];
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && ((*(uint *)(iVar3 + 0x34) & 0x100) != 0)) {
    sVar1 = strlen(param_1);
    iVar2 = sVar1 + 1;
  }
  return *(int *)(iVar3 + 0x30) + iVar2;
}




// decompiled code
// original method signature: 
// undefined4 creatememclass(uint param_1,char *param_2,undefined2 *param_3,int param_4,undefined4 param_5,int param_6,int param_7,int param_8,undefined4 param_9,int param_10,int param_11,undefined4 param_12);
 // line 0, offset 0x800e5094
undefined4
creatememclass(uint param_1,char *param_2,undefined2 *param_3,int param_4,undefined4 param_5,
              int param_6,int param_7,int param_8,undefined4 param_9,int param_10,int param_11,
              undefined4 param_12)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *__dest;
  uint uVar4;
  undefined2 *puVar5;
  char acStack296 [256];
  
  uVar4 = param_1;
  if (param_8 != 0) {
    uVar4 = param_1 | 0x200;
  }
  if (param_10 != 0) {
    uVar4 = uVar4 | 0x100;
  }
  uVar2 = (int)param_3 + param_6 + 0x6f + param_7 & -param_6;
  puVar5 = (undefined2 *)(uVar2 - 0x10);
  puVar3 = (undefined2 *)((int)param_3 + (param_4 - (param_7 + 0x20)));
  __dest = param_3 + 8;
  sprintf(acStack296,(char *)&PTR_DAT_8013dc20,param_2);
  uVar1 = (ushort)uVar4;
  initmemblock(param_3,acStack296,0x40,param_7,uVar1 | 0x8000,0,puVar5);
  initmemblock(puVar5,(char *)0x0,(int)puVar3 + (-0x10 - (int)puVar5),param_7,uVar1,param_3,puVar3);
  sprintf(acStack296,(char *)&PTR_DAT_8013dc28,param_2);
  initmemblock(puVar3,acStack296,0,param_7,uVar1 | 0x8010,puVar5,0);
  *(undefined2 **)(&memclass + (param_1 & 0xf)) = __dest;
  blockclear((undefined *)__dest,0x40);
  strcpy((char *)__dest,param_2);
  param_3[0x10] = 0x4253;
  *(undefined2 **)(param_3 + 0xc) = param_3;
  *(undefined2 **)(param_3 + 0xe) = puVar3;
  *(undefined2 **)(param_3 + 0x18) = param_3 + 0x10;
  *(undefined2 **)(param_3 + 0x1a) = param_3 + 0x10;
  *(undefined4 *)(param_3 + 0x12) = 0x7fffffff;
  *(int *)(param_3 + 0x1e) = param_6;
  *(int *)(param_3 + 0x20) = param_7;
  *(uint *)(param_3 + 0x22) = uVar4;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x1c) = param_5;
  *(undefined4 *)(param_3 + 0x26) = param_12;
  FREE_add((int)__dest,puVar5);
  if (param_11 != 0) {
    puVar3 = allocmutex();
    *(undefined2 **)(param_3 + 0x24) = puVar3;
  }
  return *(undefined4 *)(uVar2 - 0xc);
}




// decompiled code
// original method signature: 
// undefined4 largestunused(void);
 // line 0, offset 0x800e5284
undefined4 largestunused(void)

{
  short *psVar1;
  undefined4 uVar2;
  
  psVar1 = FREE_findlargest((&memclass)[(uint)mb_default & 0xf],0,0);
  uVar2 = 0;
  if (psVar1 != (short *)0x0) {
    uVar2 = *(undefined4 *)(psVar1 + 2);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 getblocksize(int param_1);
 // line 0, offset 0x800e52d4
undefined4 getblocksize(int param_1)

{
  return *(undefined4 *)(param_1 + -0xc);
}




// decompiled code
// original method signature: 
// int getblockname(int param_1);
 // line 0, offset 0x800e52e0
int getblockname(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(ushort *)(param_1 + -0xe) & 0x100) != 0) {
    iVar1 = MEM_infosize((uint)*(ushort *)(param_1 + -0xe));
    iVar1 = param_1 + *(int *)(param_1 + -0xc) + iVar1;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// short * reservememadr(char *param_1,int param_2,uint param_3);
 // line 0, offset 0x800e533c
short * reservememadr(char *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  
  psVar10 = (short *)0x0;
  iVar8 = (&memclass)[param_3 & 0xf];
  iVar5 = param_2;
  if ((7 < param_2) || (iVar5 = 8, -1 < param_2)) {
    iVar1 = MEM_tailsize(param_1,param_3);
    uVar9 = *(int *)(iVar8 + 0x28) - 1;
    uVar2 = iVar5 + iVar1 + *(int *)(iVar8 + 0x28) + 0xf & ~uVar9;
    iVar5 = uVar2 - 0x10;
    if ((param_3 & 0x20) == 0) {
      psVar3 = FREE_find(iVar8,iVar5,param_3 & 0x10);
    }
    else {
      psVar3 = FREE_findlargest(iVar8,iVar5,param_3 & 0x10);
    }
    if (psVar3 != (short *)0x0) {
      FREE_remove(iVar8,psVar3);
      if (0x40 < *(int *)(psVar3 + 2) - iVar5) {
        if ((param_3 & 0x10) == 0) {
          puVar6 = (undefined2 *)((int)psVar3 + uVar2);
          *(undefined2 **)(*(int *)(psVar3 + 4) + 0xc) = puVar6;
          initmemblock(puVar6,(char *)0x0,0,0,0,psVar3,*(undefined4 *)(psVar3 + 4));
          FREE_add(iVar8,puVar6);
          *(undefined2 **)(psVar3 + 4) = puVar6;
        }
        else {
          psVar10 = (short *)((int)psVar3 + (*(int *)(psVar3 + 2) - iVar5 & ~uVar9));
          *(short **)(*(int *)(psVar3 + 4) + 0xc) = psVar10;
          uVar4 = *(undefined4 *)(psVar3 + 4);
          *(short **)(psVar10 + 6) = psVar3;
          *(undefined4 *)(psVar10 + 4) = uVar4;
          initmemblock(psVar3,(char *)0x0,0,0,0,*(undefined4 *)(psVar3 + 6),psVar10);
          FREE_add(iVar8,psVar3);
          psVar3 = psVar10;
        }
      }
      uVar7 = (ushort)param_3 | (ushort)*(undefined4 *)(iVar8 + 0x34) & 0x700;
      if (param_1 == (char *)0x0) {
        uVar7 = uVar7 & 0xfeff;
      }
      psVar10 = psVar3 + 8;
      initmemblock(psVar3,param_1,param_2,*(int *)(iVar8 + 0x30),uVar7,*(undefined4 *)(psVar3 + 6),
                   *(undefined4 *)(psVar3 + 4));
    }
  }
  return psVar10;
}




// decompiled code
// original method signature: 
// undefined4 purgememadr(int param_1);
 // line 0, offset 0x800e5540
undefined4 purgememadr(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  if (param_1 != 0) {
    puVar2 = *(undefined2 **)(param_1 + -8);
    puVar4 = *(undefined2 **)(param_1 + -4);
    iVar6 = (&memclass)[(uint)*(ushort *)(param_1 + -0xe) & 0xf];
    puVar1 = (undefined2 *)(param_1 + -0x10);
    puVar5 = puVar4;
    if ((puVar4[1] & 0x4000) != 0) {
      FREE_remove(iVar6,puVar4);
      puVar5 = *(undefined2 **)(puVar4 + 6);
      *(undefined2 **)(puVar4 + 4) = puVar2;
      *(undefined2 **)(puVar5 + 4) = puVar4;
      *(undefined2 **)(puVar2 + 6) = puVar4;
      puVar1 = puVar4;
    }
    if ((puVar2[1] & 0x4000) != 0) {
      FREE_remove(iVar6,puVar2);
      iVar3 = *(int *)(puVar2 + 4);
      *(undefined2 **)(puVar1 + 6) = puVar5;
      *(int *)(puVar1 + 4) = iVar3;
      *(undefined2 **)(iVar3 + 0xc) = puVar1;
    }
    FREE_add(iVar6,puVar1);
  }
  return 1;
}




// decompiled code
// original method signature: 
// uint filesizeatomic(uint param_1,char **param_2);
 // line 0, offset 0x800e5608
uint filesizeatomic(uint param_1,char **param_2)

{
  uint uVar1;
  uint local_10 [2];
  
  uVar1 = FILE_opensync(*param_2,1,param_1,local_10);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FILE_sizesync(local_10[0],param_1 - 1);
    FILE_closesync(local_10[0],param_1 - 1);
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void filesize(undefined4 param_1);
 // line 0, offset 0x800e566c
void filesize(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_18 [3];
  uchar *local_c;
  
  local_c = abortflag;
  local_18[0] = param_1;
  uVar1 = asyncidle();
  FILE_atomic(filesizeatomic,uVar1,100,local_18);
  return;
}




// decompiled code
// original method signature: 
// short * loadfileadratomic(uint param_1,char **param_2);
 // line 0, offset 0x800e56b0
short * loadfileadratomic(uint param_1,char **param_2)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  uint local_20 [2];
  
  uVar1 = FILE_opensync(*param_2,1,param_1,local_20);
  param_1 = param_1 - 1;
  if (uVar1 != 0) {
    uVar1 = FILE_sizesync(local_20[0],param_1);
    psVar2 = reservememadr(*param_2,uVar1,(uint)param_2[2]);
    if (psVar2 != (short *)0x0) {
      FILE_readsync(local_20[0],0,psVar2,uVar1,param_1);
      FILE_closesync(local_20[0],param_1);
      if (loadfilecallback == (uchar *)0x0) {
        return psVar2;
      }
      psVar3 = (short *)(*(code *)loadfilecallback)(psVar2,*param_2,param_2[2]);
      if (psVar3 != (short *)0x0) {
        return psVar3;
      }
      purgememadr((int)psVar2);
      return (short *)0x0;
    }
    FILE_closesync(local_20[0],param_1);
  }
  return (short *)0x0;
}




// decompiled code
// original method signature: 
// void loadfileadrz(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800e57a8
void loadfileadrz(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_18[0] = param_1;
  local_10 = param_2;
  uVar1 = asyncidle();
  FILE_atomic(loadfileadratomic,uVar1,100,local_18);
  return;
}




// decompiled code
// original method signature: 
// void loadfileadr(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800e57e8
void loadfileadr(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18 [2];
  undefined4 local_10;
  uchar *local_c;
  
  local_c = abortflag;
  local_18[0] = param_1;
  local_10 = param_2;
  uVar1 = asyncidle();
  FILE_atomic(loadfileadratomic,uVar1,100,local_18);
  return;
}




// decompiled code
// original method signature: 
// char * loadfileatadratomic(uint param_1,char **param_2);
 // line 0, offset 0x800e5830
char * loadfileatadratomic(uint param_1,char **param_2)

{
  uint uVar1;
  char *pcVar2;
  uint local_18 [2];
  
  uVar1 = FILE_opensync(*param_2,1,param_1,local_18);
  if (uVar1 == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    FILE_readsync(local_18[0],0,param_2[1],0x7fffffff,param_1 - 1);
    FILE_closesync(local_18[0],param_1 - 1);
    pcVar2 = param_2[1];
  }
  return pcVar2;
}




// decompiled code
// original method signature: 
// void loadfileatadrz(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800e58b0
void loadfileatadrz(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_c = 0;
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = asyncidle();
  FILE_atomic(loadfileatadratomic,uVar1,100,&local_18);
  return;
}




// decompiled code
// original method signature: 
// void loadfileatadr(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800e58f0
void loadfileatadr(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  uchar *local_c;
  
  local_c = abortflag;
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = asyncidle();
  FILE_atomic(loadfileatadratomic,uVar1,100,&local_18);
  return;
}




// decompiled code
// original method signature: 
// undefined4 * loadbigfileheaderatomic(uint param_1,char **param_2);
 // line 0, offset 0x800e5938
undefined4 * loadbigfileheaderatomic(uint param_1,char **param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_20 [2];
  
  uVar1 = FILE_opensync(*param_2,1,param_1,local_20);
  if (uVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)reservememadr(*param_2,0xa90,(uint)param_2[2]);
  if (puVar2 != (undefined4 *)0x0) {
    FILE_readsync(local_20[0],0,puVar2,0xa90,param_1 - 1);
    iVar3 = typeofbigfile((byte *)puVar2);
    if (iVar3 != 0) {
      uVar1 = sizeofbigfileheader((byte *)puVar2);
      puVar4 = puVar2;
      if (uVar1 < 0xa91) {
LAB_800e5a34:
        FILE_closesync(local_20[0],param_1 - 1);
        return puVar4;
      }
      puVar4 = (undefined4 *)reservememadr(*param_2,uVar1,(uint)param_2[2]);
      if (puVar4 != (undefined4 *)0x0) {
        blockmove(puVar2,puVar4,0xa90);
        purgememadr((int)puVar2);
        FILE_readsync(local_20[0],0xa90,puVar4 + 0x2a4,uVar1 - 0xa90,param_1 - 1);
        goto LAB_800e5a34;
      }
    }
    purgememadr((int)puVar2);
  }
  FILE_closesync(local_20[0],param_1 - 1);
  return (undefined4 *)0x0;
}




// decompiled code
// original method signature: 
// void loadbigfileheader(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800e5a7c
void loadbigfileheader(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18 [2];
  undefined4 local_10;
  uchar *local_c;
  
  local_c = abortflag;
  local_18[0] = param_1;
  local_10 = param_2;
  uVar1 = asyncidle();
  FILE_atomic(loadbigfileheaderatomic,uVar1,100,local_18);
  return;
}




// decompiled code
// original method signature: 
// void xformy(int *param_1,uint param_2);
 // line 0, offset 0x800e5ac4
void xformy(int *param_1,uint param_2)

{
  int local_10;
  int local_c;
  
  intsincos(param_2,&local_10,&local_c);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0x10000;
  param_1[5] = 0;
  param_1[7] = 0;
  *param_1 = local_c;
  param_1[2] = -local_10;
  param_1[6] = local_10;
  param_1[8] = local_c;
  return;
}




// decompiled code
// original method signature: 
// char * strcpy(char *__dest,char *__src);
 // line 0, offset 0x800e5b28
char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)0xa0)();
  return pcVar1;
}




// decompiled code
// original method signature: 
// int intatan(uint param_1,uint param_2);
 // line 0, offset 0x800e5b38
int intatan(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_18;
  uint local_14;
  
  iVar4 = 0;
  bVar1 = (int)param_2 < 0;
  if (bVar1) {
    param_2 = -param_2;
    iVar4 = 0x200;
  }
  uVar5 = (uint)bVar1;
  bVar1 = (int)param_2 < (int)param_1;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    uVar5 = 1 - uVar5;
    iVar4 = -iVar4;
    bVar1 = (int)param_2 < (int)param_1;
  }
  uVar3 = param_1;
  if (bVar1) {
    if (uVar5 == 0) {
      iVar4 = iVar4 + 0x100;
    }
    else {
      iVar4 = iVar4 + -0x100;
    }
    uVar5 = 1 - uVar5;
    uVar3 = param_2;
    param_2 = param_1;
  }
  uVar2 = 0x80;
  if (uVar3 != param_2) {
    if ((uVar3 & 0xff800000) == 0) {
      uVar3 = (uVar3 * 0x100 + ((int)param_2 >> 1)) / param_2;
      if (param_2 == 0) {
        trap(0x1c00);
      }
    }
    else {
      make64((int *)&local_18,uVar3,0x20);
      uVar3 = divu64(local_18,local_14,param_2);
      if ((uVar3 & 0x800000) == 0) {
        uVar3 = uVar3 >> 0x18;
      }
      else {
        uVar3 = (uVar3 >> 0x18) + 1;
      }
    }
    uVar2 = (uint)(byte)(&atantbl)[uVar3];
  }
  if (uVar5 != 0) {
    uVar2 = -uVar2;
  }
  return iVar4 + uVar2;
}




// decompiled code
// original method signature: 
// undefined4 * loadpackadrz(char *param_1,uint param_2);
 // line 0, offset 0x800e5c64
undefined4 * loadpackadrz(char *param_1,uint param_2)

{
  undefined4 *src;
  long lVar1;
  int iVar2;
  undefined4 *src_00;
  undefined4 *dst;
  
  src = (undefined4 *)loadfileadr(param_1,param_2);
  dst = (undefined4 *)0x0;
  if ((src != (undefined4 *)0x0) && (lVar1 = unpacksize(src), dst = src, lVar1 != 0)) {
    iVar2 = getblocksize((int)src);
    src_00 = (undefined4 *)reservememadr(param_1,iVar2,param_2 ^ 0x10);
    iVar2 = getblocksize((int)src);
    blockmove(src,src_00,iVar2);
    purgememadr((int)src);
    dst = (undefined4 *)reservememadr(param_1,lVar1,param_2);
    if ((dst != (undefined4 *)0x0) && (lVar1 = unpackz(src_00,dst), lVar1 == 0)) {
      purgememadr((int)dst);
      dst = (undefined4 *)0x0;
    }
    purgememadr((int)src_00);
  }
  return dst;
}




// decompiled code
// original method signature: 
// void loadpackadr(char *param_1,uint param_2);
 // line 0, offset 0x800e5d5c
void loadpackadr(char *param_1,uint param_2)

{
  loadpackadrz(param_1,param_2);
  return;
}




// decompiled code
// original method signature: 
// int strcmp(char *__s1,char *__s2);
 // line 0, offset 0x800e5d7c
int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar);
 // line 0, offset 0x800e5d8c
void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __nmemb_00;
  
  pvVar4 = (void *)((int)__base + __size);
  __nmemb_00 = 0;
  if (1 < __nmemb) {
    if (__nmemb == 2) {
      iVar1 = (*__compar)(__base,pvVar4);
      if (0 < iVar1) {
        FUN_800e5edc((int)__base,(int)pvVar4,__size);
      }
    }
    else {
      uVar2 = 1;
      FUN_800e5edc((int)__base,(int)((int)__base + (__nmemb >> 1) * __size),__size);
      pvVar3 = __base;
      if (1 < __nmemb) {
        do {
          iVar1 = (*__compar)(pvVar4,__base);
          if (iVar1 < 0) {
            pvVar3 = (void *)((int)pvVar3 + __size);
            __nmemb_00 = __nmemb_00 + 1;
            if (pvVar4 != pvVar3) {
              FUN_800e5edc((int)pvVar4,(int)pvVar3,__size);
            }
          }
          uVar2 = uVar2 + 1;
          pvVar4 = (void *)((int)pvVar4 + __size);
        } while (uVar2 < __nmemb);
      }
      if (pvVar3 != __base) {
        FUN_800e5edc((int)__base,(int)pvVar3,__size);
      }
      qsort(__base,__nmemb_00,__size,__compar);
      qsort((void *)((int)pvVar3 + __size),(__nmemb - __nmemb_00) - 1,__size,__compar);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_800e5edc(int param_1,int param_2,uint param_3);
 // line 0, offset 0x800e5edc
void FUN_800e5edc(int param_1,int param_2,uint param_3)

{
  undefined uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      puVar2 = (undefined *)(param_1 + uVar4);
      puVar3 = (undefined *)(param_2 + uVar4);
      uVar1 = *puVar2;
      uVar4 = uVar4 + 1;
      *puVar2 = *puVar3;
      *puVar3 = uVar1;
    } while (uVar4 < param_3);
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 typeofbigfile(byte *param_1);
 // line 0, offset 0x800e5f1c
undefined4 typeofbigfile(byte *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = getm(param_1,2);
  if (uVar1 == 0xc0fb) {
    uVar2 = 1;
  }
  else {
    uVar1 = getm(param_1,4);
    uVar2 = 0;
    if (uVar1 == 0x42494746) {
      uVar2 = 2;
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint sizeofbigfileheader(byte *param_1);
 // line 0, offset 0x800e5f84
uint sizeofbigfileheader(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = typeofbigfile(param_1);
  if (iVar1 == 1) {
    uVar2 = getm(param_1 + 2,2);
    uVar2 = uVar2 + 4;
  }
  else {
    uVar2 = 0;
    if (iVar1 == 2) {
      uVar2 = getm(param_1 + 0xc,4);
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// byte * locatebigentryz(byte *param_1,byte *param_2,int param_3,uint *param_4,uint *param_5);
 // line 0, offset 0x800e5ffc
byte * locatebigentryz(byte *param_1,byte *param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = sizeofbigfileheader(param_1);
  iVar2 = typeofbigfile(param_1);
  if (iVar2 == 1) {
    pbVar4 = param_1 + 6;
    while (pbVar4 < param_1 + uVar1) {
      if (param_2 == (byte *)0x0) {
        if (iVar5 == param_3) {
LAB_800e60a0:
          if (param_4 != (uint *)0x0) {
            uVar1 = getm(pbVar4,3);
            *param_4 = uVar1;
          }
          if (param_5 != (uint *)0x0) {
            uVar1 = getm(pbVar4 + 3,3);
            *param_5 = uVar1;
          }
          return pbVar4 + 6;
        }
      }
      else {
        iVar2 = stricmp(pbVar4 + 6,param_2);
        if (iVar2 == 0) goto LAB_800e60a0;
      }
      sVar3 = strlen((char *)(pbVar4 + 6));
      pbVar4 = pbVar4 + sVar3 + 7;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    if (iVar2 == 2) {
      pbVar4 = param_1 + 0x10;
      while (pbVar4 < param_1 + uVar1) {
        if (param_2 == (byte *)0x0) {
          if (iVar5 == param_3) {
LAB_800e612c:
            if (param_4 != (uint *)0x0) {
              uVar1 = getm(pbVar4,4);
              *param_4 = uVar1;
            }
            if (param_5 != (uint *)0x0) {
              uVar1 = getm(pbVar4 + 4,4);
              *param_5 = uVar1;
            }
            return pbVar4 + 8;
          }
        }
        else {
          iVar2 = stricmp(pbVar4 + 8,param_2);
          if (iVar2 == 0) goto LAB_800e612c;
        }
        sVar3 = strlen((char *)(pbVar4 + 8));
        pbVar4 = pbVar4 + sVar3 + 9;
        iVar5 = iVar5 + 1;
      }
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  return (byte *)0x0;
}




// decompiled code
// original method signature: 
// void locatebigentry(byte *param_1,byte *param_2,int param_3,uint *param_4,uint *param_5);
 // line 0, offset 0x800e61b8
void locatebigentry(byte *param_1,byte *param_2,int param_3,uint *param_4,uint *param_5)

{
  locatebigentryz(param_1,param_2,param_3,param_4,param_5);
  return;
}




// decompiled code
// original method signature: 
// uint locatebigoffset(byte *param_1,byte *param_2);
 // line 0, offset 0x800e61dc
uint locatebigoffset(byte *param_1,byte *param_2)

{
  uint local_10 [2];
  
  local_10[0] = 0;
  if (param_2 != (byte *)0x0) {
    locatebigentry(param_1,param_2,0,local_10,(uint *)&biglen);
  }
  return local_10[0];
}




// decompiled code
// original method signature: 
// byte * locatebig(byte *param_1,byte *param_2);
 // line 0, offset 0x800e6218
byte * locatebig(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  uVar1 = locatebigoffset(param_1,param_2);
  if (uVar1 != 0) {
    pbVar2 = param_1 + uVar1;
  }
  return pbVar2;
}




// decompiled code
// original method signature: 
// uint bigcount(byte *param_1);
 // line 0, offset 0x800e6258
uint bigcount(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = typeofbigfile(param_1);
  if (iVar1 == 1) {
    param_1 = param_1 + 4;
    iVar1 = 2;
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    param_1 = param_1 + 8;
    iVar1 = 4;
  }
  uVar2 = getm(param_1,iVar1);
  return uVar2;
}




// decompiled code
// original method signature: 
// char * strstr(char *__haystack,char *__needle);
 // line 0, offset 0x800e62cc
char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)0xa0)();
  return pcVar1;
}




// decompiled code
// original method signature: 
// void blockmove(undefined4 *param_1,undefined4 *param_2,int param_3);
 // line 0, offset 0x800e62dc
/* WARNING: Instruction at (ram,0x800e65d8) overlaps instruction at (ram,0x800e65d4)
    */

void blockmove(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (((int)param_1 < (int)param_2) && ((int)param_2 < (int)param_1 + param_3)) {
    uVar2 = (int)param_1 + param_3;
    uVar3 = (int)param_2 + param_3;
    if (((uVar2 | uVar3) & 3) == 0) {
      param_3 = param_3 + -0x10;
      while (-1 < param_3) {
        uVar5 = *(undefined4 *)(uVar2 - 0xc);
        uVar6 = *(undefined4 *)(uVar2 - 8);
        uVar7 = *(undefined4 *)(uVar2 - 4);
        *(undefined4 *)(uVar3 - 0x10) = *(undefined4 *)(uVar2 - 0x10);
        *(undefined4 *)(uVar3 - 0xc) = uVar5;
        *(undefined4 *)(uVar3 - 8) = uVar6;
        *(undefined4 *)(uVar3 - 4) = uVar7;
        uVar2 = uVar2 - 0x10;
        param_3 = param_3 + -0x10;
        uVar3 = uVar3 - 0x10;
      }
    }
    else {
      param_3 = param_3 + -0x10;
      while (-1 < param_3) {
        uVar5 = *(undefined4 *)(uVar2 - 0xc);
        uVar6 = *(undefined4 *)(uVar2 - 8);
        uVar7 = *(undefined4 *)(uVar2 - 4);
        *(undefined4 *)(uVar3 - 0x10) = *(undefined4 *)(uVar2 - 0x10);
        *(undefined4 *)(uVar3 - 0xc) = uVar5;
        *(undefined4 *)(uVar3 - 8) = uVar6;
        *(undefined4 *)(uVar3 - 4) = uVar7;
        param_3 = param_3 + -0x10;
        uVar2 = uVar2 - 0x10;
        uVar3 = uVar3 - 0x10;
      }
    }
    param_3 = param_3 + 0xc;
    while (-1 < param_3) {
      param_3 = param_3 + -4;
      *(undefined4 *)(uVar3 - 4) = *(undefined4 *)(uVar2 - 4);
      uVar2 = uVar2 - 4;
      uVar3 = uVar3 - 4;
    }
    iVar4 = param_3 + 2;
    if (-1 < param_3 + 3) {
      while( true ) {
        puVar1 = (undefined *)(uVar2 - 1);
        uVar2 = uVar2 - 1;
        *(undefined *)(uVar3 - 1) = *puVar1;
        uVar3 = uVar3 - 1;
        if (iVar4 < 0) break;
        iVar4 = iVar4 + -1;
      }
    }
    return;
  }
  if ((((uint)param_1 | (uint)param_2) & 3) != 0) {
    param_3 = param_3 + -0x10;
    while (-1 < param_3) {
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      *param_2 = *param_1;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
      param_3 = param_3 + -0x10;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    param_3 = param_3 + 0xc;
    while (-1 < param_3) {
      param_3 = param_3 + -4;
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    param_3 = param_3 + 3;
    while (-1 < param_3) {
      param_3 = param_3 + -1;
      *(undefined *)param_2 = *(undefined *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    return;
  }
  param_3 = param_3 + -0x40;
  while (-1 < param_3) {
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    uVar8 = param_1[4];
    uVar9 = param_1[5];
    uVar10 = param_1[6];
    uVar11 = param_1[7];
    *param_2 = *param_1;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    param_2[4] = uVar8;
    param_2[5] = uVar9;
    param_2[6] = uVar10;
    param_2[7] = uVar11;
    uVar5 = param_1[9];
    uVar6 = param_1[10];
    uVar7 = param_1[0xb];
    uVar8 = param_1[0xc];
    uVar9 = param_1[0xd];
    uVar10 = param_1[0xe];
    uVar11 = param_1[0xf];
    param_2[8] = param_1[8];
    param_2[9] = uVar5;
    param_2[10] = uVar6;
    param_2[0xb] = uVar7;
    param_2[0xc] = uVar8;
    param_2[0xd] = uVar9;
    param_2[0xe] = uVar10;
    param_2[0xf] = uVar11;
    param_3 = param_3 + -0x40;
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  param_3 = param_3 + 0x30;
  while (-1 < param_3) {
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    param_3 = param_3 + -0x10;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  param_3 = param_3 + 0xc;
  while (-1 < param_3) {
    param_3 = param_3 + -4;
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  param_3 = param_3 + 3;
  while (-1 < param_3) {
    param_3 = param_3 + -1;
    *(undefined *)param_2 = *(undefined *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSNDremovepatches(int param_1,int param_2);
 // line 0, offset 0x800e65f8
undefined4 iSNDremovepatches(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int aiStack2064 [510];
  undefined4 local_18 [2];
  
  iVar2 = 0xff;
  puVar1 = local_18;
  do {
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -2;
  } while (-1 < iVar2);
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iSNDbankremovepat(param_1,iVar2,aiStack2064);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}




// decompiled code
// original method signature: 
// void SNDbankremove(int param_1);
 // line 0, offset 0x800e6674
void SNDbankremove(int param_1)

{
  cSNDbankremove(param_1);
  return;
}




// decompiled code
// original method signature: 
// undefined4 cSNDbankremove(int param_1);
 // line 0, offset 0x800e6694
undefined4 cSNDbankremove(int param_1)

{
  undefined4 uVar1;
  int param_1_00;
  int iVar2;
  int iVar3;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    if (param_1 == -1) {
      param_1_00 = 0;
      if (DAT_8014786c != 0) {
        do {
          cSNDbankremove(param_1_00);
          param_1_00 = param_1_00 + 1;
        } while (param_1_00 < (int)(uint)DAT_8014786c);
      }
      uVar1 = 0;
    }
    else {
      param_1_00 = iSNDvalidbank(param_1);
      uVar1 = 0xfffffff8;
      if (param_1_00 == 0) {
        iVar3 = *(int *)(param_1 * 0xc + DAT_801478f8);
        param_1_00 = 0;
        if (DAT_80147871 != 0) {
          iVar2 = 0;
          do {
            if ((int)*(char *)((int)(uint *)(DAT_801478f4 + iVar2) + 10) == param_1) {
              SNDstop(*(uint *)(DAT_801478f4 + iVar2));
            }
            param_1_00 = param_1_00 + 1;
            iVar2 = iVar2 + 100;
          } while (param_1_00 < (int)(uint)DAT_80147871);
        }
        param_1_00 = param_1 * 0xc + DAT_801478f8;
        if (*(char *)(param_1_00 + 9) == '\0') {
          iSNDremovepatches(param_1,(uint)*(ushort *)(iVar3 + 6));
        }
        else {
          iSNDplatformfree(*(int *)(param_1_00 + 4));
          *(undefined *)(param_1 * 0xc + DAT_801478f8 + 9) = 0;
        }
        *(undefined4 *)(param_1 * 0xc + DAT_801478f8) = 0;
        uVar1 = 0;
        *(undefined *)(param_1 * 0xc + DAT_801478f8 + 8) = 0;
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDplaysetdef(undefined4 *param_1);
 // line 0, offset 0x800e6834
undefined4 SNDplaysetdef(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined *)(param_1 + 1) = 0xff;
  *(undefined *)((int)param_1 + 5) = 0x3c;
  *(undefined2 *)(param_1 + 3) = 0x1000;
  *(undefined2 *)((int)param_1 + 0xe) = 0x1000;
  *(undefined *)((int)param_1 + 6) = 0x7f;
  *(undefined *)(param_1 + 2) = 0x7f;
  *(undefined *)((int)param_1 + 10) = 0x7f;
  *(undefined *)((int)param_1 + 7) = 0x40;
  *(undefined *)((int)param_1 + 9) = 0x40;
  *(undefined *)((int)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  return 0;
}




// decompiled code
// original method signature: 
// uint SNDpan(uint param_1,int param_2);
 // line 0, offset 0x800e6884
uint SNDpan(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_18 [2];
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDgetchan(param_1);
    if (-1 < (int)uVar1) {
      local_18[0] = -1;
      while ((iVar2 = iSNDpatchkey(uVar1,local_18), iVar2 != 0 &&
             (iVar2 = DAT_801478f4 + local_18[0] * 100, (int)*(char *)(iVar2 + 0x3d) != param_2))) {
        *(undefined *)(iVar2 + 0x3d) = (char)param_2;
        iVar3 = param_2;
        if ((int)*(char *)(iVar2 + 0x33) != 1) {
          iVar3 = (param_2 + -0x40) * (int)*(char *)(iVar2 + 0x33) + 0x40;
        }
        iVar3 = (int)*(char *)(iVar2 + 0x2e) + iVar3 + -0x40;
        if (iVar3 < 0x80) {
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x7f;
        }
        if (*(int *)(iVar2 + 0x48) != 0) {
          iVar3 = (int)*(char *)(*(int *)(iVar2 + 0x48) + iVar3);
        }
        iSNDplatform3dpos(local_18[0],(iVar3 + -0x40) * 0x100 & 0xff00);
      }
    }
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint iSNDunsafevol(uint param_1,int param_2);
 // line 0, offset 0x800e69d0
uint iSNDunsafevol(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int local_20 [2];
  
  uVar1 = iSNDgetchan(param_1);
  if (-1 < (int)uVar1) {
    local_20[0] = -1;
    while (iVar2 = iSNDpatchkey(uVar1,local_20), iVar2 != 0) {
      iVar2 = DAT_801478f4 + local_20[0] * 100;
      if (*(int *)(iVar2 + 0x1c) == param_2 << 0x10) {
        return 0;
      }
      *(int *)(iVar2 + 0x1c) = param_2 << 0x10;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      iSNDcalcvol(local_20[0]);
      iSNDvol(local_20[0],(int)*(char *)(iVar2 + 0x2d));
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint SNDvol(uint param_1,int param_2);
 // line 0, offset 0x800e6a94
uint SNDvol(uint param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDunsafevol(param_1,param_2);
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void addsystemtask(int param_1,undefined4 param_2,int param_3);
 // line 0, offset 0x800e6af4
void addsystemtask(int param_1,undefined4 param_2,int param_3)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  puVar1 = libticks;
  iVar5 = 0;
  piVar6 = &systemtasksubs;
  iVar2 = DAT_000016ec + 1;
  iVar3 = -1;
  do {
    iVar4 = iVar5;
    if ((((*piVar6 != param_1) && (iVar4 = iVar3, *piVar6 == 0)) && (iVar4 = iVar3, iVar3 == -1)) &&
       (iVar4 = iVar5, DAT_000016ec != 0)) {
      DAT_000016ec = DAT_000016ec + -1;
      iVar4 = iVar3;
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 4;
    iVar3 = iVar4;
  } while (iVar5 < 0x10);
  DAT_000016ec = iVar2;
  if (iVar4 != -1) {
    DAT_000016ec = iVar2;
    (&systemtasksubs)[iVar4 * 4] = param_1;
    (&DAT_8013e984)[iVar4 * 4] = param_2;
    (&DAT_8013e98c)[iVar4 * 4] = 0;
    *(uchar **)(&DAT_8013e988 + iVar4 * 4) = puVar1 + param_3;
  }
  DAT_000016ec = DAT_000016ec + -1;
  return;
}




// decompiled code
// original method signature: 
// void delsystemtask(int param_1);
 // line 0, offset 0x800e6ba8
void delsystemtask(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &systemtasksubs;
  do {
    if (*piVar2 == param_1) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 0x10);
  if ((iVar1 < 0x10) && ((&systemtasksubs)[iVar1 * 4] == param_1)) {
    (&systemtasksubs)[iVar1 * 4] = 0;
  }
  return;
}




// decompiled code
// original method signature: 
// uint systemtask(undefined4 param_1);
 // line 0, offset 0x800e6c04
uint systemtask(undefined4 param_1)

{
  uchar *puVar1;
  uint uVar2;
  code **ppcVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (DAT_000016f0 != libticks) {
    iVar4 = 0;
    ppcVar3 = (code **)&systemtasksubs;
    DAT_000016f0 = libticks;
    do {
      if (((*ppcVar3 != (code *)0x0) && ((int)ppcVar3[2] <= (int)libticks)) &&
         (ppcVar3[3] == (code *)0x0)) {
        ppcVar3[3] = &DAT_00000001;
        uVar2 = (**ppcVar3)(param_1,libticks + -(int)ppcVar3[2]);
        puVar1 = libticks;
        uVar5 = uVar5 | uVar2;
        ppcVar3[3] = (code *)0x0;
        *(uchar **)(ppcVar3 + 2) = puVar1 + (int)ppcVar3[1];
      }
      iVar4 = iVar4 + 1;
      ppcVar3 = ppcVar3 + 4;
    } while (iVar4 < 0x10);
  }
  return uVar5;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_setpriority(int param_1,int param_2,int param_3);
 // line 0, offset 0x800e6cf0
undefined4 SNDSTRM_setpriority(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    if (iVar2 == 0) {
      uVar1 = 0xfffffff8;
    }
    else {
      STREAM_setpriority(*(int ***)(iVar2 + 4),param_2,param_3);
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void SNDfxinitbus(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);
 // line 0, offset 0x800e6d58
void SNDfxinitbus(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  *(int *)(&DAT_801478fc + param_1 * 0x10) = param_3;
  (&DAT_80147904)[param_1 * 4] = param_4;
  (&DAT_80147908)[param_1 * 4] = param_5;
  iSNDplatformfxinit(param_1,param_3);
  if (param_3 == 0) {
    param_2 = 0;
  }
  SNDfxmasterlevel(param_1,param_2);
  return;
}




// decompiled code
// original method signature: 
// int SNDfxmasterlevel(int param_1,undefined4 param_2);
 // line 0, offset 0x800e6dd0
int SNDfxmasterlevel(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  (&DAT_80147900)[param_1 * 4] = param_2;
  iVar1 = iSNDplatformfxmasterlevel(param_1,(short)param_2);
  if ((-1 < iVar1) && (iVar1 = 0, DAT_8014789c != '\0')) {
    iVar1 = 0;
    if (DAT_80147871 != 0) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        SNDfxlevel(*(uint *)(iVar2 + DAT_801478f4),param_1,
                   (int)*(char *)((int)(uint *)(iVar2 + DAT_801478f4) + param_1 + 0x35));
        iVar2 = iVar2 + 100;
      } while (iVar1 < (int)(uint)DAT_80147871);
    }
    iVar1 = 0;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// uint VoxEvent_GetFilterLengthFlag(int param_1);
 // line 0, offset 0x800e6e88
uint VoxEvent_GetFilterLengthFlag(int param_1)

{
  return (uint)*(byte *)(param_1 + 10) & 1;
}




// decompiled code
// original method signature: 
// uint VoxEvent_GetKeepTillExpiresFlag(int param_1);
 // line 0, offset 0x800e6e94
uint VoxEvent_GetKeepTillExpiresFlag(int param_1)

{
  return (uint)(*(byte *)(param_1 + 10) >> 2) & 1;
}




// decompiled code
// original method signature: 
// int iSPCH_GetOffset16(int param_1,int param_2,int param_3);
 // line 0, offset 0x800e6ea8
int iSPCH_GetOffset16(int param_1,int param_2,int param_3)

{
  return param_1 + (uint)*(ushort *)(param_3 * 2 + param_2) * 4;
}




// decompiled code
// original method signature: 
// ushort * iSPCH_SearchEventDat(int param_1,uint param_2);
 // line 0, offset 0x800e6ec4
ushort * iSPCH_SearchEventDat(int param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 2);
  iVar3 = 0;
  if (uVar1 != 0) {
    do {
      puVar2 = (ushort *)iSPCH_GetOffset16(param_1,param_1 + 0xc,iVar3);
      iVar3 = iVar3 + 1;
      if ((uint)*puVar2 == param_2) {
        return puVar2;
      }
    } while (iVar3 < (int)(uint)uVar1);
  }
  return (ushort *)0x0;
}




// decompiled code
// original method signature: 
// ushort * iSPCH_FindEvent(uint param_1);
 // line 0, offset 0x800e6f4c
ushort * iSPCH_FindEvent(uint param_1)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &gEventDats;
  while ((*piVar2 == 0 || (puVar1 = iSPCH_SearchEventDat(*piVar2,param_1), puVar1 == (ushort *)0x0))
        ) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (3 < iVar3) {
      return (ushort *)0x0;
    }
  }
  return puVar1;
}




// decompiled code
// original method signature: 
// void iSPCH_InitEventDat(void);
 // line 0, offset 0x800e6fbc
void iSPCH_InitEventDat(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 3;
  puVar1 = &DAT_80148054;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}




// decompiled code
// original method signature: 
// undefined4 GetFilterLength(void);
 // line 0, offset 0x800e6fe4
undefined4 GetFilterLength(void)

{
  return *(undefined4 *)(gEventDats + 4);
}




// decompiled code
// original method signature: 
// undefined4 GetFilterPriority(void);
 // line 0, offset 0x800e6ffc
undefined4 GetFilterPriority(void)

{
  return *(undefined4 *)(gEventDats + 8);
}




// decompiled code
// original method signature: 
// void iSPCH_InitEventQueue(void);
 // line 0, offset 0x800e7014
void iSPCH_InitEventQueue(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = &gVoxEvents;
  gVoxEvents = 0;
  DAT_80148064 = 0;
  do {
    iVar3 = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    iVar1 = iVar4;
    do {
      *(undefined4 *)((int)&DAT_80148074 + iVar1) = 0;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar3 < 0xc);
    puVar2 = puVar2 + 0xf;
    iVar4 = iVar4 + 0x3c;
  } while ((int)puVar2 < -0x7feb7be0);
  gLastSubTick = 0;
  gLastTick = 0;
  return;
}




// decompiled code
// original method signature: 
// int iSPCH_FindEventSlot(uint param_1);
 // line 0, offset 0x800e7088
int iSPCH_FindEventSlot(uint param_1)

{
  uchar *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (gVoxEvents < 0x10) {
    iVar2 = 0;
    puVar3 = &gVoxEvents;
    do {
      if (*(short *)(puVar3 + 2) == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0xf;
    } while (iVar2 < 0x10);
  }
  puVar1 = gettick();
  iVar2 = 0;
  puVar3 = &gVoxEvents;
  while ((*(ushort *)(puVar3[4] + 2) == 0 ||
         (puVar1 + -puVar3[3] <= (uchar *)(uint)*(ushort *)(puVar3[4] + 2)))) {
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0xf;
    if (0xf < iVar2) {
      iVar2 = 0;
      puVar3 = &gVoxEvents;
      do {
        if ((uint)*(ushort *)(puVar3[4] + 4) <= param_1) {
          *(undefined2 *)(puVar3 + 2) = 0;
          gVoxEvents = gVoxEvents + -1;
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0xf;
      } while (iVar2 < 0x10);
      return -1;
    }
  }
  *(undefined2 *)(puVar3 + 2) = 0;
  gVoxEvents = gVoxEvents + -1;
  return iVar2;
}




// decompiled code
// original method signature: 
// undefined4 SPCH_AddEvent(uint *param_1);
 // line 0, offset 0x800e71b8
undefined4 SPCH_AddEvent(uint *param_1)

{
  char cVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  puVar3 = iSPCH_FindEvent(*param_1);
  if (((puVar3 != (ushort *)0x0) &&
      (cVar1 = *(char *)((int)puVar3 + 9), iVar4 = iSPCH_Rand(100), iVar4 <= (int)cVar1)) &&
     (iVar4 = iSPCH_FindEventSlot((uint)puVar3[2]), -1 < iVar4)) {
    puVar5 = gettick();
    if (puVar5 == gLastTick) {
      gLastSubTick = gLastSubTick + 1;
    }
    else {
      gLastSubTick = 0;
    }
    sVar2 = gLastSubTick;
    iVar8 = 0;
    iVar6 = iVar4 * 0x3c;
    gLastTick = puVar5;
    *(ushort **)(&DAT_80148070 + iVar4 * 0xf) = puVar3;
    *(uchar **)(&DAT_8014806c + iVar4 * 0xf) = puVar5;
    (&DAT_8014806a)[iVar4 * 0x1e] = sVar2;
    do {
      uVar7 = *param_1;
      param_1 = param_1 + 1;
      iVar8 = iVar8 + 1;
      *(uint *)((int)&DAT_80148074 + iVar6) = uVar7;
      iVar6 = iVar6 + 4;
    } while (iVar8 < 0xc);
    gVoxEvents = gVoxEvents + 1;
    (&DAT_80148068)[iVar4 * 0x1e] = 1;
  }
  return 0;
}




// decompiled code
// original method signature: 
// int iSPCH_ChooseEvent(void);
 // line 0, offset 0x800e7300
int iSPCH_ChooseEvent(void)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uchar *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uchar *puVar14;
  ushort local_30;
  
  iVar12 = -1;
  puVar6 = gettick();
  iVar5 = gPreLoadTicks;
  puVar14 = (uchar *)0xffffffff;
  iVar13 = 0;
  puVar11 = &gVoxEvents;
  uVar4 = 0;
  local_30 = 0;
  do {
    if (*(short *)(puVar11 + 2) != 0) {
      bVar3 = false;
      iVar9 = puVar11[4];
      uVar1 = *(ushort *)(iVar9 + 2);
      puVar10 = puVar6 + (iVar5 - puVar11[3]);
      if (((gFilterSetting == 1) &&
          (uVar7 = VoxEvent_GetFilterLengthFlag(iVar9), (uVar7 & 0xff) != 0)) &&
         (uVar2 = *(ushort *)(iVar9 + 4), iVar8 = GetFilterPriority(), (int)(uint)uVar2 < iVar8)) {
        bVar3 = true;
      }
      if ((uVar1 != 0 && (uchar *)(uint)uVar1 < puVar10) || (bVar3)) {
        *(undefined2 *)(puVar11 + 2) = 0;
        gVoxEvents = gVoxEvents + -1;
      }
      else {
        uVar1 = *(ushort *)(iVar9 + 4);
        if (uVar4 < uVar1) {
          local_30 = (&DAT_8014806a)[iVar13 * 0x1e];
          iVar12 = iVar13;
          puVar14 = puVar10;
          uVar4 = uVar1;
        }
        else {
          if ((uVar1 == uVar4) &&
             ((puVar10 < puVar14 ||
              ((puVar10 == puVar14 && (local_30 < *(ushort *)((int)puVar11 + 10))))))) {
            local_30 = (&DAT_8014806a)[iVar13 * 0x1e];
            iVar12 = iVar13;
            puVar14 = puVar10;
          }
        }
      }
    }
    iVar13 = iVar13 + 1;
    puVar11 = puVar11 + 0xf;
  } while (iVar13 < 0x10);
  return iVar12;
}




// decompiled code
// original method signature: 
// void SPCH_ClearEventQueue(void);
 // line 0, offset 0x800e74e0
void SPCH_ClearEventQueue(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &gVoxEvents;
  do {
    if (*(short *)(puVar1 + 2) != 0) {
      *(undefined2 *)(puVar1 + 2) = 0;
      gVoxEvents = gVoxEvents + -1;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0xf;
  } while (iVar2 < 0x10);
  return;
}




// decompiled code
// original method signature: 
// void iSPCH_ClearOldEvents(int param_1);
 // line 0, offset 0x800e7528
void iSPCH_ClearOldEvents(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  puVar3 = &gVoxEvents;
  uVar5 = (&DAT_8014806c)[param_1 * 0xf];
  uVar1 = (&DAT_8014806a)[param_1 * 0x1e];
  DAT_80148064 = 0;
  do {
    if ((iVar4 != param_1) && (*(short *)(puVar3 + 2) != 0)) {
      if (((uint)puVar3[3] < uVar5) ||
         ((puVar3[3] == uVar5 && (*(ushort *)((int)puVar3 + 10) < uVar1)))) {
        uVar2 = VoxEvent_GetKeepTillExpiresFlag(puVar3[4]);
        if ((uVar2 & 0xff) == 0) {
          *(undefined2 *)(puVar3 + 2) = 0;
          gVoxEvents = gVoxEvents + -1;
        }
      }
      else {
        if (*(char *)(puVar3[4] + 9) == 'd') {
          DAT_80148064 = 1;
        }
      }
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0xf;
  } while (iVar4 < 0x10);
  return;
}




// decompiled code
// original method signature: 
// void SPCH_PlaySpeech(void);
 // line 0, offset 0x800e7644
void SPCH_PlaySpeech(void)

{
  int iVar1;
  
  iVar1 = iSPCH_OneChosen();
  if ((iVar1 != 0) || (iVar1 = SPCH_ChooseSpeech(), iVar1 != 0)) {
    iSPCH_PlayChosen();
  }
  return;
}




// decompiled code
// original method signature: 
// int SPCH_ChooseSpeech(void);
 // line 0, offset 0x800e7684
int SPCH_ChooseSpeech(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = 0;
  if (gVoxEvents != 0) {
    iVar1 = iSPCH_ChooseEvent();
    iVar4 = 0;
    if (-1 < iVar1) {
      iSPCH_ClearOldEvents(iVar1);
      puVar5 = &DAT_80148074 + iVar1 * 0xf;
      iVar4 = iSPCH_ChooseSentence(puVar5);
      if ((iVar4 == 0) && (iVar3 = 0, gReparm != (code *)0x0)) {
        do {
          iVar2 = (*gReparm)(iVar3,puVar5);
          if (-1 < iVar2) {
            iVar4 = iSPCH_ChooseSentence(puVar5);
          }
          iVar3 = iVar3 + 1;
        } while ((iVar4 == 0) && (0 < iVar2));
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      gVoxEvents = gVoxEvents + -1;
      (&DAT_80148068)[iVar1 * 0x1e] = 0;
    }
  }
  return iVar4;
}




// decompiled code
// original method signature: 
// long random(void);
 // line 0, offset 0x800e77a8
/* WARNING: Unknown calling convention yet parameter storage is locked */

long random(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  DAT_801234ac = DAT_801234ac + DAT_801234b0;
  uVar4 = DAT_801234a8 + DAT_801234ac + (uint)(DAT_801234ac < DAT_801234b0);
  uVar1 = (uint)(uVar4 < (uint)(DAT_801234ac < DAT_801234b0)) +
          (uint)(DAT_801234a8 + DAT_801234ac < DAT_801234ac);
  uVar3 = DAT_801234a4 + uVar4 + uVar1;
  uVar1 = (uint)(uVar3 < uVar1) + (uint)(DAT_801234a4 + uVar4 < uVar4);
  uVar2 = DAT_801234a0 + uVar3 + uVar1;
  seed = seed + uVar2 + (uint)(uVar2 < uVar1) + (uint)(DAT_801234a0 + uVar3 < uVar3);
  if ((((DAT_801234b0 + 1 == 0) && (DAT_801234ac = DAT_801234ac + 1, DAT_801234ac == 0)) &&
      (uVar4 = uVar4 + 1, uVar4 == 0)) &&
     ((uVar3 = uVar3 + 1, uVar3 == 0 && (uVar2 = uVar2 + 1, uVar2 == 0)))) {
    seed = seed + 1;
  }
  DAT_801234a0 = uVar2;
  DAT_801234a4 = uVar3;
  DAT_801234a8 = uVar4;
  DAT_801234b0 = DAT_801234b0 + 1;
  return seed;
}




// decompiled code
// original method signature: 
// void seedrandom(int param_1);
 // line 0, offset 0x800e7878
void seedrandom(int param_1)

{
  seed = param_1 + -0xdd2f1aa;
  DAT_801234a0 = param_1 + -0x77ced917;
  DAT_801234a4 = param_1 + -0x39db22d1;
  DAT_801234a8 = param_1 + 0x702c49c;
  DAT_801234ac = param_1 + -0x61cac083;
  DAT_801234b0 = param_1 + 0x6fdf3b64;
  return;
}




// decompiled code
// original method signature: 
// char * strcat(char *__dest,char *__src);
 // line 0, offset 0x800e78e8
char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)0xa0)();
  return pcVar1;
}




// decompiled code
// original method signature: 
// uint iSNDunsafebend(uint param_1,int param_2);
 // line 0, offset 0x800e78f8
uint iSNDunsafebend(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int local_20 [2];
  
  uVar1 = iSNDgetchan(param_1);
  if (-1 < (int)uVar1) {
    local_20[0] = -1;
    while (iVar2 = iSNDpatchkey(uVar1,local_20), iVar2 != 0) {
      iVar2 = DAT_801478f4 + local_20[0] * 100;
      if ((int)*(char *)(iVar2 + 0x2f) == param_2) {
        return 0;
      }
      if (*(short *)(iVar2 + 0x5a) == 0) {
        return 0;
      }
      *(undefined *)(iVar2 + 0x2f) = (char)param_2;
      *(undefined2 *)(iVar2 + 0x5e) = 0;
      iSNDcalcpitch(local_20[0]);
      iSNDplatformpitch(local_20[0],(uint)*(ushort *)(iVar2 + 0x62));
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint SNDpitchbend(uint param_1,int param_2);
 // line 0, offset 0x800e79d0
uint SNDpitchbend(uint param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDunsafebend(param_1,param_2);
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint SNDplay(int *param_1);
 // line 0, offset 0x800e7a30
uint SNDplay(int *param_1)

{
  uint uVar1;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = cSNDplay(param_1);
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint cSNDplay(int *param_1);
 // line 0, offset 0x800e7a68
uint cSNDplay(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = iSNDvalidbank((int)*(char *)(param_1 + 1));
  if (-1 < iVar1) {
    iVar1 = *param_1;
    iVar3 = *(int *)((int)*(char *)(param_1 + 1) * 0xc + DAT_801478f8);
    if (iVar1 < 0) {
      return 0xfffffff8;
    }
    if (iVar1 < (int)(uint)*(ushort *)(iVar3 + 6)) {
      if (*(char *)(iVar3 + 4) == '\x04') {
        iVar1 = *(int *)(iVar3 + iVar1 * 4 + 0x14);
      }
      else {
        iVar1 = *(int *)(iVar3 + iVar1 * 4 + 0xc);
      }
      uVar2 = iSNDplaytaggedpatch(iVar1,(undefined2 *)param_1);
      return uVar2;
    }
  }
  return 0xfffffff8;
}




// decompiled code
// original method signature: 
// uint SNDover(uint param_1);
 // line 0, offset 0x800e7b14
uint SNDover(uint param_1)

{
  uint uVar1;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDgetchan(param_1);
    uVar1 = uVar1 >> 0x1f;
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDbankheadersize(int param_1);
 // line 0, offset 0x800e7b64
undefined4 SNDbankheadersize(int param_1)

{
  if (DAT_8014789c != '\0') {
    return *(undefined4 *)(*(int *)(param_1 * 0xc + DAT_801478f8) + 8);
  }
  return 0xfffffff6;
}




// decompiled code
// original method signature: 
// size_t SNDbankheadercopy(void *param_1,int param_2);
 // line 0, offset 0x800e7ba8
size_t SNDbankheadercopy(void *param_1,int param_2)

{
  size_t __n;
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  
  if (DAT_8014789c == '\0') {
    __n = 0xfffffff6;
  }
  else {
    __n = SNDbankheadersize(param_2);
    if (-1 < (int)__n) {
      memcpy(param_1,*(void **)(param_2 * 0xc + DAT_801478f8),__n);
      iVar6 = *(int *)(param_2 * 0xc + DAT_801478f8);
      iVar1 = 0;
      iVar2 = iVar6;
      pvVar3 = param_1;
      iVar4 = iVar6;
      pvVar5 = param_1;
      if (*(short *)(iVar6 + 6) != 0) {
        do {
          if (*(char *)(iVar6 + 4) == '\x04') {
            if (*(int *)(iVar2 + 0x14) != 0) {
              *(int *)((int)pvVar3 + 0x14) = (int)param_1 + (*(int *)(iVar2 + 0x14) - iVar6);
            }
          }
          else {
            if (*(int *)(iVar4 + 0xc) != 0) {
              *(int *)((int)pvVar5 + 0xc) = (int)param_1 + (*(int *)(iVar4 + 0xc) - iVar6);
            }
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 4;
          pvVar3 = (void *)((int)pvVar3 + 4);
          iVar4 = iVar4 + 4;
          pvVar5 = (void *)((int)pvVar5 + 4);
        } while (iVar1 < (int)(uint)*(ushort *)(iVar6 + 6));
      }
      __n = 0;
      *(void **)(param_2 * 0xc + DAT_801478f8) = param_1;
    }
  }
  return __n;
}




// decompiled code
// original method signature: 
// int SNDmemlargestunused(int *param_1);
 // line 0, offset 0x800e7cec
int SNDmemlargestunused(int *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  *param_1 = 0x41;
  iVar4 = 0;
  if (DAT_80147e30 == 0) {
    iVar4 = (uint)DAT_80147e36 - 0x41;
  }
  else {
    iVar2 = 0;
    if (DAT_80147e30 != 0) {
      puVar3 = &DAT_80147e38;
      do {
        if (iVar2 == 0) {
          if (iVar4 < (int)((uint)*puVar3 - 0x41)) {
            iVar4 = (uint)*puVar3 - 0x41;
          }
        }
        else {
          iVar1 = (uint)*puVar3 -
                  ((uint)(ushort)(&DAT_80147e34)[iVar2 * 2] +
                  (uint)(ushort)(&DAT_80147e36)[iVar2 * 2]);
          if (iVar4 < iVar1) {
            *param_1 = (uint)(ushort)(&DAT_80147e34)[iVar2 * 2] +
                       (uint)(ushort)(&DAT_80147e36)[iVar2 * 2];
            iVar4 = iVar1;
          }
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 2;
      } while (iVar2 < (int)(uint)DAT_80147e30);
    }
    iVar1 = (uint)DAT_80147e36 -
            ((uint)(ushort)(&DAT_80147e34)[iVar2 * 2] + (uint)(ushort)(&DAT_80147e36)[iVar2 * 2]);
    if (iVar4 < iVar1) {
      *param_1 = (uint)(ushort)(&DAT_80147e34)[iVar2 * 2] + (uint)(ushort)(&DAT_80147e36)[iVar2 * 2]
      ;
      iVar4 = iVar1;
    }
  }
  *param_1 = *param_1 << 6;
  return iVar4 << 6;
}




// decompiled code
// original method signature: 
// undefined4 SNDbankadd(int *param_1,int param_2);
 // line 0, offset 0x800e7dec
undefined4 SNDbankadd(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (DAT_8014789c == '\0') {
    uVar3 = 0xfffffff6;
  }
  else {
    iVar1 = iSNDbankalloc();
    *param_1 = iVar1;
    piVar2 = (int *)(DAT_801478f8 + iVar1 * 0xc);
    *piVar2 = param_2;
    piVar2[1] = param_2;
    DAT_801478dc = SNDbankremove;
    uVar3 = iSNDdownloadbank(param_2,param_2);
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// uint SNDstop(uint param_1);
 // line 0, offset 0x800e7e80
uint SNDstop(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint local_10 [2];
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDgetchan(param_1);
    if (-1 < (int)uVar1) {
      local_10[0] = 0xffffffff;
      while (iVar2 = iSNDpatchkey(uVar1,(int *)local_10), iVar2 != 0) {
        iSNDstop(local_10[0]);
      }
    }
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint SNDpitchmult(uint param_1,uint param_2);
 // line 0, offset 0x800e7f08
uint SNDpitchmult(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int local_20 [2];
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDgetchan(param_1);
    if (-1 < (int)uVar1) {
      local_20[0] = -1;
      while (iVar2 = iSNDpatchkey(uVar1,local_20), iVar2 != 0) {
        iVar2 = DAT_801478f4 + local_20[0] * 100;
        if ((uint)*(ushort *)(iVar2 + 0x60) == param_2) break;
        *(undefined2 *)(iVar2 + 0x60) = (short)param_2;
        iSNDcalcpitch(local_20[0]);
        iSNDplatformpitch(local_20[0],(uint)*(ushort *)(iVar2 + 0x62));
      }
    }
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDmastervol(undefined param_1);
 // line 0, offset 0x800e7ff0
undefined4 SNDmastervol(undefined param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar3 = 0;
    iSNDenteraudio();
    DAT_8014789d = param_1;
    if (DAT_80147871 != 0) {
      iVar4 = 0;
      DAT_8014789d = param_1;
      do {
        piVar2 = (int *)(DAT_801478f4 + iVar4);
        if ((*(char *)((int)piVar2 + 0xb) == '\x01') && (-1 < *piVar2)) {
          iSNDcalcvol(iVar3);
          iSNDvol(iVar3,(int)*(char *)((int)piVar2 + 0x2d));
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 100;
      } while (iVar3 < (int)(uint)DAT_80147871);
    }
    iSNDleaveaudio();
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// int puts(char *__s);
 // line 0, offset 0x800e80cc
int puts(char *__s)

{
  int iVar1;
  
  iVar1 = FUN_000000b0();
  return iVar1;
}




// decompiled code
// original method signature: 
// uint SND3dpos(uint param_1,uint param_2);
 // line 0, offset 0x800e80e4
uint SND3dpos(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int local_18 [2];
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDgetchan(param_1);
    if (-1 < (int)uVar1) {
      local_18[0] = -1;
      while (iVar2 = iSNDpatchkey(uVar1,local_18), iVar2 != 0) {
        iSNDplatform3dpos(local_18[0],param_2 & 0xffff);
      }
    }
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void SNDstopall(void);
 // line 0, offset 0x800e81a8
void SNDstopall(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (DAT_80147871 != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      SNDstop(*(uint *)(iVar2 + DAT_801478f4));
      iVar2 = iVar2 + 100;
    } while (iVar1 < (int)(uint)DAT_80147871);
  }
  return;
}




// decompiled code
// original method signature: 
// uchar * gettick(void);
 // line 0, offset 0x800e8220
uchar * gettick(void)

{
  return ticks;
}




// decompiled code
// original method signature: 
// uchar * elapsedticks(void);
 // line 0, offset 0x800e8230
uchar * elapsedticks(void)

{
  int iVar1;
  
  iVar1 = (int)puGp000016f8;
  puGp000016f8 = gettick();
  return puGp000016f8 + -iVar1;
}




// decompiled code
// original method signature: 
// void resettick(void);
 // line 0, offset 0x800e8260
void resettick(void)

{
  ticks = (uchar *)0x0;
  uGp000016f4 = 0;
  uGp000016f8 = 0;
  return;
}




// decompiled code
// original method signature: 
// void timedwait(int param_1);
 // line 0, offset 0x800e8284
void timedwait(int param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar1 = gettick();
  while (puVar2 = gettick(), (int)(puVar2 + -(int)(puVar1 + param_1)) < 0) {
    systemtask(0);
  }
  return;
}




// decompiled code
// original method signature: 
// uint SNDautovol(uint param_1,int param_2,int param_3);
 // line 0, offset 0x800e82d0
uint SNDautovol(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_20 [2];
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDgetchan(param_1);
    if (-1 < (int)uVar1) {
      if (param_2 < 1) {
        param_2 = 1;
      }
      local_20[0] = -1;
      while (iVar2 = iSNDpatchkey(uVar1,local_20), iVar2 != 0) {
        iVar3 = DAT_801478f4 + local_20[0] * 100;
        iVar2 = param_3 * 0x10000 - *(int *)(iVar3 + 0x1c);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && (iVar2 == -0x80000000)) {
          trap(0x1800);
        }
        *(int *)(iVar3 + 0x18) = param_3 * 0x10000;
        *(int *)(iVar3 + 0x14) = iVar2 / param_2;
      }
    }
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// int SNDSTRM_getvol(int param_1);
 // line 0, offset 0x800e83ec
int SNDSTRM_getvol(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_8014789c == '\0') {
    iVar1 = -10;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    iVar1 = -8;
    if ((iVar2 != 0) && (iVar1 = SNDgetvol(*(uint *)(iVar2 + 8)), iVar1 < 0)) {
      iVar1 = (int)*(char *)(iVar2 + 0x54);
    }
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// undefined4 CdDiskReady(int param_1);
 // line 0, offset 0x800e8448
undefined4 CdDiskReady(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_18 [8];
  
  CdControlB(1,(undefined *)0x0,local_18);
  if ((local_18[0] & 0x10) != 0) {
    return 0x10;
  }
  uVar1 = CdControlB(0x13,(undefined *)0x0,local_18);
  if (param_1 == 1) {
    if (local_18[0] == 2) {
      if (uVar1 == 0) {
        return 5;
      }
      return 2;
    }
  }
  else {
    iVar2 = 0;
    do {
      if ((local_18[0] & 2) != 0) {
        while ((local_18[0] != 2 || (uVar1 == 0))) {
          VSync(0x1e);
          uVar1 = CdControlB(0x13,(undefined *)0x0,local_18);
          if ((local_18[0] & 0x10) != 0) {
            return 0x10;
          }
        }
        return 2;
      }
      VSync(0x1e);
      uVar1 = CdControlB(0x13,(undefined *)0x0,local_18);
      if ((local_18[0] & 0x10) != 0) {
        return 0x10;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
  }
  return 5;
}




// decompiled code
// original method signature: 
// uint CdGetDiskType(void);
 // line 0, offset 0x800e8584
uint CdGetDiskType(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char acStack2080 [8];
  undefined uStack2072;
  char acStack2071 [2047];
  byte local_18;
  byte local_17;
  
  CdControl(1,(undefined *)0x0,&local_18);
  uVar1 = 0x10;
  if ((local_18 & 0x10) == 0) {
    CdIntToPos(0x10,acStack2080);
    CdControl(0x1b,acStack2080,(undefined *)0x0);
    iVar3 = 0;
    while( true ) {
      iVar2 = CdReady(0,&local_18);
      iVar3 = iVar3 + 1;
      if ((iVar2 == 1) || (9 < iVar3)) break;
      CdControl(0x1b,acStack2080,(undefined *)0x0);
    }
    if (iVar2 == 1) {
      CdControl(9,(undefined *)0x0,(undefined *)0x0);
      CdGetSector(&uStack2072,0x200);
      iVar3 = strncmp(acStack2071,s_CD001_80056c28,5);
      uVar1 = 1;
      if (iVar3 == 0) {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 0x10;
      if ((local_18 & 0x10) == 0) {
        if (((local_18 & 1) == 0) || ((local_17 & 0x40) == 0)) {
          uVar1 = (uint)((local_18 & 2) != 0);
        }
        else {
          printf(s_Command_Error__80056c18);
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_status(int param_1,int *param_2);
 // line 0, offset 0x800e86d8
undefined4 SNDSTRM_status(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = 0xfffffff6;
  if (DAT_8014789c != '\0') {
    piVar2 = (int *)iSNDstreamgetstreamptr(param_1);
    uVar1 = 0xfffffff8;
    if (piVar2 != (int *)0x0) {
      iSNDenteraudio();
      *param_2 = (int)*(char *)((int)piVar2 + 0x16);
      if ((*(char *)((int)piVar2 + 0x16) != '\0') &&
         (param_2[1] = *(int *)(*piVar2 + 4), *(short *)(piVar2 + 7) != 0)) {
        iVar3 = SNDPKTPLAY_unsafeframesoutstanding(piVar2[3]);
        if (*(ushort *)(piVar2 + 7) == 0) {
          trap(0x1c00);
        }
        param_2[2] = (uint)(iVar3 * 1000) / (uint)*(ushort *)(piVar2 + 7);
      }
      iSNDleaveaudio();
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_requeststatus(uint param_1,undefined4 *param_2);
 // line 0, offset 0x800e87d0
undefined4 SNDSTRM_requeststatus(uint param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_18;
  uint local_14;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (DAT_8014789c == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0xfffffff8;
    if (-1 < (int)param_1) {
      piVar3 = (int *)iSNDstreamgetstreamptr(param_1 & 0xff);
      uVar2 = 0xfffffff8;
      if (piVar3 != (int *)0x0) {
        iSNDenteraudio();
        iVar4 = iSNDstreamgetrequestptr(param_1);
        if (iVar4 == 0) {
          *param_2 = 3;
        }
        else {
          if (*(int *)(iVar4 + 8) < 0) {
            *param_2 = 0;
          }
          else {
            if (*piVar3 == iVar4) {
              *param_2 = 2;
              uVar1 = *(ushort *)(piVar3 + 7);
            }
            else {
              *param_2 = 1;
              uVar1 = *(ushort *)(piVar3 + 8);
            }
            uVar6 = (uint)uVar1;
            iSNDmulu64((int *)&local_18,*(uint *)(iVar4 + 0x14),1000);
            iVar5 = iSNDdivu64(local_18,local_14,uVar6);
            param_2[1] = iVar5;
            iSNDmulu64((int *)&local_18,*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14),1000);
            iVar5 = iSNDdivu64(local_18,local_14,uVar6);
            param_2[2] = iVar5;
            if (uVar1 == 0) {
              trap(0x1c00);
            }
            param_2[3] = (uint)(*(int *)(iVar4 + 0x1c) * 1000) / uVar6;
          }
        }
        iSNDleaveaudio();
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// char * strrstr(char *param_1,byte *param_2);
 // line 0, offset 0x800e8940
char * strrstr(char *param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  
  bVar1 = *param_2;
  pcVar3 = (char *)0x0;
  while (bVar1 != 0) {
    pcVar2 = strrchr(param_1,(uint)*param_2);
    if (pcVar3 < pcVar2) {
      pcVar3 = pcVar2;
    }
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  return pcVar3;
}




// decompiled code
// original method signature: 
// uint wildcard(byte *param_1,byte *param_2);
 // line 0, offset 0x800e89bc
uint wildcard(byte *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar3 = strrstr((char *)param_2,(byte *)&PTR_DAT_8013dc48);
  if (pcVar3 == (char *)0x0) {
LAB_800e8b1c:
    do {
      bVar2 = *param_2;
      if (bVar2 == 0x2a) {
        do {
          uVar4 = wildcard(param_1,param_2 + 1);
          if (uVar4 != 0) {
            return 1;
          }
          bVar2 = *param_1;
          param_1 = param_1 + 1;
        } while (bVar2 != 0);
        return 0;
      }
      if (bVar2 == 0x3f) {
        bVar2 = *param_1;
      }
      else {
        if (bVar2 != 0x23) {
          if (bVar2 == 0x7e) {
            uVar4 = wildcard(param_1,param_2 + 1);
            return (uint)(uVar4 == 0);
          }
          uVar4 = tolower((uint)*param_2);
          uVar5 = tolower((uint)*param_1);
          if ((uVar4 & 0xff) != (uVar5 & 0xff)) {
            return 0;
          }
          bVar2 = *param_2;
          param_2 = param_2 + 1;
          if (bVar2 == 0) {
            return 1;
          }
          param_1 = param_1 + 1;
          goto LAB_800e8b1c;
        }
        bVar2 = (&DAT_801371d1)[(uint)*param_1] & 4;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (bVar2 != 0);
    uVar4 = 0;
  }
  else {
    cVar1 = *pcVar3;
    if (cVar1 == '&') {
      *pcVar3 = '\0';
      uVar5 = 0;
      uVar4 = wildcard(param_1,param_2);
      if (uVar4 != 0) {
        uVar4 = wildcard(param_1,(byte *)(pcVar3 + 1));
        uVar5 = (uint)(uVar4 != 0);
      }
      *pcVar3 = '&';
      return uVar5;
    }
    if (cVar1 == '|') {
      *pcVar3 = '\0';
      uVar4 = 0;
      uVar5 = wildcard(param_1,param_2);
      if ((uVar5 != 0) || (uVar5 = wildcard(param_1,(byte *)(pcVar3 + 1)), uVar5 != 0)) {
        uVar4 = 1;
      }
      cVar1 = '|';
    }
    else {
      if ((cVar1 != '!') && (cVar1 != '~')) {
        if (cVar1 == '^') {
          *pcVar3 = '\0';
          uVar4 = wildcard(param_1,param_2);
          uVar5 = wildcard(param_1,(byte *)(pcVar3 + 1));
          *pcVar3 = '^';
          return uVar4 ^ uVar5;
        }
        goto LAB_800e8b1c;
      }
      *pcVar3 = '\0';
      uVar4 = 0;
      uVar5 = wildcard(param_1,param_2);
      if ((uVar5 != 0) || (uVar5 = wildcard(param_1,(byte *)(pcVar3 + 1)), uVar5 != 0)) {
        uVar4 = 1;
      }
      cVar1 = '!';
    }
    *pcVar3 = cVar1;
  }
  return uVar4;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamdestroyall(void);
 // line 0, offset 0x800e8c14
undefined4 iSNDstreamdestroyall(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    SNDSTRM_destroy(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamgetstreamptr(int param_1);
 // line 0, offset 0x800e8c48
undefined4 iSNDstreamgetstreamptr(int param_1)

{
  if (param_1 == 0) {
    return sndss;
  }
  return 0;
}




// decompiled code
// original method signature: 
// void iSNDstreamremoverequest(uint param_1);
 // line 0, offset 0x800e8c64
void iSNDstreamremoverequest(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar6 = (int *)(&sndss)[param_1 & 0xff];
  cVar10 = '\0';
  iVar7 = 0;
  if (0 < (int)((uint)*(byte *)((int)piVar6 + 0x16) << 0x18)) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      puVar3 = (undefined4 *)(*piVar6 + iVar9);
      if (puVar3[1] != param_1) {
        if ((int)*(char *)((int)piVar6 + 0x17) == iVar7) {
          *(char *)((int)piVar6 + 0x17) = cVar10;
        }
        puVar1 = (undefined4 *)(iVar8 + *piVar6);
        puVar5 = puVar3;
        do {
          puVar4 = puVar5;
          puVar2 = puVar1;
          uVar11 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          *puVar2 = *puVar4;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar13;
          puVar5 = puVar4 + 4;
          puVar1 = puVar2 + 4;
        } while (puVar5 != puVar3 + 8);
        uVar11 = puVar4[5];
        uVar12 = puVar4[6];
        puVar2[4] = *puVar5;
        puVar2[5] = uVar11;
        puVar2[6] = uVar12;
        iVar8 = iVar8 + 0x2c;
        cVar10 = cVar10 + '\x01';
      }
      iVar9 = iVar9 + 0x2c;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)*(char *)((int)piVar6 + 0x16));
  }
  *(char *)((int)piVar6 + 0x16) = *(char *)((int)piVar6 + 0x16) + -1;
  if ((int)((uint)*(byte *)((int)piVar6 + 0x16) << 0x18) <
      (int)((uint)*(byte *)((int)piVar6 + 0x17) << 0x18)) {
    *(char *)((int)piVar6 + 0x17) = *(char *)((int)piVar6 + 0x17) + -1;
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDstreamreleasecallback(int param_1);
 // line 0, offset 0x800e8d90
void iSNDstreamreleasecallback(int param_1)

{
  STREAM_release(*(int ***)((&sndss)[(uint)*(byte *)*(int **)(param_1 + -4)] + 4),
                 *(int **)(param_1 + -4));
  return;
}




// decompiled code
// original method signature: 
// void iSNDstreamnotifycallback(int param_1,uint param_2);
 // line 0, offset 0x800e8dd4
void iSNDstreamnotifycallback(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)(&sndss)[(int)*(char *)((int)&DAT_8013ea84 + param_1)];
  do {
    iVar1 = *piVar4;
    uVar2 = param_2;
    uVar3 = 0;
    if (*(uint *)(iVar1 + 0x1c) < param_2) {
      uVar3 = param_2 - *(int *)(iVar1 + 0x1c);
      uVar2 = param_2 - uVar3;
    }
    param_2 = uVar3;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + uVar2;
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) - uVar2;
    if (*(uint *)(iVar1 + 0x18) <= *(uint *)(iVar1 + 0x14)) {
      iSNDstreamremoverequest(*(uint *)(iVar1 + 4));
    }
  } while (param_2 != 0);
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamparseheader(int *param_1,int *param_2);
 // line 0, offset 0x800e8e9c
undefined4 iSNDstreamparseheader(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_20 [2];
  
  piVar4 = param_1 + 8;
  iVar3 = *param_1 + (int)*(char *)((int)param_1 + 0x17) * 0x2c;
  iSNDpatchtohdr((int)(param_2 + 3),(undefined2 *)piVar4,param_1 + 0xe,local_20);
  *(int *)(iVar3 + 0x18) = local_20[0];
  STREAM_release((int **)param_1[1],param_2);
  *(int *)(iVar3 + 0x18) = ((*(int *)(iVar3 + 0x18) + 0x1b) / 0x1c) * 0x1c;
  iVar1 = iSNDplatformcalcdatarate((ushort *)piVar4);
  *(int *)(iVar3 + 0x10) = iVar1;
  iVar1 = memcmp((byte *)(param_1 + 7),(byte *)piVar4,4);
  if ((iVar1 != 0) ||
     (iVar1 = memcmp((byte *)(param_1 + 9),(byte *)(param_1 + 0xe),0x14), iVar1 != 0)) {
    if (*(short *)(param_1 + 7) != 0) {
      *(undefined *)(param_1 + 5) = 2;
      return 0;
    }
    param_1[7] = param_1[8];
    param_1[9] = param_1[0xe];
    param_1[10] = param_1[0xf];
    param_1[0xb] = param_1[0x10];
    param_1[0xc] = param_1[0x11];
    param_1[0xd] = param_1[0x12];
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    uVar2 = SNDPKTPLAY_start(param_1[3],(uint *)(param_1 + 7),(uint *)(param_1 + 9),
                             (int)(param_1 + 0x13));
    param_1[2] = uVar2;
    *(undefined *)(param_1 + 5) = 1;
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamparsenumchunks(int *param_1,int *param_2);
 // line 0, offset 0x800e9044
undefined4 iSNDstreamparsenumchunks(int *param_1,int *param_2)

{
  STREAM_release((int **)param_1[1],param_2);
  *(int *)((int)*(char *)((int)param_1 + 0x17) * 0x2c + *param_1 + 0x24) = param_2[3];
  return 1;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamparsedata(int *param_1,undefined4 *param_2);
 // line 0, offset 0x800e90ac
undefined4 iSNDstreamparsedata(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  undefined auStack40 [4];
  int local_24;
  int local_1c;
  
  iVar3 = param_2[3];
  if (*(char *)((int)param_1 + 0x2f) == '\0') {
    iVar7 = 0;
    if (*(char *)((int)param_1 + 0x1e) != '\0') {
      puVar6 = auStack40;
      do {
        *(undefined4 **)(puVar6 + 0xc) = param_2 + 4;
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar7 < (int)(uint)*(byte *)((int)param_1 + 0x1e));
    }
  }
  else {
    bVar1 = *(byte *)((int)param_1 + 0x1e);
    iVar7 = 0;
    if (bVar1 != 0) {
      puVar6 = auStack40;
      piVar8 = param_2 + 4;
      do {
        iVar4 = *piVar8;
        piVar8 = piVar8 + 1;
        iVar7 = iVar7 + 1;
        *(uint *)(puVar6 + 0xc) = (int)(param_2 + 4) + iVar4 + (uint)bVar1 * 4;
        puVar6 = puVar6 + 4;
      } while (iVar7 < (int)(uint)*(byte *)((int)param_1 + 0x1e));
    }
  }
  local_24 = ((iVar3 + 0x1b) / 0x1c) * 0x1c;
  cVar2 = *(char *)((int)param_1 + 0x17);
  iVar3 = *param_1;
  *(undefined4 **)(local_1c + -4) = param_2;
  iVar3 = iVar3 + (int)cVar2 * 0x2c;
  *param_2 = *(undefined4 *)(iVar3 + 4);
  *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + local_24;
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
  uVar5 = SNDPKTPLAY_submit(param_1[3],(int)auStack40);
  *(undefined4 *)(iVar3 + 0xc) = uVar5;
  if (*(int *)(iVar3 + 8) < 0) {
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + 0xc);
  }
  return 1;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamparseend(int param_1,int *param_2);
 // line 0, offset 0x800e9230
undefined4 iSNDstreamparseend(int param_1,int *param_2)

{
  STREAM_release(*(int ***)(param_1 + 4),param_2);
  *(char *)(param_1 + 0x17) = *(char *)(param_1 + 0x17) + '\x01';
  return 1;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamparsechunk(int *param_1,int *param_2);
 // line 0, offset 0x800e9270
undefined4 iSNDstreamparsechunk(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  uVar2 = 1;
  if (iVar1 == 0x6c444353) {
    uVar2 = iSNDstreamparsedata(param_1,param_2);
  }
  else {
    if (iVar1 == 0x6c484353) {
      uVar2 = iSNDstreamparseheader(param_1,param_2);
    }
    else {
      if (iVar1 == 0x6c454353) {
        uVar2 = iSNDstreamparseend((int)param_1,param_2);
      }
      else {
        if (iVar1 == 0x6c434353) {
          uVar2 = iSNDstreamparsenumchunks(param_1,param_2);
        }
        else {
          STREAM_release((int **)param_1[1],param_2);
        }
      }
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstreamisheld(int *param_1);
 // line 0, offset 0x800e9318
undefined4 iSNDstreamisheld(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1 + (int)*(char *)((int)param_1 + 0x17) * 0x2c;
  uVar1 = 0;
  if (((*(int *)(iVar4 + 0x10) != 0) &&
      (uVar1 = 1, -1 < (int)((uint)*(ushort *)(iVar4 + 0x28) << 0x10))) &&
     (uVar1 = 0, *(short *)(iVar4 + 0x28) != 0)) {
    uVar2 = STREAM_gettable((int **)param_1[1]);
    if (4000000 < uVar2) {
      uVar2 = 4000000;
    }
    if (*(uint *)(iVar4 + 0x10) == 0) {
      trap(0x1c00);
    }
    if (((uVar2 * 1000) / *(uint *)(iVar4 + 0x10) < (uint)(int)*(short *)(iVar4 + 0x28)) &&
       (iVar3 = STREAM_state((int **)param_1[1]), iVar3 != 2)) {
      return 1;
    }
    *(undefined2 *)(iVar4 + 0x28) = 0;
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void iSNDstreamhotroddatachunks(void);
 // line 0, offset 0x800e9438
void iSNDstreamhotroddatachunks(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar7 = 0;
  ppiVar6 = (int **)&sndss;
  do {
    piVar3 = *ppiVar6;
    if (((((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x16) != '\0')) &&
         (*(char *)(piVar3 + 5) == '\x01')) &&
        ((iVar1 = iSNDstreamisheld(piVar3), iVar1 == 0 &&
         (iVar1 = *piVar3 + (int)*(char *)((int)piVar3 + 0x17) * 0x2c, *(int *)(iVar1 + 0x24) != 0))
        )) && (*(int *)(iVar1 + 0x20) != 0)) {
      iVar4 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
      iVar1 = SNDPKTPLAY_submitspace(piVar3[3]);
      if (iVar4 < iVar1) {
        iVar1 = iVar4;
      }
      if (0 < iVar1) {
        do {
          iVar1 = iVar1 + -1;
          puVar2 = (undefined4 *)STREAM_get((int **)piVar3[1]);
          if (puVar2 != (undefined4 *)0x0) {
            iVar5 = iVar5 + puVar2[1];
            iSNDstreamparsedata(piVar3,puVar2);
          }
        } while ((0 < iVar1) && (iVar5 < 0x4000));
      }
    }
    iVar7 = iVar7 + 1;
    ppiVar6 = ppiVar6 + 1;
  } while (iVar7 < 1);
  return;
}




// decompiled code
// original method signature: 
// void iSNDstreamservice(void);
 // line 0, offset 0x800e9590
void iSNDstreamservice(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  
  iSNDenteraudio();
  iVar7 = 0;
  ppiVar6 = (int **)&sndss;
  do {
    piVar4 = *ppiVar6;
    if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x16) != '\0')) {
      if (*(char *)(piVar4 + 5) == '\x02') {
        iVar1 = SNDPKTPLAY_framesoutstanding(piVar4[3]);
        if (0 < iVar1) goto LAB_800e96c4;
        piVar4[7] = piVar4[8];
        SNDPKTPLAY_stop(piVar4[3]);
        uVar2 = SNDPKTPLAY_start(piVar4[3],(uint *)(piVar4 + 7),(uint *)(piVar4 + 9),
                                 (int)(piVar4 + 0x13));
        piVar4[2] = uVar2;
        *(undefined *)(piVar4 + 5) = 1;
      }
      iVar1 = iSNDstreamisheld(piVar4);
      if (iVar1 == 0) {
        iVar1 = 10;
        if (*(char *)(piVar4 + 5) == '\x01') {
          iVar1 = SNDPKTPLAY_submitspace(piVar4[3]);
          if (iVar1 == 0) goto LAB_800e96c4;
          iVar5 = 0;
        }
        else {
          iVar5 = 0;
        }
        do {
          iVar1 = iVar1 + -1;
          piVar3 = (int *)STREAM_get((int **)piVar4[1]);
          if (piVar3 != (int *)0x0) {
            iVar5 = iSNDstreamparsechunk(piVar4,piVar3);
          }
        } while ((iVar5 != 0) && (0 < iVar1));
      }
    }
LAB_800e96c4:
    iVar7 = iVar7 + 1;
    ppiVar6 = ppiVar6 + 1;
    if (0 < iVar7) {
      iSNDleaveaudio();
      return;
    }
  } while( true );
}




// decompiled code
// original method signature: 
// int iSNDstreamnumcreated(void);
 // line 0, offset 0x800e96f8
int iSNDstreamnumcreated(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  piVar1 = &sndss;
  do {
    if (*piVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 1);
  return iVar3;
}




// decompiled code
// original method signature: 
// int iSNDstreamcreate(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int param_7);
 // line 0, offset 0x800e9730
int iSNDstreamcreate(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
                    int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int iVar6;
  
  if (DAT_8014789c == '\0') {
    iVar1 = -10;
  }
  else {
    iVar1 = 0;
    piVar5 = &sndss;
    do {
      if (*piVar5 == 0) {
        piVar5 = param_4 + 0x18;
        *(int **)param_4 = piVar5;
        iVar2 = SNDPKTPLAY_overhead(param_3);
        iVar3 = SNDPKTPLAY_overhead(param_3);
        iVar3 = SNDPKTPLAY_create(piVar5 + param_2 * 0xb,iVar3,iSNDstreamreleasecallback,
                                  iSNDstreamnotifycallback);
        param_4[3] = iVar3;
        if (param_4[3] < 0) {
          return param_4[3];
        }
        *(undefined *)((int)&DAT_8013ea84 + param_4[3]) = (char)iVar1;
        if (param_7 == 0) {
          ppiVar4 = (int **)STREAM_create(param_2 + 1,1,1,
                                          (undefined4 *)((int)(piVar5 + param_2 * 0xb) + iVar2),
                                          (param_5 + -0x60 + param_2 * -0x2c) - iVar2);
          *(int ***)(param_4 + 1) = ppiVar4;
          *(undefined *)(param_4 + 6) = 0;
          iVar2 = STREAM_buffersize(ppiVar4);
          SNDSTRM_setgreedylevel(param_4[1],iVar2 / 3);
        }
        else {
          param_4[1] = param_6;
          *(undefined *)(param_4 + 6) = 1;
        }
        param_4[4] = 0;
        param_4[2] = -1;
        *(undefined *)((int)param_4 + 0x15) = (char)param_2;
        iVar3 = param_1[1];
        iVar6 = param_1[2];
        iVar2 = param_1[3];
        param_4[0x13] = *param_1;
        param_4[0x14] = iVar3;
        param_4[0x15] = iVar6;
        param_4[0x16] = iVar2;
        param_4[0x17] = param_1[4];
        iVar2 = iSNDstreamnumcreated();
        if (iVar2 == 0) {
          iSNDserveraddclient(iSNDstreamservice);
          DAT_801478e8 = iSNDstreamdestroyall;
        }
        *(int **)(&sndss + iVar1) = param_4;
        SNDSTRM_purge(iVar1);
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 < 1);
    iVar1 = -9;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// uint iSNDstreamqueue(uint param_1,undefined2 param_2,uint *param_3,uint param_4,int param_5);
 // line 0, offset 0x800e9970
uint iSNDstreamqueue(uint param_1,undefined2 param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    piVar2 = (int *)iSNDstreamgetstreamptr(param_1);
    uVar1 = 0xfffffff8;
    if (piVar2 != (int *)0x0) {
      iSNDenteraudio();
      if ((int)((uint)*(byte *)((int)piVar2 + 0x16) << 0x18) <
          (int)((uint)*(byte *)((int)piVar2 + 0x15) << 0x18)) {
        puVar3 = (uint *)(*piVar2 + (int)*(char *)((int)piVar2 + 0x16) * 0x2c);
        if (param_5 == 0) {
          uVar1 = STREAM_queuefile((int **)piVar2[1],(char *)param_3,param_4,0x6c454353);
          *puVar3 = uVar1;
        }
        else {
          if (param_5 == 1) {
            uVar1 = STREAM_queuemem((int **)piVar2[1],param_3,0,0x6c454353);
            *puVar3 = uVar1;
          }
          else {
            *puVar3 = param_4;
          }
        }
        if (*puVar3 == 0) {
          iSNDleaveaudio();
          uVar1 = 0xffffffff;
        }
        else {
          piVar2[4] = piVar2[4] + 0x100;
          if (piVar2[4] < 0) {
            piVar2[4] = 0;
          }
          puVar3[1] = piVar2[4] | param_1;
          *(undefined2 *)(puVar3 + 10) = param_2;
          *(char *)((int)piVar2 + 0x16) = *(char *)((int)piVar2 + 0x16) + '\x01';
          puVar3[4] = 0;
          puVar3[2] = 0xffffffff;
          puVar3[3] = 0xffffffff;
          puVar3[5] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          iSNDleaveaudio();
          uVar1 = puVar3[1];
        }
      }
      else {
        iSNDleaveaudio();
        uVar1 = 0xfffffff3;
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void SNDSTRM_create(int *param_1,int param_2,int param_3,int *param_4,int param_5);
 // line 0, offset 0x800e9b44
void SNDSTRM_create(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  iSNDstreamcreate(param_1,param_2,param_3,param_4,param_5,0,0);
  return;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_destroy(int param_1);
 // line 0, offset 0x800e9b70
undefined4 SNDSTRM_destroy(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    uVar1 = 0xfffffff8;
    if (iVar2 != 0) {
      SNDSTRM_purge(param_1);
      iVar3 = iSNDstreamnumcreated();
      if (iVar3 == 1) {
        iSNDserverremoveclient((int)iSNDstreamservice);
        DAT_801478e8 = 0;
      }
      SNDPKTPLAY_destroy(*(int *)(iVar2 + 0xc));
      if (*(char *)(iVar2 + 0x18) == '\0') {
        STREAM_destroy(*(int ***)(iVar2 + 4));
      }
      (&sndss)[param_1] = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void SNDSTRM_queuefile(uint param_1,undefined2 param_2,uint *param_3,uint param_4);
 // line 0, offset 0x800e9c38
void SNDSTRM_queuefile(uint param_1,undefined2 param_2,uint *param_3,uint param_4)

{
  iSNDstreamqueue(param_1,param_2,param_3,param_4,0);
  return;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_purge(int param_1);
 // line 0, offset 0x800e9c58
undefined4 SNDSTRM_purge(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    uVar1 = 0xfffffff8;
    if (iVar2 != 0) {
      if (-1 < *(int *)(iVar2 + 8)) {
        SNDPKTPLAY_stop(*(int *)(iVar2 + 0xc));
      }
      *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      if (*(char *)(iVar2 + 0x18) == '\0') {
        STREAM_kill(*(int ***)(iVar2 + 4));
      }
      *(undefined *)(iVar2 + 0x16) = 0;
      *(undefined *)(iVar2 + 0x17) = 0;
      *(undefined *)(iVar2 + 0x14) = 0;
      memset((void *)(iVar2 + 0x1c),0,4);
      memset((void *)(iVar2 + 0x20),0,4);
      memset((void *)(iVar2 + 0x24),0,0x14);
      memset((void *)(iVar2 + 0x38),0,0x14);
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_setgreedylevel(int param_1,int param_2);
 // line 0, offset 0x800e9d30
undefined4 SNDSTRM_setgreedylevel(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    if (iVar2 == 0) {
      uVar1 = 0xfffffff8;
    }
    else {
      STREAM_setgreedylevel(*(int ***)(iVar2 + 4),param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_setgreedystate(int param_1,int param_2);
 // line 0, offset 0x800e9d8c
undefined4 SNDSTRM_setgreedystate(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    if (iVar2 == 0) {
      uVar1 = 0xfffffff8;
    }
    else {
      STREAM_setgreedystate(*(int ***)(iVar2 + 4),param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_autovol(int param_1,int param_2,int param_3);
 // line 0, offset 0x800e9de8
undefined4 SNDSTRM_autovol(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    if (iVar2 == 0) {
      uVar1 = 0xfffffff8;
    }
    else {
      *(undefined *)(iVar2 + 0x54) = (char)param_3;
      SNDautovol(*(uint *)(iVar2 + 8),param_2 / 10,param_3);
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SetRCnt(uint param_1,undefined2 param_2,uint param_3);
 // line 0, offset 0x800e9e70
undefined4 SetRCnt(uint param_1,undefined2 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  ushort uVar3;
  
  param_1 = param_1 & 0xffff;
  uVar3 = 0x48;
  if (param_1 < 3) {
    puVar2 = PTR_TMR_DOTCLOCK_VAL_801234b8 + param_1 * 0x10;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined2 *)(puVar2 + 8) = param_2;
    if (param_1 < 2) {
      if ((param_3 & 0x10) != 0) {
        uVar3 = 0x49;
      }
      if ((param_3 & 1) == 0) {
        uVar3 = uVar3 | 0x100;
      }
    }
    else {
      if ((param_1 == 2) && ((param_3 & 1) == 0)) {
        uVar3 = 0x248;
      }
    }
    uVar1 = 1;
    if ((param_3 & 0x1000) != 0) {
      uVar3 = uVar3 | 0x10;
    }
    *(ushort *)(PTR_TMR_DOTCLOCK_VAL_801234b8 + param_1 * 0x10 + 4) = uVar3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint GetRCnt(uint param_1);
 // line 0, offset 0x800e9f0c
uint GetRCnt(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0xffff) < 3) {
    uVar1 = (uint)*(ushort *)(PTR_TMR_DOTCLOCK_VAL_801234b8 + (param_1 & 0xffff) * 0x10);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint StartRCnt(uint param_1);
 // line 0, offset 0x800e9f44
uint StartRCnt(uint param_1)

{
  *(uint *)(PTR_I_STAT_801234b4 + 4) =
       *(uint *)(PTR_I_STAT_801234b4 + 4) | *(uint *)(&DAT_801234bc + (param_1 & 0xffff) * 4);
  return (uint)((param_1 & 0xffff) < 3);
}




// decompiled code
// original method signature: 
// size_t strlen(char *__s);
 // line 0, offset 0x800e9f74
size_t strlen(char *__s)

{
  size_t sVar1;
  
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)0xa0)();
  return sVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDgetlimits(undefined4 *param_1);
 // line 0, offset 0x800e9f84
undefined4 SNDgetlimits(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar2 = DAT_801234dc;
  uVar1 = DAT_801234d8;
  if (DAT_8014789c != '\0') {
    *param_1 = sndpsxlimits;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    puVar3 = PTR_DAT_801234e4;
    param_1[3] = DAT_801234e0;
    *(undefined **)(param_1 + 4) = puVar3;
    return 0;
  }
  return 0xfffffff2;
}




// decompiled code
// original method signature: 
// undefined4 SNDsetlimits(undefined4 *param_1);
 // line 0, offset 0x800e9fd4
undefined4 SNDsetlimits(undefined4 *param_1)

{
  if (DAT_8014789c == '\0') {
    return 0xfffffff6;
  }
  if (0x1fff < (int)param_1[4]) {
    sndpsxlimits = *param_1;
    DAT_801234d8 = param_1[1];
    DAT_801234dc = param_1[2];
    DAT_801234e0 = param_1[3];
    PTR_DAT_801234e4 = (undefined *)(param_1[4] & 0xffffe000);
    return 0;
  }
  return 0xffffffff;
}




// decompiled code
// original method signature: 
// int SNDSTRM_overheadtap(int param_1,int param_2);
 // line 0, offset 0x800ea054
int SNDSTRM_overheadtap(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = SNDPKTPLAY_overhead(param_2);
  return param_1 * 0x2c + 0x60 + iVar1;
}




// decompiled code
// original method signature: 
// int SNDSTRM_overhead(int param_1,int param_2);
 // line 0, offset 0x800ea094
int SNDSTRM_overhead(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SNDSTRM_overheadtap(param_1,param_2);
  iVar2 = STREAM_overhead(param_1 + 1,1,1);
  return iVar1 + iVar2;
}




// decompiled code
// original method signature: 
// undefined4 SNDSTRM_vol(int param_1,int param_2);
 // line 0, offset 0x800ea0d8
undefined4 SNDSTRM_vol(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = iSNDstreamgetstreamptr(param_1);
    if (iVar2 == 0) {
      uVar1 = 0xfffffff8;
    }
    else {
      *(undefined *)(iVar2 + 0x54) = (char)param_2;
      SNDvol(*(uint *)(iVar2 + 8),param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void iSNDserver(void);
 // line 0, offset 0x800ea138
void iSNDserver(void)

{
  uint uVar1;
  
  if (DAT_8014789e == '\0') {
    if (DAT_8014789f == '\0') {
      DAT_8014789e = 1;
      if (timerhz != (uchar *)(int)DAT_80147910) {
        DAT_80147910 = (short)timerhz;
        DAT_801478a4 = 0;
        DAT_8014790c = 0;
      }
      DAT_8014790c = DAT_8014790c + 1;
      uVar1 = (uint)(DAT_8014790c * 100) / (uint)timerhz;
      if (timerhz == (uchar *)0x0) {
        trap(0x1c00);
      }
      while (DAT_801478a4 <= uVar1) {
        (*DAT_801478a8)();
      }
      DAT_8014789e = '\0';
    }
    else {
      DAT_80147912 = DAT_80147912 + 1;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void iSND100hzserver(void);
 // line 0, offset 0x800ea254
void iSND100hzserver(void)

{
  code **ppcVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  
  puVar10 = &sndgs;
  DAT_801478a4 = DAT_801478a4 + 1;
  iVar12 = 0;
  iSNDserve();
  if ('\0' < DAT_801478a0) {
    do {
      ppcVar1 = (code **)(puVar10 + 0x13);
      puVar10 = puVar10 + 1;
      (**ppcVar1)();
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)DAT_801478a0);
  }
  iVar12 = 0;
  if (DAT_80147871 != 0) {
    iVar13 = 0;
    do {
      puVar11 = (uint *)(DAT_801478f4 + iVar13);
      if ((*(char *)((int)puVar11 + 0xb) == '\x01') && (-1 < (int)*puVar11)) {
        if (puVar11[0x15] != 0) {
          bVar4 = *(char *)((int)puVar11 + 0x3b) + 1;
          *(byte *)((int)puVar11 + 0x3b) = bVar4;
          if (*(byte *)((int)puVar11 + 0x39) <= bVar4) {
            *(undefined *)((int)puVar11 + 0x3b) = 0;
          }
          *(undefined2 *)((int)puVar11 + 0x5e) = 0;
          iSNDcalcpitch(iVar12);
          iSNDplatformpitch(iVar12,(uint)*(ushort *)((int)puVar11 + 0x62));
        }
        bVar3 = false;
        if (puVar11[0x14] != 0) {
          bVar3 = true;
          bVar4 = *(char *)((int)puVar11 + 0x3a) + 1;
          *(byte *)((int)puVar11 + 0x3a) = bVar4;
          if (*(byte *)(puVar11 + 0xe) <= bVar4) {
            *(undefined *)((int)puVar11 + 0x3a) = 0;
          }
        }
        uVar9 = puVar11[5];
        if (uVar9 == 0) {
LAB_800ea3f0:
          if (puVar11[8] != 0) {
            bVar3 = true;
            puVar11[9] = puVar11[9] + puVar11[8];
          }
          uVar9 = puVar11[10];
          if (uVar9 == 0) {
            cVar5 = *(char *)((int)puVar11 + 0x31) + '\x01';
            *(char *)((int)puVar11 + 0x31) = cVar5;
            if ((int)*(char *)(puVar11 + 0xc) <= (int)cVar5) goto LAB_800ea444;
            puVar8 = (uint *)(puVar11[0x10] + (int)cVar5 * 8);
            uVar9 = *puVar8;
            puVar11[10] = uVar9;
            if ((int)uVar9 < 0) {
              puVar11[10] = 0x7fffffff;
            }
            uVar9 = puVar11[10];
            iVar7 = puVar8[1] * 0x10000 - puVar11[9];
            if (uVar9 == 0) {
              trap(0x1c00);
            }
            if ((uVar9 == 0xffffffff) && (iVar7 == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[8] = iVar7 / (int)uVar9;
            uVar9 = puVar11[10];
          }
          puVar11[10] = uVar9 - 1;
          if ((bVar3) && (iSNDcalcvol(iVar12), -1 < (int)*puVar11)) {
            iSNDvol(iVar12,(int)*(char *)((int)puVar11 + 0x2d));
          }
        }
        else {
          bVar3 = true;
          uVar6 = puVar11[7] + uVar9;
          puVar11[7] = uVar6;
          if ((int)uVar9 < 0) {
            uVar9 = puVar11[6];
            bVar2 = (int)uVar9 < (int)uVar6;
          }
          else {
            uVar9 = puVar11[6];
            bVar2 = (int)uVar6 < (int)uVar9;
          }
          if (!bVar2) {
            puVar11[7] = uVar9;
            puVar11[5] = 0;
          }
          if (-1 < (int)puVar11[7]) goto LAB_800ea3f0;
LAB_800ea444:
          SNDstop(*puVar11);
        }
      }
      iVar13 = iVar13 + 100;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(uint)DAT_80147871);
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDenteraudio(void);
 // line 0, offset 0x800ea534
void iSNDenteraudio(void)

{
  SNDI_mutexlock();
  DAT_8014789f = DAT_8014789f + '\x01';
  return;
}




// decompiled code
// original method signature: 
// void iSNDleaveaudio(void);
 // line 0, offset 0x800ea56c
void iSNDleaveaudio(void)

{
  DAT_8014789f = DAT_8014789f + -1;
  SNDI_mutexunlock();
  if (DAT_8014789f == '\0') {
    while (DAT_80147912 != 0) {
      DAT_80147912 = DAT_80147912 + -1;
      iSNDserver();
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDserveradd100hzclient(undefined4 param_1);
 // line 0, offset 0x800ea5f0
void iSNDserveradd100hzclient(undefined4 param_1)

{
  (&DAT_801478ac)[(int)DAT_801478a0] = param_1;
  DAT_801478a0 = DAT_801478a0 + '\x01';
  return;
}




// decompiled code
// original method signature: 
// void iSNDserverremove100hzclient(int param_1);
 // line 0, offset 0x800ea620
void iSNDserverremove100hzclient(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ('\0' < DAT_801478a0) {
    iVar1 = 0;
    while (*(int *)((int)&DAT_801478ac + iVar1) != param_1) {
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 * 4;
      if ((int)DAT_801478a0 <= iVar2) {
        return;
      }
    }
    DAT_801478a0 = DAT_801478a0 + -1;
    if (iVar2 < (int)DAT_801478a0) {
      do {
        iVar1 = iVar2 + 1;
        (&DAT_801478ac)[iVar2] = (&DAT_801478ac)[iVar1];
        iVar2 = iVar1;
      } while (iVar1 < (int)DAT_801478a0);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void synccallback(uint param_1,int param_2,undefined4 *param_3);
 // line 0, offset 0x800ea6cc
void synccallback(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FILE_completeop(param_1);
  param_3[8] = 0;
  if (param_2 == 1) {
    param_3[2] = param_3[2] + uVar1;
    param_3[4] = param_3[4] + uVar1;
    param_3[6] = param_3[6] + uVar1;
    if ((int)uVar1 < (int)param_3[5]) {
      param_3[3] = 0;
    }
    else {
      param_3[3] = param_3[3] - uVar1;
    }
    if ((int)param_3[3] < 1) {
      return;
    }
    uVar2 = 0x2000;
    if ((int)param_3[3] < 0x2001) {
      uVar2 = param_3[3];
    }
    param_3[5] = uVar2;
    uVar1 = (*(code *)param_3[7])(param_3[1],param_3[2],param_3[6],param_3[5],*param_3,param_3);
    param_3[8] = uVar1;
    if (uVar1 != 0) {
      FILE_callbackop(uVar1,synccallback);
      return;
    }
  }
  param_3[3] = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 syncblockio(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined *param_6);
 // line 0, offset 0x800ea7e8
undefined4
syncblockio(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
           undefined *param_6)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined *local_14;
  uint local_10;
  
  local_30 = param_5;
  local_20 = 0;
  local_14 = param_6;
  local_1c = param_4;
  if (0x2000 < param_4) {
    local_1c = 0x2000;
  }
  local_2c = param_1;
  local_28 = param_2;
  local_24 = param_4;
  local_18 = param_3;
  local_10 = (*(code *)param_6)(param_1,param_2,param_3,local_1c,param_5,&local_30);
  if (local_10 != 0) {
    FILE_callbackop(local_10,synccallback);
    while ((local_24 != 0 || (local_10 != 0))) {
      FILE_waitop(local_10);
    }
  }
  return local_20;
}




// decompiled code
// original method signature: 
// uint FILE_opensync(char *param_1,uint param_2,uint param_3,uint *param_4);
 // line 0, offset 0x800ea8a8
uint FILE_opensync(char *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = FILE_open(param_1,param_2,param_3,0);
  if (uVar1 == 0) {
    *param_4 = 0;
  }
  else {
    FILE_waitop(uVar1);
    uVar2 = FILE_opstatus(uVar1);
    uVar2 = (uint)(uVar2 == 1);
    uVar1 = FILE_completeop(uVar1);
    *param_4 = uVar1;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void FILE_readsync(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5);
 // line 0, offset 0x800ea920
void FILE_readsync(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5)

{
  syncblockio(param_1,param_2,param_3,param_4,param_5,FILE_read);
  return;
}




// decompiled code
// original method signature: 
// uint FILE_closesync(uint param_1,uint param_2);
 // line 0, offset 0x800ea950
uint FILE_closesync(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FILE_close(param_1,param_2,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    FILE_waitop(uVar1);
    uVar2 = FILE_completeop(uVar1);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint FILE_sizesync(uint param_1,uint param_2);
 // line 0, offset 0x800ea9a4
uint FILE_sizesync(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FILE_size(param_1,param_2,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    FILE_waitop(uVar1);
    uVar2 = FILE_completeop(uVar1);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint FILE_addbigsync(char *param_1,uint param_2,uint param_3,uint *param_4);
 // line 0, offset 0x800ea9f8
uint FILE_addbigsync(char *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar1 = FILE_addbig(param_1,param_2,param_3,0);
  if (puVar1 == (uint *)0x0) {
    *param_4 = 0;
  }
  else {
    FILE_waitop((uint)puVar1);
    uVar3 = FILE_opstatus((uint)puVar1);
    uVar3 = (uint)(uVar3 == 1);
    uVar2 = FILE_completeop((uint)puVar1);
    *param_4 = uVar2;
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// uint FILE_delbigsync(int param_1,uint param_2);
 // line 0, offset 0x800eaa70
uint FILE_delbigsync(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FILE_delbig(param_1,param_2,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    FILE_waitop(uVar1);
    uVar2 = FILE_completeop(uVar1);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void * memcpy(void *__dest,void *__src,size_t __n);
 // line 0, offset 0x800eaac4
void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)0xa0)();
  return pvVar1;
}




// decompiled code
// original method signature: 
// int rand(void);
 // line 0, offset 0x800eaad4
/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// void crossproduct(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x800eaae4
void crossproduct(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fixedmult(param_1[1],param_2[2]);
  uVar2 = fixedmult(param_1[2],param_2[1]);
  *param_3 = uVar1 - uVar2;
  uVar1 = fixedmult(*param_1,param_2[2]);
  uVar2 = fixedmult(param_1[2],*param_2);
  param_3[1] = uVar2 - uVar1;
  uVar1 = fixedmult(*param_1,param_2[1]);
  uVar2 = fixedmult(param_1[1],*param_2);
  param_3[2] = uVar1 - uVar2;
  return;
}




// decompiled code
// original method signature: 
// void SetGeomScreen(undefined4 param_1);
 // line 0, offset 0x800eab9c
void SetGeomScreen(undefined4 param_1)

{
  setCopControlWord(2,0xd000,param_1);
  return;
}




// decompiled code
// original method signature: 
// void fixedxformx(undefined4 *param_1,uint param_2);
 // line 0, offset 0x800eabac
void fixedxformx(undefined4 *param_1,uint param_2)

{
  int local_10;
  int local_c;
  
  fixedsincos(param_2,&local_10,&local_c);
  *param_1 = 0x10000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = local_10;
  param_1[4] = local_c;
  param_1[7] = -local_10;
  param_1[8] = local_c;
  return;
}




// decompiled code
// original method signature: 
// void fixedxformy(int *param_1,uint param_2);
 // line 0, offset 0x800eac10
void fixedxformy(int *param_1,uint param_2)

{
  int local_10;
  int local_c;
  
  fixedsincos(param_2,&local_10,&local_c);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0x10000;
  param_1[5] = 0;
  param_1[7] = 0;
  *param_1 = local_c;
  param_1[2] = -local_10;
  param_1[6] = local_10;
  param_1[8] = local_c;
  return;
}




// decompiled code
// original method signature: 
// void fixedxformz(int *param_1,uint param_2);
 // line 0, offset 0x800eac74
void fixedxformz(int *param_1,uint param_2)

{
  int local_10;
  int local_c;
  
  fixedsincos(param_2,&local_10,&local_c);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x10000;
  param_1[1] = local_10;
  *param_1 = local_c;
  param_1[3] = -local_10;
  param_1[4] = local_c;
  return;
}




// decompiled code
// original method signature: 
// uint intarcsin(uint param_1);
 // line 0, offset 0x800eacd8
uint intarcsin(uint param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = (int)param_1 < 0;
  if (bVar1) {
    param_1 = -param_1;
  }
  iVar4 = (int)param_1 >> 7;
  if ((int)param_1 < 0xfa01) {
    if ((param_1 & 0x40) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar3 = (uint)(byte)(&asintbl)[iVar4];
  }
  else {
    uVar3 = 0x100;
    if ((int)param_1 < 0x10000) {
      if (iVar4 == 0x1ff) {
        uVar3 = 0x100;
        bVar2 = DAT_8013745f;
      }
      else {
        bVar2 = (&asintbl)[iVar4];
        uVar3 = (uint)(byte)(&DAT_80137261)[iVar4];
      }
      uVar3 = (uint)bVar2 + ((int)((uVar3 - (uint)bVar2) * (param_1 & 0x7f)) >> 7);
    }
  }
  if (bVar1) {
    uVar3 = -uVar3;
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// int intarccos(uint param_1);
 // line 0, offset 0x800ead98
int intarccos(uint param_1)

{
  uint uVar1;
  
  uVar1 = intarcsin(param_1);
  return 0x100 - uVar1;
}




// decompiled code
// original method signature: 
// void intsincos(uint param_1,int *param_2,int *param_3);
 // line 0, offset 0x800eadbc
void intsincos(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 3;
  param_1 = param_1 & 0xff;
  if (uVar2 == 1) {
    *param_2 = *(int *)(&sintbl + (0x100 - param_1) * 4);
LAB_800eae5c:
    *param_3 = -*(int *)(&sintbl + param_1 * 4);
    return;
  }
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      return;
    }
    *param_2 = *(int *)(&sintbl + param_1 * 4);
    iVar1 = (0x100 - param_1) * 4;
  }
  else {
    if (uVar2 == 2) {
      *param_2 = -*(int *)(&sintbl + param_1 * 4);
      param_1 = 0x100 - param_1;
      goto LAB_800eae5c;
    }
    if (uVar2 != 3) {
      return;
    }
    *param_2 = -*(int *)(&sintbl + (0x100 - param_1) * 4);
    iVar1 = param_1 << 2;
  }
  *param_3 = *(int *)(&sintbl + iVar1);
  return;
}




// decompiled code
// original method signature: 
// void transform(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x800eaed8
void transform(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = fixedmult(*param_1,*param_2);
  uVar2 = fixedmult(param_1[1],param_2[3]);
  uVar3 = fixedmult(param_1[2],param_2[6]);
  uVar4 = fixedmult(*param_1,param_2[1]);
  uVar5 = fixedmult(param_1[1],param_2[4]);
  uVar6 = fixedmult(param_1[2],param_2[7]);
  uVar7 = fixedmult(*param_1,param_2[2]);
  uVar8 = fixedmult(param_1[1],param_2[5]);
  uVar9 = fixedmult(param_1[2],param_2[8]);
  *param_3 = uVar1 + uVar2 + uVar3;
  param_3[1] = uVar4 + uVar5 + uVar6;
  param_3[2] = uVar7 + uVar8 + uVar9;
  return;
}




// decompiled code
// original method signature: 
// void addtimer(int param_1);
 // line 0, offset 0x800eafe8
void addtimer(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &tmrsub;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  iVar2 = 0;
  piVar1 = &tmrsub;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == 0) {
      *piVar1 = param_1;
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  return;
}




// decompiled code
// original method signature: 
// void deltimer(int param_1);
 // line 0, offset 0x800eb048
void deltimer(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &tmrsub;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      *piVar1 = 0;
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  return;
}




// decompiled code
// original method signature: 
// void initgp(void);
 // line 0, offset 0x800eb080
void initgp(void)

{
  DAT_801234e8 = 0;
  return;
}




// decompiled code
// original method signature: 
// void savegp(undefined4 *param_1);
 // line 0, offset 0x800eb090
void savegp(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




// decompiled code
// original method signature: 
// void restoregp(void);
 // line 0, offset 0x800eb0a4
void restoregp(void)

{
  return;
}




// decompiled code
// original method signature: 
// int fixedsqrt(uint param_1);
 // line 0, offset 0x800eb0ac
int fixedsqrt(uint param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0x80000000;
  if (param_1 != 0) {
    piVar3 = (int *)0x8012356c;
    do {
      piVar2 = piVar3;
      uVar5 = param_1 & uVar4;
      piVar3 = piVar2 + -1;
      uVar4 = uVar4 >> 1;
    } while (uVar5 == 0);
    lVar1 = (longlong)(int)param_1 * (longlong)*piVar3;
    return ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + piVar2[0x20];
  }
  return 0;
}




// decompiled code
// original method signature: 
// int atoi(char *__nptr);
 // line 0, offset 0x800eb100
int atoi(char *__nptr)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// int locateshape(int param_1,int *param_2);
 // line 0, offset 0x800eb110
int locateshape(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar3 = iVar2 * 8 + param_1;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) break;
      piVar1 = (int *)(iVar3 + 8);
      iVar3 = iVar3 + -8;
    } while (*piVar1 != *param_2);
    iVar2 = iVar2 * 8 + param_1;
    if (*(int *)(iVar2 + 0x10) == *param_2) {
      return param_1 + *(int *)(iVar2 + 0x14);
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// int locateshapez(int param_1,int *param_2);
 // line 0, offset 0x800eb170
int locateshapez(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar3 = iVar2 * 8 + param_1;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) break;
      piVar1 = (int *)(iVar3 + 8);
      iVar3 = iVar3 + -8;
    } while (*piVar1 != *param_2);
    iVar2 = iVar2 * 8 + param_1;
    if (*(int *)(iVar2 + 0x10) == *param_2) {
      return param_1 + *(int *)(iVar2 + 0x14);
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// int strncmp(char *__s1,char *__s2,size_t __n);
 // line 0, offset 0x800eb1d0
int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// void iSPCH_InitBanks(void);
 // line 0, offset 0x800eb1e0
void iSPCH_InitBanks(void)

{
  gVoxBanks = 0;
  gNumBanks = 0;
  return;
}




// decompiled code
// original method signature: 
// void iSPCH_DisposeBanks(void);
 // line 0, offset 0x800eb1f4
void iSPCH_DisposeBanks(void)

{
  if (gVoxBanks != 0) {
    iSPCH_MemFree();
  }
  gVoxBanks = 0;
  gNumBanks = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 * iSPCH_BankMemAlloc(int param_1);
 // line 0, offset 0x800eb234
undefined4 * iSPCH_BankMemAlloc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((gVoxBanks == (undefined4 *)0x0) &&
      (gNumBanks = param_1, puVar3 = (undefined4 *)iSPCH_MemAlloc(), iVar1 = gNumBanks,
      gVoxBanks = puVar3, puVar3 != (undefined4 *)0x0)) &&
     (iVar2 = 0, gVoxBanks = puVar3, 0 < gNumBanks)) {
    do {
      *puVar3 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return gVoxBanks;
}




// decompiled code
// original method signature: 
// int iSPCH_GetFreeBank(void);
 // line 0, offset 0x800eb2b8
int iSPCH_GetFreeBank(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = gVoxBanks;
  if (0 < gNumBanks) {
    do {
      if (*piVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < gNumBanks);
  }
  return -1;
}




// decompiled code
// original method signature: 
// int iSPCH_FindBank(short param_1);
 // line 0, offset 0x800eb310
int iSPCH_FindBank(short param_1)

{
  int iVar1;
  short **ppsVar2;
  
  if ((gVoxBanks != (short **)0x0) && (iVar1 = 0, ppsVar2 = gVoxBanks, 0 < gNumBanks)) {
    do {
      if ((*ppsVar2 != (short *)0x0) && (**ppsVar2 == param_1)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      ppsVar2 = ppsVar2 + 1;
    } while (iVar1 < gNumBanks);
  }
  return -1;
}




// decompiled code
// original method signature: 
// uint iSPCH_TestSubBankBounds(int param_1,int param_2);
 // line 0, offset 0x800eb37c
uint iSPCH_TestSubBankBounds(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((((gVoxBanks != 0) && (-1 < param_1)) &&
      (uVar1 = *(ushort *)(*(int *)(param_1 * 4 + gVoxBanks) + 6), uVar1 != 0xffff)) &&
     (-1 < param_2)) {
    uVar2 = (uint)(param_2 < (int)(uint)uVar1);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void iSPCH_SetCycleBits(int param_1);
 // line 0, offset 0x800eb3c8
void iSPCH_SetCycleBits(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pbVar3 = (byte *)iSPCH_GetBankBits(param_1);
  bVar1 = *pbVar3;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar4 == 0xffffffff) && (gGameNum == -0x80000000)) {
      trap(0x1800);
    }
    iVar7 = (gGameNum % uVar4) * (uint)*(byte *)(param_1 + 3);
    iVar8 = iVar7 / (int)uVar4;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar4 == 0xffffffff) && (iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    iVar7 = (gGameNum % uVar4 + 1) * (uint)*(byte *)(param_1 + 3);
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar4 == 0xffffffff) && (iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    iVar6 = iVar7 / (int)uVar4 - iVar8;
    iVar7 = iVar8;
    if (iVar8 < 0) {
      iVar7 = iVar8 + 7;
    }
    iVar5 = (iVar7 >> 3) + 1;
    uVar4 = iVar8 + (iVar7 >> 3) * -8;
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        uVar2 = uVar4 & 0x1f;
        uVar4 = uVar4 + 1;
        pbVar3[iVar5] = pbVar3[iVar5] | (byte)(1 << uVar2);
        if (uVar4 == 8) {
          uVar4 = 0;
          iVar5 = iVar5 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// int SPCH_AddBank(int param_1);
 // line 0, offset 0x800eb520
int SPCH_AddBank(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if ((gVoxBanks != 0) && (iVar1 = iSPCH_GetFreeBank(), -1 < iVar1)) {
    if ((*(byte *)(param_1 + 2) & 0xf0) != 0) {
      iSPCH_SetCycleBits(param_1);
    }
    *(int *)(iVar1 * 4 + gVoxBanks) = param_1;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_MemAlloc(void);
 // line 0, offset 0x800eb5a4
undefined4 iSPCH_MemAlloc(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (gMemAlloc != (code *)0x0) {
    uVar1 = (*gMemAlloc)();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void iSPCH_MemFree(void);
 // line 0, offset 0x800eb5d4
void iSPCH_MemFree(void)

{
  if (gMemFree != (code *)0x0) {
    (*gMemFree)();
  }
  return;
}




// decompiled code
// original method signature: 
// void SPCH_Deinit(void);
 // line 0, offset 0x800eb600
void SPCH_Deinit(void)

{
  if (gSPCH_Initialized == 0x1789a34) {
    gSampleRequest = 0;
    gSentenceRuleTest = 0;
    gSPCH_Initialized = 0;
    gSentenceRuleSet = 0;
    iSPCH_DisposeBanks();
    iSPCH_InitEventDat();
  }
  return;
}




// decompiled code
// original method signature: 
// void iSPCH_InitInGame(void);
 // line 0, offset 0x800eb654
void iSPCH_InitInGame(void)

{
  gVoxInGame = 0xffffffff;
  DAT_8014805c = 0;
  return;
}




// decompiled code
// original method signature: 
// int SPCH_GetSampleDataRate(int param_1,int param_2,int param_3);
 // line 0, offset 0x800eb66c
int SPCH_GetSampleDataRate(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_1 = param_1 * param_2;
  if (param_1 < 0) {
    param_1 = param_1 + 7;
  }
  iVar1 = param_1 >> 3;
  if (param_3 == 1) {
    iVar1 = (iVar1 / 10 + (iVar1 >> 0x1f)) - (param_1 >> 0x1f);
  }
  else {
    if ((param_3 != 0) && (param_3 == 2)) {
      iVar1 = (iVar1 * 2) / 7;
    }
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// undefined4 * SPCH_InitBankMem(int param_1,int param_2,int param_3);
 // line 0, offset 0x800eb6f0
undefined4 * SPCH_InitBankMem(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (((gSPCH_Initialized == 0x1789a34) && (param_1 != 0)) && (param_2 != 0)) {
    gMemAlloc = param_1;
    gMemFree = param_2;
    puVar1 = iSPCH_BankMemAlloc(param_3);
  }
  return puVar1;
}




// decompiled code
// original method signature: 
// undefined4 SPCH_Init(undefined4 param_1,int param_2,undefined4 param_3);
 // line 0, offset 0x800eb748
undefined4 SPCH_Init(undefined4 param_1,int param_2,undefined4 param_3)

{
  gMemAlloc = 0;
  gMemFree = 0;
  gSentenceRuleTest = 0;
  gSentenceRuleSet = 0;
  gSampleRequest = param_1;
  gGameNum = param_2;
  gDataRate = param_3;
  iSPCH_EACseedrandom(param_2);
  iSPCH_ClearChosen();
  SPCH_SetPreLoadTicks(0);
  gFilterSetting = 0;
  iSPCH_InitEventDat();
  iSPCH_InitInGame();
  iSPCH_InitBanks();
  iSPCH_InitEventQueue();
  gSPCH_Initialized = 0x1789a34;
  return 1;
}




// decompiled code
// original method signature: 
// undefined8 __floatsidf(uint param_1);
 // line 0, offset 0x800eb7e4
undefined8 __floatsidf(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint local_20;
  uint local_1c;
  
  uVar2 = 0;
  iVar1 = 0x41d;
  if (param_1 == 0) {
    local_20 = 0;
    uVar2 = 0;
  }
  else {
    if ((int)param_1 < 0) {
      uVar2 = 0x80000000;
      param_1 = -param_1;
    }
    while (local_1c = param_1, (int)param_1 < 0x1000000) {
      param_1 = param_1 << 4;
      iVar1 = iVar1 + -4;
    }
    while ((int)local_1c < 0x40000000) {
      local_1c = local_1c << 1;
      iVar1 = iVar1 + -1;
    }
    local_20 = 0;
    _dbl_shift_us(&local_20,1,0,local_1c,10);
    uVar2 = local_1c & 0xffefffff | uVar2 | iVar1 << 0x14;
  }
  return CONCAT44(local_20,uVar2);
}




// decompiled code
// original method signature: 
// undefined4 __ltdf2(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800eb8e4
undefined4 __ltdf2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 == param_4) && (param_1 == param_3)) {
    return 0;
  }
  if (((((param_2 & 0x7fffffff) != 0) || (param_1 != 0)) || ((param_4 & 0x7fffffff) != 0)) ||
     (param_3 != 0)) {
    if ((param_2 & 0x80000000) != (param_4 & 0x80000000)) {
      if ((param_2 & 0x80000000) != 0) {
        return 0xffffffff;
      }
      return 0;
    }
    uVar2 = (int)param_2 >> 0x14 & 0x7ff;
    uVar1 = (int)param_4 >> 0x14 & 0x7ff;
    if (uVar2 < uVar1) {
LAB_800eb99c:
      if ((int)param_2 < 0) {
        return 0;
      }
      return 0xffffffff;
    }
    if (uVar2 == uVar1) {
      uVar1 = param_2 & 0xfffff | 0x100000;
      uVar2 = param_4 & 0xfffff | 0x100000;
      if ((uVar1 < uVar2) || ((uVar1 == uVar2 && (param_1 < param_3)))) goto LAB_800eb99c;
    }
    if ((int)param_2 < 0) {
      return 0xffffffff;
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// int iSPCH_EACrandom(void);
 // line 0, offset 0x800eb9c4
int iSPCH_EACrandom(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = DAT_80123608 + DAT_80123604;
  iVar5 = 0;
  if ((uVar1 < DAT_80123608) || (uVar1 < DAT_80123604)) {
    iVar5 = 1;
  }
  uVar2 = uVar1 + DAT_80123600 + iVar5;
  uVar3 = uVar2 + DAT_801235fc + (uint)(uVar2 < DAT_80123600);
  uVar4 = uVar3 + DAT_801235f8 + (uint)(uVar3 < DAT_801235fc);
  seedX = uVar4 + seedX + (uint)(uVar4 < DAT_801235f8);
  DAT_801235f8 = uVar4;
  DAT_801235fc = uVar3;
  DAT_80123600 = uVar2;
  DAT_80123604 = uVar1;
  if ((((DAT_80123608 + 1 == 0) &&
       (DAT_80123604 = uVar1 + 1, DAT_801235f8 = uVar4, DAT_801235fc = uVar3, DAT_80123600 = uVar2,
       DAT_80123604 == 0)) &&
      (DAT_80123600 = uVar2 + 1, DAT_801235f8 = uVar4, DAT_801235fc = uVar3, DAT_80123600 == 0)) &&
     ((DAT_801235fc = uVar3 + 1, DAT_801235f8 = uVar4, DAT_801235fc == 0 &&
      (DAT_801235f8 = uVar4 + 1, DAT_801235f8 == 0)))) {
    seedX = seedX + 1;
  }
  DAT_80123608 = DAT_80123608 + 1;
  return seedX;
}




// decompiled code
// original method signature: 
// void iSPCH_EACseedrandom(int param_1);
 // line 0, offset 0x800ebac4
void iSPCH_EACseedrandom(int param_1)

{
  seedX = param_1 + -0xdd2f1aa;
  DAT_801235f8 = param_1 + -0x77ced917;
  DAT_801235fc = param_1 + -0x39db22d1;
  DAT_80123600 = param_1 + 0x702c49c;
  DAT_80123604 = param_1 + -0x61cac083;
  DAT_80123608 = param_1 + 0x6fdf3b64;
  return;
}




// decompiled code
// original method signature: 
// int iSPCH_Rand(int param_1);
 // line 0, offset 0x800ebb30
int iSPCH_Rand(int param_1)

{
  uint uVar1;
  
  uVar1 = iSPCH_EACrandom();
  if (param_1 == 0) {
    trap(0x1c00);
  }
  if ((param_1 == -1) && ((uVar1 & 0xffff) == 0x80000000)) {
    trap(0x1800);
  }
  return (int)(uVar1 & 0xffff) % param_1;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_BindData(ushort *param_1);
 // line 0, offset 0x800ebb84
undefined4 iSPCH_BindData(ushort *param_1)

{
  ushort **ppuVar1;
  int iVar2;
  
  if (0x11d < *param_1) {
    iVar2 = 0;
    ppuVar1 = (ushort **)&gEventDats;
    do {
      iVar2 = iVar2 + 1;
      if (*ppuVar1 == (ushort *)0x0) {
        *ppuVar1 = param_1;
        return 1;
      }
      ppuVar1 = ppuVar1 + 1;
    } while (iVar2 < 4);
  }
  return 0;
}




// decompiled code
// original method signature: 
// void SPCH_ResolveData(ushort *param_1);
 // line 0, offset 0x800ebbd4
void SPCH_ResolveData(ushort *param_1)

{
  iSPCH_BindData(param_1);
  return;
}




// decompiled code
// original method signature: 
// undefined4 FILE_init(int param_1,int param_2,int param_3);
 // line 0, offset 0x800ebbf4
undefined4 FILE_init(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  
  if (gFileDevice == 0) {
    iVar2 = FILE_overhead(param_1,param_2,param_3);
    psVar3 = reservememadr(s_File_Sys_80056c44,iVar2,0);
    uVar1 = FILE_initwithmem(param_1,param_2,param_3,(undefined *)psVar3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 FILE_initwithmem(int param_1,int param_2,int param_3,undefined *param_4);
 // line 0, offset 0x800ebc78
undefined4 FILE_initwithmem(int param_1,int param_2,int param_3,undefined *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    param_1 = 0x18;
  }
  if (param_2 == 0) {
    param_2 = 0x800;
  }
  if (param_3 == 0) {
    param_3 = 10;
  }
  if (gFileDevice == 0) {
    DAT_8013ea90 = 0xff;
    gFileDevice = param_3;
    DAT_8013ea8c = param_1;
    DAT_8013eaa0 = param_4;
    iVar1 = FILE_overhead(param_1,param_2,param_3);
    blockclear(DAT_8013eaa0,iVar1);
    DAT_8013eaa4 = DAT_8013eaa0 + gFileDevice * 0x30;
    if (disablecd == (uchar *)0x0) {
      sVar2 = CD_Init(DAT_8013ea8c,param_2,DAT_8013eaa4 + DAT_8013ea8c * 0x4c,
                      iFILE_CommandCompleteCallback);
      disablecd = (uchar *)(uint)(sVar2 == 0);
    }
    initfileio();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// int FILE_overhead(int param_1,int param_2,int param_3);
 // line 0, offset 0x800ebd74
int FILE_overhead(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    param_1 = 0x18;
  }
  if (param_2 == 0) {
    param_2 = 0x800;
  }
  if (param_3 == 0) {
    param_3 = 10;
  }
  return param_1 * 0x50 + param_3 * 0x30 + param_2 * 0x14;
}




// decompiled code
// original method signature: 
// uint FILE_opstatus(uint param_1);
 // line 0, offset 0x800ebdc4
uint FILE_opstatus(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if ((param_1 == 0) ||
     (puVar2 = (uint *)((param_1 >> 0x18) * 0x30 + DAT_8013eaa0),
     (param_1 & 0xfffff) != (*puVar2 & 0xfffff))) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar1 = puVar2[2];
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 FILE_operror(uint param_1);
 // line 0, offset 0x800ebe1c
undefined4 FILE_operror(uint param_1)

{
  return *(undefined4 *)((param_1 >> 0x18) * 0x30 + DAT_8013eaa0 + 0xc);
}




// decompiled code
// original method signature: 
// void FILE_callbackop(uint param_1,undefined *param_2);
 // line 0, offset 0x800ebe4c
void FILE_callbackop(uint param_1,undefined *param_2)

{
  int iVar1;
  
  iVar1 = DAT_8013eaa0 + (param_1 >> 0x18) * 0x30;
  *(undefined **)(iVar1 + 0x28) = param_2;
  if (*(int *)(iVar1 + 8) != 0) {
    DAT_8013ea98 = DAT_8013ea98 + 1;
    (*(code *)param_2)(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14));
    DAT_8013ea98 = DAT_8013ea98 + -1;
  }
  return;
}




// decompiled code
// original method signature: 
// void FILE_priorityop(uint param_1,int param_2);
 // line 0, offset 0x800ebecc
void FILE_priorityop(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_8013eaa0 + (param_1 >> 0x18) * 0x30;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iVar3 = *(int *)(iVar5 + 0x10);
  *(int *)(iVar5 + 0x10) = param_2;
  iVar4 = DAT_8013eaa8;
  if ((((1 < DAT_8013ea94) && (iVar4 = DAT_8013eaa8, iVar5 != DAT_8013ea9c)) &&
      (iVar4 = DAT_8013eaa8, *(int *)(iVar5 + 8) == 0)) && (iVar4 = DAT_8013eaa8, iVar3 != param_2))
  {
    iVar4 = 0;
    iVar3 = DAT_8013eaa8;
    while ((iVar3 != 0 && (iVar3 != iVar5))) {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 0x2c);
    }
    if (iVar4 == 0) {
      DAT_8013eaa8 = *(int *)(iVar5 + 0x2c);
    }
    else {
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
    }
    bVar1 = DAT_8013eaa8 != 0;
    *(int *)(iVar5 + 0x2c) = DAT_8013eaa8;
    iVar3 = 0;
    if (bVar1) {
      iVar3 = 0;
      do {
        iVar4 = *(int *)(iVar5 + 0x2c);
        if (*(int *)(iVar5 + 0x10) < *(int *)(iVar4 + 0x10)) break;
        iVar2 = *(int *)(iVar4 + 0x2c);
        *(int *)(iVar5 + 0x2c) = iVar2;
        iVar3 = iVar4;
      } while (iVar2 != 0);
    }
    iVar4 = iVar5;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x2c) = iVar5;
      iVar4 = DAT_8013eaa8;
    }
  }
  DAT_8013eaa8 = iVar4;
  setCopReg(0,Status,Status,0);
  return;
}




// decompiled code
// original method signature: 
// void FILE_cancelop(uint param_1);
 // line 0, offset 0x800ec008
void FILE_cancelop(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  uVar1 = Status;
  iVar6 = 0;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  if (param_1 != 0) {
    puVar7 = (uint *)((param_1 >> 0x18) * 0x30 + DAT_8013eaa0);
    if ((((param_1 & 0xfffff) == (*puVar7 & 0xfffff)) && (uVar4 = param_1 >> 0x14 & 0xf, uVar4 != 3)
        ) && (uVar4 != 10)) {
      if (DAT_8013ea9c == puVar7) {
        puVar7[1] = 1;
        iVar6 = 1;
      }
      else {
        if (puVar7[2] != 1) {
          puVar3 = DAT_8013eaa8;
          puVar5 = (uint *)0x0;
          if (DAT_8013eaa8 == (uint *)0x0) {
LAB_800ec0f4:
            setCopReg(0,Status,Status,0);
            return;
          }
          do {
            puVar2 = puVar3;
            puVar3 = puVar2;
            if (puVar2 == puVar7) break;
            puVar3 = (uint *)puVar2[0xb];
            puVar5 = puVar2;
          } while (puVar3 != (uint *)0x0);
          if (puVar3 == (uint *)0x0) goto LAB_800ec0f4;
          if (puVar5 == (uint *)0x0) {
            DAT_8013eaa8 = (uint *)puVar7[0xb];
          }
          else {
            puVar5[0xb] = puVar7[0xb];
          }
          iVar6 = 2;
          DAT_8013ea94 = DAT_8013ea94 + -1;
        }
        puVar7[2] = 0xffffffff;
      }
      if ((iVar6 == 1) && ((*puVar7 >> 0x14 & 0xf) == 4)) {
        stopreadfile(*(uint *)puVar7[9]);
      }
      else {
        if ((iVar6 == 2) && ((code *)puVar7[10] != (code *)0x0)) {
          (*(code *)puVar7[10])(*puVar7,0xffffffff,puVar7[5]);
        }
      }
    }
  }
  setCopReg(0,Status,uVar1,0);
  return;
}




// decompiled code
// original method signature: 
// uint FILE_waitop(uint param_1);
 // line 0, offset 0x800ec1bc
uint FILE_waitop(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = (param_1 >> 0x18) * 0x30;
  puVar3 = (uint *)(DAT_8013eaa0 + iVar2);
  if (param_1 == 0) {
LAB_800ec270:
    uVar1 = 0xfffffffd;
  }
  else {
    uVar1 = 0xfffffffd;
    if ((param_1 & 0xfffff) == (*puVar3 & 0xfffff)) {
      uVar1 = puVar3[2];
      while (uVar1 == 0) {
        systemtask(0);
        if (param_1 == 0) {
          return 0xfffffffd;
        }
        if ((param_1 & 0xfffff) != (*(uint *)(iVar2 + DAT_8013eaa0) & 0xfffff)) goto LAB_800ec270;
        uVar1 = puVar3[2];
      }
      uVar1 = puVar3[2];
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint FILE_completeop(uint param_1);
 // line 0, offset 0x800ec2b0
uint FILE_completeop(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(DAT_8013eaa0 + (param_1 >> 0x18) * 0x30);
  uVar2 = 0;
  if (puVar1[2] == 1) {
    switch(*puVar1 >> 0x14 & 0xf) {
    case 2:
    case 9:
      uVar2 = puVar1[9];
      break;
    case 3:
    case 7:
    case 10:
      uVar2 = puVar1[2];
      break;
    case 4:
    case 5:
      uVar2 = puVar1[7];
      break;
    case 6:
    case 8:
      uVar2 = puVar1[6];
    }
  }
  freeop((undefined *)puVar1);
  return uVar2;
}




// decompiled code
// original method signature: 
// uint FILE_open(char *param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800ec36c
uint FILE_open(char *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = (uint *)reserveop();
  puVar1[5] = param_4;
  puVar1[6] = param_2;
  puVar1[4] = param_3;
  *puVar1 = *puVar1 & 0xff0fffff | 0x200000;
  piVar2 = reservehandle();
  *(int **)(puVar1 + 9) = piVar2;
  if (piVar2 == (int *)0x0) {
    puVar1[3] = 2;
    iFILE_perror();
  }
  strlen(param_1);
  strncpy((char *)(puVar1[9] + 0xc),param_1,0x40);
  iFILE_ExecCommand(puVar1);
  return *puVar1;
}




// decompiled code
// original method signature: 
// uint FILE_close(uint param_1,uint param_2,uint param_3);
 // line 0, offset 0x800ec42c
uint FILE_close(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)reserveop();
  iVar2 = DAT_8013eaac;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  puVar1[9] = param_1;
  *puVar1 = *puVar1 & 0xff0fffff | 0x300000;
  do {
    if (iVar2 == 0) {
LAB_800ec4c4:
      iFILE_ExecCommand(puVar1);
      return *puVar1;
    }
    if (*(uint *)(iVar2 + 4) == param_1) {
      puVar1[3] = 3;
      iFILE_perror();
      goto LAB_800ec4c4;
    }
    iVar2 = *(int *)(iVar2 + 0xc);
  } while( true );
}




// decompiled code
// original method signature: 
// uint FILE_read(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);
 // line 0, offset 0x800ec4ec
uint FILE_read(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  
  puVar1 = (uint *)reserveop();
  *puVar1 = *puVar1 & 0xff0fffff | 0x400000;
  puVar1[5] = param_6;
  puVar1[4] = param_5;
  if (param_1 == 0) {
    puVar1[3] = 6;
    iFILE_perror();
  }
  puVar1[9] = param_1;
  if ((*(int *)(param_1 + 4) < (int)(param_2 + param_4)) &&
     (param_4 = *(int *)(param_1 + 4) - param_2, (int)param_4 < 0)) {
    param_4 = 0;
  }
  puVar1[7] = param_4;
  puVar1[8] = param_3;
  puVar1[6] = param_2;
  iFILE_ExecCommand(puVar1);
  return *puVar1;
}




// decompiled code
// original method signature: 
// uint FILE_size(uint param_1,uint param_2,uint param_3);
 // line 0, offset 0x800ec5d0
uint FILE_size(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)reserveop();
  puVar1[5] = param_3;
  puVar1[4] = param_2;
  *puVar1 = *puVar1 & 0xff0fffff | 0x600000;
  if (param_1 == 0) {
    puVar1[3] = 6;
    iFILE_perror();
  }
  puVar1[9] = param_1;
  iFILE_ExecCommand(puVar1);
  return *puVar1;
}




// decompiled code
// original method signature: 
// void iFILE_addbigreadcallback(uint param_1,undefined4 param_2,byte **param_3);
 // line 0, offset 0x800ec660
void iFILE_addbigreadcallback(uint param_1,undefined4 param_2,byte **param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_8013eaa0 + (param_1 >> 0x18) * 0x30;
  pbVar1 = *(byte **)(iVar4 + 0x24);
  uVar5 = *(uint *)(iVar4 + 0x10);
  param_3[1] = pbVar1;
  *(byte **)(param_3[2] + 0x24) = pbVar1;
  FILE_completeop(param_1);
  iVar4 = typeofbigfile(*param_3);
  if (iVar4 == 0) {
    purgememadr((int)*param_3);
  }
  uVar2 = sizeofbigfileheader(*param_3);
  iVar4 = getblocksize((int)*param_3);
  if (iVar4 < (int)uVar2) {
    puVar3 = (undefined4 *)reservememadr(s_bigfile_buf_80056c50,uVar2,0x10);
    blockmove((undefined4 *)*param_3,puVar3,0x800);
    purgememadr((int)*param_3);
    *(undefined4 **)param_3 = puVar3;
    uVar5 = FILE_read((uint)param_3[1],0x800,(uint)(puVar3 + 0x200),uVar2 - 0x800,uVar5,
                      (uint)param_3);
    FILE_callbackop(uVar5,iFILE_addbigreadcallback);
  }
  else {
    *(byte ***)(param_3 + 3) = DAT_8013eaac;
    DAT_8013eaac = param_3;
    iFILE_ExecCommand((uint *)param_3[2]);
  }
  return;
}




// decompiled code
// original method signature: 
// void iFILE_addbigopencallback(uint param_1,int param_2,uint *param_3);
 // line 0, offset 0x800ec7a0
void iFILE_addbigopencallback(uint param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((param_1 >> 0x18) * 0x30 + DAT_8013eaa0 + 0x10);
  uVar1 = FILE_completeop(param_1);
  if (param_2 == 1) {
    uVar1 = FILE_read(uVar1,0,*param_3,0x800,uVar2,(uint)param_3);
    FILE_callbackop(uVar1,iFILE_addbigreadcallback);
  }
  else {
    *(undefined4 *)(param_3[2] + 0xc) = 4;
    iFILE_ExecCommand((uint *)param_3[2]);
  }
  return;
}




// decompiled code
// original method signature: 
// uint * FILE_addbig(char *param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800ec858
uint * FILE_addbig(char *param_1,uint param_2,uint param_3,uint param_4)

{
  uint **ppuVar1;
  int iVar2;
  short **ppsVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = DAT_8013eaac;
  ppuVar1 = (uint **)reserveop();
  *(uint *)(ppuVar1 + 5) = param_4;
  *(uint *)(ppuVar1 + 4) = param_3;
  *ppuVar1 = (uint *)((uint)*ppuVar1 & 0xff0fffff | 0x900000);
  iscurrentthread(0);
  if (iVar6 != 0) {
    do {
      iVar2 = strncmp(param_1,(char *)(*(int *)(iVar6 + 4) + 0xc),0x40);
      if (iVar2 == 0) {
        ppuVar1[9] = *(uint **)(iVar6 + 4);
        iFILE_ExecCommand((uint *)ppuVar1);
        return (uint *)ppuVar1;
      }
      iVar6 = *(int *)(iVar6 + 0xc);
    } while (iVar6 != 0);
  }
  ppsVar3 = (short **)reservememadr(param_1,0x10,param_2);
  *(uint ***)(ppsVar3 + 2) = ppuVar1;
  psVar4 = reservememadr(s_bigfile_header_80056c5c,0x800,0x10);
  *ppsVar3 = psVar4;
  uVar5 = FILE_open(param_1,1,param_3,(uint)ppsVar3);
  FILE_callbackop(uVar5,iFILE_addbigopencallback);
  return *ppuVar1;
}




// decompiled code
// original method signature: 
// void iFILE_delbigclosecallback(uint param_1,undefined4 param_2,uint *param_3);
 // line 0, offset 0x800ec980
void iFILE_delbigclosecallback(uint param_1,undefined4 param_2,uint *param_3)

{
  FILE_completeop(param_1);
  iFILE_ExecCommand(param_3);
  return;
}




// decompiled code
// original method signature: 
// uint FILE_delbig(int param_1,uint param_2,uint param_3);
 // line 0, offset 0x800ec9ac
uint FILE_delbig(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = DAT_8013eaac;
  puVar1 = (uint *)reserveop();
  piVar3 = DAT_8013eaa4;
  puVar1[5] = param_3;
  puVar1[4] = param_2;
  *puVar1 = *puVar1 & 0xff0fffff | 0xa00000;
  piVar4 = (int *)0x0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar1[3] = 1;
  }
  iVar2 = 0;
  if (0 < DAT_8013ea8c) {
    do {
      if (((piVar3 != (int *)0x0) && (piVar3[2] != 0)) && (*(int *)(*piVar3 + 4) == param_1)) {
        puVar1[2] = 0xfffffffe;
        puVar1[3] = 1;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar2 < DAT_8013ea8c);
  }
  uVar6 = piVar5[1];
  piVar3 = piVar5;
  if (piVar5 != (int *)0x0) {
    do {
      piVar5 = piVar3;
      if (piVar3[1] == param_1) break;
      piVar5 = (int *)piVar3[3];
      piVar4 = piVar3;
      piVar3 = piVar5;
    } while (piVar5 != (int *)0x0);
    if (piVar5 != (int *)0x0) goto LAB_800ecabc;
  }
  puVar1[3] = 1;
LAB_800ecabc:
  if (piVar4 == (int *)0x0) {
    DAT_8013eaac = (int *)0x0;
  }
  else {
    piVar4[3] = piVar5[3];
  }
  purgememadr(*piVar5);
  purgememadr((int)piVar5);
  uVar6 = FILE_close(uVar6,param_2,(uint)puVar1);
  FILE_callbackop(uVar6,iFILE_delbigclosecallback);
  return *puVar1;
}




// decompiled code
// original method signature: 
// undefined4 FILE_atomic(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 // line 0, offset 0x800ecb40
undefined4 FILE_atomic(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_8013ea90;
  DAT_8013ea90 = param_3;
  uVar2 = (*(code *)param_1)(param_3,param_4);
  DAT_8013ea90 = uVar1;
  iFILE_ExecCommand((uint *)0x0);
  return uVar2;
}




// decompiled code
// original method signature: 
// void iFILE_ExecCommand(uint *param_1);
 // line 0, offset 0x800ecb98
void iFILE_ExecCommand(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  char *__src;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  byte **ppbVar9;
  uint *puVar10;
  char local_a0 [64];
  byte local_60 [64];
  uint local_20;
  uint local_1c;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  if (param_1 != (uint *)0x0) {
    bVar1 = DAT_8013eaa8 != (uint *)0x0;
    *(uint **)(param_1 + 0xb) = DAT_8013eaa8;
    uVar8 = 0;
    if (bVar1) {
      uVar8 = 0;
      do {
        uVar7 = param_1[0xb];
        if ((int)param_1[4] < *(int *)(uVar7 + 0x10)) break;
        uVar2 = *(uint *)(uVar7 + 0x2c);
        param_1[0xb] = uVar2;
        uVar8 = uVar7;
      } while (uVar2 != 0);
    }
    puVar10 = param_1;
    if (uVar8 != 0) {
      *(uint **)(uVar8 + 0x2c) = param_1;
      puVar10 = DAT_8013eaa8;
    }
    DAT_8013eaa8 = puVar10;
    DAT_8013ea94 = DAT_8013ea94 + 1;
  }
  if (DAT_8013ea9c != (uint *)0x0) {
    setCopReg(0,Status,Status,0);
    return;
  }
  if ((DAT_8013eaa8 == (uint *)0x0) || (DAT_8013ea90 < (int)DAT_8013eaa8[4])) {
    puVar10 = (uint *)0x0;
  }
  else {
    DAT_8013ea94 = DAT_8013ea94 + -1;
    puVar10 = DAT_8013eaa8;
    DAT_8013eaa8 = (uint *)DAT_8013eaa8[0xb];
  }
  setCopReg(0,Status,Status,0);
  if (puVar10 == (uint *)0x0) {
    DAT_8013ea9c = puVar10;
    return;
  }
  DAT_8013ea9c = puVar10;
  switch(*puVar10 >> 0x14 & 0xf) {
  case 2:
  case 8:
    local_60[0] = 0;
    DAT_8013ea9c = puVar10;
    __src = strchr((char *)(puVar10[9] + 0xc),0x7c);
    if (__src == (char *)0x0) {
      uVar7 = 0;
      bVar1 = true;
      if ((puVar10[6] & 1) != 0) {
        uVar7 = 3;
        bVar1 = true;
        __src = (char *)(puVar10[9] + 0xc);
        goto LAB_800ecdb4;
      }
    }
    else {
      uVar8 = puVar10[9];
      uVar7 = 2;
      if (*(char *)(uVar8 + 0xc) != '|') {
        __src = strchr((char *)(uVar8 + 0xc),0x7c);
        uVar8 = puVar10[9];
        uVar7 = 4;
        local_a0[0] = '\0';
        strncpy(local_a0,(char *)(puVar10[9] + 0xc),(size_t)(__src + (-0xc - uVar8)));
        local_a0[(int)(__src + (-0xc - uVar8))] = '\0';
        uVar8 = puVar10[9];
      }
      bVar1 = false;
      __src = strchr((char *)(uVar8 + 0xc),0x7c);
      __src = __src + 1;
LAB_800ecdb4:
      strcpy((char *)local_60,__src);
    }
    uVar8 = 0;
    if ((bVar1) &&
       (iVar3 = openfile((byte *)((uint *)puVar10[9] + 3),puVar10[6],(uint *)puVar10[9]), iVar3 != 0
       )) {
      uVar8 = 1;
      if ((*puVar10 >> 0x14 & 0xf) == 8) {
        closefile(*(uint *)puVar10[9]);
      }
      else {
        uVar4 = getfilesize(*(uint *)puVar10[9]);
        *(undefined4 *)(puVar10[9] + 4) = uVar4;
      }
    }
    if (((uVar8 == 0) && ((uVar7 & 6) != 0)) &&
       (ppbVar9 = DAT_8013eaac, DAT_8013eaac != (byte **)0x0)) {
      do {
        if ((((uVar7 & 4) == 0) || (iVar3 = strcmp((char *)(ppbVar9[1] + 0xc),local_a0), iVar3 == 0)
            ) && (pbVar5 = locatebigentryz(*ppbVar9,local_60,0,&local_20,&local_1c),
                 pbVar5 != (byte *)0x0)) {
          *(byte ***)puVar10[9] = ppbVar9;
          *(uint *)(puVar10[9] + 4) = local_1c;
          uVar8 = 1;
          *(uint *)(puVar10[9] + 8) = local_20;
        }
        ppbVar9 = (byte **)ppbVar9[3];
      } while ((ppbVar9 != (byte **)0x0) && (uVar8 == 0));
    }
    if ((*puVar10 >> 0x14 & 0xf) == 8) {
      freehandle((undefined *)puVar10[9]);
      puVar10[6] = uVar8;
    }
    break;
  case 3:
    puVar6 = (uint *)puVar10[9];
    DAT_8013ea9c = puVar10;
    puVar10[3] = 0;
    if (puVar6 != (uint *)0x0) {
      if (puVar6[2] == 0) {
        uVar8 = closefile(*puVar6);
        puVar10[3] = uVar8;
      }
      freehandle((undefined *)puVar10[9]);
      puVar10[9] = 0;
    }
  case 7:
  case 9:
  case 10:
    uVar8 = (uint)(puVar10[3] == 0);
    break;
  case 4:
    uVar7 = puVar10[7];
    uVar8 = 1;
    DAT_8013ea9c = puVar10;
    if (0 < (int)uVar7) {
      puVar6 = (uint *)puVar10[9];
      if (puVar6[2] != 0) {
        DAT_8013ea9c = puVar10;
        readfile(**(uint **)(*puVar6 + 4),(undefined4 *)puVar10[8],puVar6[2] + puVar10[6],uVar7);
        return;
      }
      DAT_8013ea9c = puVar10;
      readfile(*puVar6,(undefined4 *)puVar10[8],puVar10[6],uVar7);
      return;
    }
    break;
  case 5:
    DAT_8013ea9c = puVar10;
    writefile(*(uint *)puVar10[9],puVar10[8],puVar10[6],puVar10[7]);
    return;
  case 6:
    uVar8 = 1;
    DAT_8013ea9c = puVar10;
    puVar10[6] = *(uint *)(puVar10[9] + 4);
    break;
  default:
    goto switchD_800eccfc_caseD_9;
  }
  iFILE_CommandCompleteCallback(uVar8);
switchD_800eccfc_caseD_9:
  return;
}




// decompiled code
// original method signature: 
// void iFILE_CommandCompleteCallback(int param_1);
 // line 0, offset 0x800ed020
void iFILE_CommandCompleteCallback(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_8013ea9c;
  if (DAT_8013ea9c != (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
    if ((DAT_8013ea9c[1] == 0) && (uVar2 = 0xfffffffe, param_1 != 0)) {
      uVar2 = 1;
    }
    DAT_8013ea9c[2] = uVar2;
    DAT_8013ea9c = (undefined4 *)0x0;
    if (puVar1[10] != 0) {
      DAT_8013ea98 = DAT_8013ea98 + 1;
      (*(code *)puVar1[10])(*puVar1,puVar1[2],puVar1[5]);
      DAT_8013ea98 = DAT_8013ea98 + -1;
    }
    if (DAT_8013ea98 == 0) {
      iFILE_ExecCommand((uint *)0x0);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void iFILE_perror(void);
 // line 0, offset 0x800ed0d4
void iFILE_perror(void)

{
  return;
}




// decompiled code
// original method signature: 
// int reserveop(void);
 // line 0, offset 0x800ed0dc
int reserveop(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iVar4 = 0;
  if (0 < gFileDevice) {
    iVar3 = 0;
    do {
      uVar2 = *(uint *)(iVar3 + DAT_8013eaa0);
      if ((uVar2 >> 0x14 & 0xf) == 0) {
        *(uint *)(iVar3 + DAT_8013eaa0) = uVar2 & 0xff0fffff | 0x100000;
        *(undefined *)(iVar3 + DAT_8013eaa0 + 3) = (char)iVar4;
        uVar2 = DAT_00001704 & 0xfffff;
        DAT_00001704 = DAT_00001704 + 1;
        bVar1 = 0xfffff < (int)DAT_00001704;
        *(uint *)(iVar3 + DAT_8013eaa0) = *(uint *)(iVar3 + DAT_8013eaa0) & 0xfff00000 | uVar2;
        if (bVar1) {
          DAT_00001704 = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar4 < gFileDevice);
  }
  setCopReg(0,Status,Status,0);
  if (iVar4 != gFileDevice) {
    return DAT_8013eaa0 + iVar4 * 0x30;
  }
  return 0;
}




// decompiled code
// original method signature: 
// void freeop(undefined *param_1);
 // line 0, offset 0x800ed1f8
void freeop(undefined *param_1)

{
  uint uVar1;
  
  uVar1 = Status;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  blockclear(param_1,0x30);
  setCopReg(0,Status,uVar1,0);
  return;
}




// decompiled code
// original method signature: 
// int * reservehandle(void);
 // line 0, offset 0x800ed240
int * reservehandle(void)

{
  int iVar1;
  int *piVar2;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iVar1 = 0;
  piVar2 = DAT_8013eaa4;
  if (0 < DAT_8013ea8c) {
    do {
      if (*piVar2 == 0) {
        *piVar2 = 1;
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar1 < DAT_8013ea8c);
  }
  setCopReg(0,Status,Status,0);
  if (iVar1 == DAT_8013ea8c) {
    return (int *)0x0;
  }
  return DAT_8013eaa4 + iVar1 * 0x13;
}




// decompiled code
// original method signature: 
// void freehandle(undefined *param_1);
 // line 0, offset 0x800ed2f0
void freehandle(undefined *param_1)

{
  uint uVar1;
  
  uVar1 = Status;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  blockclear(param_1,0x4c);
  setCopReg(0,Status,uVar1,0);
  return;
}




// decompiled code
// original method signature: 
// uint SNDtimeremaining(uint param_1);
 // line 0, offset 0x800ed338
uint SNDtimeremaining(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_18 [2];
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar2 = iSNDgetchan(param_1);
    if ((int)uVar2 < 0) {
      iSNDleaveaudio();
      uVar1 = 0xfffffff8;
    }
    else {
      local_18[0] = -1;
      uVar1 = 0xfffffc00;
      while (iVar3 = iSNDpatchkey(uVar2,local_18), iVar3 != 0) {
        uVar4 = iSNDtimeremaining(local_18[0]);
        if ((int)uVar1 < (int)uVar4) {
          uVar1 = uVar4;
        }
      }
      iSNDleaveaudio();
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// int rinverse(uint param_1);
 // line 0, offset 0x800ed3ec
int rinverse(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 0x1f;
  uVar1 = (param_1 ^ uVar2) - uVar2;
  return (0xffffffff / uVar1 + (uint)((uint)((int)uVar1 >> 1) < 0xffffffffU % uVar1) ^ uVar2) -
         uVar2;
}




// decompiled code
// original method signature: 
// undefined * fixedsin(uint param_1);
 // line 0, offset 0x800ed424
undefined * fixedsin(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = fastintsin((int)param_1 >> 6);
  puVar2 = fastintcos((int)param_1 >> 6);
  return puVar1 + (((int)puVar2 >> 2) * ((int)((param_1 & 0x3f) * 0x6487e) >> 9) >> 0x15);
}




// decompiled code
// original method signature: 
// undefined * fixedcos(uint param_1);
 // line 0, offset 0x800ed4a4
undefined * fixedcos(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = fastintcos((int)param_1 >> 6);
  puVar2 = fastintsin((int)param_1 >> 6);
  return puVar1 + ((-(int)puVar2 >> 2) * ((int)((param_1 & 0x3f) * 0x6487e) >> 9) >> 0x15);
}




// decompiled code
// original method signature: 
// int fixedatan(uint param_1,uint param_2);
 // line 0, offset 0x800ed528
int fixedatan(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_18;
  uint local_14;
  
  uVar3 = 0;
  if ((int)param_2 < 0) {
    uVar3 = 2;
    param_2 = -param_2;
  }
  if ((int)param_1 < 0) {
    uVar3 = uVar3 | 4;
    param_1 = -param_1;
  }
  if (param_1 == param_2) {
    iVar2 = 0x2000;
  }
  else {
    uVar1 = param_1;
    if ((int)param_2 < (int)param_1) {
      uVar3 = uVar3 | 1;
      uVar1 = param_2;
      param_2 = param_1;
    }
    make64((int *)&local_18,uVar1,0x20);
    uVar1 = divu64(local_18,local_14,param_2);
    iVar2 = *(int *)(&fatantbl + (uVar1 >> 0x18) * 4) +
            ((*(int *)(&fatantbl + ((uVar1 >> 0x18) + 1) * 4) -
             *(int *)(&fatantbl + (uVar1 >> 0x18) * 4)) * (uVar1 >> 8 & 0xffff) >> 0x10);
  }
  switch(uVar3) {
  case 1:
    iVar2 = 0x4000 - iVar2;
    break;
  case 2:
    iVar2 = 0x8000 - iVar2;
    break;
  case 3:
    iVar2 = iVar2 + 0x4000;
    break;
  case 4:
    iVar2 = -iVar2;
    break;
  case 5:
    iVar2 = iVar2 + -0x4000;
    break;
  case 6:
    iVar2 = iVar2 + -0x8000;
    break;
  case 7:
    iVar2 = -0x4000 - iVar2;
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// uint ResetGraph(uint param_1);
 // line 0, offset 0x800ed670
uint ResetGraph(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 7;
  if (uVar1 == 3) {
LAB_800ed6bc:
    printf(s_ResetGraph_jtb__08x_env__08x_80056d10,&PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123654,
           &GEnv);
LAB_800ed6d8:
    FUN_800efe34(&GEnv,0,0x80);
    ResetCallback();
    GPU_cw();
    uVar1 = FUN_800ef86c(param_1);
    GEnv = (byte)uVar1;
    DAT_8012369d = 1;
    DAT_801236a0 = *(undefined2 *)(&PTR_DAT_8012371c + (uVar1 & 0xff));
    DAT_801236a2 = *(undefined2 *)(&DAT_80123728 + (uVar1 & 0xff) * 4);
    FUN_800efe34(&DAT_801236ac,0xff,0x5c);
    FUN_800efe34((undefined *)&DAT_80123708,0xff,0x14);
    uVar1 = (uint)GEnv;
  }
  else {
    if (uVar1 < 4) {
      if (uVar1 == 0) goto LAB_800ed6bc;
    }
    else {
      if (uVar1 == 5) goto LAB_800ed6d8;
    }
    if (1 < DAT_8012369e) {
      (*(code *)GPU_printf)(s_ResetGraph__d_____80056d30,param_1);
    }
    uVar1 = (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x34))(1);
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void SetDispMask(int param_1);
 // line 0, offset 0x800ed7e4
void SetDispMask(int param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_SetDispMask__d_____80056da0,param_1);
  }
  if (param_1 == 0) {
    FUN_800efe34((undefined *)&DAT_80123708,0xff,0x14);
  }
  uVar1 = 0x3000001;
  if (param_1 != 0) {
    uVar1 = 0x3000000;
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))(uVar1);
  return;
}




// decompiled code
// original method signature: 
// void DrawSync(undefined4 param_1);
 // line 0, offset 0x800ed87c
void DrawSync(undefined4 param_1)

{
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_DrawSync__d_____80056db4,param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x3c))(param_1);
  return;
}




// decompiled code
// original method signature: 
// void FUN_800ed8e4(undefined4 param_1,short *param_2);
 // line 0, offset 0x800ed8e4
void FUN_800ed8e4(undefined4 param_1,short *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  if (DAT_8012369e == '\x01') {
    iVar3 = (int)param_2[2];
    if ((iVar3 <= (int)DAT_801236a0) && (iVar3 + (int)*param_2 <= (int)DAT_801236a0)) {
      iVar1 = (int)param_2[1];
      if (((iVar1 <= (int)DAT_801236a2) &&
          (((iVar1 + (int)param_2[3] <= (int)DAT_801236a2 && (0 < iVar3)) && (-1 < (int)*param_2))))
         && ((-1 < iVar1 && (0 < (int)param_2[3])))) {
        return;
      }
    }
    ppuVar2 = (undefined **)s__s_bad_RECT_80056dc8;
  }
  else {
    if (DAT_8012369e != '\x02') {
      return;
    }
    ppuVar2 = &PTR_DAT_80056de8;
  }
  (*(code *)GPU_printf)(ppuVar2,param_1);
  (*(code *)GPU_printf)
            (s___d__d____d__d__80056dd4,(int)*param_2,(int)param_2[1],(int)param_2[2],
             (int)param_2[3]);
  return;
}




// decompiled code
// original method signature: 
// void ClearImage(short *param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800eda00
void ClearImage(short *param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_800ed8e4(s_ClearImage_80056dec,param_1);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0xc),param_1,8,
             (param_4 & 0xff) << 0x10 | (param_3 & 0xff) << 8 | param_2 & 0xff);
  return;
}




// decompiled code
// original method signature: 
// void LoadImage(short *param_1,undefined4 param_2);
 // line 0, offset 0x800eda90
void LoadImage(short *param_1,undefined4 param_2)

{
  FUN_800ed8e4(s_LoadImage_80056e04,param_1);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x20),param_1,8,
             param_2);
  return;
}




// decompiled code
// original method signature: 
// void StoreImage(short *param_1,undefined4 param_2);
 // line 0, offset 0x800edaf0
void StoreImage(short *param_1,undefined4 param_2)

{
  FUN_800ed8e4(s_StoreImage_80056e10,param_1);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x1c),param_1,8,
             param_2);
  return;
}




// decompiled code
// original method signature: 
// undefined4 MoveImage(undefined4 *param_1,uint param_2,int param_3);
 // line 0, offset 0x800edb50
undefined4 MoveImage(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_800ed8e4(s_MoveImage_80056e1c,(short *)param_1);
  uVar1 = 0xffffffff;
  if (*(short *)(param_1 + 1) != 0) {
    if (*(short *)((int)param_1 + 6) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      DAT_80123740 = param_3 << 0x10 | param_2 & 0xffff;
      DAT_8012373c = *param_1;
      DAT_80123744 = param_1[1];
      uVar1 = (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
                        (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x18)
                         ,&DAT_80123734,0x14,0);
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void ClearOTagR(undefined4 *param_1,undefined4 param_2);
 // line 0, offset 0x800edc08
void ClearOTagR(undefined4 *param_1,undefined4 param_2)

{
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_ClearOTagR__08x__d_____80056e40,param_1,param_2);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x2c))(param_1,param_2);
  DAT_8012375c = 0x4123748;
  *param_1 = 0x12375c;
  return;
}




// decompiled code
// original method signature: 
// void DrawOTag(undefined4 param_1);
 // line 0, offset 0x800edcb4
void DrawOTag(undefined4 param_1)

{
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_DrawOTag__08x_____80056e58,param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x18),param_1,0,0
            );
  return;
}




// decompiled code
// original method signature: 
// undefined4 * PutDrawEnv(undefined4 *param_1);
 // line 0, offset 0x800edd24
undefined4 * PutDrawEnv(undefined4 *param_1)

{
  undefined *puVar1;
  
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_PutDrawEnv__08x_____80056e6c,param_1);
  }
  FUN_800ee608((int)(param_1 + 7),param_1);
  puVar1 = PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694;
  param_1[7] = param_1[7] | 0xffffff;
  (**(code **)(puVar1 + 8))(*(undefined4 *)(puVar1 + 0x18),param_1 + 7,0x40,0);
  memcpy(&DAT_801236ac,param_1,0x5c);
  return param_1;
}




// decompiled code
// original method signature: 
// ushort * PutDispEnv(ushort *param_1);
 // line 0, offset 0x800edde4
ushort * PutDispEnv(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = 0x8000000;
  if (1 < DAT_8012369e) {
    (*(code *)GPU_printf)(s_PutDispEnv__08x_____80056ea0,param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))
            (((uint)param_1[1] & 0x3ff) << 10 | (uint)*param_1 & 0x3ff | 0x5000000);
  if ((((DAT_80123718 != *(int *)(param_1 + 8)) || (DAT_80123708 != *param_1)) ||
      (DAT_8012370a != param_1[1])) ||
     ((DAT_8012370c != param_1[2] || (DAT_8012370e != param_1[3])))) {
    uVar3 = GetVideoMode();
    *(char *)(param_1 + 9) = (char)uVar3;
    if ((uVar3 & 0xff) == 1) {
      uVar10 = 0x8000008;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      uVar10 = uVar10 | 0x10;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      uVar10 = uVar10 | 0x20;
    }
    if (DAT_8012369f != '\0') {
      uVar10 = uVar10 | 0x80;
    }
    uVar1 = param_1[2];
    if (0x118 < (short)uVar1) {
      if ((short)uVar1 < 0x161) {
        uVar10 = uVar10 | 1;
      }
      else {
        if ((short)uVar1 < 0x191) {
          uVar10 = uVar10 | 0x40;
        }
        else {
          if ((short)uVar1 < 0x231) {
            uVar10 = uVar10 | 2;
          }
          else {
            uVar10 = uVar10 | 3;
          }
        }
      }
    }
    bVar2 = (short)param_1[3] < 0x121;
    if (*(char *)(param_1 + 9) == '\0') {
      bVar2 = (short)param_1[3] < 0x101;
    }
    if (!bVar2) {
      uVar10 = uVar10 | 0x24;
    }
    (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))(uVar10);
    *(undefined *)(param_1 + 9) = 8;
  }
  if (((DAT_80123710 == param_1[4]) && (DAT_80123712 == param_1[5])) &&
     ((DAT_80123714 == param_1[6] &&
      ((DAT_80123716 == param_1[7] && (*(char *)(param_1 + 9) != '\b')))))) goto LAB_800ee2ac;
  uVar10 = GetVideoMode();
  *(char *)(param_1 + 9) = (char)uVar10;
  uVar3 = (int)(short)param_1[5] + 0x13;
  if ((uVar10 & 0xff) == 0) {
    uVar3 = (int)(short)param_1[5] + 0x10;
  }
  uVar10 = uVar3 + (int)(short)param_1[7];
  if ((int)(short)param_1[7] == 0) {
    uVar10 = uVar3 + 0xf0;
  }
  uVar1 = param_1[2];
  iVar9 = 0;
  if ((((0x118 < (short)uVar1) && (iVar9 = 1, 0x160 < (short)uVar1)) &&
      (iVar9 = 2, 400 < (short)uVar1)) && (iVar9 = 4, (short)uVar1 < 0x231)) {
    iVar9 = 3;
  }
  iVar4 = ((uint)*(byte *)(param_1 + 9) * 5 + iVar9) * 4;
  iVar5 = (uint)*(ushort *)(&DAT_80123772 + iVar4) - (uint)*(ushort *)(&DAT_80123770 + iVar4);
  uVar7 = (uint)*(ushort *)(&DAT_80123770 + iVar4) +
          (int)(short)param_1[4] * (uint)(byte)(&DAT_80123798)[iVar9];
  if ((int)(short)param_1[6] != 0) {
    iVar5 = iVar5 * (int)(short)param_1[6] >> 8;
  }
  uVar6 = uVar7 + iVar5;
  if (*(char *)(param_1 + 9) == '\0') {
    uVar8 = 500;
    if ((499 < (int)uVar7) && (uVar8 = 0xcb2, (int)uVar7 < 0xcb3)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(byte)(&DAT_80123798)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcda, (int)uVar6 < 0xcdb)) {
      uVar7 = uVar6;
    }
    if ((int)uVar3 < 0x10) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x101;
      if ((int)uVar3 < 0x102) {
        uVar6 = uVar3;
      }
    }
    uVar3 = uVar6 + 2;
    bVar2 = (int)uVar10 < 0x103;
    if ((int)uVar3 <= (int)uVar10) {
      uVar3 = 0x102;
      goto LAB_800ee244;
    }
  }
  else {
    uVar8 = 0x21c;
    if ((0x21b < (int)uVar7) && (uVar8 = 0xc94, (int)uVar7 < 0xc95)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(byte)(&DAT_80123798)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcbc, (int)uVar6 < 0xcbd)) {
      uVar7 = uVar6;
    }
    if ((int)uVar3 < 0x13) {
      uVar6 = 0x13;
    }
    else {
      uVar6 = 0x12f;
      if ((int)uVar3 < 0x130) {
        uVar6 = uVar3;
      }
    }
    bVar2 = (int)uVar10 < 0x132;
    uVar3 = uVar6 + 2;
    if ((int)(uVar6 + 2) <= (int)uVar10) {
      uVar3 = 0x131;
LAB_800ee244:
      if (bVar2) {
        uVar3 = uVar10;
      }
    }
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))
            ((uVar7 & 0xfff) << 0xc | uVar8 & 0xfff | 0x6000000);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_140_1998_01_12_07_80123694 + 0x10))
            ((uVar3 & 0x3ff) << 10 | uVar6 & 0x3ff | 0x7000000);
LAB_800ee2ac:
  memcpy(&DAT_80123708,param_1,0x14);
  return param_1;
}




// decompiled code
// original method signature: 
// void SetTexWindow(int param_1,byte *param_2);
 // line 0, offset 0x800ee2dc
void SetTexWindow(int param_1,byte *param_2)

{
  uint uVar1;
  
  *(undefined *)(param_1 + 3) = 2;
  uVar1 = FUN_800ee9e4(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




// decompiled code
// original method signature: 
// void SetDrawArea(int param_1,ushort *param_2);
 // line 0, offset 0x800ee314
void SetDrawArea(int param_1,ushort *param_2)

{
  uint uVar1;
  
  *(undefined *)(param_1 + 3) = 2;
  uVar1 = FUN_800ee898((int)(short)*param_2,(int)(short)param_2[1]);
  *(uint *)(param_1 + 4) = uVar1;
  uVar1 = FUN_800ee930((int)(((uint)*param_2 + (uint)param_2[2] + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2[1] + (uint)param_2[3] + -1) * 0x10000) >> 0x10);
  *(uint *)(param_1 + 8) = uVar1;
  return;
}




// decompiled code
// original method signature: 
// void SetDrawStp(int param_1,int param_2);
 // line 0, offset 0x800ee394
void SetDrawStp(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined *)(param_1 + 3) = 2;
  if (param_2 == 0) {
    uVar1 = 0xe6000000;
  }
  else {
    uVar1 = 0xe6000001;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




// decompiled code
// original method signature: 
// void SetDrawMode(int param_1,int param_2,int param_3,uint param_4,byte *param_5);
 // line 0, offset 0x800ee3bc
void SetDrawMode(int param_1,int param_2,int param_3,uint param_4,byte *param_5)

{
  uint uVar1;
  
  *(undefined *)(param_1 + 3) = 2;
  uVar1 = FUN_800ee878(param_2,param_3,param_4 & 0xffff);
  *(uint *)(param_1 + 4) = uVar1;
  uVar1 = FUN_800ee9e4(param_5);
  *(uint *)(param_1 + 8) = uVar1;
  return;
}




// decompiled code
// original method signature: 
// void SetDrawEnv(int param_1,ushort *param_2);
 // line 0, offset 0x800ee410
void SetDrawEnv(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = FUN_800ee898((int)(short)*param_2,(int)(short)param_2[1]);
  *(uint *)(param_1 + 4) = uVar4;
  uVar4 = FUN_800ee930((int)(((uint)param_2[2] + (uint)*param_2 + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2[1] + (uint)param_2[3] + -1) * 0x10000) >> 0x10);
  *(uint *)(param_1 + 8) = uVar4;
  uVar4 = FUN_800ee9c8((int)(short)param_2[4],(int)(short)param_2[5]);
  *(uint *)(param_1 + 0xc) = uVar4;
  uVar4 = FUN_800ee878((uint)*(byte *)((int)param_2 + 0x17),(uint)*(byte *)(param_2 + 0xb),
                       (uint)param_2[10]);
  *(uint *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_800ee9e4((byte *)(param_2 + 6));
  *(uint *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = 0xe6000000;
  cVar5 = '\a';
  if (*(char *)(param_2 + 0xc) != '\0') {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    uVar2 = 0;
    if ((-1 < (int)(short)uVar3) &&
       (uVar2 = DAT_801236a0 - 1, (int)(short)uVar3 <= (int)DAT_801236a0 + -1)) {
      uVar2 = uVar3;
    }
    if ((int)(short)uVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_801236a2 - 1;
      if ((int)(short)uVar1 <= (int)DAT_801236a2 + -1) {
        uVar3 = uVar1;
      }
    }
    cVar5 = '\n';
    local_14 = CONCAT22(uVar3,uVar2);
    local_18 = CONCAT22(param_2[1] - param_2[5],*param_2 - param_2[4]);
    *(uint *)(param_1 + 0x1c) =
         (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 |
         (uint)*(byte *)(param_2 + 0xd) << 8 | 0x60000000 | (uint)*(byte *)((int)param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x20) = local_18;
    *(undefined4 *)(param_1 + 0x24) = local_14;
  }
  *(char *)(param_1 + 3) = cVar5 + -1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_800ee608(int param_1,undefined4 *param_2);
 // line 0, offset 0x800ee608
void FUN_800ee608(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  char cVar7;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar6 = FUN_800ee898((int)*(short *)param_2,(int)*(short *)((int)param_2 + 2));
  *(uint *)(param_1 + 4) = uVar6;
  uVar6 = FUN_800ee930((int)(((uint)*(ushort *)(param_2 + 1) + (uint)*(ushort *)param_2 + -1) *
                            0x10000) >> 0x10,
                       (int)(((uint)*(ushort *)((int)param_2 + 2) +
                              (uint)*(ushort *)((int)param_2 + 6) + -1) * 0x10000) >> 0x10);
  *(uint *)(param_1 + 8) = uVar6;
  uVar6 = FUN_800ee9c8((int)*(short *)(param_2 + 2),(int)*(short *)((int)param_2 + 10));
  *(uint *)(param_1 + 0xc) = uVar6;
  uVar6 = FUN_800ee878((uint)*(byte *)((int)param_2 + 0x17),(uint)*(byte *)((int)param_2 + 0x16),
                       (uint)*(ushort *)(param_2 + 5));
  *(uint *)(param_1 + 0x10) = uVar6;
  uVar6 = FUN_800ee9e4((byte *)(param_2 + 3));
  *(uint *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = 0xe6000000;
  cVar7 = '\a';
  if (*(char *)(param_2 + 6) != '\0') {
    uVar3 = *param_2;
    uVar1 = *(ushort *)(param_2 + 1);
    sVar2 = *(short *)((int)param_2 + 6);
    uVar4 = 0;
    if ((-1 < (int)(short)uVar1) &&
       (uVar4 = DAT_801236a0 - 1, (int)(short)uVar1 <= (int)DAT_801236a0 + -1)) {
      uVar4 = uVar1;
    }
    if ((int)sVar2 < 0) {
      sVar5 = 0;
    }
    else {
      sVar5 = DAT_801236a2 + -1;
      if ((int)sVar2 <= (int)DAT_801236a2 + -1) {
        sVar5 = sVar2;
      }
    }
    local_14 = CONCAT22(sVar5,uVar4);
    if (((*(ushort *)param_2 & 0x3f) == 0) && ((uVar4 & 0x3f) == 0)) {
      cVar7 = '\n';
      *(uint *)(param_1 + 0x1c) =
           (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 |
           (uint)*(byte *)((int)param_2 + 0x1a) << 8 | 0x2000000 |
           (uint)*(byte *)((int)param_2 + 0x19);
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      *(undefined4 *)(param_1 + 0x24) = local_14;
    }
    else {
      cVar7 = '\n';
      local_18 = CONCAT22(*(short *)((int)param_2 + 2) - *(short *)((int)param_2 + 10),
                          *(ushort *)param_2 - *(short *)(param_2 + 2));
      *(uint *)(param_1 + 0x1c) =
           (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 |
           (uint)*(byte *)((int)param_2 + 0x1a) << 8 | 0x60000000 |
           (uint)*(byte *)((int)param_2 + 0x19);
      *(undefined4 *)(param_1 + 0x20) = local_18;
      *(undefined4 *)(param_1 + 0x24) = local_14;
    }
  }
  *(char *)(param_1 + 3) = cVar7 + -1;
  return;
}




// decompiled code
// original method signature: 
// uint FUN_800ee878(int param_1,int param_2,uint param_3);
 // line 0, offset 0x800ee878
uint FUN_800ee878(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0xe1000000;
  if (param_2 != 0) {
    uVar1 = 0xe1000200;
  }
  param_3 = param_3 & 0x9ff;
  if (param_1 != 0) {
    param_3 = param_3 | 0x400;
  }
  return uVar1 | param_3;
}




// decompiled code
// original method signature: 
// uint FUN_800ee898(uint param_1,uint param_2);
 // line 0, offset 0x800ee898
uint FUN_800ee898(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((-1 < (int)(short)param_1) &&
     (uVar1 = (uint)DAT_801236a0 - 1, (int)(short)param_1 <= (int)(short)DAT_801236a0 + -1)) {
    uVar1 = param_1;
  }
  if ((int)(short)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 0x3ff;
    if ((int)(short)param_2 <= (int)(short)DAT_801236a2 + -1) goto LAB_800ee918;
    uVar2 = (uint)DAT_801236a2 - 1;
  }
  uVar2 = uVar2 & 0x3ff;
LAB_800ee918:
  return uVar2 << 10 | uVar1 & 0x3ff | 0xe3000000;
}




// decompiled code
// original method signature: 
// uint FUN_800ee930(uint param_1,uint param_2);
 // line 0, offset 0x800ee930
uint FUN_800ee930(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((-1 < (int)(short)param_1) &&
     (uVar1 = (uint)DAT_801236a0 - 1, (int)(short)param_1 <= (int)(short)DAT_801236a0 + -1)) {
    uVar1 = param_1;
  }
  if ((int)(short)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 0x3ff;
    if ((int)(short)param_2 <= (int)(short)DAT_801236a2 + -1) goto LAB_800ee9b0;
    uVar2 = (uint)DAT_801236a2 - 1;
  }
  uVar2 = uVar2 & 0x3ff;
LAB_800ee9b0:
  return uVar2 << 10 | uVar1 & 0x3ff | 0xe4000000;
}




// decompiled code
// original method signature: 
// uint FUN_800ee9c8(uint param_1,uint param_2);
 // line 0, offset 0x800ee9c8
uint FUN_800ee9c8(uint param_1,uint param_2)

{
  return (param_2 & 0x7ff) << 0xb | param_1 & 0x7ff | 0xe5000000;
}




// decompiled code
// original method signature: 
// uint FUN_800ee9e4(byte *param_1);
 // line 0, offset 0x800ee9e4
uint FUN_800ee9e4(byte *param_1)

{
  uint uVar1;
  
  if (param_1 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1[2] >> 3) << 0xf | (uint)(*param_1 >> 3) << 10 | 0xe2000000 |
            ((int)(-(int)*(short *)(param_1 + 6) & 0xffU) >> 3) << 5 |
            (int)(-(int)*(short *)(param_1 + 4) & 0xffU) >> 3;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// int FUN_800eea7c(int param_1,int param_2);
 // line 0, offset 0x800eea7c
int FUN_800eea7c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)PTR_DMA_DPCR_801237c0 = *(uint *)PTR_DMA_DPCR_801237c0 | 0x8000000;
  *(undefined4 *)PTR_DMA_OTC_CHCR_801237bc = 0;
  *(int *)PTR_DMA_OTC_MADR_801237b4 = param_1 + param_2 * 4 + -4;
  *(int *)PTR_DMA_OTC_BCR_801237b8 = param_2;
  *(undefined4 *)PTR_DMA_OTC_CHCR_801237bc = 0x11000002;
  FUN_800efaf8();
  uVar1 = *(uint *)PTR_DMA_OTC_CHCR_801237bc;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = FUN_800efb2c();
    if (iVar2 != 0) break;
    uVar1 = *(uint *)PTR_DMA_OTC_CHCR_801237bc;
  }
  return -1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800eeb5c(undefined4 *param_1,uint param_2);
 // line 0, offset 0x800eeb5c
undefined4 FUN_800eeb5c(undefined4 *param_1,uint param_2)

{
  short sVar1;
  
  if ((int)*(short *)(param_1 + 1) < 0) {
    sVar1 = 0;
  }
  else {
    sVar1 = DAT_801236a0 + -1;
    if ((int)*(short *)(param_1 + 1) <= (int)DAT_801236a0 + -1) {
      sVar1 = *(short *)(param_1 + 1);
    }
  }
  *(short *)(param_1 + 1) = sVar1;
  if ((int)*(short *)((int)param_1 + 6) < 0) {
    sVar1 = 0;
  }
  else {
    sVar1 = DAT_801236a2 + -1;
    if ((int)*(short *)((int)param_1 + 6) <= (int)DAT_801236a2 + -1) {
      sVar1 = *(short *)((int)param_1 + 6);
    }
  }
  *(short *)((int)param_1 + 6) = sVar1;
  if (((*(ushort *)param_1 & 0x3f) == 0) && ((*(ushort *)(param_1 + 1) & 0x3f) == 0)) {
    DAT_8013eab0 = 0x5ffffff;
    DAT_8013eab4 = 0xe6000000;
    DAT_8013eabc = param_2 & 0xffffff | 0x2000000;
    DAT_8013eab8 = *(uint *)PTR_GPU_REG1_801237a4 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    DAT_8013eac0 = *param_1;
    DAT_8013eac4 = param_1[1];
  }
  else {
    DAT_8013eab0 = 0x813ead8;
    DAT_8013eac8 = param_2 & 0xffffff | 0x60000000;
    DAT_8013eac0 = 0xe6000000;
    DAT_8013eab4 = 0xe3000000;
    DAT_8013eab8 = 0xe4ffffff;
    DAT_8013eabc = 0xe5000000;
    DAT_8013eac4 = *(uint *)PTR_GPU_REG1_801237a4 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    DAT_8013eacc = *param_1;
    DAT_8013ead0 = param_1[1];
    DAT_8013ead8 = 0x3ffffff;
    DAT_8013eadc = FUN_800ef308(3);
    DAT_8013eadc = DAT_8013eadc | 0xe3000000;
    DAT_8013eae0 = FUN_800ef308(4);
    DAT_8013eae0 = DAT_8013eae0 | 0xe4000000;
    DAT_8013eae4 = FUN_800ef308(5);
    DAT_8013eae4 = DAT_8013eae4 | 0xe5000000;
  }
  FUN_800ef2c0(&DAT_8013eab0);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800eed8c(undefined4 *param_1,undefined4 *param_2);
 // line 0, offset 0x800eed8c
/* WARNING: Removing unreachable block (ram,0x800eeef8) */

undefined4 FUN_800eed8c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  FUN_800efaf8();
  if (*(short *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 1);
    if (DAT_801236a0 < *(short *)(param_1 + 1)) {
      sVar5 = DAT_801236a0;
    }
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = DAT_801236a2;
    if (*(short *)((int)param_1 + 6) <= DAT_801236a2) goto LAB_800eee34;
  }
  sVar6 = sVar5;
LAB_800eee34:
  *(short *)((int)param_1 + 6) = sVar6;
  uVar3 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar4 = uVar3 + (uVar3 >> 0x1f);
  iVar7 = iVar4 >> 1;
  iVar4 = iVar4 >> 5;
  if (iVar7 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar7 = iVar7 + iVar4 * -0x10;
    uVar3 = *(uint *)PTR_GPU_REG1_801237a4;
    while ((uVar3 & 0x4000000) == 0) {
      iVar2 = FUN_800efb2c();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uVar3 = *(uint *)PTR_GPU_REG1_801237a4;
    }
    *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x4000000;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = 0x1000000;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = 0xa0000000;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = *param_1;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = param_1[1];
    while (iVar7 = iVar7 + -1, iVar7 != -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined4 *)PTR_GPU_REG0_801237a0 = uVar1;
    }
    if (iVar4 != 0) {
      *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x4000002;
      *(undefined4 **)PTR_DMA_GPU_MADR_801237a8 = param_2;
      *(uint *)PTR_DMA_GPU_BCR_801237ac = iVar4 << 0x10 | 0x10;
      *(undefined4 *)PTR_DMA_GPU_CHCR_801237b0 = 0x1000201;
    }
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800eefc8(undefined4 *param_1,undefined4 *param_2);
 // line 0, offset 0x800eefc8
undefined4 FUN_800eefc8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  FUN_800efaf8();
  if (*(short *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 1);
    if (DAT_801236a0 < *(short *)(param_1 + 1)) {
      sVar5 = DAT_801236a0;
    }
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = DAT_801236a2;
    if (*(short *)((int)param_1 + 6) <= DAT_801236a2) goto LAB_800ef068;
  }
  sVar6 = sVar5;
LAB_800ef068:
  *(short *)((int)param_1 + 6) = sVar6;
  uVar3 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar4 = uVar3 + (uVar3 >> 0x1f);
  iVar7 = iVar4 >> 1;
  iVar4 = iVar4 >> 5;
  if (iVar7 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar7 = iVar7 + iVar4 * -0x10;
    uVar3 = *(uint *)PTR_GPU_REG1_801237a4;
    while ((uVar3 & 0x4000000) == 0) {
      iVar2 = FUN_800efb2c();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uVar3 = *(uint *)PTR_GPU_REG1_801237a4;
    }
    *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x4000000;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = 0x1000000;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = 0xc0000000;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = *param_1;
    *(undefined4 *)PTR_GPU_REG0_801237a0 = param_1[1];
    uVar3 = *(uint *)PTR_GPU_REG1_801237a4;
    while ((uVar3 & 0x8000000) == 0) {
      iVar2 = FUN_800efb2c();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uVar3 = *(uint *)PTR_GPU_REG1_801237a4;
    }
    while (iVar7 = iVar7 + -1, iVar7 != -1) {
      *param_2 = *(undefined4 *)PTR_GPU_REG0_801237a0;
      param_2 = param_2 + 1;
    }
    if (iVar4 != 0) {
      *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x4000003;
      *(undefined4 **)PTR_DMA_GPU_MADR_801237a8 = param_2;
      *(uint *)PTR_DMA_GPU_BCR_801237ac = iVar4 << 0x10 | 0x10;
      *(undefined4 *)PTR_DMA_GPU_CHCR_801237b0 = 0x1000200;
    }
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void FUN_800ef248(uint param_1);
 // line 0, offset 0x800ef248
void FUN_800ef248(uint param_1)

{
  *(uint *)PTR_GPU_REG1_801237a4 = param_1;
  (&DAT_8013eaf8)[param_1 >> 0x18] = (char)param_1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_800ef2c0(undefined4 param_1);
 // line 0, offset 0x800ef2c0
void FUN_800ef2c0(undefined4 param_1)

{
  *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x4000002;
  *(undefined4 *)PTR_DMA_GPU_MADR_801237a8 = param_1;
  *(undefined4 *)PTR_DMA_GPU_BCR_801237ac = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_801237b0 = 0x1000401;
  return;
}




// decompiled code
// original method signature: 
// uint FUN_800ef308(uint param_1);
 // line 0, offset 0x800ef308
uint FUN_800ef308(uint param_1)

{
  *(uint *)PTR_GPU_REG1_801237a4 = param_1 | 0x10000000;
  return *(uint *)PTR_GPU_REG0_801237a0 & 0xffffff;
}




// decompiled code
// original method signature: 
// void FUN_800ef338(undefined *param_1,undefined4 *param_2,undefined4 param_3);
 // line 0, offset 0x800ef338
void FUN_800ef338(undefined *param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_800ef35c(param_1,param_2,0,param_3);
  return;
}




// decompiled code
// original method signature: 
// uint FUN_800ef35c(undefined *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
 // line 0, offset 0x800ef35c
uint FUN_800ef35c(undefined *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_800efaf8();
  while( true ) {
    if ((_qin + 1 & 0x3f) != _qout) {
      DAT_801237cc = SetIntrMask(0);
      DAT_801236a4 = 1;
      if ((DAT_8012369d == '\0') ||
         (((_qin == _qout && ((*(uint *)PTR_DMA_GPU_CHCR_801237b0 & 0x1000000) == 0)) &&
          (DAT_801236a8 == 0)))) {
        do {
        } while ((*(uint *)PTR_GPU_REG1_801237a4 & 0x4000000) == 0);
        (*(code *)param_1)(param_2,param_4);
        SetIntrMask((short)DAT_801237cc);
        uVar1 = 0;
      }
      else {
        DMACallback();
        iVar5 = 0;
        if (param_3 == 0) {
          *(undefined4 **)(&DAT_8013ec04 + _qin * 0x60) = param_2;
        }
        else {
          while( true ) {
            iVar2 = param_3;
            if (param_3 < 0) {
              iVar2 = param_3 + 3;
            }
            iVar3 = iVar5 * 4;
            if (iVar2 >> 2 <= iVar5) break;
            uVar4 = *param_2;
            param_2 = param_2 + 1;
            iVar5 = iVar5 + 1;
            *(undefined4 *)(&DAT_8013ec0c + iVar3 + _qin * 0x60) = uVar4;
          }
          *(undefined **)(&DAT_8013ec04 + _qin * 0x60) = &DAT_8013ec0c + _qin * 0x60;
        }
        *(undefined4 *)(&DAT_8013ec08 + _qin * 0x60) = param_4;
        *(undefined **)(&_que + _qin * 0x60) = param_1;
        _qin = _qin + 1 & 0x3f;
        SetIntrMask((short)DAT_801237cc);
        FUN_800ef60c();
        uVar1 = _qin - _qout & 0x3f;
      }
      return uVar1;
    }
    iVar5 = FUN_800efb2c();
    if (iVar5 != 0) break;
    FUN_800ef60c();
  }
  return 0xffffffff;
}




// decompiled code
// original method signature: 
// uint FUN_800ef60c(void);
 // line 0, offset 0x800ef60c
uint FUN_800ef60c(void)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)PTR_DMA_GPU_CHCR_801237b0 & 0x1000000) == 0) {
    DAT_801237d0 = SetIntrMask(0);
    if (_qin != _qout) {
      uVar1 = *(uint *)PTR_DMA_GPU_CHCR_801237b0;
      while ((uVar1 & 0x1000000) == 0) {
        if (((_qout + 1 & 0x3f) == _qin) && (DAT_801236a8 == (code *)0x0)) {
          DMACallback();
        }
        uVar1 = *(uint *)PTR_GPU_REG1_801237a4;
        while ((uVar1 & 0x4000000) == 0) {
          uVar1 = *(uint *)PTR_GPU_REG1_801237a4;
        }
        (**(code **)(&_que + _qout * 0x60))
                  (*(undefined4 *)(&DAT_8013ec04 + _qout * 0x60),
                   *(undefined4 *)(&DAT_8013ec08 + _qout * 0x60));
        _qout = _qout + 1 & 0x3f;
        if (_qin == _qout) break;
        uVar1 = *(uint *)PTR_DMA_GPU_CHCR_801237b0;
      }
    }
    SetIntrMask((short)DAT_801237d0);
    if ((((_qin == _qout) && ((*(uint *)PTR_DMA_GPU_CHCR_801237b0 & 0x1000000) == 0)) &&
        (DAT_801236a4 != 0)) && (DAT_801236a8 != (code *)0x0)) {
      DAT_801236a4 = 0;
      (*DAT_801236a8)();
    }
    uVar1 = _qin - _qout & 0x3f;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800ef86c(uint param_1);
 // line 0, offset 0x800ef86c
undefined4 FUN_800ef86c(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  DAT_801237d4 = SetIntrMask(0);
  _qout = 0;
  _qin = 0;
  uVar2 = param_1 & 7;
  if (uVar2 == 1) {
LAB_800ef93c:
    *(undefined4 *)PTR_DMA_GPU_CHCR_801237b0 = 0x401;
    *(uint *)PTR_DMA_DPCR_801237c0 = *(uint *)PTR_DMA_DPCR_801237c0 | 0x800;
    *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x2000000;
    *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x1000000;
  }
  else {
    if (uVar2 < 2) {
      if (uVar2 != 0) goto LAB_800ef988;
    }
    else {
      if (uVar2 == 3) goto LAB_800ef93c;
      if (uVar2 != 5) goto LAB_800ef988;
    }
    *(undefined4 *)PTR_DMA_GPU_CHCR_801237b0 = 0x401;
    *(uint *)PTR_DMA_DPCR_801237c0 = *(uint *)PTR_DMA_DPCR_801237c0 | 0x800;
    *(undefined4 *)PTR_GPU_REG1_801237a4 = 0;
    FUN_800efe34(&DAT_8013eaf8,0,0x100);
    FUN_800efe34(&_que,0,0x1800);
  }
LAB_800ef988:
  SetIntrMask((short)DAT_801237d4);
  uVar1 = 0;
  if ((param_1 & 7) == 0) {
    uVar3 = FUN_800efc70(param_1);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint FUN_800ef9bc(int param_1);
 // line 0, offset 0x800ef9bc
uint FUN_800ef9bc(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    FUN_800efaf8();
    do {
      if (_qin == _qout) {
        while (((*(uint *)PTR_DMA_GPU_CHCR_801237b0 & 0x1000000) != 0 ||
               ((*(uint *)PTR_GPU_REG1_801237a4 & 0x4000000) == 0))) {
          iVar1 = FUN_800efb2c();
          if (iVar1 != 0) {
            return 0xffffffff;
          }
        }
        return 0;
      }
      FUN_800ef60c();
      iVar1 = FUN_800efb2c();
    } while (iVar1 == 0);
    return 0xffffffff;
  }
  uVar2 = _qin - _qout & 0x3f;
  if (uVar2 != 0) {
    FUN_800ef60c();
  }
  if (((*(uint *)PTR_DMA_GPU_CHCR_801237b0 & 0x1000000) == 0) &&
     ((*(uint *)PTR_GPU_REG1_801237a4 & 0x4000000) != 0)) {
    return uVar2;
  }
  if (uVar2 != 0) {
    return uVar2;
  }
  return 1;
}




// decompiled code
// original method signature: 
// void FUN_800efaf8(void);
 // line 0, offset 0x800efaf8
void FUN_800efaf8(void)

{
  uint uVar1;
  
  uVar1 = VSync(-1);
  DAT_801237d8 = uVar1 + 0xf0;
  DAT_801237dc = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800efb2c(void);
 // line 0, offset 0x800efb2c
undefined4 FUN_800efb2c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = VSync(-1);
  if ((DAT_801237d8 < (int)uVar2) ||
     (iVar3 = DAT_801237dc + 1, bVar1 = 0xf0000 < DAT_801237dc, DAT_801237dc = iVar3, bVar1)) {
    printf(s_GPU_timeout_que__d_stat__08x_chc_80056eb8,_qin - _qout & 0x3f,
           *(undefined4 *)PTR_GPU_REG1_801237a4,*(undefined4 *)PTR_DMA_GPU_CHCR_801237b0,
           *(undefined4 *)PTR_DMA_GPU_MADR_801237a8);
    DAT_801237d4 = SetIntrMask(0);
    _qout = 0;
    _qin = 0;
    *(undefined4 *)PTR_DMA_GPU_CHCR_801237b0 = 0x401;
    *(uint *)PTR_DMA_DPCR_801237c0 = *(uint *)PTR_DMA_DPCR_801237c0 | 0x800;
    *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x2000000;
    *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x1000000;
    SetIntrMask((short)DAT_801237d4);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    DAT_801237dc = iVar3;
  }
  return uVar4;
}




// decompiled code
// original method signature: 
// undefined8 FUN_800efc70(uint param_1);
 // line 0, offset 0x800efc70
undefined8 FUN_800efc70(uint param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x10000007;
  puVar1 = PTR_GPU_REG1_801237a4;
  puVar3 = (undefined *)0xe1000000;
  if ((*(uint *)PTR_GPU_REG0_801237a0 & 0xffffff) == 2) {
    if ((param_1 & 8) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
      *(undefined4 *)PTR_GPU_REG1_801237a4 = 0x9000001;
      puVar3 = puVar1;
    }
  }
  else {
    *(uint *)PTR_GPU_REG0_801237a0 = *(uint *)PTR_GPU_REG1_801237a4 & 0x3fff | 0xe1001000;
    uVar2 = 0;
    puVar3 = *(undefined **)PTR_GPU_REG0_801237a0;
  }
  return CONCAT44(uVar2,puVar3);
}




// decompiled code
// original method signature: 
// void FUN_800efe0c(void);
 // line 0, offset 0x800efe0c
void FUN_800efe0c(void)

{
  DMACallback();
  return;
}




// decompiled code
// original method signature: 
// void FUN_800efe34(undefined *param_1,undefined param_2,int param_3);
 // line 0, offset 0x800efe34
void FUN_800efe34(undefined *param_1,undefined param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + -1;
  if (param_3 != 0) {
    do {
      *param_1 = param_2;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}




// decompiled code
// original method signature: 
// void PadStartCom(void);
 // line 0, offset 0x800efe60
void PadStartCom(void)

{
  _padStartCom();
  return;
}




// decompiled code
// original method signature: 
// void PadStopCom(void);
 // line 0, offset 0x800efe80
void PadStopCom(void)

{
  _padStopCom();
  return;
}




// decompiled code
// original method signature: 
// uint PadGetState(void);
 // line 0, offset 0x800efea0
uint PadGetState(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (*_padFuncPort2Info)();
  if (((*(uint *)(iVar2 + 0x34) & 0xffff0000) != 0) ||
     (((iVar2 != *(int *)(iVar2 + 0x10) && (*(char *)(iVar2 + 0x38) != '\0')) ||
      (**(char **)(iVar2 + 0x30) != '\0')))) {
    bVar1 = *(byte *)(iVar2 + 0x49);
    if (bVar1 == 3) {
      return 1;
    }
    if (bVar1 < 4) {
      if (bVar1 == 2) {
        return 1;
      }
    }
    else {
      if (bVar1 == 6) {
        return 4;
      }
    }
  }
  return (uint)*(byte *)(iVar2 + 0x49);
}




// decompiled code
// original method signature: 
// uint PadInfoMode(undefined4 param_1,int param_2,int param_3);
 // line 0, offset 0x800eff60
uint PadInfoMode(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(*_padFuncPort2Info)();
  if (param_2 == 3) {
    uVar2 = (uint)*(byte *)(piVar1 + 0x39);
  }
  else {
    if (param_2 < 4) {
      if (param_2 == 1) {
        uVar2 = (uint)*(byte *)(piVar1 + 0x3a);
      }
      else {
        uVar2 = 0;
        if (param_2 == 2) {
          uVar2 = (uint)*(ushort *)((int)piVar1 + 0xe6);
        }
      }
    }
    else {
      if (param_2 == 4) {
        if (param_3 < 0) {
          uVar2 = (uint)*(byte *)((int)piVar1 + 0xe3);
        }
        else {
          if (param_3 < (int)(uint)*(byte *)((int)piVar1 + 0xe3)) {
            uVar2 = (uint)*(ushort *)(param_3 * 2 + *piVar1);
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0;
        if (param_2 == 100) {
          uVar2 = piVar1[0x13];
        }
      }
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint PadInfoAct(undefined4 param_1,int param_2,undefined4 param_3);
 // line 0, offset 0x800f0058
uint PadInfoAct(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  iVar1 = (*_padFuncPort2Info)();
  if (param_2 < 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 0xe9);
  }
  else {
    if (param_2 < (int)(uint)*(byte *)(iVar1 + 0xe9)) {
      pbVar3 = (byte *)(*(int *)(iVar1 + 4) + param_2 * 5);
      switch(param_3) {
      case 1:
        return (uint)*pbVar3;
      case 2:
        return (uint)pbVar3[1];
      case 3:
        return (uint)pbVar3[2];
      case 4:
        return (uint)pbVar3[3];
      case 5:
        return (uint)pbVar3[4];
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void PadSetActAlign(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800f012c
void PadSetActAlign(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*_padFuncPort2Info)();
  _padSetActAlign(iVar1,param_2);
  return;
}




// decompiled code
// original method signature: 
// void PadSetMainMode(undefined4 param_1,char param_2,undefined param_3);
 // line 0, offset 0x800f0164
void PadSetMainMode(undefined4 param_1,char param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = (*_padFuncPort2Info)();
  _padSetMainMode(iVar1,param_2,param_3);
  return;
}




// decompiled code
// original method signature: 
// void PadSetAct(undefined4 param_1,undefined4 param_2,undefined param_3);
 // line 0, offset 0x800f01ac
void PadSetAct(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = (*_padFuncPort2Info)();
  _padSetAct(iVar1,param_2,param_3);
  return;
}




// decompiled code
// original method signature: 
// int * addmatrix(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x800f01fc
int * addmatrix(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_3;
  do {
    iVar2 = *param_2;
    param_2 = param_2 + 1;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
    *piVar3 = iVar1 + iVar2;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 9);
  return param_3;
}




// decompiled code
// original method signature: 
// int * submatrix(int *param_1,int *param_2,int *param_3);
 // line 0, offset 0x800f0234
int * submatrix(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_3;
  do {
    iVar2 = *param_2;
    param_2 = param_2 + 1;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
    *piVar3 = iVar1 - iVar2;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 9);
  return param_3;
}




// decompiled code
// original method signature: 
// uint * scalematrix(int *param_1,int param_2,uint *param_3);
 // line 0, offset 0x800f026c
uint * scalematrix(int *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = param_3;
  do {
    iVar2 = *param_1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
    uVar1 = fixedmult(iVar2,param_2);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 < 9);
  return param_3;
}




// decompiled code
// original method signature: 
// void reorthogonalize(int *param_1);
 // line 0, offset 0x800f02e4
void reorthogonalize(int *param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint auStack240 [10];
  int local_c8 [8];
  int aiStack168 [2];
  int aiStack160 [10];
  int local_78 [10];
  int local_50 [10];
  
  iVar12 = 0;
  do {
    transpose(param_1,local_c8);
    transmult(local_c8,param_1,auStack240);
    submatrix((int *)auStack240,(int *)&identitymatrix,aiStack160);
    piVar3 = local_78;
    ppuVar1 = &identitymatrix;
    do {
      puVar8 = ppuVar1[1];
      puVar9 = ppuVar1[2];
      puVar5 = ppuVar1[3];
      *(undefined **)piVar3 = *ppuVar1;
      *(undefined **)(piVar3 + 1) = puVar8;
      *(undefined **)(piVar3 + 2) = puVar9;
      *(undefined **)(piVar3 + 3) = puVar5;
      ppuVar1 = ppuVar1 + 4;
      piVar3 = piVar3 + 4;
    } while (ppuVar1 != &PTR_DAT_8012380c);
    *(undefined **)piVar3 = PTR_DAT_8012380c;
    piVar3 = local_50;
    ppuVar1 = &identitymatrix;
    do {
      puVar9 = ppuVar1[1];
      puVar5 = ppuVar1[2];
      puVar8 = ppuVar1[3];
      *(undefined **)piVar3 = *ppuVar1;
      *(undefined **)(piVar3 + 1) = puVar9;
      *(undefined **)(piVar3 + 2) = puVar5;
      *(undefined **)(piVar3 + 3) = puVar8;
      ppuVar1 = ppuVar1 + 4;
      piVar3 = piVar3 + 4;
    } while (ppuVar1 != &PTR_DAT_8012380c);
    *(undefined **)piVar3 = PTR_DAT_8012380c;
    iVar11 = 1;
    piVar3 = &DAT_80123814;
    do {
      transmult(local_78,aiStack160,local_c8);
      piVar2 = local_c8;
      piVar4 = local_78;
      do {
        iVar10 = piVar2[1];
        iVar6 = piVar2[2];
        iVar7 = piVar2[3];
        *piVar4 = *piVar2;
        piVar4[1] = iVar10;
        piVar4[2] = iVar6;
        piVar4[3] = iVar7;
        piVar2 = piVar2 + 4;
        piVar4 = piVar4 + 4;
      } while (piVar2 != aiStack168);
      *piVar4 = *piVar2;
      iVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar11 = iVar11 + 1;
      scalematrix(local_78,iVar6,auStack240);
      addmatrix(local_50,(int *)auStack240,local_50);
    } while (iVar11 < 4);
    piVar2 = local_c8;
    piVar3 = param_1;
    do {
      iVar7 = piVar3[1];
      iVar11 = piVar3[2];
      iVar6 = piVar3[3];
      *piVar2 = *piVar3;
      piVar2[1] = iVar7;
      piVar2[2] = iVar11;
      piVar2[3] = iVar6;
      piVar3 = piVar3 + 4;
      piVar2 = piVar2 + 4;
    } while (piVar3 != param_1 + 8);
    *piVar2 = *piVar3;
    transmult(local_c8,local_50,param_1);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  return;
}




// decompiled code
// original method signature: 
// uint __gtdf2(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800f0514
uint __gtdf2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 != param_4) || (uVar1 = 0, param_1 != param_3)) {
    if (((param_2 & 0x7fffffff) == 0) &&
       (((param_1 == 0 && ((param_4 & 0x7fffffff) == 0)) && (param_3 == 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)((param_2 & 0x80000000) == 0);
      if ((param_2 & 0x80000000) == (param_4 & 0x80000000)) {
        uVar2 = (int)param_2 >> 0x14 & 0x7ff;
        uVar1 = (int)param_4 >> 0x14 & 0x7ff;
        if (uVar2 <= uVar1) {
          if (uVar2 != uVar1) {
            return (uint)((int)param_2 < 0);
          }
          uVar1 = param_2 & 0xfffff | 0x100000;
          uVar2 = param_4 & 0xfffff | 0x100000;
          if (uVar1 <= uVar2) {
            if (uVar1 != uVar2) {
              return (uint)((int)param_2 < 0);
            }
            if (param_1 <= param_3) {
              return (uint)((int)param_2 < 0);
            }
          }
        }
        uVar1 = (uint)((param_2 & 0x80000000) == 0);
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 * initlinkmode(undefined4 param_1,int param_2,undefined4 param_3);
 // line 0, offset 0x800f05f4
undefined4 * initlinkmode(undefined4 param_1,int param_2,undefined4 param_3)

{
  iGp00001930 = 0x10;
  iGp00001940 = param_2;
  if (puGp000017b8 != (undefined4 *)0x0) {
    iGp00001940 = param_2;
    purgememadr((int)puGp000017b8);
  }
  puGp000017b8 = (undefined4 *)
                 reservememadr(s_Draw_Lists_80056f18,(iGp00001940 * 0xd + iGp00001930) * 8,0x10);
  puGp000017bc = puGp000017b8 + iGp00001930 * 2;
  puGp00001928 = puGp000017b8 + iGp00001930;
  puGp0000193c = puGp000017bc + param_2 * 0xd;
  puGp00001924 = puGp000017b8;
  puGp00001938 = puGp000017bc;
  ClearOTagR(puGp000017b8,iGp00001930);
  uGp000017c0 = param_3;
  uGp000017c4 = 0;
  uGp0000191c = 0;
  uGp00001920 = 0;
  puGp0000192c = puGp00001924;
  puGp00001934 = puGp000017bc;
  return puGp000017b8;
}




// decompiled code
// original method signature: 
// void waitdraw(void);
 // line 0, offset 0x800f06e0
void waitdraw(void)

{
  if (iGp000017c4 != 0) {
    DrawSync(0);
    iGp000017c4 = 0;
  }
  return;
}




// decompiled code
// original method signature: 
// int settrans(int param_1);
 // line 0, offset 0x800f070c
int settrans(int param_1)

{
  if (-1 < param_1) {
    if (param_1 == 0) {
      iGp000017c8 = 1;
    }
    else {
      iGp000017c8 = 3;
    }
  }
  return iGp000017c8 >> 1;
}




// decompiled code
// original method signature: 
// void movfxya(uint *puParm1,undefined4 uParm2,undefined4 uParm3);
 // line 0, offset 0x800f0738
void movfxya(uint *puParm1,undefined4 uParm2,undefined4 uParm3)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  uint *puVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint in_t6;
  int iVar14;
  int unaff_s1;
  int iVar15;
  uint uVar16;
  int iVar17;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  int local_38;
  int local_34;
  int local_30;
  
  iVar8 = shapedepth((byte *)puParm1);
  if ((*(byte *)puParm1 & 8) == 0) {
    local_40 = (short)DAT_801486e8 + (short)uParm2;
    local_3e = (short)DAT_801486ec + (short)uParm3;
    local_3c = *(undefined2 *)(puParm1 + 1);
    local_3a = *(undefined2 *)((int)puParm1 + 6);
    vramimage(&local_40,puParm1 + 4);
  }
  else {
    if (((*(byte *)puParm1 & 3) == 2) && (((uint)semitrans & 2) == 0)) {
      fastmovfxya(puParm1,uParm2,uParm3);
    }
    else {
      sVar3 = *(short *)((int)puParm1 + 6);
      local_34 = 0;
      if (0 < *(short *)((int)puParm1 + 6)) {
        do {
          uVar12 = ((int)(puParm1[3] << 4) >> 0x14) + local_34;
          uVar16 = uVar12 & 0xff;
          local_38 = 0xff - uVar16;
          if ((int)sVar3 - local_34 < local_38) {
            local_38 = (int)sVar3 - local_34;
          }
          iVar15 = 0;
          if (0 < *(short *)(puParm1 + 1)) {
            local_30 = (int)(uVar12 & 0x100) >> 4;
            sVar3 = (short)local_34 + (short)uParm3;
            iVar17 = 0;
            do {
              iVar14 = primptr;
              iVar13 = (int)(puParm1[3] << 0x14) >> 0x14;
              if (iVar17 < 0) {
                iVar17 = iVar17 + 0xf;
              }
              iVar10 = iVar13 << 4;
              if (iVar8 == 0) {
                trap(0x1c00);
              }
              if ((iVar8 == -1) && (iVar10 == -0x80000000)) {
                trap(0x1800);
              }
              uVar12 = iVar13 + (iVar17 >> 4);
              iVar17 = (uVar12 & 0xffffffc0) << 4;
              if (iVar8 == 0) {
                trap(0x1c00);
              }
              if ((iVar8 == -1) && (iVar17 == -0x80000000)) {
                trap(0x1800);
              }
              iVar13 = (iVar10 / iVar8 + iVar15) - iVar17 / iVar8;
              iVar17 = 0xff - iVar13;
              if ((int)*(short *)(puParm1 + 1) - iVar15 < iVar17) {
                iVar17 = (int)*(short *)(puParm1 + 1) - iVar15;
              }
              puVar1 = (undefined *)(primptr + 3);
              primptr = primptr + 0x28;
              *puVar1 = 9;
              *(undefined *)(iVar14 + 7) = 0x2c;
              *(byte *)(iVar14 + 7) = (byte)semitrans | 0x2c;
              iVar10 = shapetoclutid(puParm1);
              *(undefined2 *)(iVar14 + 0xe) = (short)iVar10;
              bVar2 = *(byte *)puParm1;
              cVar5 = (char)iVar13;
              cVar11 = cVar5 + (char)iVar17;
              *(char *)(iVar14 + 0xc) = cVar5;
              cVar6 = (char)uVar16;
              *(char *)(iVar14 + 0xd) = cVar6;
              *(char *)(iVar14 + 0x14) = cVar11;
              *(char *)(iVar14 + 0x15) = cVar6;
              *(char *)(iVar14 + 0x1c) = cVar5;
              *(char *)(iVar14 + 0x24) = cVar11;
              cVar6 = cVar6 + (char)local_38;
              *(char *)(iVar14 + 0x1d) = cVar6;
              *(char *)(iVar14 + 0x25) = cVar6;
              *(ushort *)(iVar14 + 0x16) =
                   (ushort)(((uint)bVar2 & 3) << 7) | (ushort)local_30 |
                   (ushort)((int)(uVar12 & 0x3c0) >> 6);
              if (iVar17 < 1) {
                iVar17 = 1;
              }
              unaff_s1 = local_38;
              if (local_38 < 1) {
                unaff_s1 = 1;
              }
              sVar7 = (short)iVar15 + (short)uParm2;
              sVar9 = sVar7 + (short)iVar17;
              *(short *)(iVar14 + 8) = sVar7;
              *(short *)(iVar14 + 0x18) = sVar7;
              sVar7 = sVar3 + (short)unaff_s1;
              *(short *)(iVar14 + 0x1a) = sVar7;
              *(short *)(iVar14 + 0x22) = sVar7;
              *(short *)(iVar14 + 10) = sVar3;
              *(short *)(iVar14 + 0x12) = sVar3;
              *(short *)(iVar14 + 0x10) = sVar9;
              *(short *)(iVar14 + 0x20) = sVar9;
              uVar12 = nextprim + 2U & 3;
              in_t6 = *(int *)((nextprim + 2U) - uVar12) << (3 - uVar12) * 8 |
                      in_t6 & 0xffffffffU >> (uVar12 + 1) * 8;
              uVar12 = iVar14 + 2U & 3;
              puVar4 = (uint *)((iVar14 + 2U) - uVar12);
              *puVar4 = *puVar4 & -1 << (uVar12 + 1) * 8 | in_t6 >> (3 - uVar12) * 8;
              uVar12 = nextprim + 2U & 3;
              puVar4 = (uint *)((nextprim + 2U) - uVar12);
              *puVar4 = *puVar4 & -1 << (uVar12 + 1) * 8 | (uint)(iVar14 << 8) >> (3 - uVar12) * 8;
              iVar15 = iVar15 + iVar17;
              nextprim = iVar14;
              iVar17 = iVar15 * iVar8;
            } while (iVar15 < (int)*(short *)(puParm1 + 1));
          }
          local_34 = local_34 + unaff_s1;
          sVar3 = *(short *)((int)puParm1 + 6);
        } while (local_34 < (int)*(short *)((int)puParm1 + 6));
      }
    }
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 shapecount(int param_1);
 // line 0, offset 0x800f0aac
undefined4 shapecount(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




// decompiled code
// original method signature: 
// int shapepointer(int param_1,uint param_2);
 // line 0, offset 0x800f0ab8
int shapepointer(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return param_1 + *(int *)(param_1 + param_2 * 8 + 0x14);
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 shapename(int param_1,uint param_2,undefined4 *param_3);
 // line 0, offset 0x800f0ae0
/* WARNING: Instruction at (ram,0x800f0b08) overlaps instruction at (ram,0x800f0b04)
    */

undefined4 shapename(int param_1,uint param_2,undefined4 *param_3)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    *param_3 = *(undefined4 *)(param_1 + param_2 * 8 + 0x10);
    return 0;
  }
  *param_3 = 0;
  return 0;
}




// decompiled code
// original method signature: 
// void queueadd(int *param_1,int param_2);
 // line 0, offset 0x800f0b1c
void queueadd(int *param_1,int param_2)

{
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  if (*param_1 == 0) {
    *param_1 = param_2;
  }
  else {
    *(int *)(param_1[1] + 4) = param_2;
  }
  param_1[1] = param_2;
  *(undefined4 *)(param_2 + 4) = 0;
  setCopReg(0,Status,Status,0);
  return;
}




// decompiled code
// original method signature: 
// int queuefetch(int *param_1);
 // line 0, offset 0x800f0b74
int queuefetch(int *param_1)

{
  int iVar1;
  int iVar2;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iVar1 = *param_1;
  iVar2 = 0;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 4);
    iVar2 = iVar1;
  }
  setCopReg(0,Status,Status,0);
  return iVar2;
}




// decompiled code
// original method signature: 
// void newrequestid(uint *param_1);
 // line 0, offset 0x800f0bc0
void newrequestid(uint *param_1)

{
  DAT_0000196c = DAT_0000196c + 0x100;
  if (DAT_0000196c == 0) {
    DAT_0000196c = 0x100;
  }
  *param_1 = (uint)*(byte *)param_1 | DAT_0000196c;
  return;
}




// decompiled code
// original method signature: 
// uint * locaterequest(uint param_1);
 // line 0, offset 0x800f0bf4
uint * locaterequest(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  if ((0xff < (int)param_1) && ((int)(param_1 & 0xff) < DAT_00001948)) {
    puVar2 = (uint *)(DAT_0000194c + (param_1 & 0xff) * 0x2c);
    puVar1 = (uint *)0x0;
    if (*puVar2 == param_1) {
      puVar1 = puVar2;
    }
    return puVar1;
  }
  return (uint *)0x0;
}




// decompiled code
// original method signature: 
// void cancelrequest(uint *param_1);
 // line 0, offset 0x800f0c50
void cancelrequest(uint *param_1)

{
  uint uVar1;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  uVar1 = param_1[3];
  if (uVar1 == 1) {
    param_1[3] = 2;
  }
  setCopReg(0,Status,Status,0);
  if (uVar1 == 1) {
    if (1 < param_1[4]) {
      purgememadr(param_1[4]);
    }
    param_1[6] = 0;
    *param_1 = (uint)*(byte *)param_1;
    queueadd((int *)&freequeue,(int)param_1);
  }
  return;
}




// decompiled code
// original method signature: 
// void finishrequest(int param_1);
 // line 0, offset 0x800f0ce8
void finishrequest(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    queueadd((int *)&callqueue,param_1);
  }
  return;
}




// decompiled code
// original method signature: 
// void loadfileclosecallback(undefined4 param_1,undefined4 param_2,uint *param_3);
 // line 0, offset 0x800f0d24
void loadfileclosecallback(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  FILE_completeop(param_3[6]);
  if (param_3[3] == 0) {
    finishrequest((int)param_3);
  }
  else {
    cancelrequest(param_3);
  }
  return;
}




// decompiled code
// original method signature: 
// void loadfilereadcallback(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x800f0d80
void loadfilereadcallback(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar1 = FILE_completeop(*(uint *)(param_3 + 0x18));
  uVar2 = DAT_00001944;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + uVar1;
  if (((int)uVar1 < (int)uVar2) || (*(int *)(param_3 + 0xc) != 0)) {
    uVar2 = FILE_close(*(uint *)(param_3 + 0x1c),99,param_3);
    *(uint *)(param_3 + 0x18) = uVar2;
    if (uVar2 == 0) {
      return;
    }
    pcVar3 = loadfileclosecallback;
  }
  else {
    *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + uVar1;
    *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + uVar1;
    uVar2 = FILE_read(*(uint *)(param_3 + 0x1c),*(uint *)(param_3 + 0x20),*(uint *)(param_3 + 0x28),
                      uVar2,99,param_3);
    *(uint *)(param_3 + 0x18) = uVar2;
    if (uVar2 == 0) {
      return;
    }
    pcVar3 = loadfilereadcallback;
  }
  FILE_callbackop(uVar2,pcVar3);
  return;
}




// decompiled code
// original method signature: 
// void loadfilesizecallback(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x800f0e54
void loadfilesizecallback(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  code *pcVar3;
  
  uVar1 = FILE_completeop(*(uint *)(param_3 + 0x18));
  if (*(int *)(param_3 + 0xc) == 0) {
    psVar2 = reservememadr(s_ASYNCBUF_80056f24,uVar1,*(uint *)(param_3 + 0x24));
    *(short **)(param_3 + 0x10) = psVar2;
    *(short **)(param_3 + 0x28) = psVar2;
    uVar1 = FILE_read(*(uint *)(param_3 + 0x1c),*(uint *)(param_3 + 0x20),*(uint *)(param_3 + 0x28),
                      DAT_00001944,99,param_3);
    *(uint *)(param_3 + 0x18) = uVar1;
    if (uVar1 == 0) {
      return;
    }
    pcVar3 = loadfilereadcallback;
  }
  else {
    uVar1 = FILE_close(*(uint *)(param_3 + 0x1c),99,param_3);
    *(uint *)(param_3 + 0x18) = uVar1;
    if (uVar1 == 0) {
      return;
    }
    pcVar3 = loadfileclosecallback;
  }
  FILE_callbackop(uVar1,pcVar3);
  return;
}




// decompiled code
// original method signature: 
// void loadfileopencallback(undefined4 param_1,undefined4 param_2,uint *param_3);
 // line 0, offset 0x800f0f18
void loadfileopencallback(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = FILE_completeop(param_3[6]);
  param_3[7] = uVar1;
  if (uVar1 == 0) {
    if (param_3[3] == 0) {
      finishrequest((int)param_3);
    }
    else {
      cancelrequest(param_3);
    }
  }
  else {
    if (param_3[3] == 0) {
      if (param_3[4] == 0) {
        uVar1 = FILE_read(param_3[7],param_3[8],param_3[10],DAT_00001944,99,(uint)param_3);
        param_3[6] = uVar1;
        if (uVar1 == 0) {
          return;
        }
        pcVar2 = loadfilereadcallback;
      }
      else {
        uVar1 = FILE_size(uVar1,99,(uint)param_3);
        param_3[6] = uVar1;
        if (uVar1 == 0) {
          return;
        }
        pcVar2 = loadfilesizecallback;
      }
    }
    else {
      uVar1 = FILE_close(uVar1,99,(uint)param_3);
      param_3[6] = uVar1;
      if (uVar1 == 0) {
        return;
      }
      pcVar2 = loadfileclosecallback;
    }
    FILE_callbackop(uVar1,pcVar2);
  }
  return;
}




// decompiled code
// original method signature: 
// void loadsegreadcallback(undefined4 param_1,undefined4 param_2,uint *param_3);
 // line 0, offset 0x800f1024
void loadsegreadcallback(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FILE_completeop(param_3[6]);
  param_3[2] = param_3[2] + uVar1;
  DAT_00001968 = param_3[8] + uVar1;
  param_3[8] = DAT_00001968;
  uVar2 = DAT_00001944;
  if (param_3[3] == 0) {
    if ((int)uVar1 < (int)DAT_00001944) {
      finishrequest((int)param_3);
    }
    else {
      param_3[9] = param_3[9] - uVar1;
      param_3[10] = param_3[10] + uVar1;
      uVar1 = param_3[9];
      if ((int)uVar2 < (int)param_3[9]) {
        uVar1 = uVar2;
      }
      uVar2 = FILE_read(DAT_00001964,param_3[8],param_3[10],uVar1,99,(uint)param_3);
      param_3[6] = uVar2;
      if (uVar2 != 0) {
        FILE_callbackop(uVar2,loadsegreadcallback);
      }
    }
  }
  else {
    cancelrequest(param_3);
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 asyncsystemtask(void);
 // line 0, offset 0x800f1120
undefined4 asyncsystemtask(void)

{
  uint *puVar1;
  
  while( true ) {
    puVar1 = (uint *)queuefetch((int *)&callqueue);
    if (puVar1 == (uint *)0x0) break;
    if (puVar1[3] == 0) {
      (*(code *)puVar1[5])(*puVar1);
      *puVar1 = (uint)*(byte *)puVar1;
      queueadd((int *)&freequeue,(int)puVar1);
    }
    else {
      cancelrequest(puVar1);
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void initasync(int param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x800f11b0
void initasync(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((DAT_0000194c == (int *)0x0) && (param_1 < 0x101)) {
    DAT_00001944 = param_2;
    DAT_00001948 = param_1;
    DAT_0000194c = (int *)reservememadr(s_ASYNCREQ_80056f30,param_1 * 0x2c,param_3);
    DAT_00001958 = DAT_0000194c + param_1 * 0xb + -0xb;
    DAT_0000195c = 0;
    DAT_00001960 = 0;
    DAT_00001964 = 0;
    DAT_00001954 = DAT_0000194c;
    DAT_00001970 = allocmutex();
    piVar1 = DAT_0000194c;
    iVar4 = 0;
    if (0 < param_1) {
      iVar5 = 0x2c;
      piVar3 = DAT_0000194c;
      do {
        iVar2 = (int)piVar1 + iVar5;
        iVar5 = iVar5 + 0x2c;
        *piVar3 = iVar4;
        piVar3[1] = iVar2;
        piVar3[6] = 0;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 0xb;
      } while (iVar4 < param_1);
    }
    DAT_0000194c[param_1 * 0xb + -10] = 0;
    addsystemtask((int)asyncsystemtask,1,1);
  }
  return;
}




// decompiled code
// original method signature: 
// uint asyncloadfilecallback(char *param_1,uint param_2,uint param_3);
 // line 0, offset 0x800f12b0
uint asyncloadfilecallback(char *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)queuefetch((int *)&freequeue);
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    newrequestid(puVar1);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = param_3;
    puVar1[8] = 0;
    puVar1[9] = param_2;
    uVar2 = FILE_open(param_1,1,100,(uint)puVar1);
    puVar1[6] = uVar2;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      FILE_callbackop(uVar2,loadfileopencallback);
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void asyncloadfile(char *param_1,uint param_2);
 // line 0, offset 0x800f1368
void asyncloadfile(char *param_1,uint param_2)

{
  asyncloadfilecallback(param_1,param_2,0);
  return;
}




// decompiled code
// original method signature: 
// uint asyncloadfileatcallback(char *param_1,uint param_2,uint param_3);
 // line 0, offset 0x800f1388
uint asyncloadfileatcallback(char *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)queuefetch((int *)&freequeue);
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    newrequestid(puVar1);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = param_3;
    puVar1[8] = 0;
    puVar1[10] = param_2;
    uVar2 = FILE_open(param_1,1,100,(uint)puVar1);
    puVar1[6] = uVar2;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      FILE_callbackop(uVar2,loadfileopencallback);
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void asyncloadfileat(char *param_1,uint param_2);
 // line 0, offset 0x800f143c
void asyncloadfileat(char *param_1,uint param_2)

{
  asyncloadfileatcallback(param_1,param_2,0);
  return;
}




// decompiled code
// original method signature: 
// void setasyncfile(char *param_1);
 // line 0, offset 0x800f145c
void setasyncfile(char *param_1)

{
  if (DAT_00001964 != 0) {
    FILE_closesync(DAT_00001964,100);
  }
  if (param_1 == (char *)0x0) {
    DAT_00001964 = 0;
  }
  else {
    FILE_opensync(param_1,1,100,(uint *)&asyncfilehandle);
    DAT_00001968 = 0;
  }
  return;
}




// decompiled code
// original method signature: 
// uint asyncloadsegmentcallback(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800f14bc
uint asyncloadsegmentcallback(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)queuefetch((int *)&freequeue);
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    newrequestid(puVar1);
    uVar2 = DAT_00001964;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = param_4;
    puVar1[8] = param_1;
    puVar1[9] = param_3;
    puVar1[10] = param_2;
    if (uVar2 == 0) {
      finishrequest((int)puVar1);
    }
    else {
      if ((int)DAT_00001944 < (int)param_3) {
        param_3 = DAT_00001944;
      }
      uVar2 = FILE_read(uVar2,puVar1[8],puVar1[10],param_3,100,(uint)puVar1);
      puVar1[6] = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
      FILE_callbackop(uVar2,loadsegreadcallback);
    }
    uVar2 = *puVar1;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void asyncloadsegment(uint param_1,uint param_2,uint param_3);
 // line 0, offset 0x800f15b0
void asyncloadsegment(uint param_1,uint param_2,uint param_3)

{
  asyncloadsegmentcallback(param_1,param_2,param_3,0);
  return;
}




// decompiled code
// original method signature: 
// void cancelasyncload(uint param_1);
 // line 0, offset 0x800f15d0
void cancelasyncload(uint param_1)

{
  uint *puVar1;
  
  puVar1 = locaterequest(param_1);
  if ((puVar1 != (uint *)0x0) && (puVar1[3] == 0)) {
    puVar1[3] = 1;
    FILE_cancelop(puVar1[6]);
    if ((puVar1[6] == 0) && (puVar1[5] == 0)) {
      cancelrequest(puVar1);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// uint getasyncreadadr(uint param_1);
 // line 0, offset 0x800f1640
uint getasyncreadadr(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = locaterequest(param_1);
  uVar2 = 0;
  if (((puVar1 != (uint *)0x0) && (uVar2 = 0, puVar1[3] == 0)) && (uVar2 = 0, puVar1[6] == 0)) {
    uVar2 = puVar1[4];
    if (uVar2 == 1) {
      uVar2 = 0;
    }
    if ((puVar1[4] != 0) && (puVar1[5] == 0)) {
      *puVar1 = (uint)*(byte *)puVar1;
      queueadd((int *)&freequeue,(int)puVar1);
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint getasyncreadstatus(uint param_1);
 // line 0, offset 0x800f16d8
uint getasyncreadstatus(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = locaterequest(param_1);
  uVar2 = 0xfffffffe;
  if (((puVar1 != (uint *)0x0) && (uVar2 = 0xfffffffe, puVar1[3] == 0)) &&
     (uVar2 = 0, puVar1[6] == 0)) {
    uVar2 = puVar1[2];
    if (uVar2 == 0) {
      uVar2 = 0xffffffff;
    }
    if ((puVar1[4] == 0) && (puVar1[5] == 0)) {
      *puVar1 = (uint)*(byte *)puVar1;
      queueadd((int *)&freequeue,(int)puVar1);
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 SetVideoMode(undefined4 param_1);
 // line 0, offset 0x800f1770
undefined4 SetVideoMode(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_80134838;
  DAT_80134838 = param_1;
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 GetVideoMode(void);
 // line 0, offset 0x800f1784
undefined4 GetVideoMode(void)

{
  return DAT_80134838;
}




// decompiled code
// original method signature: 
// void blockclear(undefined *param_1,int param_2);
 // line 0, offset 0x800f17a0
/* WARNING: Instruction at (ram,0x800f18cc) overlaps instruction at (ram,0x800f18c8)
    */

void blockclear(undefined *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_2 < 4) {
    iVar5 = param_2 + -2;
    if (-1 < param_2 + -1) {
      while( true ) {
        *param_1 = 0;
        param_1 = param_1 + 1;
        if (iVar5 < 0) break;
        iVar5 = iVar5 + -1;
      }
    }
    return;
  }
  uVar3 = (uint)param_1 & 3;
  *(uint *)(param_1 + -uVar3) =
       *(uint *)(param_1 + -uVar3) & 0xffffffffU >> (4 - uVar3) * 8 | 0 << uVar3 * 8;
  iVar5 = 4 - ((uint)param_1 & 3);
  puVar4 = (undefined4 *)(param_1 + iVar5);
  iVar5 = param_2 - iVar5;
  while (-1 < iVar5 + -0x80) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4 = puVar4 + 0x20;
    iVar5 = iVar5 + -0x80;
  }
  while (-1 < iVar5 + -0x10) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    iVar5 = iVar5 + -0x10;
  }
  while (-1 < iVar5 + -4) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -4;
  }
  uVar3 = (int)puVar4 + iVar5 + -1;
  uVar1 = uVar3 & 3;
  puVar2 = (uint *)(uVar3 - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0U >> (3 - uVar1) * 8;
  return;
}




// decompiled code
// original method signature: 
// void blockfill(undefined *param_1,int param_2,uint param_3);
 // line 0, offset 0x800f17a4
/* WARNING: Instruction at (ram,0x800f18cc) overlaps instruction at (ram,0x800f18c8)
    */

void blockfill(undefined *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  param_3 = param_3 & 0xff;
  if (param_2 < 4) {
    iVar4 = param_2 + -2;
    if (-1 < param_2 + -1) {
      while( true ) {
        *param_1 = (char)param_3;
        param_1 = param_1 + 1;
        if (iVar4 < 0) break;
        iVar4 = iVar4 + -1;
      }
    }
    return;
  }
  param_3 = param_3 | param_3 << 8;
  param_3 = param_3 | param_3 << 0x10;
  uVar2 = (uint)param_1 & 3;
  *(uint *)(param_1 + -uVar2) =
       *(uint *)(param_1 + -uVar2) & 0xffffffffU >> (4 - uVar2) * 8 | param_3 << uVar2 * 8;
  iVar4 = 4 - ((uint)param_1 & 3);
  puVar3 = (uint *)(param_1 + iVar4);
  iVar4 = param_2 - iVar4;
  while (-1 < iVar4 + -0x80) {
    *puVar3 = param_3;
    puVar3[1] = param_3;
    puVar3[2] = param_3;
    puVar3[3] = param_3;
    puVar3[4] = param_3;
    puVar3[5] = param_3;
    puVar3[6] = param_3;
    puVar3[7] = param_3;
    puVar3[8] = param_3;
    puVar3[9] = param_3;
    puVar3[10] = param_3;
    puVar3[0xb] = param_3;
    puVar3[0xc] = param_3;
    puVar3[0xd] = param_3;
    puVar3[0xe] = param_3;
    puVar3[0xf] = param_3;
    puVar3[0x10] = param_3;
    puVar3[0x11] = param_3;
    puVar3[0x12] = param_3;
    puVar3[0x13] = param_3;
    puVar3[0x14] = param_3;
    puVar3[0x15] = param_3;
    puVar3[0x16] = param_3;
    puVar3[0x17] = param_3;
    puVar3[0x18] = param_3;
    puVar3[0x19] = param_3;
    puVar3[0x1a] = param_3;
    puVar3[0x1b] = param_3;
    puVar3[0x1c] = param_3;
    puVar3[0x1d] = param_3;
    puVar3[0x1e] = param_3;
    puVar3[0x1f] = param_3;
    puVar3 = puVar3 + 0x20;
    iVar4 = iVar4 + -0x80;
  }
  while (-1 < iVar4 + -0x10) {
    *puVar3 = param_3;
    puVar3[1] = param_3;
    puVar3[2] = param_3;
    puVar3[3] = param_3;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -0x10;
  }
  while (-1 < iVar4 + -4) {
    *puVar3 = param_3;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -4;
  }
  uVar2 = (int)puVar3 + iVar4 + -1;
  uVar1 = uVar2 & 3;
  puVar3 = (uint *)(uVar2 - uVar1);
  *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | param_3 >> (3 - uVar1) * 8;
  return;
}




// decompiled code
// original method signature: 
// undefined * fastintcos(int param_1);
 // line 0, offset 0x800f18e4
undefined * fastintcos(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + 0x100;
  uVar2 = uVar1 & 0xff;
  if ((uVar1 & 0x200) != 0) {
    if ((uVar1 & 0x100) == 0) {
      return (undefined *)-*(int *)(&sintbl + uVar2 * 4);
    }
    return (undefined *)-(int)(&PTR_DAT_80137864)[uVar2 * 0x3fffffff];
  }
  if ((uVar1 & 0x100) == 0) {
    return *(undefined **)(&sintbl + uVar2 * 4);
  }
  return (&PTR_DAT_80137864)[uVar2 * 0x3fffffff];
}




// decompiled code
// original method signature: 
// undefined * fastintsin(uint param_1);
 // line 0, offset 0x800f18e8
undefined * fastintsin(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xff;
  if ((param_1 & 0x200) != 0) {
    if ((param_1 & 0x100) == 0) {
      return (undefined *)-*(int *)(&sintbl + uVar1 * 4);
    }
    return (undefined *)-(int)(&PTR_DAT_80137864)[uVar1 * 0x3fffffff];
  }
  if ((param_1 & 0x100) == 0) {
    return *(undefined **)(&sintbl + uVar1 * 4);
  }
  return (&PTR_DAT_80137864)[uVar1 * 0x3fffffff];
}




// decompiled code
// original method signature: 
// int resizememadr(int param_1,int param_2);
 // line 0, offset 0x800f1950
int resizememadr(int param_1,int param_2)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  
  uVar1 = *(ushort *)(param_1 + -0xe);
  puVar7 = *(undefined2 **)(param_1 + -8);
  iVar8 = (&memclass)[(uint)uVar1 & 0xf];
  if ((puVar7[1] & 0x4000) != 0) {
    FREE_remove(iVar8,puVar7);
    puVar7 = *(undefined2 **)(puVar7 + 4);
    *(undefined2 **)(param_1 + -8) = puVar7;
  }
  iVar4 = param_2;
  if (param_2 < 8) {
    if (param_2 == -1) {
      iVar4 = 0x40000000;
    }
    else {
      iVar4 = param_2;
      if (-1 < param_2) {
        iVar4 = 8;
      }
    }
  }
  pcVar2 = (char *)getblockname(param_1);
  iVar3 = MEM_tailsize(pcVar2,(uint)uVar1);
  iVar4 = (iVar4 + iVar3 + *(int *)(iVar8 + 0x28) + 0xf & -*(int *)(iVar8 + 0x28)) - 0x10;
  iVar6 = (int)puVar7 + (-0x10 - (param_1 + -0x10));
  if (iVar6 < iVar4) {
    param_2 = iVar6 - iVar3;
    iVar4 = iVar6;
  }
  blockmove((undefined4 *)(param_1 + *(int *)(param_1 + -0xc)),(undefined4 *)(param_1 + param_2),
            iVar3);
  *(int *)(param_1 + -0xc) = param_2;
  if (0x40 < iVar6 - iVar4) {
    puVar5 = (undefined2 *)(iVar4 + param_1 + 0x10);
    initmemblock(puVar5,(char *)0x0,0,0,0,param_1 + -0x10,puVar7);
    FREE_add(iVar8,puVar5);
    *(undefined2 **)(puVar7 + 6) = puVar5;
    *(undefined2 **)(param_1 + -8) = puVar5;
  }
  return param_1;
}




// decompiled code
// original method signature: 
// void VectorNormalS(undefined4 *param_1,undefined2 *param_2);
 // line 0, offset 0x800f1ac8
void VectorNormalS(undefined4 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar1 = (undefined2)*param_1;
  uVar2 = (undefined2)param_1[1];
  uVar3 = (undefined2)param_1[2];
  FUN_800f1b3c();
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}




// decompiled code
// original method signature: 
// void VectorNormal(undefined4 *param_1,undefined4 *param_2);
 // line 0, offset 0x800f1adc
void VectorNormal(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  FUN_800f1b3c();
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}




// decompiled code
// original method signature: 
// void FUN_800f1b3c(void);
 // line 0, offset 0x800f1b3c
void FUN_800f1b3c(void)

{
  uint uVar1;
  undefined4 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  setCopReg(2,0x4800,in_t0);
  setCopReg(2,0x5000,in_t1);
  setCopReg(2,0x5800,in_t2);
  copFunction(2,0xa00428);
  iVar2 = getCopReg(2,0xc800);
  iVar4 = getCopReg(2,0xd000);
  iVar5 = getCopReg(2,0xd800);
  iVar5 = iVar2 + iVar4 + iVar5;
  setCopReg(2,0xf000,iVar5);
  uVar1 = getCopReg(2,0xf800);
  uVar3 = (uVar1 & 0xfffffffe) - 0x18;
  if ((int)uVar3 < 0) {
    iVar5 = iVar5 >> (0x18 - (uVar1 & 0xfffffffe) & 0x1f);
  }
  else {
    iVar5 = iVar5 << (uVar3 & 0x1f);
  }
  setCopReg(2,0x4000,(int)*(short *)(&DAT_8013485c + (iVar5 + -0x40) * 2));
  setCopReg(2,0x4800,in_t0);
  setCopReg(2,0x5000,in_t1);
  setCopReg(2,0x5800,in_t2);
  copFunction(2,0x190003d);
  getCopReg(2,0xc800);
  getCopReg(2,0xd000);
  getCopReg(2,0xd800);
  return;
}




// decompiled code
// original method signature: 
// uint GetTPage(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800f1bfc
uint GetTPage(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return (param_1 & 3) << 7 | (param_2 & 3) << 5 | (int)(param_4 & 0x100) >> 4 |
         (int)(param_3 & 0x3ff) >> 6 | (param_4 & 0x200) << 2;
}




// decompiled code
// original method signature: 
// void loadshapeadr(char *param_1,uint param_2);
 // line 0, offset 0x800f1c3c
void loadshapeadr(char *param_1,uint param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack137 [129];
  
  strcpy(acStack137 + 1,param_1);
  sVar2 = strlen(acStack137 + 1);
  pcVar3 = acStack137 + sVar2;
  while (acStack137 + 1 < pcVar3) {
    cVar1 = *pcVar3;
    if (cVar1 == '.') goto LAB_800f1ce0;
    if (((cVar1 == ':') || (cVar1 == '/')) || (cVar1 == '\\')) break;
    pcVar3 = pcVar3 + -1;
  }
  if (*pcVar3 != '.') {
    strcat(acStack137 + 1,DAT_000017d4);
  }
LAB_800f1ce0:
  loadpackadr(acStack137 + 1,param_2);
  return;
}




// decompiled code
// original method signature: 
// void addexit(int param_1);
 // line 0, offset 0x800f1cf8
void addexit(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_801349e8;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x20);
  iVar2 = 0;
  piVar1 = &DAT_801349e8;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == 0) {
      *piVar1 = param_1;
      return;
    }
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x20);
  return;
}




// decompiled code
// original method signature: 
// undefined4 SNDSYS_getopts(undefined4 *param_1);
 // line 0, offset 0x800f1d58
undefined4 SNDSYS_getopts(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = 0;
  if (DAT_80134a68 == 0) {
    uVar4 = iSNDplatformoutputcaps();
    DAT_80134a68 = 1;
  }
  puVar1 = &sndgs;
  if (DAT_8014786c == 0) {
    DAT_8014786c = 0x10;
    puVar1 = &sndgs;
  }
  do {
    puVar3 = param_1;
    puVar2 = puVar1;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    puVar1 = puVar2 + 4;
    param_1 = puVar3 + 4;
  } while (puVar2 + 4 != (undefined4 *)0x80147890);
  uVar5 = puVar2[5];
  uVar6 = puVar2[6];
  puVar3[4] = uRam80147890;
  puVar3[5] = uVar5;
  puVar3[6] = uVar6;
  return uVar4;
}




// decompiled code
// original method signature: 
// undefined4 SNDSYS_setopts(int param_1);
 // line 0, offset 0x800f1e14
undefined4 SNDSYS_setopts(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)&DAT_8014786c;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  if (((uint)puVar1 & 3) == 0) {
    do {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar1 != (undefined4 *)(param_1 + 0x2cU));
  }
  else {
    do {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar1 != (undefined4 *)(param_1 + 0x2cU));
  }
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  DAT_80147898 = *(undefined4 *)(param_1 + 0x38);
  iSNDplatformoutputset();
  return 0;
}




// decompiled code
// original method signature: 
// int SNDSYS_init(undefined4 param_1,int param_2);
 // line 0, offset 0x800f1f10
int SNDSYS_init(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_8014789c == '\0') {
    iSNDmeminit(param_1,param_2);
    if (DAT_80147871 == 0) {
      SNDSYS_getopts(&sndgs);
      SNDSYS_setopts((int)&sndgs);
    }
    DAT_801478f4 = (void *)iSNDmalloc((uint)DAT_80147871 * 100);
    memset(DAT_801478f4,0,(uint)DAT_80147871 * 100);
    DAT_801478f8 = (void *)iSNDmalloc((uint)DAT_8014786c * 0xc);
    memset(DAT_801478f8,0,(uint)DAT_8014786c * 0xc);
    if (DAT_801478a8 == (code *)0x0) {
      DAT_801478a8 = iSND100hzserver;
    }
    SNDI_mutexalloc();
    DAT_801478a4 = 0;
    DAT_8014790c = 0;
    DAT_8014789d = 0x7f;
    iVar1 = iSNDinit();
    if (iVar1 < 0) {
      iSNDrestore();
    }
    else {
      DAT_8014789c = '\x01';
      iVar1 = 0;
    }
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// uint SNDSYS_restore(void);
 // line 0, offset 0x800f204c
uint SNDSYS_restore(void)

{
  uint uVar1;
  
  uVar1 = 0xfffffff6;
  if (DAT_8014789c != '\0') {
    if (DAT_801478ec != (code *)0x0) {
      (*DAT_801478ec)();
    }
    if (DAT_801478f0 != (code *)0x0) {
      (*DAT_801478f0)();
    }
    if (DAT_801478e4 != (code *)0x0) {
      (*DAT_801478e4)();
    }
    if (DAT_801478e8 != (code *)0x0) {
      (*DAT_801478e8)();
    }
    if (DAT_801478e0 != (code *)0x0) {
      (*DAT_801478e0)();
    }
    SNDstopall();
    if (DAT_801478dc != (code *)0x0) {
      (*DAT_801478dc)(0xffffffff);
    }
    iSNDrestore();
    DAT_8014789c = '\0';
    SNDI_mutexfree();
    uVar1 = iSNDmemrestore();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 iSNDsystemtaskreal(void);
 // line 0, offset 0x800f2130
undefined4 iSNDsystemtaskreal(void)

{
  SNDSYS_service();
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 SNDSYS_vectortoreal(void);
 // line 0, offset 0x800f2150
undefined4 SNDSYS_vectortoreal(void)

{
  if (DAT_80134a6c == 0) {
    addsystemtask((int)iSNDsystemtaskreal,0,1);
    DAT_80134a6c = 1;
  }
  return 0;
}




// decompiled code
// original method signature: 
// uint InitGeom(void);
 // line 0, offset 0x800f21a4
uint InitGeom(void)

{
  undefined4 unaff_retaddr;
  
  DAT_80134a70 = unaff_retaddr;
  _patch_gte();
  setCopReg(0,Status,Status | 0x40000000,0);
  setCopControlWord(2,0xe800,0x155);
  setCopControlWord(2,0xf000,0x100);
  setCopControlWord(2,0xd000,1000);
  setCopControlWord(2,0xd800,0xffffef9e);
  setCopControlWord(2,0xe000,0x1400000);
  setCopControlWord(2,0xc000,0);
  setCopControlWord(2,0xc800,0);
  return Status | 0x40000000;
}




// decompiled code
// original method signature: 
// void SetDefDrawEnv(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5);
 // line 0, offset 0x800f222c
void SetDefDrawEnv(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  int param_5)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetVideoMode();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined *)((int)param_1 + 0x19) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)((int)param_1 + 0x1b) = 0;
  *(undefined *)(param_1 + 0xb) = 1;
  param_1[3] = (short)param_5;
  if (iVar2 == 0) {
    bVar1 = param_5 < 0x101;
  }
  else {
    bVar1 = param_5 < 0x121;
  }
  *(bool *)((int)param_1 + 0x17) = bVar1;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[10] = 10;
  *(undefined *)(param_1 + 0xc) = 0;
  return;
}




// decompiled code
// original method signature: 
// void SetDefDispEnv(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5);
 // line 0, offset 0x800f22e0
void SetDefDispEnv(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined *)((int)param_1 + 0x11) = 0;
  *(undefined *)(param_1 + 8) = 0;
  *(undefined *)((int)param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 9) = 0;
  param_1[3] = (undefined2)param_5;
  return;
}




// decompiled code
// original method signature: 
// uint VSync(int param_1);
 // line 0, offset 0x800f231c
uint VSync(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  do {
  } while (*(int *)PTR_TMR_HRETRACE_VAL_80134a8c != *(int *)PTR_TMR_HRETRACE_VAL_80134a8c);
  uVar3 = *(int *)PTR_TMR_HRETRACE_VAL_80134a8c - Hcount & 0xffff;
  uVar2 = Vcount;
  if ((-1 < param_1) && (uVar2 = uVar3, param_1 != 1)) {
    uVar2 = DAT_80134a94;
    if (0 < param_1) {
      uVar2 = (DAT_80134a94 - 1) + param_1;
    }
    iVar1 = 0;
    if (0 < param_1) {
      iVar1 = param_1 + -1;
    }
    FUN_800f2494(uVar2,iVar1);
    uVar2 = *(uint *)PTR_GPU_REG1_80134a88;
    FUN_800f2494(Vcount + 1,1);
    if (((uVar2 & 0x400000) != 0) && (-1 < (int)(uVar2 ^ *(uint *)PTR_GPU_REG1_80134a88))) {
      do {
      } while (((uVar2 ^ *(uint *)PTR_GPU_REG1_80134a88) & 0x80000000) == 0);
    }
    DAT_80134a94 = Vcount;
    do {
      Hcount = *(int *)PTR_TMR_HRETRACE_VAL_80134a8c;
      uVar2 = uVar3;
    } while (Hcount != *(int *)PTR_TMR_HRETRACE_VAL_80134a8c);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void FUN_800f2494(int param_1,int param_2);
 // line 0, offset 0x800f2494
void FUN_800f2494(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= Vcount) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  puts(s_VSync__timeout_80056f3c);
  ChangeClearPAD();
  ChangeClearRCnt();
  return;
}




// decompiled code
// original method signature: 
// undefined2 * RotMatrix(short *param_1,undefined2 *param_2);
 // line 0, offset 0x800f252c
undefined2 * RotMatrix(short *param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar6 = SEXT24(*param_1);
  if ((int)uVar6 < 0) {
    iVar7 = *(int *)(&rcossin_tbl + (-uVar6 & 0xfff) * 4);
    iVar1 = -(int)(short)iVar7;
  }
  else {
    iVar7 = *(int *)(&rcossin_tbl + (uVar6 & 0xfff) * 4);
    iVar1 = (int)(short)iVar7;
  }
  iVar7 = iVar7 >> 0x10;
  uVar6 = SEXT24(param_1[1]);
  if ((int)uVar6 < 0) {
    iVar8 = *(int *)(&rcossin_tbl + (-uVar6 & 0xfff) * 4);
    iVar2 = (int)(short)iVar8;
    sVar4 = -(short)iVar8;
  }
  else {
    iVar8 = *(int *)(&rcossin_tbl + (uVar6 & 0xfff) * 4);
    sVar4 = (short)iVar8;
    iVar2 = -(int)sVar4;
  }
  iVar8 = iVar8 >> 0x10;
  uVar6 = SEXT24(param_1[2]);
  param_2[2] = sVar4;
  param_2[5] = (short)(-(iVar8 * iVar1) >> 0xc);
  uVar5 = (undefined2)(iVar8 * iVar7 >> 0xc);
  if ((int)uVar6 < 0) {
    param_2[8] = uVar5;
    iVar9 = *(int *)(&rcossin_tbl + (-uVar6 & 0xfff) * 4);
    iVar3 = -(int)(short)iVar9;
  }
  else {
    param_2[8] = uVar5;
    iVar9 = *(int *)(&rcossin_tbl + (uVar6 & 0xfff) * 4);
    iVar3 = (int)(short)iVar9;
  }
  iVar9 = iVar9 >> 0x10;
  *param_2 = (short)(iVar9 * iVar8 >> 0xc);
  param_2[1] = (short)(-(iVar3 * iVar8) >> 0xc);
  iVar8 = iVar9 * iVar2 >> 0xc;
  param_2[3] = (short)(iVar3 * iVar7 >> 0xc) - (short)(iVar8 * iVar1 >> 0xc);
  param_2[6] = (short)(iVar3 * iVar1 >> 0xc) + (short)(iVar8 * iVar7 >> 0xc);
  iVar2 = iVar3 * iVar2 >> 0xc;
  param_2[4] = (short)(iVar9 * iVar7 >> 0xc) + (short)(iVar2 * iVar1 >> 0xc);
  param_2[7] = (short)(iVar9 * iVar1 >> 0xc) - (short)(iVar2 * iVar7 >> 0xc);
  return param_2;
}




// decompiled code
// original method signature: 
// void SetFarColor(int param_1,int param_2,int param_3);
 // line 0, offset 0x800f27bc
void SetFarColor(int param_1,int param_2,int param_3)

{
  setCopControlWord(2,0xa800,param_1 << 4);
  setCopControlWord(2,0xb000,param_2 << 4);
  setCopControlWord(2,0xb800,param_3 << 4);
  return;
}




// decompiled code
// original method signature: 
// void SetFogNear(int param_1,int param_2);
 // line 0, offset 0x800f27dc
void SetFogNear(int param_1,int param_2)

{
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if ((param_2 == -1) && (param_1 * -0x140 == -0x80000000)) {
    trap(0x1800);
  }
  SetDQA((param_1 * -0x140) / param_2);
  SetDQB(0x1400000);
  return;
}




// decompiled code
// original method signature: 
// void ResetCallback(void);
 // line 0, offset 0x800f284c
void ResetCallback(void)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_75_1997_02_07_09_80135b80 + 0xc))();
  return;
}




// decompiled code
// original method signature: 
// void InterruptCallback(void);
 // line 0, offset 0x800f287c
void InterruptCallback(void)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_75_1997_02_07_09_80135b80 + 8))();
  return;
}




// decompiled code
// original method signature: 
// void DMACallback(void);
 // line 0, offset 0x800f28ac
void DMACallback(void)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_75_1997_02_07_09_80135b80 + 4))();
  return;
}




// decompiled code
// original method signature: 
// void VSyncCallback(undefined4 param_1);
 // line 0, offset 0x800f28dc
void VSyncCallback(undefined4 param_1)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_75_1997_02_07_09_80135b80 + 0x14))(4,param_1);
  return;
}




// decompiled code
// original method signature: 
// void VSyncCallbacks(void);
 // line 0, offset 0x800f2910
void VSyncCallbacks(void)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_75_1997_02_07_09_80135b80 + 0x14))();
  return;
}




// decompiled code
// original method signature: 
// uint CheckCallback(void);
 // line 0, offset 0x800f2940
uint CheckCallback(void)

{
  return (uint)DAT_80134afa;
}




// decompiled code
// original method signature: 
// uint SetIntrMask(undefined2 param_1);
 // line 0, offset 0x800f2950
uint SetIntrMask(undefined2 param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)PTR_I_MASK_80135b88;
  *(undefined2 *)PTR_I_MASK_80135b88 = param_1;
  return (uint)uVar1;
}




// decompiled code
// original method signature: 
// undefined2 * FUN_800f2968(void);
 // line 0, offset 0x800f2968
undefined2 * FUN_800f2968(void)

{
  undefined *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar1 = PTR_I_MASK_80135b88;
  puVar4 = PTR_I_STAT_80135b84;
  puVar2 = (undefined2 *)0x0;
  if (DAT_80134af8 == 0) {
    *(undefined2 *)PTR_I_MASK_80135b88 = 0;
    *(undefined2 *)puVar4 = *(undefined2 *)puVar1;
    *(undefined4 *)PTR_DMA_DPCR_80135b8c = 0x33333333;
    FUN_800f2e70((undefined4 *)&DAT_80134af8,0x41a);
    iVar3 = setjmp((__jmp_buf_tag *)&DAT_80134b30);
    if (iVar3 != 0) {
      FUN_800f2a40();
    }
    DAT_80134b34 = &DAT_80135b10;
    HookEntryInt();
    DAT_80134af8 = 1;
    puVar4 = startIntrVSync();
    *(undefined **)(PTR_PTR_s__Id__intr_c_v_1_75_1997_02_07_09_80135b80 + 0x14) = puVar4;
    puVar4 = startIntrDMA();
    *(undefined **)(PTR_PTR_s__Id__intr_c_v_1_75_1997_02_07_09_80135b80 + 4) = puVar4;
    _96_remove();
    puVar2 = &DAT_80134af8;
    ExitCriticalSection();
  }
  return puVar2;
}




// decompiled code
// original method signature: 
// void FUN_800f2a40(void);
 // line 0, offset 0x800f2a40
void FUN_800f2a40(void)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code **ppcVar6;
  
  if (DAT_80134af8 == 0) {
    printf(s_unexpected_interrupt__04x__80056f80,(uint)*(ushort *)PTR_I_STAT_80135b84);
    ReturnFromException();
  }
  DAT_80134afa = 1;
  uVar2 = *(ushort *)PTR_I_MASK_80135b88 & DAT_80134b28 & *(ushort *)PTR_I_STAT_80135b84;
  if (uVar2 != 0) {
    do {
      uVar4 = (uint)uVar2;
      uVar5 = 0;
      ppcVar6 = (code **)&DAT_80134afc;
      if (uVar2 != 0) {
        do {
          if (10 < (int)uVar5) break;
          if ((uVar4 & 1) != 0) {
            *(ushort *)PTR_I_STAT_80135b84 = ~(ushort)(1 << (uVar5 & 0x1f));
            if (*ppcVar6 != (code *)0x0) {
              (**ppcVar6)();
            }
          }
          uVar4 = uVar4 >> 1;
          uVar5 = uVar5 + 1;
          ppcVar6 = ppcVar6 + 1;
        } while (uVar4 != 0);
      }
      uVar2 = *(ushort *)PTR_I_MASK_80135b88 & DAT_80134b28 & *(ushort *)PTR_I_STAT_80135b84;
    } while (uVar2 != 0);
  }
  if ((*(ushort *)PTR_I_STAT_80135b84 & *(ushort *)PTR_I_MASK_80135b88) == 0) {
    DAT_80135b90 = 0;
  }
  else {
    iVar3 = DAT_80135b90 + 1;
    bVar1 = 0x800 < DAT_80135b90;
    DAT_80135b90 = iVar3;
    if (bVar1) {
      DAT_80135b90 = iVar3;
      printf(s_intr_timeout__04x__04x__80056f9c,(uint)*(ushort *)PTR_I_STAT_80135b84,
             (uint)*(ushort *)PTR_I_MASK_80135b88);
      DAT_80135b90 = 0;
      *(undefined2 *)PTR_I_STAT_80135b84 = 0;
    }
  }
  DAT_80134afa = 0;
  ReturnFromException();
  return;
}




// decompiled code
// original method signature: 
// int FUN_800f2c10(uint param_1,int param_2);
 // line 0, offset 0x800f2c10
int FUN_800f2c10(uint param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  
  piVar2 = &DAT_80134afc + param_1;
  iVar4 = *piVar2;
  if ((param_2 != iVar4) && (DAT_80134af8 != 0)) {
    uVar3 = *(ushort *)PTR_I_MASK_80135b88;
    *(undefined2 *)PTR_I_MASK_80135b88 = 0;
    if (param_2 == 0) {
      uVar1 = ~(ushort)(1 << (param_1 & 0x1f));
      *piVar2 = 0;
      uVar3 = uVar3 & uVar1;
      DAT_80134b28 = DAT_80134b28 & uVar1;
    }
    else {
      *piVar2 = param_2;
      uVar1 = (ushort)(1 << (param_1 & 0x1f));
      uVar3 = uVar3 | uVar1;
      DAT_80134b28 = DAT_80134b28 | uVar1;
    }
    if (param_1 == 0) {
      ChangeClearPAD();
      ChangeClearRCnt();
    }
    if (param_1 == 4) {
      ChangeClearRCnt();
    }
    if (param_1 == 5) {
      ChangeClearRCnt();
    }
    if (param_1 == 6) {
      ChangeClearRCnt();
    }
    *(ushort *)PTR_I_MASK_80135b88 = uVar3;
  }
  return iVar4;
}




// decompiled code
// original method signature: 
// undefined2 * FUN_800f2d58(void);
 // line 0, offset 0x800f2d58
undefined2 * FUN_800f2d58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x0;
  if (DAT_80134af8 != 0) {
    EnterCriticalSection();
    puVar2 = PTR_I_MASK_80135b88;
    puVar1 = PTR_I_STAT_80135b84;
    DAT_80134b2a = *(undefined2 *)PTR_I_MASK_80135b88;
    DAT_80134b2c = *(undefined4 *)PTR_DMA_DPCR_80135b8c;
    *(undefined2 *)PTR_I_MASK_80135b88 = 0;
    *(undefined2 *)puVar1 = *(undefined2 *)puVar2;
    *(uint *)PTR_DMA_DPCR_80135b8c = *(uint *)PTR_DMA_DPCR_80135b8c & 0x77777777;
    ResetEntryInt();
    DAT_80134af8 = 0;
    puVar3 = &DAT_80134af8;
  }
  return puVar3;
}




// decompiled code
// original method signature: 
// undefined2 * FUN_800f2df8(void);
 // line 0, offset 0x800f2df8
undefined2 * FUN_800f2df8(void)

{
  undefined2 *puVar1;
  
  puVar1 = &DAT_80134af8;
  if (DAT_80134af8 == 0) {
    HookEntryInt();
    DAT_80134af8 = 1;
    *(undefined2 *)PTR_I_MASK_80135b88 = DAT_80134b2a;
    *(undefined4 *)PTR_DMA_DPCR_80135b8c = DAT_80134b2c;
    ExitCriticalSection();
  }
  else {
    puVar1 = (undefined2 *)0x0;
  }
  return puVar1;
}




// decompiled code
// original method signature: 
// void FUN_800f2e70(undefined4 *param_1,int param_2);
 // line 0, offset 0x800f2e70
void FUN_800f2e70(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}




// decompiled code
// original method signature: 
// void setfont(int param_1);
 // line 0, offset 0x800f2e94
void setfont(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  DAT_80135c1c = 100;
  DAT_80135bac = (int)*(char *)(param_1 + 0x10);
  DAT_80135bb0 = (int)*(char *)(param_1 + 0x11);
  DAT_80135bbc = (int)*(char *)(param_1 + 0x12);
  DAT_80135bc0 = (int)*(char *)(param_1 + 0x13);
  DAT_80135bc4 = (int)*(char *)(param_1 + 0x13) + (int)*(char *)(param_1 + 0x12);
  pbVar3 = (byte *)(param_1 + *(int *)(param_1 + 0x1c));
  DAT_80135bc8 = (int)*(char *)(param_1 + 0x13) + (int)*(char *)(param_1 + 0x12);
  DAT_80135c14 = (uint)*(ushort *)(param_1 + 10);
  DAT_80135bb8 = 1;
  DAT_80135c50 = 0;
  DAT_80135c4c = 0;
  DAT_80135c24 = param_1 + *(int *)(param_1 + 0x14);
  DAT_80135c20 = param_1;
  DAT_80135c28 = pbVar3;
  DAT_80135bb4 = shapedepth(pbVar3);
  iVar1 = shapedepth(pbVar3);
  DAT_80135c18 = (int)((int)*(short *)(pbVar3 + 4) * iVar1 + 0x1fU & 0xffffffe0) >> 3;
  if ((*(ushort *)(param_1 + 0xe) & 3) == 2) {
    DAT_80135c40 = decodeshiftjis;
  }
  else {
    if ((int)DAT_80135c14 < 0x100) {
      uVar2 = geti((int *)(param_1 + 0x20),2);
      if (uVar2 < 0x100) {
        DAT_80135c40 = (code *)&decodeansi;
      }
      else {
        DAT_80135c40 = decodeshiftjis;
      }
    }
    else {
      DAT_80135c40 = decodeshiftjis;
    }
  }
  DAT_80135bcc = 0;
  DAT_80135bd0 = 0;
  DAT_80135c54 = 0;
  blockclear(&DAT_80135bd4,0x40);
  inittextdraw();
  DAT_80135c44 = 0;
  return;
}




// decompiled code
// original method signature: 
// uint getm(byte *param_1,int param_2);
 // line 0, offset 0x800f3024
uint getm(byte *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (param_2 + -3 < 0) {
    if (-1 < param_2 + -2) {
      return (uint)CONCAT11(bVar1,param_1[1]);
    }
    return (uint)bVar1;
  }
  if (param_2 != 3) {
    return CONCAT22(CONCAT11(bVar1,param_1[1]),CONCAT11(param_1[2],param_1[3]));
  }
  return (uint)CONCAT21(CONCAT11(bVar1,param_1[1]),param_1[2]);
}




// decompiled code
// original method signature: 
// uint geti(int *param_1,int param_2);
 // line 0, offset 0x800f308c
uint geti(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 * -8 + 0x20;
  return (uint)(*param_1 << (uVar1 & 0x1f)) >> (uVar1 & 0x1f);
}




// decompiled code
// original method signature: 
// void putm(int param_1,uint param_2,int param_3);
 // line 0, offset 0x800f30ac
void putm(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  
  param_3 = param_3 + -1;
  puVar1 = (undefined *)(param_1 + param_3);
  while (-1 < param_3) {
    *puVar1 = (char)param_2;
    param_2 = param_2 >> 8;
    param_3 = param_3 + -1;
    puVar1 = puVar1 + -1;
  }
  return;
}




// decompiled code
// original method signature: 
// void puti(undefined *param_1,uint param_2,int param_3);
 // line 0, offset 0x800f30d4
void puti(undefined *param_1,uint param_2,int param_3)

{
  param_3 = param_3 + -1;
  while (-1 < param_3) {
    *param_1 = (char)param_2;
    param_2 = param_2 >> 8;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  return;
}




// decompiled code
// original method signature: 
// void SetSemiTrans(int param_1,int param_2);
 // line 0, offset 0x800f30fc
void SetSemiTrans(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 7) & 0xfd;
  }
  else {
    bVar1 = *(byte *)(param_1 + 7) | 2;
  }
  *(byte *)(param_1 + 7) = bVar1;
  return;
}




// decompiled code
// original method signature: 
// short * RotMatrixZ(uint param_1,short *param_2);
 // line 0, offset 0x800f312c
short * RotMatrixZ(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1 < 0) {
    iVar5 = *(int *)(&rcossin_tbl + (-param_1 & 0xfff) * 4);
    iVar4 = -(int)(short)iVar5;
  }
  else {
    iVar5 = *(int *)(&rcossin_tbl + (param_1 & 0xfff) * 4);
    iVar4 = (int)(short)iVar5;
  }
  iVar5 = iVar5 >> 0x10;
  sVar1 = *param_2;
  sVar2 = param_2[1];
  sVar3 = param_2[2];
  *param_2 = (short)(iVar5 * (int)sVar1 - iVar4 * (int)param_2[3] >> 0xc);
  param_2[1] = (short)(iVar5 * (int)sVar2 - iVar4 * (int)param_2[4] >> 0xc);
  param_2[2] = (short)(iVar5 * (int)sVar3 - iVar4 * (int)param_2[5] >> 0xc);
  param_2[3] = (short)(iVar4 * (int)sVar1 + iVar5 * (int)param_2[3] >> 0xc);
  param_2[4] = (short)(iVar4 * (int)sVar2 + iVar5 * (int)param_2[4] >> 0xc);
  param_2[5] = (short)(iVar4 * (int)sVar3 + iVar5 * (int)param_2[5] >> 0xc);
  return param_2;
}




// decompiled code
// original method signature: 
// uint isqrt(uint param_1);
 // line 0, offset 0x800f32cc
uint isqrt(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 & 0xffff0000) != 0) {
    if ((param_1 & 0xff000000) == 0) {
      uVar4 = ((uint)(byte)(&isqrttbl)[param_1 >> 0x10] + 1) * 0x10;
      uVar1 = (uint)(byte)(&DAT_8013be0f)[param_1 >> 0x10] << 4;
    }
    else {
      uVar1 = (uint)(byte)(&DAT_8013be0f)[param_1 >> 0x18] << 8;
      uVar4 = ((uint)(byte)(&isqrttbl)[param_1 >> 0x18] + 1) * 0x100;
    }
    while (uVar3 = uVar1, 1 < uVar4 - uVar3) {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = uVar2;
      if (param_1 < uVar2 * uVar2) {
        uVar1 = uVar3;
        uVar4 = uVar2;
      }
    }
    return uVar3;
  }
  if ((param_1 & 0xff00) == 0) {
    if (param_1 == 0) {
      return 0;
    }
    uVar1 = (uint)((byte)(&DAT_8013be0f)[param_1] >> 4);
  }
  else {
    if ((param_1 & 0xf000) == 0) {
      if ((param_1 & 0xc00) == 0) {
        uVar4 = (uint)((byte)(&DAT_8013be0f)[param_1 >> 2] >> 3);
        uVar1 = (uint)((byte)(&isqrttbl)[param_1 >> 2] >> 3);
      }
      else {
        uVar4 = (uint)((byte)(&DAT_8013be0f)[param_1 >> 4] >> 2);
        uVar1 = (uint)((byte)(&isqrttbl)[param_1 >> 4] >> 2);
      }
    }
    else {
      if ((param_1 & 0xc000) == 0) {
        uVar4 = (uint)((byte)(&DAT_8013be0f)[param_1 >> 6] >> 1);
        uVar1 = (uint)((byte)(&isqrttbl)[param_1 >> 6] >> 1);
      }
      else {
        uVar1 = (uint)(byte)(&isqrttbl)[param_1 >> 8];
        uVar4 = (uint)(byte)(&DAT_8013be0f)[param_1 >> 8];
      }
    }
    if ((uVar1 + 1) - uVar4 < 2) {
      return uVar4;
    }
    uVar1 = uVar4 + uVar1 + 1 >> 1;
    if (param_1 < uVar1 * uVar1) {
      return uVar4;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void SetPolyGT4(int param_1);
 // line 0, offset 0x800f3490
void SetPolyGT4(int param_1)

{
  *(undefined *)(param_1 + 3) = 0xc;
  *(undefined *)(param_1 + 7) = 0x3c;
  return;
}




// decompiled code
// original method signature: 
// uint __mulsf3(uint param_1,uint param_2);
 // line 0, offset 0x800f34b0
uint __mulsf3(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 & 0x80000000 ^ param_2 & 0x80000000;
  if (((param_1 & 0x7fffffff) != 0) && ((param_2 & 0x7fffffff) != 0)) {
    iVar3 = (int)(param_1 & 0x7fffff | 0x800000) >> 8;
    iVar2 = (int)(param_2 & 0x7fffff | 0x800000) >> 8;
    iVar4 = ((int)param_1 >> 0x17 & 0xffU) + ((int)param_2 >> 0x17 & 0xffU);
    uVar5 = iVar3 * iVar2 + ((int)((param_1 & 0xff) * iVar2) >> 8) +
            ((int)((param_2 & 0xff) * iVar3) >> 8);
    iVar2 = iVar4 + -0x7e;
    if ((uVar5 & 0x80000000) == 0) {
      uVar5 = uVar5 + 0x40;
      if ((uVar5 & 0x80000000) == 0) {
        uVar5 = uVar5 >> 7;
        iVar2 = iVar4 + -0x7f;
      }
      else {
        uVar5 = uVar5 >> 8;
      }
    }
    else {
      uVar5 = uVar5 + 0x80 >> 8;
    }
    if (iVar2 < 0xff) {
      uVar6 = uVar6 | iVar2 << 0x17 | uVar5 & 0xff7fffff;
    }
    else {
      _err_math(0x22,0xc);
      bVar1 = uVar6 != 0;
      uVar6 = 0x7f800000;
      if (bVar1) {
        uVar6 = 0xff800000;
      }
    }
  }
  return uVar6;
}




// decompiled code
// original method signature: 
// void SetPolyF3(int param_1);
 // line 0, offset 0x800f35f0
void SetPolyF3(int param_1)

{
  *(undefined *)(param_1 + 3) = 4;
  *(undefined *)(param_1 + 7) = 0x20;
  return;
}




// decompiled code
// original method signature: 
// void SetPolyF4(int param_1);
 // line 0, offset 0x800f3610
void SetPolyF4(int param_1)

{
  *(undefined *)(param_1 + 3) = 5;
  *(undefined *)(param_1 + 7) = 0x28;
  return;
}




// decompiled code
// original method signature: 
// void SetPolyG4(int param_1);
 // line 0, offset 0x800f3630
void SetPolyG4(int param_1)

{
  *(undefined *)(param_1 + 3) = 8;
  *(undefined *)(param_1 + 7) = 0x38;
  return;
}




// decompiled code
// original method signature: 
// void SetPolyFT4(int param_1);
 // line 0, offset 0x800f3650
void SetPolyFT4(int param_1)

{
  *(undefined *)(param_1 + 3) = 9;
  *(undefined *)(param_1 + 7) = 0x2c;
  return;
}




// decompiled code
// original method signature: 
// void fixedsincos(uint param_1,int *param_2,int *param_3);
 // line 0, offset 0x800f3670
void fixedsincos(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  
  intsincos((int)param_1 >> 6,&local_18,&local_14);
  iVar1 = (int)((param_1 & 0x3f) * 0x6487e) >> 9;
  *param_2 = local_18 + ((local_14 >> 2) * iVar1 >> 0x15);
  *param_3 = local_14 - ((local_18 >> 2) * iVar1 >> 0x15);
  return;
}




// decompiled code
// original method signature: 
// double ccos(double __z);
 // line 0, offset 0x800f3728
double ccos(double __z)

{
  int iVar1;
  uint uVar2;
  int in_a0;
  uint uVar3;
  double in_f0_1;
  double dVar4;
  int iStack16;
  int local_c;
  
  if (in_a0 < 0) {
    in_a0 = -in_a0;
  }
  iVar1 = in_a0;
  if (in_a0 < 0) {
    iVar1 = in_a0 + 0xfff;
  }
  uVar2 = in_a0 + (iVar1 >> 0xc) * -0x1000;
  if (uVar2 < 0x400) {
    dVar4 = (double)csincos(uVar2,&iStack16,&local_c);
  }
  else {
    if (uVar2 - 0x400 < 0x400) {
      uVar3 = 0x7ff - uVar2;
    }
    else {
      uVar3 = uVar2 - 0x800;
      if (0x3ff < uVar3) {
        if (0x3ff < uVar2 - 0xc00) {
          return in_f0_1;
        }
        dVar4 = (double)csincos(0xfff - uVar2,&iStack16,&local_c);
        return dVar4;
      }
    }
    dVar4 = (double)csincos(uVar3,&iStack16,&local_c);
  }
  return dVar4;
}




// decompiled code
// original method signature: 
// double csin(double __z);
 // line 0, offset 0x800f37f8
double csin(double __z)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_a0;
  uint uVar4;
  double in_f0_1;
  double dVar5;
  int local_10;
  int iStack12;
  
  if (in_a0 < 0) {
    iVar1 = -in_a0;
    iVar2 = iVar1;
    if (0 < in_a0) {
      iVar2 = iVar1 + 0xfff;
    }
    uVar3 = iVar1 + (iVar2 >> 0xc) * -0x1000;
    if (0x3ff < uVar3) {
      if (0x3ff < uVar3 - 0x400) {
        uVar4 = uVar3 - 0x800;
        if (0x3ff < uVar4) {
          if (0x3ff < uVar3 - 0xc00) {
            return in_f0_1;
          }
          uVar4 = 0xfff - uVar3;
        }
        dVar5 = (double)csincos(uVar4,&local_10,&iStack12);
        return dVar5;
      }
      uVar3 = 0x7ff - uVar3;
    }
    dVar5 = (double)csincos(uVar3,&local_10,&iStack12);
  }
  else {
    uVar3 = in_a0 + (in_a0 >> 0xc) * -0x1000;
    if (0x3ff < uVar3) {
      if (0x3ff < uVar3 - 0x400) {
        uVar4 = uVar3 - 0x800;
        if (0x3ff < uVar4) {
          if (0x3ff < uVar3 - 0xc00) {
            return in_f0_1;
          }
          uVar4 = 0xfff - uVar3;
        }
        dVar5 = (double)csincos(uVar4,&local_10,&iStack12);
        return dVar5;
      }
      uVar3 = 0x7ff - uVar3;
    }
    dVar5 = (double)csincos(uVar3,&local_10,&iStack12);
  }
  return dVar5;
}




// decompiled code
// original method signature: 
// uint __fixsfsi(uint param_1);
 // line 0, offset 0x800f3938
uint __fixsfsi(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 & 0x7fffffff) == 0) {
    uVar1 = param_1 & 0x80000000;
  }
  else {
    uVar1 = (int)param_1 >> 0x17 & 0xff;
    iVar3 = uVar1 - 0x9d;
    if (iVar3 < 1) {
      uVar2 = param_1 & 0x7fffff | 0x800000;
      if ((uVar1 - 0x7e < 0x20) && (uVar2 != 0)) {
        uVar1 = (int)(uVar2 << 7) >> (-iVar3 & 0x1fU);
        if ((int)param_1 < 0) {
          uVar1 = -uVar1;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      if ((int)param_1 < 0) {
        uVar1 = 0x80000000;
      }
      else {
        _err_math(0x22,0x12);
        uVar1 = 0x7fffffff;
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void initjoy(uchar *param_1);
 // line 0, offset 0x800f39f8
void initjoy(uchar *param_1)

{
  numjoy = param_1;
  if (DAT_000017dc == 0) {
    numjoy = param_1;
    padinit();
    DAT_000017dc = 1;
  }
  return;
}




// decompiled code
// original method signature: 
// void initfileio(void);
 // line 0, offset 0x800f3a34
void initfileio(void)

{
  int iVar1;
  
  if (disablecd == (uchar *)0x0) {
    availablefilesystems = (uchar *)((uint)availablefilesystems | 1);
  }
  iVar1 = psxdevelopmentsystem();
  if (iVar1 == 0) {
    currentfilesystem = &DAT_00000001;
  }
  else {
    PCinit();
    addsystemtask((int)readfile_systask,0,0);
    currentfilesystem = (uchar *)0x2;
    availablefilesystems = (uchar *)((uint)availablefilesystems | 2);
  }
  return;
}




// decompiled code
// original method signature: 
// void setdirectory(char *param_1);
 // line 0, offset 0x800f3acc
void setdirectory(char *param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = strncmp(param_1,DAT_000017e8,6);
  if (iVar1 == 0) {
    if (((uint)availablefilesystems & 3) == 2) {
      return;
    }
    sVar2 = strlen(param_1);
    iVar3 = 6;
    if (6 < sVar2) {
      return;
    }
    currentfilesystem = &DAT_00000001;
  }
  else {
    iVar1 = strncmp(param_1,DAT_000017f4,4);
    if (iVar1 == 0) {
      iVar3 = 4;
      if (((uint)availablefilesystems & 2) == 0) {
        return;
      }
      currentfilesystem = (uchar *)0x2;
    }
  }
  if ((currentfilesystem == (uchar *)0x2) &&
     (strcpy(&currentdirectory,param_1 + iVar3), DAT_80140453 == '\0')) {
    sVar2 = strlen(&currentdirectory);
    if ((0 < (int)sVar2) && ((&currentdirectory)[sVar2] != '\\')) {
      strcat(&currentdirectory,(char *)&PTR_DAT_8013dd44);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 openfile(byte *param_1,uint param_2,uint *param_3);
 // line 0, offset 0x800f3be0
undefined4 openfile(byte *param_1,uint param_2,uint *param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  char acStack88 [2];
  undefined auStack86 [62];
  
  memset(acStack88,0,0x40);
  puVar4 = currentfilesystem;
  pcVar1 = strchr((char *)param_1,0x3a);
  if (pcVar1 != (char *)0x0) {
    iVar2 = strncmp((char *)param_1,DAT_000017e8,6);
    if (iVar2 == 0) {
      puVar4 = &DAT_00000001;
      if (((uint)availablefilesystems & 1) == 0) {
        return 0;
      }
      param_1 = param_1 + 6;
    }
    else {
      iVar2 = strncmp((char *)param_1,DAT_000017f4,4);
      if (iVar2 == 0) {
        puVar4 = (uchar *)0x2;
        if (((uint)availablefilesystems & 2) == 0) {
          return 0;
        }
        param_1 = param_1 + 4;
      }
      else {
        if ((currentfilesystem == &DAT_00000001) || (param_1[1] != 0x3a)) {
          pcVar1 = strchr((char *)param_1,0x3a);
          strncpy(acStack88,(char *)param_1,(size_t)(pcVar1 + (1 - (int)param_1)));
          pcVar1 = strchr((char *)param_1,0x3a);
          auStack86[(int)(pcVar1 + -(int)param_1)] = 0;
          puVar4 = (uchar *)0x0;
        }
      }
    }
  }
  if (puVar4 == &DAT_00000001) {
    uVar3 = CD_Open(param_1,param_2,(int *)param_3);
    if (uVar3 == 0) {
      return 0;
    }
    *param_3 = *param_3 | 0x1000000;
    return 1;
  }
  if (puVar4 != (uchar *)0x2) {
    return 0;
  }
  if ((*param_1 != 0x5c) && (*param_1 != 0x2f)) {
    strcpy(acStack88,&currentdirectory);
  }
  strcat(acStack88,(char *)param_1);
  switch(param_2 & 7) {
  case 0:
    uVar3 = PCopen();
    *param_3 = uVar3;
    break;
  case 1:
    uVar3 = PCopen();
    *param_3 = uVar3;
    break;
  case 2:
    uVar3 = PCopen();
    *param_3 = uVar3;
    if ((int)uVar3 < 0) {
      uVar3 = PCcreat();
      *param_3 = uVar3;
    }
    break;
  default:
    *param_3 = 0xffffffff;
    break;
  case 4:
    uVar3 = PCopen();
    *param_3 = uVar3;
    if ((int)uVar3 < 0) goto LAB_800f3e60;
    PCclose();
    uVar3 = PCcreat();
    *param_3 = uVar3;
    break;
  case 6:
    uVar3 = PCcreat();
    *param_3 = uVar3;
  }
  if (0 < (int)*param_3) {
    *param_3 = *param_3 | 0x2000000;
    return 1;
  }
LAB_800f3e60:
  *param_3 = 0;
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 closefile(uint param_1);
 // line 0, offset 0x800f3e84
undefined4 closefile(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int)param_1 >> 0x18 == 1) {
    uVar1 = CD_Close(param_1 & 0xffffff);
  }
  else {
    if ((int)param_1 >> 0x18 == 2) {
      uVar1 = PCclose();
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint readfile(uint param_1,undefined4 *param_2,int param_3,int param_4);
 // line 0, offset 0x800f3ee0
uint readfile(uint param_1,undefined4 *param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((int)param_1 >> 0x18 == 1) {
    uVar2 = CD_Read(param_1 & 0xffffff,param_2,param_3,param_4);
  }
  else {
    if ((int)param_1 >> 0x18 == 2) {
      setCopReg(0,Status,Status & 0xfffffbfe,0);
      bVar1 = readcmd == 0;
      if (bVar1) {
        readcmd = 1;
        DAT_80140404 = param_1 & 0xffffff;
        DAT_80140408 = param_2;
        DAT_8014040c = param_3;
        DAT_80140410 = param_4;
      }
      uVar2 = (uint)bVar1;
      setCopReg(0,Status,Status,0);
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 readfile_systask(void);
 // line 0, offset 0x800f3f80
undefined4 readfile_systask(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = Status;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  if (readcmd != 0) {
    PClseek();
    uVar2 = PCread(DAT_80140404,DAT_80140408,DAT_80140410);
    readcmd = 0;
    iFILE_CommandCompleteCallback((uint)(uVar2 == DAT_80140410));
  }
  setCopReg(0,Status,uVar1,0);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 writefile(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4);
 // line 0, offset 0x800f4020
undefined4 writefile(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((int)param_1 >> 0x18 == 2) {
    PClseek();
    uVar1 = PCwrite(param_1 & 0xffffff,param_2,param_4);
    iFILE_CommandCompleteCallback((uint)(uVar1 == param_4));
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 getfilesize(uint param_1);
 // line 0, offset 0x800f409c
undefined4 getfilesize(uint param_1)

{
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  if ((int)param_1 >> 0x18 == 1) {
    CD_Getinfo(param_1 & 0xffffff,(char *)0x0,local_10);
  }
  else {
    if ((int)param_1 >> 0x18 == 2) {
      local_10[0] = PClseek();
    }
  }
  return local_10[0];
}




// decompiled code
// original method signature: 
// void stopreadfile(uint param_1);
 // line 0, offset 0x800f4100
void stopreadfile(uint param_1)

{
  if ((int)param_1 >> 0x18 == 1) {
    CD_Stopread();
  }
  else {
    if ((((int)param_1 >> 0x18 == 2) && (readcmd != 0)) && (DAT_80140404 == (param_1 & 0xffffff))) {
      readcmd = 0;
      iFILE_CommandCompleteCallback(1);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void initmemadr(undefined2 *param_1,int param_2);
 // line 0, offset 0x800f4180
void initmemadr(undefined2 *param_1,int param_2)

{
  creatememclass(0,(char *)&PTR_DAT_8013dd48,param_1,param_2,8,0x20,0,0,0,0,0,&MEM_defaultevent);
  DAT_8013e904 = memclass;
  return;
}




// decompiled code
// original method signature: 
// void inittimer(undefined4 *param_1);
 // line 0, offset 0x800f41f0
/* WARNING: Removing unreachable block (ram,0x800f42a4) */

void inittimer(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_00000064;
  }
  EnterCriticalSection();
  if (iGp00001800 == 0) {
    blockclear((undefined *)&tmrsub,0x20);
    uGp00001978 = OpenEvent();
    EnableEvent();
    iGp00001800 = 1;
    addexit((int)restoretimer);
  }
  initgp();
  if (param_1 == (undefined4 *)0x0) {
    trap(0x1c00);
  }
  uGp00001974 = 0;
  timerhz = (uchar *)param_1;
  SetRCnt(0xf2000002,(short)(0x409980 / (int)param_1),0x1000);
  StartRCnt(0xf2000002);
  ExitCriticalSection();
  resettick();
  addexit((int)restoretimer);
  return;
}




// decompiled code
// original method signature: 
// void restoretimer(void);
 // line 0, offset 0x800f4304
void restoretimer(void)

{
  DisableEvent();
  uGp00001800 = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 tmrint(void);
 // line 0, offset 0x800f4328
undefined4 tmrint(void)

{
  code **ppcVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  savegp(local_18);
  iVar2 = 0;
  ppcVar1 = (code **)&tmrsub;
  ticks = ticks + 1;
  g_currentthread = &DAT_00000001;
  libticks = libticks + 1;
  do {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    iVar2 = iVar2 + 1;
    ppcVar1 = ppcVar1 + 1;
  } while (iVar2 < 8);
  g_currentthread = (uchar *)0x0;
  restoregp();
  return 0;
}




// decompiled code
// original method signature: 
// void FlushCache(void);
 // line 0, offset 0x800f43d4
void FlushCache(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// undefined4 shapedepth(byte *param_1);
 // line 0, offset 0x800f43e4
undefined4 shapedepth(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1 & 0x77;
  if (bVar1 == 0x41) {
    return 8;
  }
  if (bVar1 == 0x40) {
    return 4;
  }
  if ((bVar1 == 0x42) || (bVar1 == 0x23)) {
    return 0x10;
  }
  if (bVar1 != 0x44) {
    if (bVar1 == 0x43) {
      return 0x18;
    }
    if (bVar1 == 0x72) {
      return 8;
    }
  }
  return 1;
}




// decompiled code
// original method signature: 
// uint GetClut(int param_1,uint param_2);
 // line 0, offset 0x800f4450
uint GetClut(int param_1,uint param_2)

{
  return (param_2 & 0x3ff) << 6 | param_1 >> 4 & 0x3fU;
}




// decompiled code
// original method signature: 
// int * textbsearch(uint param_1,int param_2,int param_3,int param_4);
 // line 0, offset 0x800f4470
int * textbsearch(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    iVar1 = param_3 >> 1;
    do {
      piVar3 = (int *)(param_2 + iVar1 * param_4);
      uVar2 = geti(piVar3,2);
      if (param_1 == uVar2) {
        return piVar3;
      }
      if (0 < (int)(param_1 - uVar2)) {
        param_2 = (int)piVar3 + param_4;
        param_3 = param_3 + -1;
      }
      param_3 = param_3 >> 1;
      iVar1 = param_3 >> 1;
    } while (param_3 != 0);
  }
  return (int *)0x0;
}




// decompiled code
// original method signature: 
// int * getcharacter(uint param_1);
 // line 0, offset 0x800f4510
int * getcharacter(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = DAT_80135c24;
  piVar3 = (int *)(DAT_80135c24 + (param_1 - 0x20) * 0xb);
  uVar2 = geti(piVar3,2);
  if (uVar2 != param_1) {
    piVar3 = textbsearch(param_1,iVar1,DAT_80135c14,0xb);
  }
  return piVar3;
}




// decompiled code
// original method signature: 
// uint unhuff(byte *param_1,byte *param_2,int param_3);
 // line 0, offset 0x800f459c
uint unhuff(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  int *piVar24;
  int iVar25;
  ushort uVar26;
  byte *pbVar27;
  uint unaff_s8;
  int local_4ec [15];
  int aiStack1200 [16];
  uint auStack1136 [8];
  uint auStack1104 [8];
  byte local_430 [256];
  byte local_330 [256];
  undefined4 local_230 [3];
  undefined4 local_224 [61];
  undefined4 local_130 [3];
  undefined4 local_124 [61];
  uint local_30;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar16 = param_1 + 4;
  iVar13 = 0;
  uVar26 = CONCAT11(*param_1,param_1[1]);
  uVar15 = CONCAT31(CONCAT21(uVar26,param_1[2]),param_1[3]);
  uVar8 = uVar15 << 0x10;
  if ((*param_1 & 1) != 0) {
    pbVar16 = param_1 + 8;
    iVar13 = 8;
    uVar15 = (uint)CONCAT21(CONCAT11(param_1[5],param_1[6]),param_1[7]);
    uVar8 = uVar15 << 8;
  }
  uVar26 = uVar26 & 0xfeff;
  iVar14 = iVar13 + -8;
  uVar9 = uVar8 << 8;
  if (iVar14 < 0) {
    bVar7 = *pbVar16;
    pbVar19 = pbVar16 + 1;
    pbVar16 = pbVar16 + 2;
    uVar9 = -iVar14;
    iVar14 = iVar13 + 8;
    uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
    uVar9 = uVar15 << (uVar9 & 0x1f);
  }
  iVar13 = iVar14 + -0x10;
  uVar10 = uVar9 << 0x10;
  if (iVar13 < 0) {
    bVar7 = *pbVar16;
    pbVar19 = pbVar16 + 1;
    pbVar16 = pbVar16 + 2;
    uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
    uVar10 = uVar15 << (-iVar13 & 0x1fU);
    iVar13 = iVar14;
  }
  uVar8 = uVar9 >> 0x10 | (uVar8 >> 0x18) << 0x10;
  pbVar19 = param_2;
  if (param_3 != 0) {
    unaff_s8 = uVar10 >> 0x18;
    iVar14 = iVar13 + -8;
    uVar10 = uVar10 << 8;
    if (iVar14 < 0) {
      bVar7 = *pbVar16;
      pbVar19 = pbVar16 + 1;
      pbVar16 = pbVar16 + 2;
      uVar9 = -iVar14;
      iVar14 = iVar13 + 8;
      uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
      uVar10 = uVar15 << (uVar9 & 0x1f);
    }
    iVar25 = 0;
    iVar21 = 0;
    piVar24 = local_4ec;
    iVar22 = 4;
    iVar20 = 1;
    do {
      iVar12 = iVar20;
      *(int *)((int)aiStack1200 + iVar22) = iVar21 * 2 - iVar25;
      if ((int)uVar10 < 0) {
        uVar17 = uVar10 >> 0x1d;
        iVar13 = iVar14 + -3;
        uVar10 = uVar10 << 3;
        if (iVar13 < 0) {
          bVar7 = *pbVar16;
          pbVar19 = pbVar16 + 1;
          pbVar16 = pbVar16 + 2;
          uVar9 = -iVar13;
          iVar13 = iVar14 + 0xd;
          uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
          uVar10 = uVar15 << (uVar9 & 0x1f);
        }
      }
      else {
        uVar9 = 2;
        if (uVar10 >> 0x10 == 0) {
          uVar17 = 3;
          do {
            uVar9 = uVar17;
            uVar5 = uVar10 >> 0x1f;
            iVar13 = iVar14 + -1;
            uVar10 = uVar10 << 1;
            if (iVar13 < 0) {
              bVar7 = *pbVar16;
              pbVar19 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar10 = -iVar13;
              iVar13 = iVar14 + 0xf;
              uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
              uVar10 = uVar15 << (uVar10 & 0x1f);
            }
            iVar14 = iVar13;
            uVar17 = uVar9 + 1;
          } while (uVar5 == 0);
        }
        else {
          do {
            uVar17 = uVar10;
            uVar10 = uVar17 << 1;
            uVar9 = uVar9 + 1;
          } while (-1 < (int)uVar10);
          iVar13 = (iVar14 + 1) - uVar9;
          uVar10 = uVar17 << 2;
          if (iVar13 < 0) {
            bVar7 = *pbVar16;
            pbVar19 = pbVar16 + 1;
            pbVar16 = pbVar16 + 2;
            uVar10 = -iVar13;
            iVar13 = iVar13 + 0x10;
            uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
            uVar10 = uVar15 << (uVar10 & 0x1f);
          }
        }
        if ((int)uVar9 < 0x11) {
          uVar17 = uVar10 >> (0x20 - uVar9 & 0x1f);
          iVar13 = iVar13 - uVar9;
          uVar10 = uVar10 << (uVar9 & 0x1f);
          if (iVar13 < 0) {
            bVar7 = *pbVar16;
            pbVar19 = pbVar16 + 1;
            pbVar16 = pbVar16 + 2;
            uVar10 = -iVar13;
            iVar13 = iVar13 + 0x10;
            uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
            uVar10 = uVar15 << (uVar10 & 0x1f);
          }
          uVar17 = uVar17 + (1 << (uVar9 & 0x1f));
        }
        else {
          uVar5 = uVar10 >> (0x30 - uVar9 & 0x1f);
          uVar17 = uVar10 << (uVar9 - 0x10 & 0x1f);
          iVar14 = (iVar13 + 0x10) - uVar9;
          if (iVar14 < 0) {
            bVar7 = *pbVar16;
            pbVar19 = pbVar16 + 1;
            pbVar16 = pbVar16 + 2;
            uVar10 = -iVar14;
            iVar14 = iVar14 + 0x10;
            uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
            uVar17 = uVar15 << (uVar10 & 0x1f);
          }
          iVar13 = iVar14 + -0x10;
          uVar10 = uVar17 << 0x10;
          if (iVar13 < 0) {
            bVar7 = *pbVar16;
            pbVar19 = pbVar16 + 1;
            pbVar16 = pbVar16 + 2;
            uVar15 = (uint)*pbVar19 | ((uint)bVar7 | uVar15 << 8) << 8;
            uVar10 = uVar15 << (-iVar13 & 0x1fU);
            iVar13 = iVar14;
          }
          uVar17 = (uVar17 >> 0x10 | uVar5 << 0x10) + (1 << (uVar9 & 0x1f));
        }
      }
      iVar18 = uVar17 - 4;
      *piVar24 = iVar18;
      iVar25 = iVar25 + iVar18;
      iVar21 = iVar21 * 2 + iVar18;
      uVar9 = 0;
      if (iVar18 != 0) {
        uVar9 = iVar21 << (0x10U - iVar12 & 0x1f) & 0xffff;
      }
      *(uint *)((int)auStack1136 + iVar22) = uVar9;
      piVar24 = piVar24 + 1;
      iVar22 = iVar22 + 4;
      iVar20 = iVar12 + 1;
      iVar14 = iVar13;
    } while ((iVar18 == 0) || (iVar20 = iVar12 + 1, iVar14 = iVar13, uVar9 != 0));
    auStack1136[iVar12] = 0xffffffff;
    iVar14 = 0x10;
    puVar4 = local_130;
    puVar2 = local_124;
    do {
      *puVar4 = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 4;
      iVar14 = iVar14 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar14 != 0);
    bVar7 = 0xff;
    iVar20 = 0;
    iVar14 = iVar13;
    if (0 < iVar25) {
      do {
        if ((int)uVar10 < 0) {
          uVar17 = uVar10 >> 0x1d;
          iVar13 = iVar14 + -3;
          uVar10 = uVar10 << 3;
          if (iVar13 < 0) {
            bVar1 = *pbVar16;
            pbVar19 = pbVar16 + 1;
            pbVar16 = pbVar16 + 2;
            uVar9 = -iVar13;
            iVar13 = iVar14 + 0xd;
            uVar15 = (uint)*pbVar19 | ((uint)bVar1 | uVar15 << 8) << 8;
            uVar10 = uVar15 << (uVar9 & 0x1f);
          }
        }
        else {
          uVar9 = 2;
          if (uVar10 >> 0x10 == 0) {
            uVar17 = 3;
            do {
              uVar9 = uVar17;
              uVar5 = uVar10 >> 0x1f;
              iVar13 = iVar14 + -1;
              uVar10 = uVar10 << 1;
              if (iVar13 < 0) {
                bVar1 = *pbVar16;
                pbVar19 = pbVar16 + 1;
                pbVar16 = pbVar16 + 2;
                uVar10 = -iVar13;
                iVar13 = iVar14 + 0xf;
                uVar15 = (uint)*pbVar19 | ((uint)bVar1 | uVar15 << 8) << 8;
                uVar10 = uVar15 << (uVar10 & 0x1f);
              }
              iVar14 = iVar13;
              uVar17 = uVar9 + 1;
            } while (uVar5 == 0);
          }
          else {
            do {
              uVar17 = uVar10;
              uVar10 = uVar17 << 1;
              uVar9 = uVar9 + 1;
            } while (-1 < (int)uVar10);
            iVar13 = (iVar14 + 1) - uVar9;
            uVar10 = uVar17 << 2;
            if (iVar13 < 0) {
              bVar1 = *pbVar16;
              pbVar19 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar10 = -iVar13;
              iVar13 = iVar13 + 0x10;
              uVar15 = (uint)*pbVar19 | ((uint)bVar1 | uVar15 << 8) << 8;
              uVar10 = uVar15 << (uVar10 & 0x1f);
            }
          }
          if ((int)uVar9 < 0x11) {
            uVar17 = uVar10 >> (0x20 - uVar9 & 0x1f);
            iVar13 = iVar13 - uVar9;
            uVar10 = uVar10 << (uVar9 & 0x1f);
            if (iVar13 < 0) {
              bVar1 = *pbVar16;
              pbVar19 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar10 = -iVar13;
              iVar13 = iVar13 + 0x10;
              uVar15 = (uint)*pbVar19 | ((uint)bVar1 | uVar15 << 8) << 8;
              uVar10 = uVar15 << (uVar10 & 0x1f);
            }
            uVar17 = uVar17 + (1 << (uVar9 & 0x1f));
          }
          else {
            uVar5 = uVar10 >> (0x30 - uVar9 & 0x1f);
            uVar17 = uVar10 << (uVar9 - 0x10 & 0x1f);
            iVar14 = (iVar13 + 0x10) - uVar9;
            if (iVar14 < 0) {
              bVar1 = *pbVar16;
              pbVar19 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar10 = -iVar14;
              iVar14 = iVar14 + 0x10;
              uVar15 = (uint)*pbVar19 | ((uint)bVar1 | uVar15 << 8) << 8;
              uVar17 = uVar15 << (uVar10 & 0x1f);
            }
            iVar13 = iVar14 + -0x10;
            uVar10 = uVar17 << 0x10;
            if (iVar13 < 0) {
              bVar1 = *pbVar16;
              pbVar19 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar15 = (uint)*pbVar19 | ((uint)bVar1 | uVar15 << 8) << 8;
              uVar10 = uVar15 << (-iVar13 & 0x1fU);
              iVar13 = iVar14;
            }
            uVar17 = (uVar17 >> 0x10 | uVar5 << 0x10) + (1 << (uVar9 & 0x1f));
          }
        }
        iVar14 = uVar17 - 3;
        do {
          bVar7 = bVar7 + 1;
          if (*(char *)((int)local_130 + (uint)bVar7) == '\0') {
            iVar14 = iVar14 + -1;
          }
        } while (iVar14 != 0);
        iVar21 = iVar20 + 1;
        *(char *)((int)local_130 + (uint)bVar7) = '\x01';
        local_430[iVar20] = bVar7;
        iVar14 = iVar13;
        iVar20 = iVar21;
      } while (iVar21 < iVar25);
    }
    iVar14 = 0x10;
    puVar4 = local_230;
    puVar2 = local_224;
    do {
      *puVar4 = 0x40404040;
      puVar2[-2] = 0x40404040;
      puVar2[-1] = 0x40404040;
      *puVar2 = 0x40404040;
      puVar2 = puVar2 + 4;
      iVar14 = iVar14 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar14 != 0);
    pbVar27 = local_430;
    pbVar23 = local_330;
    puVar2 = local_230;
    iVar14 = 1;
    pbVar19 = param_2;
    if (0 < iVar12) {
      piVar24 = local_4ec;
      do {
        iVar20 = *piVar24;
        pbVar19 = param_2;
        if (8 < iVar14) break;
        iVar21 = 1 << (8U - iVar14 & 0x1f);
        while (iVar20 = iVar20 + -1, iVar20 != -1) {
          bVar7 = *pbVar27;
          pbVar27 = pbVar27 + 1;
          uVar11 = (char)iVar14;
          if ((uint)bVar7 == unaff_s8) {
            uVar11 = 0x60;
            local_30 = iVar14;
          }
          iVar22 = 0;
          if (0 < iVar21) {
            do {
              *pbVar23 = bVar7;
              pbVar23 = pbVar23 + 1;
              *(undefined *)puVar2 = uVar11;
              iVar22 = iVar22 + 1;
              puVar2 = (undefined4 *)((int)puVar2 + 1);
            } while (iVar22 < iVar21);
          }
        }
        iVar14 = iVar14 + 1;
        piVar24 = piVar24 + 1;
        pbVar19 = param_2;
      } while (iVar14 <= iVar12);
    }
  }
LAB_800f4ce0:
  do {
    uVar9 = uVar10 >> 0x18;
    uVar17 = (uint)*(byte *)((int)local_230 + uVar9);
    iVar13 = iVar13 - uVar17;
    while (pbVar23 = pbVar19, -1 < iVar13) {
      uVar10 = uVar10 << (uVar17 & 0x1f);
      uVar5 = uVar10 >> 0x18;
      *pbVar19 = local_330[uVar9];
      uVar17 = (uint)*(byte *)((int)local_230 + uVar5);
      iVar13 = iVar13 - uVar17;
      pbVar23 = pbVar19 + 1;
      if (iVar13 < 0) break;
      uVar10 = uVar10 << (uVar17 & 0x1f);
      uVar9 = uVar10 >> 0x18;
      pbVar19[1] = local_330[uVar5];
      uVar17 = (uint)*(byte *)((int)local_230 + uVar9);
      iVar13 = iVar13 - uVar17;
      pbVar23 = pbVar19 + 2;
      if (iVar13 < 0) break;
      uVar10 = uVar10 << (uVar17 & 0x1f);
      uVar5 = uVar10 >> 0x18;
      pbVar19[2] = local_330[uVar9];
      uVar17 = (uint)*(byte *)((int)local_230 + uVar5);
      iVar13 = iVar13 - uVar17;
      pbVar23 = pbVar19 + 3;
      if (iVar13 < 0) break;
      uVar10 = uVar10 << (uVar17 & 0x1f);
      uVar9 = uVar10 >> 0x18;
      pbVar19[3] = local_330[uVar5];
      uVar17 = (uint)*(byte *)((int)local_230 + uVar9);
      pbVar19 = pbVar19 + 4;
      iVar13 = iVar13 - uVar17;
    }
    pbVar19 = pbVar23;
    iVar13 = iVar13 + 0x10;
    if (iVar13 < 0) {
      uVar9 = local_30;
      if (uVar17 != 0x60) {
        uVar9 = 8;
        puVar6 = auStack1104;
        do {
          puVar6 = puVar6 + 1;
          uVar9 = uVar9 + 1;
        } while (*puVar6 <= uVar10 >> 0x10);
      }
      uVar5 = uVar10 >> (0x20 - uVar9 & 0x1f);
      uVar10 = uVar10 << (uVar9 & 0x1f);
      bVar7 = local_430[uVar5 - aiStack1200[uVar9]];
      iVar14 = (iVar13 + (uVar17 - 0x10)) - uVar9;
      if ((uint)bVar7 == unaff_s8) {
        if (iVar14 < 0) {
LAB_800f4e38:
          bVar1 = *pbVar16;
          pbVar23 = pbVar16 + 1;
          pbVar16 = pbVar16 + 2;
          uVar9 = -iVar14;
          iVar14 = iVar14 + 0x10;
          uVar15 = (uint)*pbVar23 | ((uint)bVar1 | uVar15 << 8) << 8;
          uVar10 = uVar15 << (uVar9 & 0x1f);
        }
        if ((uint)bVar7 == unaff_s8) {
          if ((int)uVar10 < 0) {
            uVar9 = uVar10 >> 0x1d;
            iVar13 = iVar14 + -3;
            uVar10 = uVar10 << 3;
            if (iVar13 < 0) {
              bVar7 = *pbVar16;
              pbVar23 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar10 = -iVar13;
              iVar13 = iVar14 + 0xd;
              uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
              uVar10 = uVar15 << (uVar10 & 0x1f);
            }
            iVar14 = uVar9 - 4;
          }
          else {
            uVar9 = 2;
            if (uVar10 >> 0x10 == 0) {
              uVar17 = 3;
              do {
                uVar9 = uVar17;
                uVar5 = uVar10 >> 0x1f;
                iVar13 = iVar14 + -1;
                uVar10 = uVar10 << 1;
                if (iVar13 < 0) {
                  bVar7 = *pbVar16;
                  pbVar23 = pbVar16 + 1;
                  pbVar16 = pbVar16 + 2;
                  uVar10 = -iVar13;
                  iVar13 = iVar14 + 0xf;
                  uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
                  uVar10 = uVar15 << (uVar10 & 0x1f);
                }
                uVar17 = uVar9 + 1;
                iVar14 = iVar13;
              } while (uVar5 == 0);
            }
            else {
              do {
                uVar17 = uVar10;
                uVar10 = uVar17 << 1;
                uVar9 = uVar9 + 1;
              } while (-1 < (int)uVar10);
              iVar13 = (iVar14 + 1) - uVar9;
              uVar10 = uVar17 << 2;
              if (iVar13 < 0) {
                bVar7 = *pbVar16;
                pbVar23 = pbVar16 + 1;
                pbVar16 = pbVar16 + 2;
                uVar10 = -iVar13;
                iVar13 = iVar13 + 0x10;
                uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
                uVar10 = uVar15 << (uVar10 & 0x1f);
              }
            }
            if ((int)uVar9 < 0x11) {
              uVar17 = uVar10 >> (0x20 - uVar9 & 0x1f);
              iVar13 = iVar13 - uVar9;
              uVar10 = uVar10 << (uVar9 & 0x1f);
              if (iVar13 < 0) {
                bVar7 = *pbVar16;
                pbVar23 = pbVar16 + 1;
                pbVar16 = pbVar16 + 2;
                uVar10 = -iVar13;
                iVar13 = iVar13 + 0x10;
                uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
                uVar10 = uVar15 << (uVar10 & 0x1f);
              }
              iVar14 = uVar17 + (1 << (uVar9 & 0x1f)) + -4;
            }
            else {
              uVar5 = uVar10 >> (0x30 - uVar9 & 0x1f);
              uVar17 = uVar10 << (uVar9 - 0x10 & 0x1f);
              iVar14 = (iVar13 + 0x10) - uVar9;
              if (iVar14 < 0) {
                bVar7 = *pbVar16;
                pbVar23 = pbVar16 + 1;
                pbVar16 = pbVar16 + 2;
                uVar10 = -iVar14;
                iVar14 = iVar14 + 0x10;
                uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
                uVar17 = uVar15 << (uVar10 & 0x1f);
              }
              iVar13 = iVar14 + -0x10;
              uVar10 = uVar17 << 0x10;
              if (iVar13 < 0) {
                bVar7 = *pbVar16;
                pbVar23 = pbVar16 + 1;
                pbVar16 = pbVar16 + 2;
                uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
                uVar10 = uVar15 << (-iVar13 & 0x1fU);
                iVar13 = iVar14;
              }
              iVar14 = (uVar17 >> 0x10 | uVar5 << 0x10) + (1 << (uVar9 & 0x1f)) + -4;
            }
          }
          pbVar23 = pbVar19 + iVar14;
          if (iVar14 == 0) {
            iVar20 = iVar13 + -1;
            iVar14 = uVar10 << 1;
            if (iVar20 < 0) {
              bVar7 = *pbVar16;
              pbVar23 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar9 = -iVar20;
              iVar20 = iVar13 + 0xf;
              uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
              iVar14 = uVar15 << (uVar9 & 0x1f);
            }
            if (uVar10 >> 0x1f != 0) {
              if (uVar26 == 0x32fb) {
                pbVar16 = param_2 + uVar8;
                bVar7 = 0;
                if (pbVar16 <= param_2) {
                  return uVar8;
                }
                do {
                  bVar7 = bVar7 + *param_2;
                  *param_2 = bVar7;
                  param_2 = param_2 + 1;
                } while (param_2 < pbVar16);
                return uVar8;
              }
              if (uVar26 != 0x34fb) {
                return uVar8;
              }
              cVar3 = '\0';
              pbVar16 = param_2 + uVar8;
              bVar7 = 0;
              if (pbVar16 <= param_2) {
                return uVar8;
              }
              do {
                cVar3 = cVar3 + *param_2;
                bVar7 = bVar7 + cVar3;
                *param_2 = bVar7;
                param_2 = param_2 + 1;
              } while (param_2 < pbVar16);
              return uVar8;
            }
            iVar13 = iVar20 + -8;
            uVar10 = iVar14 << 8;
            if (iVar13 < 0) {
              bVar7 = *pbVar16;
              pbVar23 = pbVar16 + 1;
              pbVar16 = pbVar16 + 2;
              uVar9 = -iVar13;
              iVar13 = iVar20 + 8;
              uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
              uVar10 = uVar15 << (uVar9 & 0x1f);
            }
            *pbVar19 = (byte)((uint)iVar14 >> 0x18);
            pbVar19 = pbVar19 + 1;
          }
          else {
            bVar7 = pbVar19[-1];
            do {
              *pbVar19 = bVar7;
              pbVar19 = pbVar19 + 1;
            } while (pbVar19 < pbVar23);
          }
          goto LAB_800f4ce0;
        }
        *pbVar19 = bVar7;
        iVar13 = iVar14;
      }
      else {
        if (iVar14 < 0) goto LAB_800f4e38;
        *pbVar19 = bVar7;
        iVar13 = iVar14;
      }
      pbVar19 = pbVar19 + 1;
      goto LAB_800f4ce0;
    }
    *pbVar19 = local_330[uVar10 >> 0x18];
    bVar7 = *pbVar16;
    pbVar23 = pbVar16 + 1;
    pbVar16 = pbVar16 + 2;
    uVar15 = (uint)*pbVar23 | ((uint)bVar7 | uVar15 << 8) << 8;
    uVar10 = uVar15 << (0x10U - iVar13 & 0x1f);
    pbVar19 = pbVar19 + 1;
  } while( true );
}




// decompiled code
// original method signature: 
// undefined * memcpyl(undefined *param_1,int *param_2,int param_3);
 // line 0, offset 0x800f51c0
undefined * memcpyl(undefined *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = param_1 + param_3;
  do {
    uVar1 = geti(param_2,4);
    puti(param_1,uVar1,4);
    param_1 = param_1 + 4;
    param_3 = param_3 + -4;
    param_2 = param_2 + 1;
  } while (0 < param_3);
  return puVar2;
}




// decompiled code
// original method signature: 
// void memcpyb(undefined *param_1,undefined *param_2,int param_3);
 // line 0, offset 0x800f5234
void memcpyb(undefined *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return;
}




// decompiled code
// original method signature: 
// undefined * refcpy(undefined *param_1,uint param_2,size_t param_3);
 // line 0, offset 0x800f5254
undefined * refcpy(undefined *param_1,uint param_2,size_t param_3)

{
  undefined *puVar1;
  
  if (param_2 < 4) {
    puVar1 = param_1 + param_3;
    if (param_2 == 1) {
      memset(param_1,(uint)(byte)param_1[-1],param_3);
    }
    else {
      memcpyb(param_1,param_1 + -param_2,param_3);
    }
  }
  else {
    puVar1 = memcpyl(param_1,(int *)(param_1 + -param_2),param_3);
  }
  return puVar1;
}




// decompiled code
// original method signature: 
// int unrefpack(int *param_1,undefined *param_2,int param_3);
 // line 0, offset 0x800f52b8
int unrefpack(int *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  int aiStack32 [2];
  
  iVar10 = 0;
  if (param_1 != (int *)0x0) {
    uVar2 = geti(param_1,4);
    pbVar8 = (byte *)((int)param_1 + 2);
    if ((uVar2 & 1) != 0) {
      pbVar8 = (byte *)((int)param_1 + 5);
    }
    piVar9 = (int *)(pbVar8 + 3);
    iVar10 = (uint)*pbVar8 * 0x10000 + (uint)pbVar8[1] * 0x100 + (uint)pbVar8[2];
    if (param_3 != 0) {
      uVar2 = geti((int *)(param_2 + iVar10),4);
      puti((undefined *)aiStack32,uVar2,4);
      do {
        while( true ) {
          uVar2 = geti(piVar9,4);
          if ((uVar2 & 0x80) != 0) break;
          uVar3 = geti((int *)((int)piVar9 + 2),4);
          puti(param_2,uVar3,4);
          param_2 = param_2 + (uVar2 & 3);
          piVar9 = (int *)((int)(int *)((int)piVar9 + 2) + (uVar2 & 3));
          uVar3 = (uVar2 & 0x60) * 8 + (uVar2 >> 8 & 0xff) + 1;
          sVar5 = (uVar2 >> 2 & 7) + 3;
LAB_800f5488:
          param_2 = refcpy(param_2,uVar3,sVar5);
        }
        if ((uVar2 & 0x40) == 0) {
          uVar6 = uVar2 >> 0xe & 3;
          uVar3 = geti((int *)((int)piVar9 + 3),4);
          puti(param_2,uVar3,4);
          param_2 = param_2 + uVar6;
          piVar9 = (int *)((int)(int *)((int)piVar9 + 3) + uVar6);
          uVar3 = (uVar2 & 0x3f00) + (uVar2 >> 0x10 & 0xff) + 1;
          sVar5 = (uVar2 & 0x3f) + 4;
          goto LAB_800f5488;
        }
        if ((uVar2 & 0x20) == 0) {
          uVar3 = geti(piVar9 + 1,4);
          puti(param_2,uVar3,4);
          param_2 = param_2 + (uVar2 & 3);
          piVar9 = (int *)((int)(piVar9 + 1) + (uVar2 & 3));
          uVar3 = (uVar2 & 0x10) * 0x1000 + (uVar2 & 0xff00) + 1 + (uVar2 >> 0x10 & 0xff);
          sVar5 = (uVar2 & 0xc) * 0x40 + (uVar2 >> 0x18) + 5;
          goto LAB_800f5488;
        }
        piVar9 = (int *)((int)piVar9 + 1);
        if (0xfb < (uVar2 & 0xff)) {
          uVar2 = uVar2 & 3;
          while (uVar2 != 0) {
            uVar1 = *(undefined *)piVar9;
            piVar9 = (int *)((int)piVar9 + 1);
            uVar2 = uVar2 - 1;
            *param_2 = uVar1;
            param_2 = param_2 + 1;
          }
          uVar2 = geti(aiStack32,4);
          puti(param_2,uVar2,4);
          return iVar10;
        }
        iVar4 = (uVar2 & 0x1f) + 1;
        iVar7 = iVar4 * 4;
        memcpyl(param_2,piVar9,iVar7);
        param_2 = param_2 + iVar7;
        piVar9 = piVar9 + iVar4;
      } while( true );
    }
  }
  return iVar10;
}




// decompiled code
// original method signature: 
// void chase(byte param_1);
 // line 0, offset 0x800f5530
void chase(byte param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (*(char *)(DAT_0000197c + uVar1) == '\0') {
    *DAT_0000198c = param_1;
    DAT_0000198c = DAT_0000198c + 1;
  }
  else {
    chase(*(byte *)(DAT_00001980 + uVar1));
    chase(*(byte *)(DAT_00001984 + uVar1));
  }
  return;
}




// decompiled code
// original method signature: 
// int unbtree(byte *param_1,byte *param_2);
 // line 0, offset 0x800f55b4
int unbtree(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined auStack784 [256];
  undefined auStack528 [256];
  undefined auStack272 [256];
  
  DAT_0000197c = auStack784;
  DAT_00001980 = auStack528;
  DAT_00001984 = auStack272;
  if (param_1 == (byte *)0x0) {
    DAT_00001988 = param_1;
    DAT_0000198c = param_2;
    return 0;
  }
  DAT_00001988 = param_1 + 2;
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 0x47fb) {
    DAT_00001988 = param_1 + 5;
  }
  iVar7 = 0;
  bVar1 = *DAT_00001988;
  bVar2 = DAT_00001988[1];
  bVar3 = DAT_00001988[2];
  DAT_00001988 = DAT_00001988 + 3;
  DAT_0000198c = param_2;
  do {
    puVar5 = DAT_0000197c + iVar7;
    iVar7 = iVar7 + 1;
    *puVar5 = 0;
  } while (iVar7 < 0x100);
  bVar8 = *DAT_00001988;
  DAT_00001988 = DAT_00001988 + 1;
  DAT_0000197c[(uint)bVar8] = 1;
  bVar8 = *DAT_00001988;
  DAT_00001988 = DAT_00001988 + 1;
  if (bVar8 != 0) {
    iVar7 = 1;
    do {
      uVar9 = (uint)*DAT_00001988;
      DAT_00001980[uVar9] = DAT_00001988[1];
      DAT_00001984[uVar9] = DAT_00001988[2];
      DAT_00001988 = DAT_00001988 + 3;
      DAT_0000197c[uVar9] = 0xff;
      bVar4 = iVar7 < (int)(uint)bVar8;
      iVar7 = iVar7 + 1;
    } while (bVar4);
  }
  do {
    while( true ) {
      bVar8 = *DAT_00001988;
      uVar9 = (uint)bVar8;
      pbVar6 = DAT_00001988 + 1;
      if (DAT_0000197c[uVar9] != '\0') break;
LAB_800f5790:
      DAT_00001988 = pbVar6;
      *DAT_0000198c = bVar8;
      DAT_0000198c = DAT_0000198c + 1;
    }
    if (-1 < (char)DAT_0000197c[uVar9]) {
      bVar8 = *pbVar6;
      pbVar6 = DAT_00001988 + 2;
      if (bVar8 == 0) {
        DAT_00001988 = DAT_00001988 + 2;
        return ((uint)bVar1 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3;
      }
      goto LAB_800f5790;
    }
    DAT_00001988 = pbVar6;
    chase(DAT_00001980[uVar9]);
    chase(DAT_00001984[uVar9]);
  } while( true );
}




// decompiled code
// original method signature: 
// undefined8 __extendsfdf2(uint param_1);
 // line 0, offset 0x800f57c4
undefined8 __extendsfdf2(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint local_30;
  uint local_2c;
  
  if ((param_1 & 0x7fffffff) == 0) {
    param_1 = param_1 & 0x80000000;
    local_30 = 0;
  }
  else {
    local_2c = param_1 & 0x7fffff;
    uVar1 = (int)param_1 >> 0x17 & 0xff;
    local_30 = 0;
    if (uVar1 == 0) {
      uVar1 = param_1 & 0x600000;
      iVar2 = 0x37e;
      while (uVar1 != 0) {
        _dbl_shift(&local_30,1,local_30,local_2c,1);
        uVar1 = local_2c & 0xffe00000;
        iVar2 = iVar2 + 1;
      }
      while ((local_2c & 0x100000) == 0) {
        local_2c = local_2c << 1;
        iVar2 = iVar2 + -1;
      }
      local_2c = local_2c & 0xffefffff;
    }
    else {
      iVar2 = uVar1 + 0x380;
      _dbl_shift(&local_30,1,0,local_2c,3);
    }
    param_1 = param_1 & 0x80000000 | iVar2 << 0x14 | local_2c;
  }
  return CONCAT44(local_30,param_1);
}




// decompiled code
// original method signature: 
// uint __truncdfsf2(uint param_1,uint param_2);
 // line 0, offset 0x800f5924
uint __truncdfsf2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uStack32;
  int local_1c;
  
  if (((param_2 & 0x7fffffff) == 0) && (param_1 == 0)) {
    uVar1 = param_2 & 0x80000000;
  }
  else {
    uVar1 = (int)param_2 >> 0x14 & 0x7ff;
    iVar3 = uVar1 - 0x380;
    _dbl_shift(&uStack32,0,param_1,param_2 & 0xfffff | 0x100000,4);
    if (iVar3 < 1) {
      uVar2 = (uint)(local_1c + (1 << (-iVar3 + 1U & 0x1f))) >> (-iVar3 + 2U & 0x1f);
      iVar3 = 0;
    }
    else {
      uVar2 = local_1c + 1U >> 1;
      if ((uVar2 & 0xff000000) != 0) {
        uVar2 = local_1c + 1U >> 2;
        iVar3 = uVar1 - 0x37f;
      }
    }
    if (iVar3 < 0xff) {
      uVar1 = param_2 & 0x80000000 | iVar3 << 0x17 | uVar2 & 0xff7fffff;
    }
    else {
      _err_math(0x22,0x10);
      uVar1 = 0x7f800000;
      if ((int)param_2 < 0) {
        uVar1 = 0xff800000;
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined8 __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800f5a54
undefined8 __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int local_50;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = 0;
  uVar6 = 0;
  local_2c = 0;
  if ((((param_2 & 0x7fffffff) != 0) || (uVar3 = param_3, uVar1 = param_4, param_1 != 0)) &&
     (((param_4 & 0x7fffffff) != 0 || (uVar3 = param_1, uVar1 = param_2, param_3 != 0)))) {
    uVar4 = (int)param_2 >> 0x14 & 0x7ff;
    uVar5 = (int)param_4 >> 0x14 & 0x7ff;
    uVar3 = param_1;
    uVar1 = param_2;
    if ((uVar4 <= uVar5 + 0x36) && (uVar3 = param_3, uVar1 = param_4, uVar5 <= uVar4 + 0x36)) {
      local_44 = param_2 & 0xfffff | 0x100000;
      local_3c = param_4 & 0xfffff | 0x100000;
      local_48 = param_1;
      local_40 = param_3;
      if ((int)param_2 < 0) {
        local_48 = param_1;
        local_40 = param_3;
        _mainasu(&local_48,param_1,local_44);
      }
      if ((param_4 & 0x80000000) != 0) {
        _mainasu(&local_40,local_40,local_3c);
      }
      _dbl_shift(&local_48,0,local_48,local_44,9);
      puVar2 = &local_40;
      _dbl_shift(puVar2,0,local_40,local_3c,9);
      local_50 = uVar4 - uVar5;
      uVar3 = local_40;
      uVar1 = local_3c;
      if (uVar4 <= uVar5) {
        puVar2 = &local_48;
        local_50 = uVar5 - uVar4;
        uVar3 = local_48;
        uVar1 = local_44;
        uVar4 = uVar5;
      }
      _dbl_shift(puVar2,1,uVar3,uVar1,local_50);
      _add_mant_d(&local_48,local_48,local_44,local_40,local_3c);
      if ((int)local_44 < 0) {
        uVar6 = 0x80000000;
        _mainasu(&local_48,local_48,local_44);
      }
      else {
        if ((local_44 == 0) && (uVar3 = local_30, uVar1 = local_2c, local_48 == 0))
        goto LAB_800f5d9c;
      }
      while ((local_44 & 0xe0000000) == 0) {
        _dbl_shift(&local_48,0,local_48,local_44,1);
        uVar4 = uVar4 - 1;
      }
      if ((local_44 & 0x40000000) != 0) {
        uVar4 = uVar4 + 1;
        _dbl_shift(&local_48,1,local_48,local_44,1);
      }
      local_38 = 0xff;
      local_34 = 0;
      if ((local_48 & 0x200) != 0) {
        local_38 = 0x100;
      }
      _add_mant_d(&local_48,local_48,local_44,local_38,0);
      if ((local_44 & 0x40000000) != 0) {
        uVar4 = uVar4 + 1;
        _dbl_shift(&local_48,1,local_48,local_44,1);
      }
      _dbl_shift(&local_48,1,local_48,local_44,9);
      local_44 = local_44 & 0xffefffff;
      if ((int)uVar4 < 0x7ff) {
        uVar1 = uVar6 | uVar4 << 0x14 | local_44;
        uVar3 = local_48;
      }
      else {
        _err_math(0x22,0xb);
        uVar1 = 0x7ff00000;
        if (uVar6 != 0) {
          uVar1 = 0xfff00000;
        }
        uVar3 = 0;
      }
    }
  }
LAB_800f5d9c:
  return CONCAT44(uVar3,uVar1);
}




// decompiled code
// original method signature: 
// undefined8 __divdf3(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800f5dd4
undefined8 __divdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  
  iVar3 = ((int)param_2 >> 0x14 & 0x7ffU) - ((int)param_4 >> 0x14 & 0x7ffU);
  iVar4 = iVar3 + 0x3fe;
  uVar5 = param_2 & 0x80000000 ^ param_4 & 0x80000000;
  if (((param_4 & 0x7fffffff) == 0) && (param_3 == 0)) {
    bVar1 = uVar5 == 0;
    uVar5 = 0xffffffff;
    if (bVar1) {
      uVar5 = 0x7fffffff;
    }
    local_50 = 0xffffffff;
  }
  else {
    if (((param_2 & 0x7fffffff) == 0) && (param_1 == 0)) {
      local_50 = 0;
    }
    else {
      local_34 = param_2 & 0xfffff | 0x100000;
      local_2c = param_4 & 0xfffff | 0x100000;
      local_38 = param_1;
      local_30 = param_3;
      iVar2 = _comp_mant(param_1,local_34,param_3,local_2c);
      if (iVar2 < 0) {
        iVar4 = iVar3 + 0x3fd;
        _dbl_shift(&local_38,0,local_38,local_34,1);
      }
      local_44 = 0x200000;
      local_48 = 0;
      local_50 = 0;
      local_4c = 0;
      do {
        iVar3 = _comp_mant(local_38,local_34,local_30,local_2c);
        if (-1 < iVar3) {
          local_4c = local_4c | local_44;
          local_50 = local_50 | local_48;
          _mainasu(&local_28,local_30,local_2c);
          _add_mant_d(&local_38,local_38,local_34,local_28,local_24);
        }
        _dbl_shift(&local_38,0,local_38,local_34,1);
        _dbl_shift_us(&local_48,1,local_48,local_44,1);
      } while ((local_44 != 0) || (local_48 != 0));
      if (iVar4 < 0) {
        local_40 = 1 << (-iVar4 & 0x1fU);
        local_3c = 0;
        iVar2 = 0;
        _add_mant_d(&local_50,local_50,local_4c,local_40,0);
        iVar3 = -iVar4 + 1;
      }
      else {
        iVar3 = 1;
        local_3c = 0;
        local_40 = 1;
        iVar2 = iVar4 + 1;
        _add_mant_d(&local_50,local_50,local_4c,1,0);
      }
      _dbl_shift_us(&local_50,1,local_50,local_4c,iVar3);
      local_4c = local_4c & 0xffefffff;
      if (iVar2 < 0x7ff) {
        uVar5 = uVar5 | iVar2 << 0x14 | local_4c;
      }
      else {
        _err_math(0x22,0xf);
        bVar1 = uVar5 != 0;
        uVar5 = 0x7ff00000;
        if (bVar1) {
          uVar5 = 0xfff00000;
        }
        local_50 = 0;
      }
    }
  }
  return CONCAT44(local_50,uVar5);
}




// decompiled code
// original method signature: 
// undefined4 _comp_mant(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800f60b4
undefined4 _comp_mant(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_4 < param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
    if (((param_4 <= param_2) && (uVar1 = 1, param_1 <= param_3)) &&
       (uVar1 = 0xffffffff, param_3 <= param_1)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// char * strncpy(char *__dest,char *__src,size_t __n);
 // line 0, offset 0x800f6104
char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)0xa0)();
  return pcVar1;
}




// decompiled code
// original method signature: 
// undefined4 asyncidle(void);
 // line 0, offset 0x800f6114
undefined4 asyncidle(void)

{
  return 0;
}




// decompiled code
// original method signature: 
// char * strchr(char *__s,int __c);
 // line 0, offset 0x800f6214
char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)0xa0)();
  return pcVar1;
}




// decompiled code
// original method signature: 
// undefined8 __muldf3(uint param_1,uint param_2,uint param_3,uint param_4);
 // line 0, offset 0x800f62e4
undefined8 __muldf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_70;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  local_34 = param_2 & 0x80000000 ^ param_4 & 0x80000000;
  if ((((param_2 & 0x7fffffff) == 0) && (param_1 == 0)) ||
     (((param_4 & 0x7fffffff) == 0 && (param_3 == 0)))) {
    local_38 = 0;
  }
  else {
    local_30 = ((int)param_2 >> 0x14 & 0x7ffU) + ((int)param_4 >> 0x14 & 0x7ffU);
    iVar6 = local_30 + -0x3fe;
    local_54 = param_2 & 0xfffff | 0x100000;
    local_4c = param_4 & 0xfffff | 0x100000;
    local_58 = param_1;
    local_50 = param_3;
    _dbl_shift_us(&local_48,1,param_1,local_54,0x15);
    uVar2 = local_48;
    _dbl_shift_us(&local_48,1,local_50,local_4c,0x15);
    uVar3 = local_48;
    uVar4 = local_58 & 0x1fffff;
    uVar5 = local_50 & 0x1fffff;
    _mul_mant_d(&local_68,uVar2,local_48);
    _mul_mant_d(&local_40,uVar4,uVar3);
    _dbl_shift_us(&local_48,1,local_40,local_3c,0x15);
    _add_mant_d(&local_68,local_68,local_64,local_48,local_44);
    _mul_mant_d(&local_40,uVar5,uVar2);
    _dbl_shift_us(&local_48,1,local_40,local_3c,0x15);
    _add_mant_d(&local_68,local_68,local_64,local_48,local_44);
    if ((int)local_64 < 0) {
      local_5c = 0;
      local_60 = 0x400;
      _add_mant_d(&local_68,local_68,local_64,0x400,0);
      local_70 = 0xb;
    }
    else {
      local_5c = 0;
      local_60 = 0x200;
      _add_mant_d(&local_68,local_68,local_64,0x200,0);
      if ((local_64 & 0x80000000) == 0) {
        local_70 = 10;
        iVar6 = local_30 + -0x3ff;
      }
      else {
        local_70 = 0xb;
      }
    }
    _dbl_shift_us(&local_68,1,local_68,local_64,local_70);
    local_64 = local_64 & 0xffefffff;
    if (iVar6 < 0x7ff) {
      local_34 = local_34 | iVar6 << 0x14 | local_64;
      local_38 = local_68;
    }
    else {
      _err_math(0x22,0xd);
      bVar1 = local_34 != 0;
      local_34 = 0x7ff00000;
      if (bVar1) {
        local_34 = 0xfff00000;
      }
      local_38 = 0;
    }
  }
  return CONCAT44(local_38,local_34);
}




// decompiled code
// original method signature: 
// uint * _mul_mant_d(uint *param_1,uint param_2,uint param_3);
 // line 0, offset 0x800f65f8
uint * _mul_mant_d(uint *param_1,uint param_2,uint param_3)

{
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  local_28 = (param_2 & 0xffff) * (param_3 & 0xffff);
  local_20 = (param_2 >> 0x10) * (param_3 & 0xffff);
  local_24 = 0;
  local_1c = local_20 >> 0x10;
  local_20 = local_20 * 0x10000;
  _add_mant_d(&local_28,local_28,0,local_20,local_1c);
  local_20 = (param_2 & 0xffff) * (param_3 >> 0x10);
  local_1c = local_20 >> 0x10;
  local_20 = local_20 * 0x10000;
  _add_mant_d(&local_28,local_28,local_24,local_20,local_1c);
  *param_1 = local_28;
  param_1[1] = local_24 + (param_2 >> 0x10) * (param_3 >> 0x10);
  return param_1;
}




// decompiled code
// original method signature: 
// uint __divsf3(uint param_1,uint param_2);
 // line 0, offset 0x800f66e4
uint __divsf3(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = ((int)param_1 >> 0x17 & 0xffU) - ((int)param_2 >> 0x17 & 0xffU);
  iVar6 = iVar7 + 0x7e;
  uVar8 = param_1 & 0x80000000 ^ param_2 & 0x80000000;
  if ((param_2 & 0x7fffffff) == 0) {
    bVar1 = uVar8 != 0;
    uVar8 = 0x4f000000;
    if (bVar1) {
      uVar8 = 0x4f800000;
    }
  }
  else {
    if ((param_1 & 0x7fffffff) != 0) {
      uVar5 = param_1 & 0x7fffff | 0x800000;
      uVar4 = param_2 & 0x7fffff | 0x800000;
      uVar2 = 0x1000000;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 << 1;
        iVar6 = iVar7 + 0x7d;
      }
      uVar3 = 0;
      do {
        if ((int)uVar4 <= (int)uVar5) {
          uVar3 = uVar3 | uVar2;
          uVar5 = uVar5 - uVar4;
        }
        uVar2 = (int)uVar2 >> 1;
        uVar5 = uVar5 << 1;
      } while (uVar2 != 0);
      if (iVar6 < 0) {
        uVar2 = (int)(uVar3 + (1 << (-iVar6 & 0x1fU))) >> (-iVar6 + 1U & 0x1f);
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + 1;
        uVar2 = (int)(uVar3 + 1) >> 1;
      }
      if (iVar6 < 0xff) {
        uVar8 = uVar8 | iVar6 << 0x17 | uVar2 & 0xff7fffff;
      }
      else {
        _err_math(0x22,0xe);
        bVar1 = uVar8 != 0;
        uVar8 = 0x7f800000;
        if (bVar1) {
          uVar8 = 0xff800000;
        }
      }
    }
  }
  return uVar8;
}




// decompiled code
// original method signature: 
// uint __fixdfsi(uint param_1,uint param_2);
 // line 0, offset 0x800f6834
uint __fixdfsi(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  
  if (((param_2 & 0x7fffffff) == 0) && (param_1 == 0)) {
    local_1c = param_2 & 0x80000000;
  }
  else {
    uVar1 = (int)param_2 >> 0x14 & 0x7ff;
    iVar2 = uVar1 - 0x41d;
    if (iVar2 < 1) {
      local_1c = param_2 & 0xfffff | 0x100000;
      local_20 = param_1;
      _dbl_shift(&local_20,0,param_1,local_1c,10);
      if ((uVar1 - 0x3fe < 0x20) && (local_1c != 0)) {
        local_1c = (int)local_1c >> (-iVar2 & 0x1fU);
        if ((int)param_2 < 0) {
          local_1c = -local_1c;
        }
      }
      else {
        local_1c = 0;
      }
    }
    else {
      _err_math(0x22,0x11);
      local_1c = 0x7fffffff;
      if ((int)param_2 < 0) {
        local_1c = 0x80000000;
      }
    }
  }
  return local_1c;
}




// decompiled code
// original method signature: 
// void checkrect(int param_1);
 // line 0, offset 0x800f6934
void checkrect(int param_1)

{
  if ((*(ushort *)(param_1 + 4) & 1) != 0) {
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 1;
  }
  return;
}




// decompiled code
// original method signature: 
// void vramimage(short *param_1,undefined4 param_2);
 // line 0, offset 0x800f6960
void vramimage(short *param_1,undefined4 param_2)

{
  checkrect((int)param_1);
  LoadImage(param_1,param_2);
  drawpending = &DAT_00000001;
  return;
}




// decompiled code
// original method signature: 
// void vramfxya(uint *param_1,uint param_2,ushort param_3,uint param_4,ushort param_5);
 // line 0, offset 0x800f69a8
void vramfxya(uint *param_1,uint param_2,ushort param_3,uint param_4,ushort param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  short local_440;
  ushort local_43e;
  undefined2 local_43c;
  undefined2 local_43a;
  uint auStack1080 [128];
  uint local_238 [131];
  uint *local_2c;
  
  if (param_1 != (uint *)0x0) {
    local_2c = auStack1080;
    do {
      switch((uint)*(byte *)param_1 & 0xf7) {
      case 0x22:
        iVar4 = 0;
        puVar6 = param_1;
        puVar7 = local_2c;
        if (0 < *(short *)(param_1 + 1)) {
          do {
            iVar4 = iVar4 + 1;
            *(ushort *)puVar7 =
                 (ushort)(*(byte *)(puVar6 + 4) >> 1) |
                 (ushort)(*(byte *)((int)puVar6 + 0x12) >> 1) << 10 |
                 (ushort)(*(byte *)((int)puVar6 + 0x11) >> 1) << 5;
            puVar6 = (uint *)((int)puVar6 + 3);
            puVar7 = (uint *)((int)puVar7 + 2);
          } while (iVar4 < (int)*(short *)(param_1 + 1));
        }
        puVar6 = auStack1080;
        break;
      case 0x23:
        puVar6 = param_1 + 4;
        break;
      case 0x24:
        iVar4 = 0;
        if (0 < *(short *)(param_1 + 1)) {
          puVar7 = local_238;
          puVar6 = param_1;
          do {
            pbVar1 = (byte *)((int)puVar6 + 0x12);
            pbVar2 = (byte *)((int)puVar6 + 0x11);
            puVar3 = puVar6 + 4;
            puVar6 = (uint *)((int)puVar6 + 3);
            iVar4 = iVar4 + 1;
            *(ushort *)puVar7 =
                 (ushort)(*(byte *)puVar3 >> 3) |
                 (ushort)(*pbVar1 >> 3) << 10 | (ushort)(*pbVar2 >> 3) << 5;
            puVar7 = (uint *)((int)puVar7 + 2);
          } while (iVar4 < (int)*(short *)(param_1 + 1));
        }
        puVar6 = local_238;
        break;
      default:
        goto switchD_800f6a3c_caseD_25;
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
        param_1[3] = param_1[3] & 0xf000f000 | param_2 & 0xfff | ((uint)param_3 & 0xfff) << 0x10;
        *(byte *)param_1 = *(byte *)param_1 | 8;
        local_440 = (short)param_2;
        local_43e = param_3;
        iVar4 = shapedepth((byte *)param_1);
        iVar5 = (int)*(short *)(param_1 + 1) * iVar4 + 0xf;
        if (iVar5 < 0) {
          iVar5 = (int)*(short *)(param_1 + 1) * iVar4 + 0x1e;
        }
        local_43c = (undefined2)(iVar5 >> 4);
        local_43a = *(undefined2 *)((int)param_1 + 6);
        puVar6 = param_1 + 4;
        goto LAB_800f6bd8;
      }
      param_1[3] = param_1[3] & 0xf000f000 | param_4 & 0xfff | ((uint)param_5 & 0xfff) << 0x10;
      *(byte *)param_1 = *(byte *)param_1 | 8;
      local_440 = (short)param_4;
      local_43e = param_5;
      local_43c = *(undefined2 *)(param_1 + 1);
      local_43a = 1;
LAB_800f6bd8:
      vramimage(&local_440,puVar6);
switchD_800f6a3c_caseD_25:
      if ((*param_1 & 0xffffff00) == 0) {
        param_1 = (uint *)0x0;
      }
      else {
        param_1 = (uint *)((int)param_1 + ((int)*param_1 >> 8));
      }
    } while (param_1 != (uint *)0x0);
  }
  return;
}




// decompiled code
// original method signature: 
// int shapetoclutid(uint *param_1);
 // line 0, offset 0x800f6c94
int shapetoclutid(uint *param_1)

{
  uint uVar1;
  
  if (param_1 != (uint *)0x0) {
    do {
      if ((*(byte *)param_1 & 0xf7) == 0x23) {
        uVar1 = GetClut((int)(param_1[3] << 0x14) >> 0x14,(int)(param_1[3] << 4) >> 0x14);
        return (int)(short)uVar1;
      }
      if ((*param_1 & 0xffffff00) == 0) {
        param_1 = (uint *)0x0;
      }
      else {
        param_1 = (uint *)((int)param_1 + ((int)*param_1 >> 8));
      }
    } while (param_1 != (uint *)0x0);
  }
  return 0;
}




// decompiled code
// original method signature: 
// uint * FntFlush(int param_1);
 // line 0, offset 0x800f6d18
/* WARNING: Could not reconcile some variable overlaps */

uint * FntFlush(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int local_3c;
  
  cVar3 = -0x80;
  cVar8 = -0x80;
  local_3c = 0;
  cVar4 = -0x80;
  if (((param_1 < 0) || (iVar5 = param_1 << 1, DAT_80135fd8 <= param_1)) &&
     (iVar5 = DAT_80135fdc << 1, param_1 = DAT_80135fdc,
     *(int *)(&DAT_80135e7c + DAT_80135fdc * 0x30) == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    iVar5 = (iVar5 + param_1) * 0x10;
    puVar6 = (uint *)(iVar5 + -0x7feca198);
    pbVar11 = *(byte **)(&DAT_80135e7c + iVar5);
    iVar20 = *(int *)(&DAT_80135e74 + iVar5);
    iVar13 = (int)*(short *)(&DAT_80135e60 + iVar5);
    iVar17 = (int)*(short *)(&DAT_80135e62 + iVar5);
    iVar9 = iVar17 + (int)*(short *)(&DAT_80135e66 + iVar5);
    puVar14 = *(uint **)(&DAT_80135e78 + iVar5);
    iVar18 = *(int *)(&DAT_80135e84 + iVar5);
    iVar19 = iVar13 + (int)*(short *)(&DAT_80135e64 + iVar5);
    TermPrim(puVar6);
    while( true ) {
      sVar16 = (short)iVar17;
      bVar1 = *pbVar11;
      if ((*pbVar11 == 0) || (iVar20 == 0)) break;
      bVar2 = false;
      puVar15 = puVar14;
      if (bVar1 == 0x20) {
LAB_800f6f38:
        iVar13 = iVar13 + 8;
        puVar14 = puVar15;
LAB_800f6f3c:
        pbVar12 = pbVar11;
        if ((iVar19 <= iVar13) && (pbVar12 = pbVar11, iVar18 == 0)) {
LAB_800f6f50:
          bVar2 = true;
          pbVar12 = pbVar11;
        }
      }
      else {
        if ((char)bVar1 < '!') {
          if (bVar1 == 9) {
            iVar13 = iVar13 + 0x20;
            goto LAB_800f6f3c;
          }
          if (bVar1 != 10) goto LAB_800f6eac;
          goto LAB_800f6f50;
        }
        if (bVar1 != 0x7e) {
LAB_800f6eac:
          bVar1 = *pbVar11;
          if ((uint)bVar1 - 0x61 < 0x1a) {
            iVar10 = (int)(char)bVar1 + -0x40;
          }
          else {
            iVar10 = (int)(char)bVar1 + -0x20;
          }
          iVar7 = iVar10;
          if (iVar10 < 0) {
            iVar7 = iVar10 + 0xf;
          }
          *(char *)(puVar14 + 3) = ((char)iVar10 + (char)(iVar7 >> 4) * -0x10) * '\b';
          *(undefined *)((int)puVar14 + 0xd) = (char)((iVar7 >> 4) << 3);
          *(short *)(puVar14 + 2) = (short)iVar13;
          *(short *)((int)puVar14 + 10) = sVar16;
          *(char *)(puVar14 + 1) = cVar3;
          *(char *)((int)puVar14 + 5) = cVar8;
          *(char *)((int)puVar14 + 6) = cVar4;
          puVar15 = puVar14 + 4;
          AddPrim(puVar6,puVar14);
          goto LAB_800f6f38;
        }
        pbVar12 = pbVar11 + 1;
        if (*pbVar12 == 99) {
          pbVar12 = pbVar11 + 4;
          cVar3 = pbVar11[2] * '\x10';
          cVar8 = pbVar11[3] * '\x10';
          cVar4 = *pbVar12 * '\x10';
        }
      }
      if (bVar2) {
        if (local_3c < iVar13) {
          local_3c = iVar13;
        }
        iVar17 = iVar17 + 8;
        sVar16 = (short)iVar17;
        iVar13 = (int)*(short *)(&DAT_80135e60 + iVar5);
        if (iVar9 <= iVar17) break;
      }
      pbVar11 = pbVar12 + 1;
      iVar20 = iVar20 + -1;
    }
    if (((&DAT_80135e5f)[iVar5] != '\0') && (AddPrim(puVar6,(uint *)(&Font + iVar5)), iVar18 != 0))
    {
      *(short *)(&DAT_80135e64 + iVar5) = (short)local_3c - *(short *)(&DAT_80135e60 + iVar5);
      *(short *)(&DAT_80135e66 + iVar5) = sVar16 - (*(short *)(&DAT_80135e62 + iVar5) + -8);
    }
    DrawOTag(puVar6);
    *(undefined4 *)(&DAT_80135e80 + iVar5) = 0;
    **(undefined **)(&DAT_80135e7c + iVar5) = 0;
  }
  return puVar6;
}




// decompiled code
// original method signature: 
// uint CdStatus(void);
 // line 0, offset 0x800f7780
uint CdStatus(void)

{
  return (uint)CD_status;
}




// decompiled code
// original method signature: 
// uint CdMode(void);
 // line 0, offset 0x800f7790
uint CdMode(void)

{
  return (uint)CD_mode;
}




// decompiled code
// original method signature: 
// undefined1 * CdLastPos(void);
 // line 0, offset 0x800f77a0
undefined1 * CdLastPos(void)

{
  return &CD_pos;
}




// decompiled code
// original method signature: 
// undefined4 CdReset(int param_1);
 // line 0, offset 0x800f77ac
undefined4 CdReset(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    CD_initintr();
    uVar1 = 1;
  }
  else {
    iVar2 = CD_init();
    uVar1 = 0;
    if ((iVar2 == 0) && (uVar1 = 1, param_1 == 1)) {
      iVar2 = CD_initvol();
      uVar1 = 0;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void CdFlush(void);
 // line 0, offset 0x800f7818
void CdFlush(void)

{
  CD_flush();
  return;
}




// decompiled code
// original method signature: 
// undefined4 CdSetDebug(undefined4 param_1);
 // line 0, offset 0x800f7838
undefined4 CdSetDebug(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = CD_debug;
  CD_debug = param_1;
  return uVar1;
}




// decompiled code
// original method signature: 
// void CdSync(int param_1,undefined *param_2);
 // line 0, offset 0x800f784c
void CdSync(int param_1,undefined *param_2)

{
  CD_sync(param_1,param_2);
  return;
}




// decompiled code
// original method signature: 
// void CdReady(int param_1,undefined *param_2);
 // line 0, offset 0x800f786c
void CdReady(int param_1,undefined *param_2)

{
  CD_ready(param_1,param_2);
  return;
}




// decompiled code
// original method signature: 
// undefined4 CdSyncCallback(undefined4 param_1);
 // line 0, offset 0x800f788c
undefined4 CdSyncCallback(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = CD_cbsync;
  CD_cbsync = param_1;
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 CdReadyCallback(undefined4 param_1);
 // line 0, offset 0x800f78a0
undefined4 CdReadyCallback(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = CD_cbready;
  CD_cbready = param_1;
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 CdControl(byte param_1,undefined *param_2,undefined *param_3);
 // line 0, offset 0x800f78b4
undefined4 CdControl(byte param_1,undefined *param_2,undefined *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = CD_cbsync;
  iVar3 = 3;
  while( true ) {
    CD_cbsync = 0;
    if ((param_1 != 1) && ((CD_status & 0x10) != 0)) {
      CD_cw(1,(undefined *)0x0,(undefined *)0x0,0);
    }
    if ((((param_2 == (undefined *)0x0) || (*(int *)(&DAT_80136a18 + (uint)param_1 * 4) == 0)) ||
        (iVar2 = CD_cw(2,param_2,param_3,0), iVar2 == 0)) &&
       (CD_cbsync = uVar1, iVar2 = CD_cw(param_1,param_2,param_3,0), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      CD_cbsync = uVar1;
      return 0;
    }
  }
  return 1;
}




// decompiled code
// original method signature: 
// undefined4 CdControlF(byte param_1,undefined *param_2);
 // line 0, offset 0x800f79f0
undefined4 CdControlF(byte param_1,undefined *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = CD_cbsync;
  iVar3 = 3;
  while( true ) {
    CD_cbsync = 0;
    if ((param_1 != 1) && ((CD_status & 0x10) != 0)) {
      CD_cw(1,(undefined *)0x0,(undefined *)0x0,0);
    }
    if ((((param_2 == (undefined *)0x0) || (*(int *)(&DAT_80136a18 + (uint)param_1 * 4) == 0)) ||
        (iVar2 = CD_cw(2,param_2,(undefined *)0x0,0), iVar2 == 0)) &&
       (CD_cbsync = uVar1, iVar2 = CD_cw(param_1,param_2,(undefined *)0x0,1), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      CD_cbsync = uVar1;
      return 0;
    }
  }
  return 1;
}




// decompiled code
// original method signature: 
// uint CdControlB(byte param_1,undefined *param_2,undefined *param_3);
 // line 0, offset 0x800f7b24
uint CdControlB(byte param_1,undefined *param_2,undefined *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = CD_cbsync;
  iVar5 = 3;
  do {
    CD_cbsync = 0;
    if ((param_1 != 1) && ((CD_status & 0x10) != 0)) {
      CD_cw(1,(undefined *)0x0,(undefined *)0x0,0);
    }
    if (((param_2 == (undefined *)0x0) || (*(int *)(&DAT_80136a18 + (uint)param_1 * 4) == 0)) ||
       (iVar2 = CD_cw(2,param_2,param_3,0), iVar2 == 0)) {
      CD_cbsync = uVar1;
      iVar2 = CD_cw(param_1,param_2,param_3,0);
      iVar3 = 0;
      if (iVar2 == 0) break;
    }
    iVar5 = iVar5 + -1;
    iVar3 = -1;
    CD_cbsync = uVar1;
  } while (iVar5 != -1);
  if (iVar3 == 0) {
    uVar4 = CD_sync(0,param_3);
    uVar4 = (uint)(uVar4 == 2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}




// decompiled code
// original method signature: 
// uint CdGetSector(undefined4 param_1,uint param_2);
 // line 0, offset 0x800f7c70
uint CdGetSector(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = CD_getsector(param_1,param_2);
  return (uint)(iVar1 == 0);
}




// decompiled code
// original method signature: 
// uint CdGetSector2(undefined4 param_1,uint param_2);
 // line 0, offset 0x800f7c90
uint CdGetSector2(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = CD_getsector2(param_1,param_2);
  return (uint)(iVar1 == 0);
}




// decompiled code
// original method signature: 
// void CdDataCallback(void);
 // line 0, offset 0x800f7cb0
void CdDataCallback(void)

{
  DMACallback();
  return;
}




// decompiled code
// original method signature: 
// void CdDataSync(int param_1);
 // line 0, offset 0x800f7cd4
void CdDataSync(int param_1)

{
  CD_datasync(param_1);
  return;
}




// decompiled code
// original method signature: 
// void CdIntToPos(int param_1,char *param_2);
 // line 0, offset 0x800f7cf4
void CdIntToPos(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1 + 0x96) / 0x4b;
  iVar2 = (param_1 + 0x96) % 0x4b;
  iVar1 = iVar3 / 0x3c;
  iVar3 = iVar3 % 0x3c;
  param_2[2] = (char)iVar2 + (char)(iVar2 / 10) * '\x06';
  param_2[1] = (char)iVar3 + (char)(iVar3 / 10) * '\x06';
  *param_2 = (char)iVar1 + (char)(iVar1 / 10) * '\x06';
  return;
}




// decompiled code
// original method signature: 
// int CdPosToInt(byte *param_1);
 // line 0, offset 0x800f7df8
int CdPosToInt(byte *param_1)

{
  return (((uint)(*param_1 >> 4) * 10 + ((uint)*param_1 & 0xf)) * 0x3c +
         (uint)(param_1[1] >> 4) * 10 + ((uint)param_1[1] & 0xf)) * 0x4b +
         (uint)(param_1[2] >> 4) * 10 + ((uint)param_1[2] & 0xf) + -0x96;
}




// decompiled code
// original method signature: 
// void StCdInterrupt(void);
 // line 0, offset 0x800f7e78
void StCdInterrupt(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  dword dVar6;
  undefined4 local_18 [2];
  byte local_10 [8];
  
  if (StFinalSector != 1) {
    if ((StRgb24 == 0) || ((*(uint *)PTR_DMA_MDEC_OUT_CHCR_80136ab8 & 0x1000000) == 0)) {
      iVar1 = CdReady(1,local_10);
      if (iVar1 != 5) {
        if ((local_10[0] & 4) == 0) {
          DAT_80144864 = StRingAddr + StRingIdx1 * 8;
          if (*(short *)DAT_80144864 == 0) {
            *PTR_CDROM_REG0_80136a98 = 0;
            *PTR_CDROM_REG3_80136aa4 = 0;
            *PTR_CDROM_REG0_80136a98 = 0;
            *PTR_CDROM_REG3_80136aa4 = 0x80;
            *(undefined4 *)PTR_CDROM_DELAY_80136aa8 = 0x20943;
            *(undefined4 *)PTR_COMMON_DELAY_80136aac = 0x1323;
            uVar4 = 0;
            if (StMode == 0) {
              do {
                puVar3 = (undefined *)((int)local_18 + uVar4);
                uVar4 = uVar4 + 1;
                *puVar3 = *PTR_CDROM_REG2_80136aa0;
              } while (uVar4 < 4);
              uVar4 = 0;
              do {
                uVar4 = uVar4 + 1;
              } while (uVar4 < 8);
            }
            if (StEmu_Addr == 0) {
              FUN_800f87c0(3,(dword)DAT_80144864,0,8,0x11000000,'\0');
            }
            else {
              FUN_800f8794(DAT_80144864,(undefined4 *)(StEmu_Addr + StEmu_Idx * 0x800),8);
            }
            puVar3 = PTR_CDROM_DELAY_80136aa8;
            uVar4 = *(uint *)PTR_DMA_CDROM_CHCR_80136ac8;
            while ((uVar4 & 0x1000000) != 0) {
              uVar4 = *(uint *)PTR_DMA_CDROM_CHCR_80136ac8;
            }
            DAT_80144864[7] = local_18[0];
            *(undefined4 *)puVar3 = 0x20843;
            *(undefined4 *)PTR_COMMON_DELAY_80136aac = 0x1325;
            if ((StSTART_FLAG == 1) && (StStartFrame != 0)) {
              if (StStartFrame != (uint)*(ushort *)(DAT_80144864 + 2)) {
                *(short *)DAT_80144864 = 0;
                if (StEmu_Addr == 0) {
                  return;
                }
                StEmu_Idx = StEmu_Idx + 1;
                return;
              }
              StSTART_FLAG = 0;
            }
            if ((*(short *)DAT_80144864 == 0x160) &&
               (((uint)(*(ushort *)((int)DAT_80144864 + 2) >> 10) & 0x1f) == CChannel)) {
              if (((int)Stsector_offset == (uint)*(ushort *)(DAT_80144864 + 1)) &&
                 ((Stframe_no == 0 || (Stframe_no == (uint)*(ushort *)(DAT_80144864 + 2))))) {
                if (*(short *)(DAT_80144864 + 1) == 0) {
                  Stframe_no = (uint)*(ushort *)(DAT_80144864 + 2);
                  Stsector_offset = 0;
                  if ((StEndFrame != 0) && (StEndFrame <= Stframe_no)) {
                    Stframe_no = 0;
                    Stsector_offset = 0;
                    init_ring_status(StRingIdx2,StRingIdx1 - StRingIdx2);
                    StRingIdx1 = StRingIdx2;
                    *(short *)DAT_80144864 = 0;
                    StSTART_FLAG = 1;
                    if (StFunc2 != (code *)0x0) {
                      (*StFunc2)();
                    }
                    if (StEmu_Addr != 0) {
                      StEmu_Idx = StEmu_Idx + 1;
                    }
                    debug_cause = 7;
                    return;
                  }
                  if ((StRingSize - StRingIdx1) - 1U < (uint)*(ushort *)((int)DAT_80144864 + 6)) {
                    if (StEndFrame == 0) {
                      *(short *)DAT_80144864 = 1;
                      StSTART_FLAG = 1;
                      if (StFunc2 != (code *)0x0) {
                        (*StFunc2)();
                      }
                      if (StEmu_Addr != 0) {
                        StEmu_Idx = StEmu_Idx + 1;
                      }
                      debug_cause = 8;
                      return;
                    }
                    if (*(short *)StRingAddr != 0) {
                      *(short *)DAT_80144864 = 0;
                      if (StEmu_Addr != 0) {
                        StEmu_Idx = StEmu_Idx + 1;
                      }
                      debug_cause = 9;
                      return;
                    }
                    *(short *)DAT_80144864 = 1;
                    uVar4 = 0;
                    StRingIdx1 = 0;
                    puVar5 = StRingAddr;
                    do {
                      uVar2 = *DAT_80144864;
                      DAT_80144864 = DAT_80144864 + 1;
                      uVar4 = uVar4 + 1;
                      *puVar5 = uVar2;
                      puVar5 = puVar5 + 1;
                    } while (uVar4 < 8);
                    DAT_80144864 = StRingAddr;
                  }
                  StRingIdx2 = StRingIdx1;
                }
                debug_cause = 10;
                Stsector_offset = Stsector_offset + 1;
                StRingBase = StRingAddr + StRingSize * 8 + StRingIdx1 * 0x1f8;
                dVar6 = 0x11000000;
                if (StRgb24 == 0) {
                  dVar6 = 0x11400100;
                  *(undefined4 *)PTR_CDROM_DELAY_80136aa8 = 0x21020843;
                }
                else {
                  *(undefined4 *)PTR_CDROM_DELAY_80136aa8 = 0x20943;
                  *(undefined4 *)PTR_COMMON_DELAY_80136aac = 0x1323;
                }
                if ((uint)*(ushort *)((int)DAT_80144864 + 6) - 1 ==
                    (uint)*(ushort *)(DAT_80144864 + 1)) {
                  StFinalSector = 1;
                  if (StEmu_Addr == 0) {
                    FUN_800f87c0(3,(dword)StRingBase,0,0x1f8,dVar6,'\x01');
                  }
                  else {
                    FUN_800f8794(StRingBase,(undefined4 *)(StEmu_Addr + StEmu_Idx * 0x800 + 0x20),
                                 0x1f8);
                    StEmu_Idx = StEmu_Idx + 1;
                  }
                  Stsector_offset = 0;
                  Stframe_no = 0;
                  CChannel = StCHANNEL;
                }
                else {
                  if (StEmu_Addr == 0) {
                    FUN_800f87c0(3,(dword)StRingBase,0,0x1f8,dVar6,'\0');
                  }
                  else {
                    FUN_800f8794(StRingBase,(undefined4 *)(StEmu_Addr + StEmu_Idx * 0x800 + 0x20),
                                 0x1f8);
                    StEmu_Idx = StEmu_Idx + 1;
                  }
                }
                *(undefined4 *)PTR_COMMON_DELAY_80136aac = 0x1325;
                *(short *)DAT_80144864 = 3;
                StRingIdx1 = StRingIdx1 + 1;
                if ((StEmu_Addr != 0) && (StFinalSector != 0)) {
                  data_ready_callback();
                }
              }
              else {
                Stframe_no = 0;
                Stsector_offset = 0;
                init_ring_status(StRingIdx2,StRingIdx1 - StRingIdx2);
                StRingIdx1 = StRingIdx2;
                *(short *)DAT_80144864 = 0;
                if (StEmu_Addr != 0) {
                  StEmu_Idx = StEmu_Idx + 1;
                }
                debug_cause = 6;
              }
            }
            else {
              if (StEmu_Addr != 0) {
                StEmu_Idx = 0;
              }
              debug_cause = 5;
              *(short *)DAT_80144864 = 0;
            }
          }
          else {
            if (StEmu_Addr != 0) {
              StEmu_Idx = StEmu_Idx + 1;
            }
            debug_cause = 4;
          }
        }
        else {
          debug_cause = 3;
        }
      }
    }
    else {
      StCdIntrFlag = 1;
      if (StEmu_Addr != 0) {
        StEmu_Idx = StEmu_Idx + 1;
      }
      debug_cause = 1;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_800f8794(undefined4 *param_1,undefined4 *param_2,uint param_3);
 // line 0, offset 0x800f8794
void FUN_800f8794(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3);
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_800f87c0(uint param_1,dword param_2,int param_3,uint param_4,dword param_5,char param_6);
 // line 0, offset 0x800f87c0
void FUN_800f87c0(uint param_1,dword param_2,int param_3,uint param_4,dword param_5,char param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
  do {
    if ((uVar2 & 0x1000000) == 0) {
LAB_800f883c:
      if (param_6 == '\x01') {
        bVar1 = PTR_DMA_DICR_80136ab4[2] | (byte)(1 << (param_1 & 0x1f));
      }
      else {
        bVar1 = PTR_DMA_DICR_80136ab4[2] & ~(byte)(1 << (param_1 & 0x1f));
      }
      PTR_DMA_DICR_80136ab4[2] = bVar1;
      *(uint *)PTR_DMA_DPCR_80136ab0 =
           *(uint *)PTR_DMA_DPCR_80136ab0 | 1 << (param_1 * 4 + 3 & 0x1f);
      (&DMA_MDEC_IN_MADR)[param_1 * 4] = param_2;
      (&DMA_MDEC_IN_BCR)[param_1 * 4] = param_3 << 0x10 | param_4;
      bVar1 = *PTR_CDROM_REG0_80136a98;
      while ((bVar1 & 0x40) == 0) {
        bVar1 = *PTR_CDROM_REG0_80136a98;
      }
      (&DMA_MDEC_IN_CHCR)[param_1 * 4] = param_5;
      return;
    }
    if (iVar3 == 0x10000) {
      printf(s_DMA_STATUS_ERROR__x_80057110,(&DMA_MDEC_IN_CHCR)[param_1 * 4]);
      goto LAB_800f883c;
    }
    uVar2 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
    iVar3 = iVar3 + 1;
  } while( true );
}




// decompiled code
// original method signature: 
// void StClearRing(void);
 // line 0, offset 0x800f8968
void StClearRing(void)

{
  StRingIdx3 = 0;
  StRingIdx2 = 0;
  StRingIdx1 = 0;
  StFinalSector = 0;
  init_ring_status(0,StRingSize);
  StCdIntrFlag = 0;
  Stframe_no = 0;
  Stsector_offset = 0;
  return;
}




// decompiled code
// original method signature: 
// void DecDCTReset(int param_1);
 // line 0, offset 0x800f89c8
void DecDCTReset(int param_1)

{
  if (param_1 == 0) {
    ResetCallback();
  }
  FUN_800f8af8(param_1);
  return;
}




// decompiled code
// original method signature: 
// void DecDCTin(uint *param_1,uint param_2);
 // line 0, offset 0x800f89fc
void DecDCTin(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *param_1 | 0x8000000;
  }
  else {
    uVar1 = *param_1 & 0xf7ffffff;
  }
  *param_1 = uVar1;
  if ((param_2 & 2) == 0) {
    uVar1 = *param_1 & 0xfdffffff;
  }
  else {
    uVar1 = *param_1 | 0x2000000;
  }
  *param_1 = uVar1;
  FUN_800f8be8(param_1,(uint)*(ushort *)param_1);
  return;
}




// decompiled code
// original method signature: 
// void DecDCTout(undefined4 param_1,uint param_2);
 // line 0, offset 0x800f8a78
void DecDCTout(undefined4 param_1,uint param_2)

{
  FUN_800f8c78(param_1,param_2);
  return;
}




// decompiled code
// original method signature: 
// uint DecDCTinSync(int param_1);
 // line 0, offset 0x800f8a98
uint DecDCTinSync(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_800f8d04();
  }
  else {
    uVar1 = FUN_800f8e2c();
    uVar1 = uVar1 >> 0x1d & 1;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void DecDCToutCallback(void);
 // line 0, offset 0x800f8ad4
void DecDCToutCallback(void)

{
  DMACallback();
  return;
}




// decompiled code
// original method signature: 
// void FUN_800f8af8(int param_1);
 // line 0, offset 0x800f8af8
void FUN_800f8af8(int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)PTR_MDEC_REG1_80136c3c = 0x80000000;
    *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_80136c10 = 0;
    *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_80136c1c = 0;
    *(undefined4 *)PTR_MDEC_REG1_80136c3c = 0x60000000;
    FUN_800f8be8((undefined4 *)&DAT_80136af8,0x20);
    FUN_800f8be8((undefined4 *)&DAT_80136b7c,0x20);
  }
  else {
    if (param_1 == 1) {
      *(undefined4 *)PTR_MDEC_REG1_80136c3c = 0x80000000;
      *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_80136c10 = 0;
      *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_80136c1c = 0;
      *(undefined4 *)PTR_MDEC_REG1_80136c3c = 0x60000000;
    }
    else {
      printf(s_MDEC_rest_bad_option__d__80057130);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_800f8be8(undefined4 *param_1,uint param_2);
 // line 0, offset 0x800f8be8
void FUN_800f8be8(undefined4 *param_1,uint param_2)

{
  FUN_800f8d04();
  *(uint *)PTR_DMA_DPCR_80136c40 = *(uint *)PTR_DMA_DPCR_80136c40 | 0x88;
  *(undefined4 **)PTR_DMA_MDEC_IN_MADR_80136c08 = param_1 + 1;
  *(uint *)PTR_DMA_MDEC_IN_BCR_80136c0c = (param_2 >> 5) << 0x10 | 0x20;
  *(undefined4 *)PTR_MDEC_REG0_80136c38 = *param_1;
  *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_80136c10 = 0x1000201;
  return;
}




// decompiled code
// original method signature: 
// void FUN_800f8c78(undefined4 param_1,uint param_2);
 // line 0, offset 0x800f8c78
void FUN_800f8c78(undefined4 param_1,uint param_2)

{
  FUN_800f8d98();
  *(uint *)PTR_DMA_DPCR_80136c40 = *(uint *)PTR_DMA_DPCR_80136c40 | 0x88;
  *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_80136c1c = 0;
  *(undefined4 *)PTR_DMA_MDEC_OUT_MADR_80136c14 = param_1;
  *(uint *)PTR_DMA_MDEC_OUT_BCR_80136c18 = (param_2 >> 5) << 0x10 | 0x20;
  *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_80136c1c = 0x1000200;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800f8d04(void);
 // line 0, offset 0x800f8d04
undefined4 FUN_800f8d04(void)

{
  uint uVar1;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *(uint *)PTR_MDEC_REG1_80136c3c;
  while( true ) {
    if ((uVar1 & 0x20000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *(uint *)PTR_MDEC_REG1_80136c3c;
  }
  FUN_800f8e44(s_MDEC_in_sync_8005714c);
  return 0xffffffff;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800f8d98(void);
 // line 0, offset 0x800f8d98
undefined4 FUN_800f8d98(void)

{
  uint uVar1;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *(uint *)PTR_DMA_MDEC_OUT_CHCR_80136c1c;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *(uint *)PTR_DMA_MDEC_OUT_CHCR_80136c1c;
  }
  FUN_800f8e44(s_MDEC_out_sync_8005715c);
  return 0xffffffff;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800f8e2c(void);
 // line 0, offset 0x800f8e2c
undefined4 FUN_800f8e2c(void)

{
  return *(undefined4 *)PTR_MDEC_REG1_80136c3c;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800f8e44(undefined4 param_1);
 // line 0, offset 0x800f8e44
undefined4 FUN_800f8e44(undefined4 param_1)

{
  printf(s__s_timeout__8005716c,param_1);
  *(undefined4 *)PTR_MDEC_REG1_80136c3c = 0x80000000;
  *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_80136c10 = 0;
  *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_80136c1c = 0;
  *(undefined4 *)PTR_MDEC_REG1_80136c3c = 0x60000000;
  return 0;
}




// decompiled code
// original method signature: 
// void StUnSetRing(void);
 // line 0, offset 0x800f8ec8
void StUnSetRing(void)

{
  EnterCriticalSection();
  if (DS_active == 1) {
    DsDataCallback();
    DsReadyCallback(0);
  }
  else {
    CdDataCallback();
    CdReadyCallback(0);
  }
  *PTR_CDROM_REG0_80136c48 = 0;
  *PTR_CDROM_REG3_80136c54 = 0;
  ExitCriticalSection();
  return;
}




// decompiled code
// original method signature: 
// void CdRead2(uint param_1);
 // line 0, offset 0x800f8f48
void CdRead2(uint param_1)

{
  undefined local_10 [8];
  
  local_10[0] = (undefined)param_1;
  CdControl(0xe,local_10,(undefined *)0x0);
  if ((param_1 & 0x100) != 0) {
    StMode = (uint)((param_1 & 0x20) == 0);
    CdDataCallback();
    CdReadyCallback(FUN_800f8fcc);
  }
  CdControl(0x1b,(undefined *)0x0,(undefined *)0x0);
  return;
}




// decompiled code
// original method signature: 
// void FUN_800f8fcc(void);
 // line 0, offset 0x800f8fcc
void FUN_800f8fcc(void)

{
  StCdInterrupt();
  return;
}




// decompiled code
// original method signature: 
// void StSetStream(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
 // line 0, offset 0x800f8ff8
void StSetStream(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  StSetMask(1,param_2,param_3);
  StFunc1 = param_4;
  StFunc2 = param_5;
  StEmu_Addr = 0;
  CChannel = 0;
  StCHANNEL = 0;
  Stframe_no = 0;
  StRgb24 = param_1 & 1;
  Stsector_offset = 0;
  return;
}




// decompiled code
// original method signature: 
// uint FUN_800f9360(char *param_1,char *param_2);
 // line 0, offset 0x800f9360
uint FUN_800f9360(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,param_2,0xc);
  return (uint)(iVar1 == 0);
}




// decompiled code
// original method signature: 
// undefined4 FUN_800f9380(void);
 // line 0, offset 0x800f9380
undefined4 FUN_800f9380(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *__dest;
  
  puVar6 = (undefined4 *)&DAT_8014647c;
  uVar2 = FUN_800f9984(1,0x10,&DAT_8014647c);
  if (uVar2 == 1) {
    iVar4 = strncmp(&DAT_8014647d,s_CD001_80057238,5);
    iVar5 = DAT_80146508;
    if (iVar4 == 0) {
      uVar2 = FUN_800f9984(1,DAT_80146508,&DAT_8014647c);
      if (uVar2 == 1) {
        if (1 < CD_debug) {
          printf(s_CD_newmedia__sarching_dir___80057294);
        }
        iVar5 = 0;
        do {
          iVar4 = iVar5;
          if (*(char *)puVar6 == '\0') break;
          (&DAT_80144e84)[iVar5 * 0xb] = *(undefined4 *)((int)puVar6 + 2);
          __dest = &DAT_80144e88 + iVar5 * 0x2c;
          bVar1 = *(byte *)((int)puVar6 + 6);
          iVar4 = iVar5 + 1;
          (&DAT_80144e7c)[iVar5 * 0xb] = iVar4;
          (&DAT_80144e80)[iVar5 * 0xb] = (uint)bVar1;
          memcpy(__dest,puVar6 + 2,(uint)*(byte *)puVar6);
          __dest[(uint)*(byte *)puVar6] = 0;
          puVar6 = (undefined4 *)
                   ((int)puVar6 + (uint)*(byte *)puVar6 + ((uint)*(byte *)puVar6 & 1) + 8);
          if (1 < CD_debug) {
            printf(s___08x__04x__04x__s_800572b4,(&DAT_80144e84)[iVar5 * 0xb],
                   (&DAT_80144e7c)[iVar5 * 0xb],(&DAT_80144e80)[iVar5 * 0xb],__dest);
          }
          if (0x7f < iVar4) goto LAB_800f95ec;
          iVar5 = iVar4;
        } while (puVar6 < &StEmu_Addr);
        if (iVar4 < 0x80) {
          (&DAT_80144e80)[iVar4 * 0xb] = 0;
        }
LAB_800f95ec:
        DAT_80136c68 = 0;
        uVar3 = 1;
        if (1 < CD_debug) {
          printf(s_CD_newmedia___d_dir_entries_foun_800572c8,iVar4);
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
        if (0 < CD_debug) {
          printf(s_CD_newmedia__Read_error__PT__08x_80057270,iVar5);
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
      if (0 < CD_debug) {
        printf(s_CD_newmedia__Disc_format_error_i_80057240);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
    if (0 < CD_debug) {
      printf(s_CD_newmedia__Read_error_in_cd_re_8005720c);
      uVar3 = 0;
    }
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// int FUN_800f9644(int param_1,char *param_2);
 // line 0, offset 0x800f9644
int FUN_800f9644(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s2;
  
  iVar2 = 0;
  __s2 = &DAT_80144e88;
  iVar3 = 0;
  while( true ) {
    if (*(int *)((int)&DAT_80144e80 + iVar3) == 0) {
      return -1;
    }
    if ((*(int *)((int)&DAT_80144e80 + iVar3) == param_1) &&
       (iVar1 = strcmp(param_2,__s2), iVar1 == 0)) break;
    __s2 = __s2 + 0x2c;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x2c;
    if (0x7f < iVar2) {
      return -1;
    }
  }
  return iVar2 + 1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800f96e8(int param_1);
 // line 0, offset 0x800f96e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800f96e8(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined2 *__dest;
  char *pcVar5;
  
  if (param_1 != DAT_80136c68) {
    pbVar2 = &DAT_8014647c;
    uVar1 = FUN_800f9984(1,*(int *)(&DAT_80144e58 + param_1 * 0x2c),&DAT_8014647c);
    if (uVar1 != 1) {
      if (CD_debug < 1) {
        return 0xffffffff;
      }
      printf(s_CD_cachefile__dir_not_found_800572ec);
      return 0xffffffff;
    }
    if (1 < CD_debug) {
      printf(s_CD_cachefile__searching____8005730c);
    }
    iVar4 = 0;
    pcVar5 = &DAT_8014487c;
    __dest = &DAT_80144884;
    iVar3 = 0;
    while (*pbVar2 != 0) {
      CdIntToPos(*(int *)(pbVar2 + 2),pcVar5);
      *(undefined4 *)((int)&DAT_80144880 + iVar3) = *(undefined4 *)(pbVar2 + 10);
      if (iVar4 == 0) {
        DAT_80144884 = DAT_80057328;
      }
      else {
        if (iVar4 == 1) {
          _DAT_8014489c = DAT_8005732c;
          DAT_8014489e = DAT_8005732e;
        }
        else {
          memcpy(__dest,pbVar2 + 0x21,(uint)pbVar2[0x20]);
          *(undefined *)((int)__dest + (uint)pbVar2[0x20]) = 0;
        }
      }
      if (1 < CD_debug) {
        printf(s____02x__02x__02x___8d__s_80057330,(uint)(byte)(&DAT_8014487c)[iVar3],
               (uint)(byte)(&DAT_8014487d)[iVar3],(uint)(byte)(&DAT_8014487e)[iVar3],
               *(undefined4 *)((int)&DAT_80144880 + iVar3),__dest);
      }
      __dest = __dest + 0xc;
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
      pbVar2 = pbVar2 + (uint)*pbVar2;
      pcVar5 = pcVar5 + 0x18;
      if ((0x3f < iVar4) || ((byte *)0x80146c7b < pbVar2)) break;
    }
    DAT_80136c68 = param_1;
    if (iVar4 < 0x40) {
      DAT_80136c68 = param_1;
      *(undefined *)(&DAT_80144884 + iVar4 * 0xc) = 0;
    }
    if (CD_debug < 2) {
      return 1;
    }
    printf(s_CD_cachefile___d_files_found_8005734c,iVar4);
  }
  return 1;
}




// decompiled code
// original method signature: 
// uint FUN_800f9984(undefined4 param_1,int param_2,undefined4 param_3);
 // line 0, offset 0x800f9984
uint FUN_800f9984(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char acStack24 [8];
  
  CdIntToPos(param_2,acStack24);
  CdControl(2,acStack24,(undefined *)0x0);
  CdRead(param_1,param_3,0x80);
  iVar1 = CdReadSync(0,(undefined *)0x0);
  return (uint)(iVar1 == 0);
}




// decompiled code
// original method signature: 
// void StSetRing(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800f99f8
void StSetRing(undefined4 param_1,undefined4 param_2)

{
  StRingAddr = param_1;
  StRingSize = param_2;
  StClearRing();
  return;
}




// decompiled code
// original method signature: 
// undefined4 CD_systaskfunc(void);
 // line 0, offset 0x800f9ae8
undefined4 CD_systaskfunc(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined auStack40 [8];
  char acStack32 [8];
  undefined local_18 [8];
  
  bVar2 = false;
  iVar3 = CdDiskReady(1);
  if (iVar3 == 5) {
    bVar1 = DAT_80146cdc == 0;
    DAT_80146cdc = DAT_80146cdc + -1;
    if (bVar1) {
      DAT_80146cdc = (int)timerhz * 5;
    }
    else {
      if (DAT_80146cdc == 0) {
        bVar2 = true;
      }
    }
  }
  else {
    if ((iVar3 < 6) && (iVar3 == 2)) {
      uVar4 = CdGetDiskType();
      bVar2 = uVar4 - 1 < 2;
    }
  }
  if (bVar2) {
    delsystemtask((int)CD_systaskfunc);
    CdReset(0);
    local_18[0] = 0xa0;
    CdControlB(0xe,local_18,auStack40);
    VSync(3);
    CdFlush();
    CdSync(0,(undefined *)0x0);
    CdIntToPos(DAT_80146cd0,acStack32);
    CdControl(0x1b,acStack32,auStack40);
    CdReadyCallback(CdReadyHandler);
    if (0 < DAT_80146ce8) {
      DAT_80146ce0 = 0;
      DAT_80146cdc = (int)timerhz * 6;
      addtimer((int)CD_timerfunc);
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void CD_timerfunc(void);
 // line 0, offset 0x800f9c44
void CD_timerfunc(void)

{
  int iVar1;
  
  iVar1 = DAT_80146cdc + -1;
  if ((DAT_80146cdc != 0) && (DAT_80146cdc = iVar1, iVar1 == 0)) {
    DAT_80146cdc = iVar1;
    addsystemtask((int)CD_systaskfunc,0,0);
    DAT_80146cdc = 0;
    deltimer((int)CD_timerfunc);
  }
  return;
}




// decompiled code
// original method signature: 
// void CdReadyHandler(byte param_1,byte *param_2);
 // line 0, offset 0x800f9ca4
void CdReadyHandler(byte param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 *puVar5;
  byte abStack336 [12];
  undefined auStack324 [284];
  char acStack40 [8];
  undefined4 local_20 [2];
  
  CdReadyCallback(0);
  bVar1 = false;
  if ((*param_2 & 0x10) != 0) {
    deltimer((int)CD_timerfunc);
    addsystemtask((int)CD_systaskfunc,0,0);
    return;
  }
  if (param_1 == 2) {
    if (DAT_80146ce0 == -1) {
      DAT_80146ce0 = 0;
code_r0x800fa020:
      Cdinfo = Cdinfo | 2;
    }
LAB_800fa030:
    DAT_80146cd0 = DAT_80146cd0 + 1;
    if (((Cdinfo & 2) != 0) && (Cdinfo = Cdinfo & 0xffffffed | 1, DAT_80146cd0 != DAT_80146cd8)) {
      CdFlush();
      CdSync(0,(undefined *)0x0);
      DAT_80146cd0 = DAT_80146cd8;
      CdIntToPos(DAT_80146cd8,acStack40);
      CdControl(0x1b,acStack40,param_2);
    }
    if (((Cdinfo & 1) != 0) || (DAT_80146cd0 - DAT_80146cd4 < 0x15)) goto LAB_800fa12c;
    DAT_80146cd0 = DAT_80146cd4;
    pcVar4 = acStack40;
    CdIntToPos(DAT_80146cd4,pcVar4);
    bVar3 = 0x1b;
  }
  else {
    if (param_1 < 3) {
      if (param_1 != 1) goto LAB_800fa030;
      if ((Cdinfo & 1) == 0) {
LAB_800f9f34:
        CdFlush();
        CdSync(0,(undefined *)0x0);
      }
      else {
        if ((Cdinfo & 4) != 0) {
          bVar1 = true;
          Cdinfo = Cdinfo & 0xfffffffb;
          goto LAB_800f9f34;
        }
        puVar5 = (undefined4 *)&DAT_80146d00;
        if ((Cdinfo & 8) == 0) {
          puVar5 = DAT_80146cf0;
        }
        CdGetSector(abStack336,3);
        CdGetSector(puVar5,0x200);
        CdGetSector(auStack324,0x46);
        CdDataSync(0);
        iVar2 = CdPosToInt(abStack336);
        if (iVar2 == DAT_80146cd0) {
          DAT_80146cdc = (int)timerhz * 6;
          if ((Cdinfo & 8) != 0) {
            Cdinfo = Cdinfo & 0xfffffff7 | 0x10;
            blockmove((undefined4 *)(&DAT_80146d00 + DAT_80146cec),DAT_80146cf0,DAT_80146ce4);
            DAT_80146cec = 0;
          }
          if (DAT_80146ce8 < 1) {
            bVar1 = true;
          }
          else {
            DAT_80146cf0 = (undefined4 *)((int)DAT_80146cf0 + DAT_80146ce4);
            if (DAT_80146ce8 < 0x800) {
              DAT_80146ce4 = DAT_80146ce8;
              Cdinfo = Cdinfo | 8;
            }
            else {
              DAT_80146ce4 = 0x800;
            }
            DAT_80146ce8 = DAT_80146ce8 - DAT_80146ce4;
          }
        }
        else {
          DAT_80146ce0 = DAT_80146ce0 + 1;
          DAT_80146cd8 = DAT_80146cd0;
          if (3 < DAT_80146ce0) {
            DAT_80146ce0 = -1;
            bVar3 = 9;
            pcVar4 = (char *)0x0;
            param_2 = (byte *)0x0;
            goto LAB_800fa124;
          }
          Cdinfo = Cdinfo | 2;
        }
      }
      if (bVar1) {
        Cdinfo = Cdinfo & 0xfffffffe;
        DAT_80146cdc = 0;
        DAT_80146cd4 = DAT_80146cd0;
        deltimer((int)CD_timerfunc);
        if (DAT_80146cf4 != (code *)0x0) {
          g_currentthread = (uchar *)0x2;
          savegp(local_20);
          (*DAT_80146cf4)(1);
          restoregp();
          g_currentthread = (uchar *)0x0;
        }
      }
      goto LAB_800fa030;
    }
    if ((param_1 != 5) || ((Cdinfo & 1) == 0)) goto LAB_800fa030;
    CdControl(1,(undefined *)0x0,abStack336);
    DAT_80146ce0 = DAT_80146ce0 + 1;
    DAT_80146cd8 = DAT_80146cd0;
    if (DAT_80146ce0 < 4) goto code_r0x800fa020;
    DAT_80146ce0 = -1;
    bVar3 = 9;
    pcVar4 = (char *)0x0;
    param_2 = (byte *)0x0;
  }
LAB_800fa124:
  CdControl(bVar3,pcVar4,param_2);
LAB_800fa12c:
  CdReadyCallback(CdReadyHandler);
  return;
}




// decompiled code
// original method signature: 
// undefined * readsectorB(void);
 // line 0, offset 0x800fa154
/* WARNING: Removing unreachable block (ram,0x800fa19c) */

undefined * readsectorB(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}




// decompiled code
// original method signature: 
// void loaddirinfo(int param_1,int param_2,int param_3);
 // line 0, offset 0x800fa1a8
void loaddirinfo(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  uVar1 = DAT_80146cd8;
  DAT_80146cd8 = param_1;
  pbVar2 = readsectorB();
  param_2 = param_2 + -1;
  pbVar2 = pbVar2 + (uint)*pbVar2;
  do {
    pbVar2 = pbVar2 + (uint)*pbVar2;
    if (param_3 <= DAT_80146ccc) {
      DAT_80146cd8 = uVar1;
      return;
    }
    if (*pbVar2 == 0) {
      if (param_2 == 0) {
        DAT_80146cd8 = uVar1;
        return;
      }
      DAT_80146cd8 = DAT_80146cd8 + 1;
      pbVar2 = readsectorB();
      param_2 = param_2 + -1;
    }
    if ((pbVar2[0x19] & 2) == 0) {
      memcpy((void *)(DAT_80146ccc * 0x14 + DAT_80146cfc),pbVar2 + 0x21,(uint)pbVar2[0x20] - 2);
      *(undefined *)((uint)pbVar2[0x20] + DAT_80146ccc * 0x14 + DAT_80146cfc + -2) = 0;
      *(undefined4 *)(DAT_80146ccc * 0x14 + DAT_80146cfc + 0xc) = *(undefined4 *)(pbVar2 + 2);
      *(undefined4 *)(DAT_80146ccc * 0x14 + DAT_80146cfc + 0x10) = *(undefined4 *)(pbVar2 + 10);
      DAT_80146ccc = DAT_80146ccc + 1;
    }
    else {
      loaddirinfo(*(int *)(pbVar2 + 2),*(uint *)(pbVar2 + 10) >> 0xb,param_3);
      readsectorB();
    }
  } while( true );
}




// decompiled code
// original method signature: 
// void dircompare(char *param_1,char *param_2);
 // line 0, offset 0x800fa344
void dircompare(char *param_1,char *param_2)

{
  strncmp(param_1,param_2,0xc);
  return;
}




// decompiled code
// original method signature: 
// void CD_Restore(void);
 // line 0, offset 0x800fa364
void CD_Restore(void)

{
  CdReset(0);
  blockclear((undefined *)&Cdinfo,0x83c);
  return;
}




// decompiled code
// original method signature: 
// size_t CD_Init(int param_1,int param_2,undefined *param_3,undefined4 param_4);
 // line 0, offset 0x800fa394
size_t CD_Init(int param_1,int param_2,undefined *param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  byte abStack32 [8];
  
  if (DAT_80146ccc == 0) {
    iVar1 = CdInit();
    if (iVar1 == 0) {
      return 0;
    }
    CdSetDebug(0);
    iVar1 = CdGetToc(abStack32);
    if (iVar1 != 0) {
      DAT_80146cfc = param_3 + param_1 * 4;
      DAT_80146cc8 = param_1;
      DAT_80146cf8 = param_3;
      blockclear(param_3,param_1 * 4 + param_2 * 0x14);
      CD_Restart(0x10);
      puVar2 = readsectorB();
      loaddirinfo(*(int *)(puVar2 + 0x9e),*(uint *)(puVar2 + 0xa6) >> 0xb,param_2);
      qsort(DAT_80146cfc,DAT_80146ccc,0x14,dircompare);
      DAT_80146cf4 = param_4;
      addexit((int)CD_Restore);
      return DAT_80146ccc;
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void CD_Restart(int param_1);
 // line 0, offset 0x800fa4a8
void CD_Restart(int param_1)

{
  uint uVar1;
  char acStack32 [8];
  undefined local_18 [8];
  
  local_18[0] = 0xa0;
  do {
    uVar1 = CdControlB(0xe,local_18,(undefined *)0x0);
  } while (uVar1 == 0);
  VSync(3);
  CdFlush();
  CdSync(0,(undefined *)0x0);
  if (param_1 == 0) {
    param_1 = 0x10;
  }
  DAT_80146cd0 = param_1;
  DAT_80146cd8 = param_1;
  CdReadyCallback(CdReadyHandler);
  CdIntToPos(DAT_80146cd8,acStack32);
  CdControl(0x1b,acStack32,(undefined *)0x0);
  return;
}




// decompiled code
// original method signature: 
// uint CD_Open(byte *param_1,undefined4 param_2,int *param_3);
 // line 0, offset 0x800fa554
uint CD_Open(byte *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  undefined local_28 [16];
  
  puVar7 = local_28;
  iVar6 = 0;
  piVar5 = DAT_80146cf8;
  if (0 < DAT_80146cc8) {
    do {
      if (*piVar5 == 0) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < DAT_80146cc8);
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = toupper((uint)bVar1);
    *puVar7 = (char)uVar2;
    puVar7 = puVar7 + 1;
  } while ((uVar2 & 0xff) != 0);
  pvVar3 = bsearch(local_28,DAT_80146cfc,DAT_80146ccc,0x14,dircompare);
  *(void **)(DAT_80146cf8 + iVar6) = pvVar3;
  iVar4 = DAT_80146cf8[iVar6];
  if (iVar4 == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = iVar6 + 1;
  }
  return (uint)(iVar4 != 0);
}




// decompiled code
// original method signature: 
// undefined4 CD_Close(int param_1);
 // line 0, offset 0x800fa65c
undefined4 CD_Close(int param_1)

{
  *(undefined4 *)(param_1 * 4 + DAT_80146cf8 + -4) = 0;
  return 0;
}




// decompiled code
// original method signature: 
// int CD_Read(int param_1,undefined4 *param_2,int param_3,int param_4);
 // line 0, offset 0x800fa678
int CD_Read(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20 [2];
  
  piVar2 = (int *)(DAT_80146cf8 + param_1 * 4 + -4);
  if ((Cdinfo & 3) == 0) {
    iVar1 = *(int *)(*piVar2 + 0x10) - param_3;
    if (iVar1 < param_4) {
      param_4 = iVar1;
    }
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 0x7ff;
    }
    DAT_80146cec = param_3 + (iVar1 >> 0xb) * -0x800;
    if ((DAT_80146cec != 0) || (param_4 < 0x800)) {
      Cdinfo = Cdinfo | 8;
    }
    DAT_80146ce4 = param_4;
    if (0x800 < DAT_80146cec + param_4) {
      DAT_80146ce4 = 0x800 - DAT_80146cec;
    }
    DAT_80146ce8 = param_4 - DAT_80146ce4;
    if (param_3 < 0) {
      param_3 = param_3 + 0x7ff;
    }
    DAT_80146ce0 = 0;
    DAT_80146cd8 = *(int *)(*piVar2 + 0xc) + (param_3 >> 0xb);
    Cdinfo = Cdinfo | 2;
    DAT_80146cdc = (int)timerhz * 6;
    DAT_80146cf0 = param_2;
    addtimer((int)CD_timerfunc);
    if (((DAT_80146cd0 == DAT_80146cd8) && ((Cdinfo & 0x10) != 0)) &&
       (g_currentthread == (uchar *)0x2)) {
      blockmove((undefined4 *)(&DAT_80146d00 + DAT_80146cec),DAT_80146cf0,DAT_80146ce4);
      if (DAT_80146ce8 < 1) {
        DAT_80146cdc = 0;
        Cdinfo = Cdinfo & 0xfffffffd;
        deltimer((int)CD_timerfunc);
        if (DAT_80146cf4 != (code *)0x0) {
          savegp(local_20);
          (*DAT_80146cf4)(1);
          restoregp();
        }
      }
      else {
        DAT_80146cec = 0;
        DAT_80146cf0 = (undefined4 *)((int)DAT_80146cf0 + DAT_80146ce4);
        if (DAT_80146ce8 < 0x800) {
          DAT_80146ce4 = DAT_80146ce8;
          Cdinfo = Cdinfo | 8;
        }
        else {
          DAT_80146ce4 = 0x800;
          Cdinfo = Cdinfo & 0xfffffff7;
        }
        DAT_80146ce8 = DAT_80146ce8 - DAT_80146ce4;
        DAT_80146cd8 = DAT_80146cd8 + 1;
      }
    }
  }
  else {
    param_4 = 0;
  }
  return param_4;
}




// decompiled code
// original method signature: 
// void CD_Stopread(void);
 // line 0, offset 0x800fa904
void CD_Stopread(void)

{
  Cdinfo = Cdinfo | 4;
  return;
}




// decompiled code
// original method signature: 
// undefined4 CD_Getinfo(int param_1,char *param_2,undefined4 *param_3);
 // line 0, offset 0x800fa920
undefined4 CD_Getinfo(int param_1,char *param_2,undefined4 *param_3)

{
  char **ppcVar1;
  
  ppcVar1 = (char **)(DAT_80146cf8 + param_1 * 4 + -4);
  if (param_2 != (char *)0x0) {
    strncpy(param_2,*ppcVar1,0xc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*ppcVar1 + 0x10);
  }
  return *(undefined4 *)(*ppcVar1 + 0x10);
}




// decompiled code
// original method signature: 
// void MemCardInit(void);
 // line 0, offset 0x800faaac
void MemCardInit(void)

{
  DAT_80147514 = 0;
  DAT_80147558 = 0;
  _card_open();
  return;
}




// decompiled code
// original method signature: 
// void MemCardEnd(void);
 // line 0, offset 0x800faad8
void MemCardEnd(void)

{
  _card_close();
  return;
}




// decompiled code
// original method signature: 
// void MemCardStart(void);
 // line 0, offset 0x800faaf8
void MemCardStart(void)

{
  UserFuncInit();
  DAT_80147518 = 0;
  DAT_8014751c = 0;
  DAT_80147520 = 0;
  DAT_80147528 = 0xffffffff;
  _card_start();
  VSyncCallbacks();
  return;
}




// decompiled code
// original method signature: 
// void MemCardStop(void);
 // line 0, offset 0x800fab48
void MemCardStop(void)

{
  do {
  } while (DAT_80147518 != 0);
  VSyncCallbacks();
  _card_stop();
  return;
}




// decompiled code
// original method signature: 
// uint MemCardExist(undefined4 param_1);
 // line 0, offset 0x800fab88
uint MemCardExist(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = 0 < DAT_80147518;
  if (bVar1) {
    printf(s_Access_Denied____event_multiple_o_80057370);
  }
  else {
    DAT_80147518 = 1;
    DAT_8014751c = 0;
    DAT_80147520 = 0;
    DAT_80147524 = param_1;
    UserFuncOpen(FUN_800fabf0);
  }
  return (uint)!bVar1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800fabf0(int *param_1);
 // line 0, offset 0x800fabf0
undefined4 FUN_800fabf0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    DAT_80147504 = 0;
    DAT_80147500 = 0;
    *param_1 = 10;
  }
  else {
    if (iVar1 < 0) {
      return 0;
    }
    if (iVar1 != 10) {
      if (iVar1 != 0xb) {
        return 0;
      }
      iVar1 = _chk_card_event();
      if (iVar1 != 0) {
        DAT_80147504 = _get_card_event();
        if ((int)DAT_80147504 < 3) {
          if ((int)DAT_80147504 < 1) {
            if (DAT_80147504 == 0) {
              if ((DAT_80147514 & 1 << (DAT_80147524 & 0x1f)) == 0) {
                DAT_80147504 = 4;
              }
              DAT_8014751c = FUN_800fc11c(DAT_80147504);
              return 1;
            }
          }
          else {
            DAT_80147500 = DAT_80147500 + 1;
            if (DAT_80147500 < 5) {
              *param_1 = 10;
              return 0;
            }
          }
        }
        else {
          if (DAT_80147504 == 4) {
            DAT_8014751c = FUN_800fc11c(4);
            return 1;
          }
        }
        DAT_80147514 = DAT_80147514 & ~(1 << (DAT_80147524 & 0x1f));
        DAT_8014751c = FUN_800fc11c(DAT_80147504);
        return 1;
      }
      return 0;
    }
  }
  _clr_card_event();
  _card_info();
  *param_1 = *param_1 + 1;
  return 0;
}




// decompiled code
// original method signature: 
// uint MemCardAccept(undefined4 param_1);
 // line 0, offset 0x800fadc4
uint MemCardAccept(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = 0 < DAT_80147518;
  if (bVar1) {
    printf(s_Access_Denied____event_multiple_o_80057370);
  }
  else {
    DAT_80147518 = 2;
    DAT_8014751c = 0;
    DAT_80147520 = 0;
    DAT_80147524 = param_1;
    UserFuncOpen(FUN_800fae2c);
  }
  return (uint)!bVar1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800fae2c(int *param_1);
 // line 0, offset 0x800fae2c
undefined4 FUN_800fae2c(int *param_1)

{
  int iVar1;
  
  switch(*param_1) {
  case 0:
    DAT_80147510 = 0;
    DAT_8014750c = 0;
    DAT_80147508 = 0;
    UserFuncOpen(FUN_800fabf0);
    *param_1 = 10;
    return 0;
  default:
    goto switchD_800fae64_caseD_1;
  case 10:
    if (DAT_8014751c != 0) {
      if (DAT_8014751c == 3) {
        DAT_80147510 = 1;
        DAT_80147514 = DAT_80147514 | 1 << (DAT_80147524 & 0x1f);
        _clr_card_event();
        _card_clear();
        *param_1 = 0x15;
        return 0;
      }
      return 1;
    }
    break;
  case 0x15:
    iVar1 = _chk_card_event_x();
    if (iVar1 == 0) {
      return 0;
    }
    _get_card_event_x();
    *param_1 = 0x1e;
  case 0x1e:
    _clr_card_event();
    _card_load();
    *param_1 = *param_1 + 1;
    return 0;
  case 0x1f:
    iVar1 = _chk_card_event();
    if (iVar1 == 0) {
      return 0;
    }
    DAT_8014750c = _get_card_event();
    if ((int)DAT_8014750c < 3) {
      if ((int)DAT_8014750c < 1) {
        if (DAT_8014750c == 0) {
          DAT_8014751c = 0;
          if (DAT_80147510 != 0) {
            DAT_8014751c = 3;
          }
          return 1;
        }
        goto LAB_800fb004;
      }
    }
    else {
      if (DAT_8014750c != 4) goto LAB_800fb004;
    }
    DAT_80147508 = DAT_80147508 + 1;
    if (4 < DAT_80147508) {
LAB_800fb004:
      if (DAT_8014750c != 4) {
        DAT_8014751c = FUN_800fc11c(DAT_8014750c);
        return 1;
      }
      DAT_8014751c = DAT_8014750c;
      return 1;
    }
  }
  *param_1 = 0x1e;
switchD_800fae64_caseD_1:
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 MemCardReadData(undefined4 param_1,uint param_2,uint param_3);
 // line 0, offset 0x800fb060
undefined4 MemCardReadData(undefined4 param_1,uint param_2,uint param_3)

{
  char *__format;
  
  if (DAT_80147528 < 0) {
    __format = s_Access_Denied____file_not_open__80057440;
  }
  else {
    if (DAT_80147518 < 1) {
      if ((param_3 & 0x7f) == 0) {
        if ((param_2 & 0x7f) == 0) {
          DAT_80147518 = 5;
          DAT_8014751c = 0;
          DAT_80147520 = 0;
          DAT_8014752c = param_2;
          DAT_80147530 = param_3;
          DAT_80147534 = param_1;
          UserFuncOpen(FUN_800fb118);
          return 1;
        }
        __format = s_Access_Denied____invalid_offset_v_80057490;
      }
      else {
        __format = s_Access_Denied____invalid_data_si_80057464;
      }
    }
    else {
      __format = s_Access_Denied____event_multiple_o_80057370;
    }
  }
  printf(__format);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800fb118(int *param_1);
 // line 0, offset 0x800fb118
undefined4 FUN_800fb118(int *param_1)

{
  __off_t _Var1;
  ssize_t sVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 10) {
    if (10 < iVar4) {
      if (iVar4 != 0x1e) {
        return 0;
      }
      iVar4 = _chk_card_event();
      if (iVar4 != 0) {
        uVar3 = _get_card_event();
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          DAT_80136cb8 = DAT_80136cb8 + 1;
          if (DAT_80136cb8 < 4) {
            *param_1 = 10;
            return 0;
          }
        }
        DAT_8014751c = FUN_800fc11c(uVar3);
        return 1;
      }
      return 0;
    }
    if (iVar4 != 0) {
      return 0;
    }
    DAT_80136cb8 = 0;
    *param_1 = 10;
  }
  do {
    _Var1 = lseek(DAT_80147528,DAT_8014752c,0);
  } while (_Var1 != DAT_8014752c);
  _clr_card_event();
  do {
    sVar2 = read(DAT_80147528,DAT_80147534,DAT_80147530);
  } while (sVar2 != 0);
  *param_1 = 0x1e;
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 MemCardWriteData(undefined4 param_1,uint param_2,uint param_3);
 // line 0, offset 0x800fb254
undefined4 MemCardWriteData(undefined4 param_1,uint param_2,uint param_3)

{
  char *__format;
  
  if (DAT_80147528 < 0) {
    __format = s_Access_Denied____file_not_open__80057440;
  }
  else {
    if (DAT_80147518 < 1) {
      if ((param_3 & 0x7f) == 0) {
        if ((param_2 & 0x7f) == 0) {
          DAT_80147518 = 6;
          DAT_8014751c = 0;
          DAT_80147520 = 0;
          DAT_8014752c = param_2;
          DAT_80147530 = param_3;
          DAT_80147534 = param_1;
          UserFuncOpen(FUN_800fb30c);
          return 1;
        }
        __format = s_Access_Denied____invalid_offset_v_80057490;
      }
      else {
        __format = s_Access_Denied____invalid_data_si_80057464;
      }
    }
    else {
      __format = s_Access_Denied____event_multiple_o_80057370;
    }
  }
  printf(__format);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800fb30c(int *param_1);
 // line 0, offset 0x800fb30c
undefined4 FUN_800fb30c(int *param_1)

{
  uint uVar1;
  __off_t _Var2;
  ssize_t sVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 == 10) {
    do {
      _Var2 = lseek(DAT_80147528,DAT_8014752c,0);
    } while (_Var2 != DAT_8014752c);
    _clr_card_event();
    do {
      sVar3 = write(DAT_80147528,DAT_80147534,DAT_80147530);
    } while (sVar3 != 0);
    *param_1 = 0x1e;
  }
  else {
    if (10 < iVar4) {
      if (iVar4 != 0x1e) {
        return 0;
      }
      iVar4 = _chk_card_event();
      if (iVar4 != 0) {
        uVar1 = _get_card_event();
        if (uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          DAT_80136cbc = DAT_80136cbc + 1;
          if (DAT_80136cbc < 4) {
            *param_1 = 10;
            return 0;
          }
        }
        DAT_8014751c = FUN_800fc11c(uVar1);
        return 1;
      }
      return 0;
    }
    if (iVar4 != 0) {
      return 0;
    }
    DAT_80136cbc = 0;
    *param_1 = 10;
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 MemCardReadFile(int param_1,char *param_2,undefined4 param_3,uint param_4,uint param_5);
 // line 0, offset 0x800fb448
undefined4 MemCardReadFile(int param_1,char *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  char *__format;
  
  if (DAT_80147518 < 1) {
    if (DAT_80147528 < 0) {
      if ((param_5 & 0x7f) == 0) {
        if ((param_4 & 0x7f) == 0) {
          FUN_800fc1f4(param_1,(undefined4 *)&DAT_80147538);
          strcat(&DAT_80147538,param_2);
          DAT_80147518 = 3;
          DAT_8014751c = 0;
          DAT_80147520 = 0;
          DAT_80147530 = param_5;
          DAT_80147524 = param_1;
          DAT_8014752c = param_4;
          DAT_80147534 = param_3;
          UserFuncOpen(FUN_800fb560);
          return 1;
        }
        __format = s_Access_Denied____invalid_offset_v_80057490;
      }
      else {
        __format = s_Access_Denied____invalid_data_si_80057464;
      }
    }
    else {
      __format = s_Access_Denied____file_already_op_80057418;
    }
  }
  else {
    __format = s_Access_Denied____system_busy_800574c0;
  }
  printf(__format);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800fb560(int *param_1);
 // line 0, offset 0x800fb560
undefined4 FUN_800fb560(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 10) {
    if (DAT_8014751c != 0) {
      return 1;
    }
    DAT_80147528 = open(&DAT_80147538,(int)&DAT_00008001);
    if (DAT_80147528 < 0) {
      DAT_8014751c = 5;
      return 1;
    }
  }
  else {
    if (iVar1 < 0xb) {
      if (iVar1 != 0) {
        return 0;
      }
      DAT_80136cc0 = 0;
      UserFuncOpen(FUN_800fabf0);
      *param_1 = 10;
      return 0;
    }
    if (iVar1 != 0xb) {
      if (iVar1 != 0x14) {
        return 0;
      }
      close(DAT_80147528);
      DAT_80147528 = 0xffffffff;
      return 1;
    }
  }
  *param_1 = 0x14;
  UserFuncOpen(FUN_800fb118);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 MemCardWriteFile(int param_1,char *param_2,undefined4 param_3,uint param_4,uint param_5);
 // line 0, offset 0x800fb668
undefined4 MemCardWriteFile(int param_1,char *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  char *__format;
  
  if (DAT_80147518 < 1) {
    if (DAT_80147528 < 0) {
      if ((param_5 & 0x7f) == 0) {
        if ((param_4 & 0x7f) == 0) {
          FUN_800fc1f4(param_1,(undefined4 *)&DAT_80147538);
          strcat(&DAT_80147538,param_2);
          DAT_80147518 = 4;
          DAT_8014751c = 0;
          DAT_80147520 = 0;
          DAT_80147530 = param_5;
          DAT_80147524 = param_1;
          DAT_8014752c = param_4;
          DAT_80147534 = param_3;
          UserFuncOpen(FUN_800fb780);
          return 1;
        }
        __format = s_Access_Denied____invalid_offset_v_80057490;
      }
      else {
        __format = s_Access_Denied____invalid_data_si_80057464;
      }
    }
    else {
      __format = s_Access_Denied____file_already_op_80057418;
    }
  }
  else {
    __format = s_Access_Denied____system_busy_800574c0;
  }
  printf(__format);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 FUN_800fb780(int *param_1);
 // line 0, offset 0x800fb780
undefined4 FUN_800fb780(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 10) {
    if (DAT_8014751c != 0) {
      return 1;
    }
    DAT_80147528 = open(&DAT_80147538,(int)&DAT_00008001);
    if (DAT_80147528 < 0) {
      DAT_8014751c = 5;
      return 1;
    }
  }
  else {
    if (iVar1 < 0xb) {
      if (iVar1 != 0) {
        return 0;
      }
      DAT_80136cc4 = 0;
      UserFuncOpen(FUN_800fabf0);
      *param_1 = 10;
      return 0;
    }
    if (iVar1 != 0xb) {
      if (iVar1 != 0x14) {
        return 0;
      }
      close(DAT_80147528);
      DAT_80147528 = 0xffffffff;
      return 1;
    }
  }
  *param_1 = 0x14;
  UserFuncOpen(FUN_800fb30c);
  return 0;
}




// decompiled code
// original method signature: 
// uint MemCardGetDirentry(uint param_1,char *param_2,int param_3,int *param_4,int param_5,int param_6);
 // line 0, offset 0x800fb888
uint MemCardGetDirentry(uint param_1,char *param_2,int param_3,int *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 auStack128 [8];
  undefined4 local_60 [8];
  undefined4 auStack64 [2];
  uint local_38;
  int *local_34;
  undefined4 *local_30;
  
  if (DAT_80147518 == 0) {
    local_34 = param_4;
    FUN_800fc1f4(param_1,auStack128);
    strcat((char *)auStack128,param_2);
    iVar11 = 0;
    iVar10 = 0;
    local_38 = 0;
    DAT_80147514 = DAT_80147514 | 1 << (DAT_80147524 & 0x1f);
    iVar13 = 0;
    if (0 < param_5 + param_6) {
      local_30 = auStack64;
      iVar12 = 0;
      do {
        if (iVar10 == 0) {
          while( true ) {
            _clr_card_event();
            iVar3 = firstfile(auStack128,local_60);
            if (iVar3 != 0) break;
            uVar2 = _get_card_event_x();
            local_38 = FUN_800fc11c(uVar2);
            if (local_38 == 0) goto LAB_800fba24;
            iVar11 = iVar11 + 1;
            if (3 < iVar11) {
              DAT_8014756c = MemCardCallback(0);
              if (DAT_80147518 < 1) {
                DAT_80147518 = 2;
                DAT_8014751c = 0;
                DAT_80147520 = 0;
                DAT_80147524 = param_1;
                UserFuncOpen(FUN_800fae2c);
              }
              else {
                printf(s_Access_Denied____event_multiple_o_80057370);
              }
              MemCardSync(0,(int *)0x0,&local_38);
              MemCardCallback(DAT_8014756c);
              return local_38;
            }
          }
        }
        else {
          iVar3 = nextfile();
LAB_800fba24:
          if (iVar3 == 0) break;
        }
        if ((param_5 <= iVar10) && (param_3 != 0)) {
          puVar8 = local_60;
          puVar1 = (undefined4 *)(iVar12 + param_3);
          do {
            puVar9 = puVar1;
            puVar7 = puVar8;
            uVar4 = puVar7[1];
            uVar5 = puVar7[2];
            uVar6 = puVar7[3];
            *puVar9 = *puVar7;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar8 = puVar7 + 4;
            puVar1 = puVar9 + 4;
          } while (puVar8 != local_30);
          uVar4 = puVar7[5];
          puVar9[4] = *puVar8;
          puVar9[5] = uVar4;
          iVar12 = iVar12 + 0x28;
          iVar13 = iVar13 + 1;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_5 + param_6);
    }
    uVar2 = 0;
    if (local_34 != (int *)0x0) {
      *local_34 = iVar13;
    }
  }
  else {
    local_34 = param_4;
    printf(s_Access_Denied____system_busy_800574c0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 MemCardCallback(undefined4 param_1);
 // line 0, offset 0x800fbae8
undefined4 MemCardCallback(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_80147558;
  DAT_80147558 = param_1;
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 MemCardSync(int param_1,int *param_2,undefined4 *param_3);
 // line 0, offset 0x800fbafc
undefined4 MemCardSync(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_80147518;
  if ((DAT_80147518 != 0) || (uVar2 = 0xffffffff, DAT_80147520 != 0)) {
    if (param_1 == 0) {
      if (DAT_80147520 == 0) {
        do {
        } while( true );
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = DAT_80147564;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = DAT_80147560;
      }
      DAT_80147520 = 0;
      uVar2 = 1;
    }
    else {
      if (DAT_80147520 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = DAT_8014751c;
        }
        uVar2 = 0;
        if (param_2 != (int *)0x0) {
          *param_2 = iVar1;
        }
      }
      else {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = DAT_80147564;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = DAT_80147560;
        }
        DAT_80147520 = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// int MemCardCreateFile(uint param_1,char *param_2,int param_3);
 // line 0, offset 0x800fbc18
int MemCardCreateFile(uint param_1,char *param_2,int param_3)

{
  int __fd;
  int iVar1;
  undefined4 auStack64 [8];
  int local_20;
  
  iVar1 = 0;
  if (DAT_80147518 == 0) {
    FUN_800fc1f4(param_1,auStack64);
    strcat((char *)auStack64,param_2);
    DAT_80147514 = DAT_80147514 | 1 << (DAT_80147524 & 0x1f);
    __fd = open((char *)auStack64,1);
    if (__fd < 0) {
      do {
        __fd = open((char *)auStack64,param_3 << 0x10 | 0x200);
        if (-1 < __fd) {
          close(__fd);
          return 0;
        }
        DAT_8014756c = MemCardCallback(0);
        if (DAT_80147518 < 1) {
          DAT_80147518 = 2;
          DAT_8014751c = 0;
          DAT_80147520 = 0;
          DAT_80147524 = param_1;
          UserFuncOpen(FUN_800fae2c);
        }
        else {
          printf(s_Access_Denied____event_multiple_o_80057370);
        }
        if ((DAT_80147518 != 0) || (DAT_80147520 != 0)) {
          if (DAT_80147520 == 0) {
            do {
            } while( true );
          }
          DAT_80147520 = 0;
          local_20 = DAT_80147564;
        }
        MemCardCallback(DAT_8014756c);
        if (local_20 == 0) {
          return 7;
        }
      } while ((local_20 == 3) || ((local_20 == 2 && (iVar1 = iVar1 + 1, iVar1 < 4))));
      if (local_20 == 0) {
        local_20 = 5;
      }
    }
    else {
      close(__fd);
      local_20 = 6;
    }
  }
  else {
    printf(s_Access_Denied____system_busy_800574c0);
    local_20 = -1;
  }
  return local_20;
}




// decompiled code
// original method signature: 
// int MemCardDeleteFile(uint param_1,char *param_2);
 // line 0, offset 0x800fbe20
int MemCardDeleteFile(uint param_1,char *param_2)

{
  int iVar1;
  undefined4 auStack64 [8];
  int local_20;
  
  iVar1 = 0;
  if (DAT_80147518 == 0) {
    FUN_800fc1f4(param_1,auStack64);
    strcat((char *)auStack64,param_2);
    DAT_80147514 = DAT_80147514 | 1 << (DAT_80147524 & 0x1f);
    do {
      local_20 = erase();
      if (local_20 != 0) {
        return 0;
      }
      DAT_8014756c = MemCardCallback(0);
      if (DAT_80147518 < 1) {
        DAT_80147518 = 2;
        DAT_8014751c = 0;
        DAT_80147520 = 0;
        DAT_80147524 = param_1;
        UserFuncOpen(FUN_800fae2c);
      }
      else {
        printf(s_Access_Denied____event_multiple_o_80057370);
      }
      if ((DAT_80147518 != 0) || (DAT_80147520 != 0)) {
        if (DAT_80147520 == 0) {
          do {
          } while( true );
        }
        DAT_80147520 = 0;
        local_20 = DAT_80147564;
      }
      MemCardCallback(DAT_8014756c);
    } while ((local_20 == 3) || ((local_20 == 2 && (iVar1 = iVar1 + 1, iVar1 < 4))));
    if (local_20 == 0) {
      local_20 = 5;
    }
  }
  else {
    printf(s_Access_Denied____system_busy_800574c0);
    local_20 = -1;
  }
  return local_20;
}




// decompiled code
// original method signature: 
// uint MemCardFormat(int param_1);
 // line 0, offset 0x800fbfdc
uint MemCardFormat(int param_1)

{
  uint uVar1;
  undefined4 auStack72 [16];
  
  if (DAT_80147518 == 0) {
    DAT_80147514 = DAT_80147514 | 1 << (DAT_80147524 & 0x1f);
    FUN_800fc1f4(param_1,auStack72);
    _clr_card_event();
    format();
    uVar1 = _get_card_event_x();
    uVar1 = FUN_800fc11c(uVar1);
  }
  else {
    printf(s_Access_Denied____system_busy_800574c0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 MemCardUnformat(void);
 // line 0, offset 0x800fc068
undefined4 MemCardUnformat(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined local_11;
  
  if (DAT_80147518 == 0) {
    iVar4 = 0x7f;
    puVar2 = &local_11;
    do {
      *puVar2 = 0xff;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar4);
    iVar4 = 0;
    do {
      _clr_card_event();
      _new_card();
      _card_write();
      iVar3 = _get_card_event_x();
      iVar4 = iVar4 + 1;
      if (iVar3 != 0) {
        return 0;
      }
      uVar1 = 1;
    } while (iVar4 < 0xf);
  }
  else {
    printf(s_Access_Denied____system_busy_800574c0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint FUN_800fc11c(uint param_1);
 // line 0, offset 0x800fc11c
uint FUN_800fc11c(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 == 1) {
    uVar1 = 2;
  }
  else {
    if ((int)param_1 < 2) {
      if (param_1 != 0) {
        uVar1 = param_1 | 0x8000;
      }
    }
    else {
      uVar1 = 1;
      if ((param_1 != 2) && (uVar1 = param_1 | 0x8000, param_1 == 4)) {
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void FUN_800fc170(void);
 // line 0, offset 0x800fc170
void FUN_800fc170(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = UserFuncComplete();
  if (uVar3 == 0) {
    UserFuncExecute();
    uVar3 = UserFuncComplete();
    uVar2 = DAT_8014751c;
    uVar1 = DAT_80147518;
    if (uVar3 != 0) {
      DAT_80147520 = 1;
      DAT_80147560 = DAT_80147518;
      DAT_80147564 = DAT_8014751c;
      DAT_80147518 = 0;
      DAT_8014751c = 0;
      if (DAT_80147558 != (code *)0x0) {
        (*DAT_80147558)(uVar1,uVar2);
      }
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_800fc1f4(int param_1,undefined4 *param_2);
 // line 0, offset 0x800fc1f4
void FUN_800fc1f4(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  
  uVar3 = DAT_800574e5;
  uVar2 = DAT_800574e4;
  *param_2 = DAT_800574e0;
  *(undefined *)(param_2 + 1) = uVar2;
  *(undefined *)((int)param_2 + 5) = uVar3;
  iVar4 = param_1;
  if (param_1 < 0) {
    iVar4 = param_1 + 0xf;
  }
  cVar1 = (char)(iVar4 >> 4);
  *(char *)((int)param_2 + 2) = cVar1 + '0';
  *(char *)((int)param_2 + 3) = (char)param_1 + cVar1 * -0x10 + '0';
  return;
}




// decompiled code
// original method signature: 
// undefined4 validatehandle(int **param_1,int **param_2,int **param_3);
 // line 0, offset 0x800fc2f8
undefined4 validatehandle(int **param_1,int **param_2,int **param_3)

{
  int *piVar1;
  
  if (param_1 == (int **)0x0) {
    return 1;
  }
  piVar1 = *param_1;
  if (*piVar1 == 0x4d525453) {
    *(int ***)param_3 = param_1;
    *param_2 = piVar1;
    return 0;
  }
  return 1;
}




// decompiled code
// original method signature: 
// uint inbetween(uint param_1,uint param_2,uint param_3);
 // line 0, offset 0x800fc334
uint inbetween(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 <= param_2) {
    uVar1 = 0;
    if (param_1 <= param_3) {
      uVar1 = (uint)(param_3 < param_2);
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((param_1 <= param_3) || (param_3 < param_2)) {
    uVar1 = 1;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void decbufferusage(int param_1,int param_2);
 // line 0, offset 0x800fc374
void decbufferusage(int param_1,int param_2)

{
  int iVar1;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iVar1 = *(int *)(param_1 + 0x3c);
  param_2 = iVar1 - param_2;
  *(int *)(param_1 + 0x3c) = param_2;
  setCopReg(0,Status,Status,0);
  if (((*(int *)(param_1 + 0x34) <= iVar1) && (param_2 < *(int *)(param_1 + 0x34))) &&
     (*(undefined4 *)(param_1 + 0x38) = 1, *(int *)(param_1 + 0x28) == 1)) {
    FILE_priorityop(*(uint *)(param_1 + 0xa4),*(int *)(param_1 + 0x30));
  }
  return;
}




// decompiled code
// original method signature: 
// uint * getfreerequest(int param_1);
 // line 0, offset 0x800fc400
uint * getfreerequest(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  puVar1 = *(uint **)(param_1 + 0x58);
  puVar2 = (uint *)0x0;
  if (puVar1 != (uint *)0x0) {
    uGp00001990 = uGp00001990 + 0x100;
    *(uint *)(param_1 + 0x58) = puVar1[3];
    if (uGp00001990 == 0) {
      uGp00001990 = 0x100;
    }
    *puVar1 = (uint)*(byte *)puVar1 | uGp00001990;
    puVar2 = puVar1;
  }
  setCopReg(0,Status,Status,0);
  return puVar2;
}




// decompiled code
// original method signature: 
// void queuerequest(int param_1,int param_2);
 // line 0, offset 0x800fc478
void queuerequest(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)(param_2 + 0xc) = 0;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x4c) = param_2;
    *(int *)(param_1 + 0x50) = param_2;
  }
  else {
    *(int *)(param_2 + 8) = *(int *)(param_1 + 0x54);
    *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2;
  }
  *(int *)(param_1 + 0x54) = param_2;
  setCopReg(0,Status,Status,0);
  return;
}




// decompiled code
// original method signature: 
// uint * locaterequest(int param_1,uint param_2);
 // line 0, offset 0x800fc4e4
uint * locaterequest(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0xc) <= (int)(param_2 & 0xff)) {
    return (uint *)0x0;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 & 0xff) * 100);
  if ((param_2 == *puVar1) && (puVar1[1] != 0)) {
    return puVar1;
  }
  return (uint *)0x0;
}




// decompiled code
// original method signature: 
// void freerequest(int param_1,int param_2);
 // line 0, offset 0x800fc548
void freerequest(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == *(int *)(param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  if (param_2 == *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
  }
  if (param_2 == *(int *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 8);
    }
    *(int *)(param_1 + 0x50) = iVar1;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = param_2;
  return;
}




// decompiled code
// original method signature: 
// uint filterchunk(int param_1,uint *param_2);
 // line 0, offset 0x800fc5e4
uint filterchunk(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    puVar1 = *(uint **)(param_1 + 0x10);
    do {
      iVar2 = iVar2 + 1;
      if ((*param_2 & *puVar1) == puVar1[1]) {
        return puVar1[2];
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0xfffffffe;
}




// decompiled code
// original method signature: 
// undefined4 parsechunks(int param_1);
 // line 0, offset 0x800fc634
undefined4 parsechunks(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  puVar5 = *(uint **)(param_1 + 0x44);
  iVar7 = *(int *)(param_1 + 0x50);
  iVar2 = uVar3 - (int)puVar5;
  while( true ) {
    if (((iVar2 < 8) || (uVar6 = puVar5[1], (uVar6 & 0xff000000) != 0)) ||
       (uVar3 < (int)puVar5 + uVar6)) {
      return 0;
    }
    uVar3 = filterchunk(param_1,puVar5);
    if ((int)uVar3 < 0) {
      setCopReg(0,Status,Status & 0xfffffbfe,0);
      bVar1 = *(int *)(iVar7 + 4) == 4;
      if (!bVar1) {
        *puVar5 = 0xfffffffe;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar6;
      }
      setCopReg(0,Status,Status,0);
    }
    else {
      puVar5[1] = puVar5[1] | uVar3 << 0x18;
      setCopReg(0,Status,Status & 0xfffffbfe,0);
      bVar1 = *(int *)(iVar7 + 4) == 4;
      if (!bVar1) {
        iVar2 = *(int *)(param_1 + 0x18) + uVar3 * 0x10 + -0x10;
        uVar3 = *(int *)(iVar2 + 8) + uVar6;
        *(uint *)(iVar2 + 8) = uVar3;
        if (uVar3 == uVar6) {
          *(uint **)(iVar2 + 0xc) = puVar5;
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar6;
        iVar2 = *(int *)(param_1 + 0x3c);
        iVar4 = iVar2 + uVar6;
        *(int *)(param_1 + 0x3c) = iVar4;
        if ((iVar2 < *(int *)(param_1 + 0x34)) && (*(int *)(param_1 + 0x34) <= iVar4)) {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
      }
      setCopReg(0,Status,Status,0);
    }
    if (bVar1) break;
    if (*puVar5 == *(uint *)(iVar7 + 0x5c)) {
      return 1;
    }
    uVar3 = *(uint *)(param_1 + 0x48);
    puVar5 = *(uint **)(param_1 + 0x44);
    iVar2 = uVar3 - (int)puVar5;
  }
  return 0;
}




// decompiled code
// original method signature: 
// void opencallback(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x800fc810
void opencallback(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FILE_completeop(*(uint *)(param_3 + 0xa4));
  *(uint *)(param_3 + 0x9c) = uVar1;
  if (uVar1 != 0) {
    restartstream(param_3,*(uint *)(param_3 + 0x30));
  }
  return;
}




// decompiled code
// original method signature: 
// void closecallback(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x800fc850
void closecallback(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  FILE_completeop(*(uint *)(param_3 + 0xa4));
  uVar1 = FILE_open((char *)(param_3 + 0x5c),1,*(uint *)(param_3 + 0x30),param_3);
  *(uint *)(param_3 + 0xa4) = uVar1;
  if (uVar1 != 0) {
    FILE_callbackop(uVar1,opencallback);
  }
  return;
}




// decompiled code
// original method signature: 
// void readcallback(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x800fc8a8
void readcallback(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_3 + 0x50);
  if (*(int *)(iVar5 + 0x10) == 1) {
    uVar3 = *(uint *)(param_3 + 0xa8);
    bVar1 = *(int *)(iVar5 + 0x58) <= (int)(*(int *)(param_3 + 0xa0) + uVar3);
    uVar4 = param_3;
  }
  else {
    uVar4 = param_3;
    uVar3 = FILE_completeop(*(uint *)(param_3 + 0xa4));
    bVar1 = (int)uVar3 < *(int *)(param_3 + 0xa8);
  }
  *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + uVar3;
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + uVar3;
  iVar2 = parsechunks(param_3);
  if (*(int *)(iVar5 + 4) != 4) {
    if ((!bVar1) && (iVar2 == 0)) {
      restartstream(param_3,*(uint *)(param_3 + 0x30));
      return;
    }
    setCopReg(0,Status,Status & 0xfffffbfe,0);
    *(undefined4 *)(iVar5 + 4) = 3;
    setCopReg(0,Status,Status,0);
  }
  startnextrequest(param_3,*(uint *)(param_3 + 0x30),uVar4);
  return;
}




// decompiled code
// original method signature: 
// void startnextrequest(uint param_1,uint param_2,int param_3);
 // line 0, offset 0x800fc9b4
void startnextrequest(uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *__s2;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iVar3 = *(int *)(param_1 + 0x50);
  bVar1 = true;
  if ((iVar3 != 0) && (bVar1 = false, *(int *)(iVar3 + 4) != 1)) {
    if (*(int *)(iVar3 + 0xc) == 0) {
      bVar1 = true;
    }
    else {
      *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0xc);
    }
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    param_3 = *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_3 + 4) = 2;
  }
  setCopReg(0,Status,Status,0);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(param_3 + 0x10) == 1) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    else {
      __s2 = (char *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 0x58);
      iVar3 = strcmp((char *)(param_3 + 0x14),__s2);
      if (iVar3 != 0) {
        strcpy(__s2,(char *)(param_3 + 0x14));
        if (*(uint *)(param_1 + 0x9c) != 0) {
          uVar2 = FILE_close(*(uint *)(param_1 + 0x9c),param_2,param_1);
          *(uint *)(param_1 + 0xa4) = uVar2;
          if (uVar2 == 0) {
            return;
          }
          FILE_callbackop(uVar2,closecallback);
          return;
        }
        uVar2 = FILE_open(__s2,1,param_2,param_1);
        *(uint *)(param_1 + 0xa4) = uVar2;
        if (uVar2 == 0) {
          return;
        }
        FILE_callbackop(uVar2,opencallback);
        return;
      }
    }
    restartstream(param_1,param_2);
  }
  return;
}




// decompiled code
// original method signature: 
// void restartstream(uint param_1,uint param_2);
 // line 0, offset 0x800fcb44
void restartstream(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  size_t __n;
  
  uVar5 = Status;
  iVar1 = *(int *)(param_1 + 0x40);
  while (iVar1 != *(int *)(param_1 + 0x44)) {
    piVar4 = *(int **)(param_1 + 0x40);
    if (*piVar4 == -1) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      if (*piVar4 != -2) break;
      *(int *)(param_1 + 0x40) = (int)piVar4 + piVar4[1];
    }
    iVar1 = *(int *)(param_1 + 0x40);
  }
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(iVar1 + 0xc);
  while (((iVar2 != 0 && (*(int *)(*(int *)(iVar1 + 0xc) + 4) != 1)) &&
         (uVar3 = inbetween(*(uint *)(param_1 + 0x40),*(uint *)(param_1 + 0x48),
                            *(int *)(*(int *)(iVar1 + 0xc) + 0x60) - 1), uVar3 == 0))) {
    freerequest(param_1,iVar1);
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  setCopReg(0,Status,uVar5,0);
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar5 = *(uint *)(param_1 + 0x48);
  iVar1 = uVar3 - uVar5;
  if (uVar3 <= uVar5) {
    iVar1 = (*(int *)(param_1 + 0x24) - uVar5) + -8;
    if (0x1fff < iVar1) goto LAB_800fcd0c;
    __n = uVar5 - (int)*(void **)(param_1 + 0x44);
    if ((int)(uVar3 - (int)*(void **)(param_1 + 0x20)) < (int)(__n + 1)) goto LAB_800fcd04;
    memcpy(*(void **)(param_1 + 0x20),*(void **)(param_1 + 0x44),__n);
    puVar6 = *(undefined4 **)(param_1 + 0x44);
    *puVar6 = 0xffffffff;
    puVar6[1] = 8;
    iVar2 = *(int *)(param_1 + 0x20) + __n;
    iVar1 = *(int *)(param_1 + 0x40) - iVar2;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x48) = iVar2;
  }
  iVar1 = iVar1 + -1;
  if (iVar1 < 0x2000) {
LAB_800fcd04:
    *(undefined4 *)(param_1 + 0x28) = 2;
    return;
  }
LAB_800fcd0c:
  iVar2 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar2 + 0x10) == 1) {
    if (*(int *)(iVar2 + 0x58) < *(int *)(param_1 + 0xa0) + iVar1) {
      *(int *)(param_1 + 0xa8) = *(int *)(iVar2 + 0x58) - *(int *)(param_1 + 0xa0);
    }
    else {
      *(int *)(param_1 + 0xa8) = iVar1;
    }
    memcpy(*(void **)(param_1 + 0x48),*(void **)(iVar2 + 0x54),*(size_t *)(param_1 + 0xa8));
    *(int *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + *(int *)(param_1 + 0xa8);
    readcallback(0,0,param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0xa8) = 0x2000;
  uVar5 = FILE_read(*(uint *)(param_1 + 0x9c),*(uint *)(param_1 + 0xa0),*(uint *)(param_1 + 0x48),
                    *(uint *)(param_1 + 0xa8),param_2,param_1);
  *(uint *)(param_1 + 0xa4) = uVar5;
  if (uVar5 == 0) {
    return;
  }
  FILE_callbackop(uVar5,readcallback);
  return;
}




// decompiled code
// original method signature: 
// int STREAM_overhead(int param_1,int param_2,int param_3);
 // line 0, offset 0x800fcde0
int STREAM_overhead(int param_1,int param_2,int param_3)

{
  return param_1 * 100 + param_2 * 0xc + 0xac + param_3 * 0x10;
}




// decompiled code
// original method signature: 
// undefined4 STREAM_create(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5);
 // line 0, offset 0x800fce14
undefined4 STREAM_create(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = STREAM_overhead(param_1,param_2,param_3);
  if (param_5 - iVar1 < 0x6000) {
    return 0;
  }
  if ((1 < param_1) && (param_1 < 0x101)) {
    if (0xf < param_2 - 1U) {
      return 0;
    }
    if (0 < param_3) {
      if (param_2 < param_3) {
        return 0;
      }
      *param_4 = 0x4d525453;
      puVar2 = allocmutex();
      *(undefined2 **)(param_4 + 1) = puVar2;
      *(undefined4 **)(param_4 + 2) = param_4 + 0x2b;
      param_4[9] = (int)param_4 + param_5;
      param_4[0xb] = 0x96;
      param_4[3] = param_1;
      param_4[5] = param_2;
      param_4[7] = param_3;
      param_4[10] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[0x13] = 0;
      param_4[0x14] = 0;
      param_4[0x15] = 0;
      iVar1 = param_4[2] + param_1 * 100;
      param_4[4] = iVar1;
      iVar1 = iVar1 + param_2 * 0xc;
      param_4[6] = iVar1;
      iVar1 = iVar1 + param_3 * 0x10;
      param_4[8] = iVar1;
      param_4[0xc] = 0x32;
      param_4[0x10] = iVar1;
      param_4[0x11] = iVar1;
      param_4[0x12] = iVar1;
      param_4[0x16] = param_4[2];
      memset(param_4 + 0x17,0,0x40);
      iVar1 = 0;
      param_4[0x27] = 0;
      if (0 < param_1) {
        iVar6 = 100;
        iVar5 = 0;
        do {
          piVar4 = (int *)(param_4[2] + iVar5);
          iVar5 = iVar5 + 100;
          *piVar4 = iVar1;
          piVar4[1] = 0;
          iVar1 = iVar1 + 1;
          piVar4[3] = param_4[2] + iVar6;
          iVar6 = iVar6 + 100;
        } while (iVar1 < param_1);
      }
      iVar1 = 0;
      *(undefined4 *)(param_1 * 100 + param_4[2] + -0x58) = 0;
      if (0 < param_2) {
        iVar5 = 0;
        do {
          iVar1 = iVar1 + 1;
          puVar3 = (undefined4 *)(param_4[4] + iVar5);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 1;
          iVar5 = iVar5 + 0xc;
        } while (iVar1 < param_2);
      }
      iVar1 = 0;
      if (0 < param_3) {
        iVar5 = 0;
        do {
          iVar1 = iVar1 + 1;
          puVar3 = (undefined4 *)(param_4[6] + iVar5);
          *(undefined4 **)puVar3 = param_4;
          puVar3[1] = iVar1;
          puVar3[2] = 0;
          iVar5 = iVar1 * 0x10;
        } while (iVar1 < param_3);
      }
      return param_4[6];
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void STREAM_setfilter(int **param_1,int param_2,uint param_3,uint param_4,uint param_5);
 // line 0, offset 0x800fd054
void STREAM_setfilter(int **param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  int *local_20;
  int *piStack28;
  
  iVar1 = validatehandle(param_1,&local_20,&piStack28);
  if ((((((iVar1 == 0) && (0 < param_2)) && (param_2 <= local_20[5])) &&
       ((param_2 != local_20[5] || ((param_3 | param_4) == 0)))) &&
      ((0 < (int)param_5 || ((param_5 == 0xffffffff || (param_5 == 0xfffffffe)))))) &&
     (((int)param_5 <= local_20[7] && (local_20[10] == 0)))) {
    puVar2 = (uint *)(local_20[4] + param_2 * 0xc + -0xc);
    *puVar2 = param_3;
    puVar2[1] = param_4;
    puVar2[2] = param_5;
  }
  return;
}




// decompiled code
// original method signature: 
// void STREAM_destroy(int **param_1);
 // line 0, offset 0x800fd144
void STREAM_destroy(int **param_1)

{
  int iVar1;
  uint uVar2;
  int *local_10;
  int *piStack12;
  
  iVar1 = validatehandle(param_1,&local_10,&piStack12);
  if (iVar1 == 0) {
    STREAM_kill(param_1);
    iVar1 = local_10[10];
    while (iVar1 == 1) {
      uVar2 = iscurrentthread(0);
      if (uVar2 != 0) {
        systemtask(0);
      }
      yieldthread();
      iVar1 = local_10[10];
    }
    *local_10 = 0;
    freemutex((undefined4 *)local_10[1]);
    FILE_closesync(local_10[0x27],100);
  }
  return;
}




// decompiled code
// original method signature: 
// void STREAM_setpriority(int **param_1,int param_2,int param_3);
 // line 0, offset 0x800fd1f8
void STREAM_setpriority(int **param_1,int param_2,int param_3)

{
  int iVar1;
  int *local_18;
  int *piStack20;
  
  iVar1 = validatehandle(param_1,&local_18,&piStack20);
  if (iVar1 == 0) {
    local_18[0xb] = param_2;
    local_18[0xc] = param_3;
  }
  return;
}




// decompiled code
// original method signature: 
// void STREAM_setgreedylevel(int **param_1,int param_2);
 // line 0, offset 0x800fd248
void STREAM_setgreedylevel(int **param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *local_18;
  int *piStack20;
  
  iVar1 = validatehandle(param_1,&local_18,&piStack20);
  if (iVar1 == 0) {
    iVar1 = local_18[0xd];
    uVar2 = (uint)(local_18[0xf] < param_2);
    local_18[0xd] = param_2;
    if ((uint)(local_18[0xf] < iVar1) != uVar2) {
      STREAM_setgreedystate(param_1,uVar2);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void STREAM_setgreedystate(int **param_1,int param_2);
 // line 0, offset 0x800fd2b4
void STREAM_setgreedystate(int **param_1,int param_2)

{
  int iVar1;
  int *local_10;
  int *piStack12;
  
  iVar1 = validatehandle(param_1,&local_10,&piStack12);
  if (iVar1 == 0) {
    local_10[0xe] = param_2;
    if ((param_2 != 0) && (local_10[10] == 1)) {
      FILE_priorityop(local_10[0x29],local_10[0xc]);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// uint STREAM_queuefile(int **param_1,char *param_2,uint param_3,uint param_4);
 // line 0, offset 0x800fd314
uint STREAM_queuefile(int **param_1,char *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *local_20;
  int *piStack28;
  
  iVar1 = validatehandle(param_1,&local_20,&piStack28);
  uVar2 = 0;
  if (iVar1 == 0) {
    puVar3 = getfreerequest((int)local_20);
    if (puVar3 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      iVar4 = 0x3f;
      puVar3[4] = 0;
      strncpy((char *)(puVar3 + 5),param_2,0x3f);
      puVar3[0x16] = param_3;
      puVar3[0x17] = param_4;
      queuerequest((int)local_20,(int)puVar3);
      setCopReg(0,Status,Status & 0xfffffbfe,0);
      iVar1 = local_20[10];
      if (iVar1 == 0) {
        local_20[10] = 1;
      }
      setCopReg(0,Status,Status,0);
      if (iVar1 == 0) {
        if (local_20[0xe] == 0) {
          uVar2 = local_20[0xb];
        }
        else {
          uVar2 = local_20[0xc];
        }
        startnextrequest((uint)local_20,uVar2,iVar4);
      }
      uVar2 = *puVar3;
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint STREAM_queuemem(int **param_1,uint *param_2,uint param_3,uint param_4);
 // line 0, offset 0x800fd428
uint STREAM_queuemem(int **param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int **ppiVar6;
  int *local_20;
  int *piStack28;
  
  ppiVar6 = &piStack28;
  iVar2 = validatehandle(param_1,&local_20,ppiVar6);
  uVar3 = 0;
  if (iVar2 == 0) {
    puVar4 = getfreerequest((int)local_20);
    uVar3 = 0;
    if (puVar4 != (uint *)0x0) {
      if (param_3 == 0) {
        uVar3 = *param_2;
        puVar5 = param_2;
        while (uVar3 != param_4) {
          puVar1 = puVar5 + 1;
          puVar5 = (uint *)((int)puVar5 + *puVar1);
          uVar3 = *puVar5;
          param_3 = param_3 + *puVar1;
        }
        param_3 = param_3 + puVar5[1];
      }
      puVar4[4] = 1;
      *(uint **)(puVar4 + 0x15) = param_2;
      puVar4[0x16] = param_3;
      puVar4[0x17] = param_4;
      queuerequest((int)local_20,(int)puVar4);
      setCopReg(0,Status,Status & 0xfffffbfe,0);
      iVar2 = local_20[10];
      if (iVar2 == 0) {
        local_20[10] = 1;
      }
      setCopReg(0,Status,Status,0);
      if (iVar2 == 0) {
        startnextrequest((uint)local_20,0,(int)ppiVar6);
      }
      uVar3 = *puVar4;
    }
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// void STREAM_cancelrequest(int **param_1,uint param_2);
 // line 0, offset 0x800fd554
void STREAM_cancelrequest(int **param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *unaff_s4;
  int *unaff_s6;
  int *unaff_s7;
  int *local_30;
  int **local_2c;
  
  iVar2 = validatehandle(param_1,&local_30,(int **)&local_2c);
  uVar4 = Status;
  if (iVar2 != 0) {
    return;
  }
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  puVar3 = locaterequest((int)local_30,param_2);
  if ((puVar3 != (uint *)0x0) && (puVar3[1] != 4)) {
    if (puVar3[1] != 1) {
      puVar3[1] = 4;
      unaff_s7 = (int *)local_30[0x10];
      unaff_s4 = unaff_s7;
      if (puVar3 != (uint *)local_30[0x13]) {
        unaff_s4 = (int *)puVar3[0x18];
      }
      uVar6 = puVar3[3];
      if ((uVar6 == 0) || (bVar1 = false, *(int *)(uVar6 + 4) == 1)) {
        unaff_s6 = (int *)local_30[0x11];
        bVar1 = false;
      }
      else {
        unaff_s6 = *(int **)(uVar6 + 0x60);
      }
      goto LAB_800fd64c;
    }
    freerequest((int)local_30,(int)puVar3);
  }
  bVar1 = true;
LAB_800fd64c:
  setCopReg(0,Status,uVar4,0);
  if ((!bVar1) && (iVar2 = 0, 0 < local_30[7])) {
    do {
      local_2c = (int **)(local_30[6] + iVar2 * 0x10);
      if (0 < (int)local_2c[2]) {
        uVar4 = inbetween((uint)unaff_s7,(uint)unaff_s4,(uint)local_2c[3]);
        if (uVar4 == 0) {
          piVar7 = local_2c[3];
          while (uVar4 = inbetween((uint)unaff_s4,(uint)unaff_s6,(uint)piVar7), uVar4 != 0) {
            piVar7 = (int *)STREAM_get(local_2c);
            STREAM_release(local_2c,piVar7);
            if ((int)local_2c[2] < 1) break;
            piVar7 = local_2c[3];
          }
        }
        else {
          piVar5 = local_2c[1];
          piVar7 = unaff_s4;
          while (piVar7 != unaff_s6) {
            if (*piVar7 == -1) {
              piVar7 = (int *)local_30[8];
            }
            else {
              uVar4 = piVar7[1] & 0xffffff;
              if ((piVar7[1] & 0xff000000U) == (int)piVar5 << 0x18) {
                setCopReg(0,Status,Status & 0xfffffbfe,0);
                local_2c[2] = (int *)((int)local_2c[2] - uVar4);
                setCopReg(0,Status,Status,0);
                decbufferusage((int)local_30,uVar4);
                *piVar7 = -2;
                piVar7[1] = uVar4;
              }
              piVar7 = (int *)((int)piVar7 + uVar4);
            }
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_30[7]);
  }
  return;
}




// decompiled code
// original method signature: 
// void STREAM_kill(int **param_1);
 // line 0, offset 0x800fd808
void STREAM_kill(int **param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *local_10;
  int *piStack12;
  
  iVar1 = validatehandle(param_1,&local_10,&piStack12);
  if ((iVar1 == 0) && (puVar5 = (uint *)local_10[0x15], puVar5 != (uint *)0x0)) {
    while (puVar5[1] - 1 < 2) {
      STREAM_cancelrequest(param_1,*puVar5);
      puVar5 = (uint *)local_10[0x15];
    }
    while (local_10[0x13] != local_10[0x14]) {
      freerequest((int)local_10,local_10[0x13]);
    }
    *(undefined4 *)(local_10[0x14] + 4) = 4;
    iVar1 = 0;
    if (0 < local_10[7]) {
      iVar3 = 0;
      do {
        *(undefined4 *)(iVar3 + local_10[6] + 8) = 0;
        iVar1 = iVar1 + 1;
        iVar3 = iVar1 * 0x10;
      } while (iVar1 < local_10[7]);
    }
    decbufferusage((int)local_10,local_10[0xf]);
    piVar4 = (int *)local_10[0x10];
    if (piVar4 != (int *)local_10[0x11]) {
      do {
        if (*piVar4 == -1) {
          piVar4 = (int *)local_10[8];
        }
        else {
          uVar2 = piVar4[1];
          *piVar4 = -2;
          piVar4[1] = uVar2 & 0xffffff;
          piVar4 = (int *)((int)piVar4 + (uVar2 & 0xffffff));
        }
      } while (piVar4 != (int *)local_10[0x11]);
    }
    if (local_10[10] == 2) {
      local_10[10] = 0;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// int STREAM_get(int **param_1);
 // line 0, offset 0x800fd9ac
int STREAM_get(int **param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_10;
  int *local_c;
  
  iVar1 = validatehandle(param_1,&local_10,&local_c);
  iVar2 = 0;
  if (iVar1 == 0) {
    if (local_c[2] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_c[3];
      uVar3 = *(uint *)(iVar2 + 4) & 0xffffff;
      *(uint *)(iVar2 + 4) = uVar3;
      setCopReg(0,Status,Status & 0xfffffbfe,0);
      iVar1 = local_c[2];
      local_c[2] = iVar1 - uVar3;
      setCopReg(0,Status,Status,0);
      if (0 < (int)(iVar1 - uVar3)) {
        piVar4 = (int *)(iVar2 + uVar3);
        uVar3 = piVar4[1];
        while ((uVar3 & 0xff000000) != local_c[1] << 0x18) {
          if (*piVar4 == -1) {
            piVar4 = (int *)local_10[8];
          }
          else {
            piVar4 = (int *)((int)piVar4 + (piVar4[1] & 0xffffffU));
          }
          uVar3 = piVar4[1];
        }
        *(int **)(local_c + 3) = piVar4;
      }
    }
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// void STREAM_release(int **param_1,int *param_2);
 // line 0, offset 0x800fdad0
void STREAM_release(int **param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *local_10;
  int *piStack12;
  
  iVar1 = validatehandle(param_1,&local_10,&piStack12);
  if ((((iVar1 == 0) && ((int *)local_10[8] <= param_2)) && (param_2 <= (int *)(local_10[9] - 8U)))
     && (*param_2 != -2)) {
    *param_2 = -2;
    decbufferusage((int)local_10,param_2[1]);
    setCopReg(0,Status,Status & 0xfffffbfe,0);
    iVar1 = local_10[10];
    if (iVar1 == 2) {
      local_10[10] = 1;
    }
    setCopReg(0,Status,Status,0);
    if (iVar1 == 2) {
      if (local_10[0xe] == 0) {
        uVar2 = local_10[0xb];
      }
      else {
        uVar2 = local_10[0xc];
      }
      restartstream((uint)local_10,uVar2);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// int STREAM_gettable(int **param_1);
 // line 0, offset 0x800fdbcc
int STREAM_gettable(int **param_1)

{
  int iVar1;
  int iVar2;
  int *piStack16;
  int *local_c;
  
  iVar1 = validatehandle(param_1,&piStack16,&local_c);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = local_c[2];
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// int STREAM_state(int **param_1);
 // line 0, offset 0x800fdc04
int STREAM_state(int **param_1)

{
  int iVar1;
  int iVar2;
  int *local_10;
  int *piStack12;
  
  iVar1 = validatehandle(param_1,&local_10,&piStack12);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = local_10[10];
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// uint STREAM_isendofstream(int **param_1);
 // line 0, offset 0x800fdc3c
uint STREAM_isendofstream(int **param_1)

{
  int iVar1;
  uint uVar2;
  int *local_10;
  int *local_c;
  
  iVar1 = validatehandle(param_1,&local_10,&local_c);
  uVar2 = 0;
  if ((iVar1 == 0) && (uVar2 = 0, local_10[10] == 0)) {
    uVar2 = (uint)(local_c[2] == 0);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// int STREAM_buffersize(int **param_1);
 // line 0, offset 0x800fdc98
int STREAM_buffersize(int **param_1)

{
  int iVar1;
  int *local_10;
  int *piStack12;
  
  iVar1 = validatehandle(param_1,&local_10,&piStack12);
  if (iVar1 == 0) {
    iVar1 = local_10[9] - local_10[8];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// int STREAM_bufferusage(int **param_1);
 // line 0, offset 0x800fdce0
int STREAM_bufferusage(int **param_1)

{
  int iVar1;
  int iVar2;
  int *local_10;
  int *piStack12;
  
  iVar1 = validatehandle(param_1,&local_10,&piStack12);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = local_10[0xf];
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// void InitHeap(void);
 // line 0, offset 0x800fdd18
void InitHeap(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void PadInitDirect(undefined4 param_1,undefined4 param_2);
 // line 0, offset 0x800fdd28
void PadInitDirect(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  
  _padIntExec = 0;
  _padModeMtap = 0;
  _padInitDirSeq();
  puVar7 = &DAT_80147600;
  _padFuncNextPort = FUN_800fdef0;
  _padFuncClrInfo = &LAB_800fde88;
  _padFuncGetTxd = &LAB_800fdff4;
  _padFuncCurrLimit = FUN_800fe0b0;
  _padFuncPtr2Port = &LAB_800fe32c;
  _padFuncPort2Info = &LAB_800fe364;
  _padInfoDir = &DAT_80147600;
  _padFuncClrCmdNo = FUN_800fdfe4;
  bzero(&DAT_80147600,0x1e0);
  iVar6 = 0;
  puVar2 = &DAT_80147640;
  puVar5 = &DAT_801475b8;
  puVar4 = &DAT_80147570;
  DAT_80147630 = param_1;
  DAT_80147720 = param_2;
  do {
    puVar3 = puVar7 + 0x5d;
    puVar2[-0xd] = 0;
    *(undefined **)(puVar2 + -0xc) = puVar7;
    *(undefined *)puVar2[-4] = 0xff;
    iVar1 = 5;
    *(undefined *)(puVar2[-4] + 1) = 0;
    *(undefined **)(puVar2 + -1) = puVar4;
    *(undefined **)puVar2 = puVar5;
    do {
      *puVar3 = 0xff;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar1);
    puVar5 = puVar5 + 0x23;
    puVar4 = puVar4 + 0x23;
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 0x3c;
    puVar7 = puVar7 + 0xf0;
  } while (iVar6 < 2);
  _padSetVsyncParam();
  _padIntExec = 1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_800fdef0(int param_1);
 // line 0, offset 0x800fdef0
void FUN_800fdef0(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = _padSioChan * 0xf0;
    if (param_1 != -9) {
      if (param_1 == 0) {
        *(undefined4 *)(&_padFixResult + _padSioChan * 4) = 0;
      }
      else {
        _dirFailAuto((int)(&DAT_80147600 + iVar1));
        FUN_800fdfe4((int)(&DAT_80147600 + iVar1));
      }
    }
    _padSioState = 0;
    *(undefined2 *)(PTR_JOY_MCD_DATA_80136cd8 + 10) = 0;
    _padSioChan = _padSioChan + 1;
    iVar1 = 1;
    if (_padSioChan <= _padChanStop) {
      iVar1 = _padInitSioMode((int)(&DAT_80147600 + _padSioChan * 0xf0));
    }
    param_1 = 0xffff;
  } while (iVar1 == 0);
  return;
}




// decompiled code
// original method signature: 
// void FUN_800fdfe4(int param_1);
 // line 0, offset 0x800fdfe4
void FUN_800fdfe4(int param_1)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)(param_1 + 0x36);
  *(undefined *)(param_1 + 0x36) = 0;
  *(undefined *)(param_1 + 0x37) = uVar1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_800fe0b0(int param_1);
 // line 0, offset 0x800fe0b0
void FUN_800fe0b0(int param_1)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  bzero((void *)(param_1 + 0x57),6);
  if ((*(short *)(param_1 + 0xe6) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    if ((((uint)*(byte *)(param_1 + 0xe8) - 4 < 2) || (*(byte *)(param_1 + 0xe8) == 7)) &&
       ((*(short *)(param_1 + 0xe6) == 0 && (1 < *(byte *)(param_1 + 0x34))))) {
      if ((((**(byte **)(param_1 + 0x28) & 0xc0) == 0x40) &&
          (((*(byte **)(param_1 + 0x28))[1] & 1) != 0)) && (_padTotalCurr + 10 < 0x3d)) {
        *(undefined *)(param_1 + 0x58) = 1;
        *(undefined *)(param_1 + 0x57) = 1;
        _padTotalCurr = _padTotalCurr + 10;
      }
    }
    else {
      if (*(char *)(param_1 + 0xe8) == '\x03') {
        *(undefined *)(param_1 + 0x57) = 1;
      }
      else {
        if (*(short *)(param_1 + 0xe6) == 0) {
          iVar9 = 5;
          param_1 = param_1 + 5;
          do {
            *(undefined *)(param_1 + 0x57) = 1;
            iVar9 = iVar9 + -1;
            param_1 = param_1 + -1;
          } while (-1 < iVar9);
        }
      }
    }
  }
  else {
    uVar8 = 6;
    if (*(byte *)(param_1 + 0x34) < 7) {
      uVar8 = (uint)*(byte *)(param_1 + 0x34);
    }
    uVar7 = 0;
    if (*(char *)(param_1 + 0xe9) != '\0') {
      iVar9 = 0;
      do {
        bVar1 = false;
        bVar6 = 1;
        if (*(char *)(iVar9 + *(int *)(param_1 + 4) + 2) != '\0') {
          bVar6 = 0xff;
        }
        pbVar5 = (byte *)(param_1 + 0x5d);
        pbVar3 = *(byte **)(param_1 + 0x28);
        iVar2 = 0;
        if (uVar8 != 0) {
          do {
            if (((uint)*pbVar5 == uVar7) && ((*pbVar3 & bVar6) != 0)) {
              bVar1 = true;
              break;
            }
            pbVar5 = pbVar5 + 1;
            iVar2 = iVar2 + 1;
            pbVar3 = pbVar3 + 1;
          } while (iVar2 < (int)uVar8);
        }
        if (bVar1) {
          iVar2 = _padTotalCurr + (uint)*(byte *)(iVar9 + *(int *)(param_1 + 4) + 3);
          if (0x3c < iVar2) {
            bVar1 = false;
            iVar2 = _padTotalCurr;
          }
          _padTotalCurr = iVar2;
          if (bVar1) {
            pbVar3 = (byte *)(param_1 + 0x5d);
            puVar4 = (undefined *)(param_1 + 0x57);
            iVar2 = 0;
            if (uVar8 != 0) {
              do {
                bVar6 = *pbVar3;
                pbVar3 = pbVar3 + 1;
                if ((uint)bVar6 == uVar7) {
                  *puVar4 = 1;
                }
                iVar2 = iVar2 + 1;
                puVar4 = puVar4 + 1;
              } while (iVar2 < (int)uVar8);
            }
          }
        }
        uVar7 = uVar7 + 1;
        iVar9 = iVar9 + 5;
      } while ((int)uVar7 < (int)(uint)*(byte *)(param_1 + 0xe9));
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void * memchr(void *__s,int __c,size_t __n);
 // line 0, offset 0x800fe388
void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)0xa0)();
  return pvVar1;
}




// decompiled code
// original method signature: 
// void * memmove(void *__dest,void *__src,size_t __n);
 // line 0, offset 0x800fe398
void * memmove(void *__dest,void *__src,size_t __n)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  
  if (__dest < __src) {
    iVar3 = __n - 1;
    if (0 < (int)__n) {
      do {
        uVar2 = *(undefined *)__src;
        __src = (undefined *)__src + 1;
        *(undefined *)__dest = uVar2;
        bVar1 = 0 < iVar3;
        __dest = (undefined *)__dest + 1;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar3 = __n - 1;
    if (0 < (int)__n) {
      do {
        bVar1 = 0 < iVar3;
        *(undefined *)((int)__dest + iVar3) = *(undefined *)((int)__src + iVar3);
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
  }
  return __dest;
}




// decompiled code
// original method signature: 
// uint iscurrentthread(int param_1);
 // line 0, offset 0x800fe408
uint iscurrentthread(int param_1)

{
  return (uint)(iGp00001810 == param_1);
}




// decompiled code
// original method signature: 
// void yieldthread(void);
 // line 0, offset 0x800fe41c
void yieldthread(void)

{
  return;
}




// decompiled code
// original method signature: 
// undefined2 * allocmutex(void);
 // line 0, offset 0x800fe424
undefined2 * allocmutex(void)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  psVar2 = &mutexbuf;
  do {
    if (*psVar2 == 0) {
      *psVar2 = 1;
      break;
    }
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 2;
  } while (iVar1 < 0x20);
  if (iVar1 != 0x20) {
    return &mutexbuf + iVar1 * 2;
  }
  return (undefined2 *)0x0;
}




// decompiled code
// original method signature: 
// void freemutex(undefined4 *param_1);
 // line 0, offset 0x800fe480
void freemutex(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




// decompiled code
// original method signature: 
// void make64(int *param_1,int param_2,uint param_3);
 // line 0, offset 0x800fe488
void make64(int *param_1,int param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    *param_1 = 0;
    param_1[1] = param_2 << (param_3 - 0x20 & 0x1f);
    return;
  }
  if (0 < (int)param_3) {
    *param_1 = param_2 << (param_3 & 0x1f);
    param_1[1] = param_2 >> (0x20 - param_3 & 0x1f);
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_2 >> 0x1f;
  return;
}




// decompiled code
// original method signature: 
// int divu64(uint param_1,uint param_2,uint param_3);
 // line 0, offset 0x800fe4e0
int divu64(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x1f;
  do {
    iVar2 = iVar2 * 2;
    param_2 = param_2 * 2 + (param_1 >> 0x1f);
    param_1 = param_1 << 1;
    if (param_3 <= param_2) {
      param_2 = param_2 - param_3;
      iVar2 = iVar2 + 1;
    }
    bVar1 = iVar3 != 0;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  return iVar2;
}




// decompiled code
// original method signature: 
// int stricmp(byte *param_1,byte *param_2);
 // line 0, offset 0x800fe520
int stricmp(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (uVar2 - 0x41 < 0x1a) {
    uVar2 = uVar2 + 0x20;
  }
  if ((uint)*param_2 - 0x41 < 0x1a) {
    iVar1 = (uVar2 - 0x20) - (uint)*param_2;
  }
  else {
    iVar1 = uVar2 - (uint)*param_2;
  }
  if ((iVar1 == 0) && (*param_1 != 0)) {
    iVar1 = stricmp(param_1 + 1,param_2 + 1);
    return iVar1;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// void iSNDplatformfree(int param_1);
 // line 0, offset 0x800fe594
void iSNDplatformfree(int param_1)

{
  iSNDpsxfree(param_1);
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSNDbankremovepat(int param_1,int param_2,int *param_3);
 // line 0, offset 0x800fe5b4
undefined4 iSNDbankremovepat(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 * 0xc + DAT_801478f8);
  iVar4 = 0;
  if (*(char *)(iVar3 + 4) == '\x04') {
    iVar4 = iVar3;
  }
  iVar1 = iSNDvalidbank(param_1);
  uVar2 = 0xfffffff8;
  if (((iVar1 == 0) && (-1 < param_2)) &&
     (uVar2 = 0xfffffff8, param_2 < (int)(uint)*(ushort *)(iVar3 + 6))) {
    if (*(char *)(iVar3 + 4) == '\x04') {
      iVar1 = *(int *)(iVar4 + param_2 * 4 + 0x14);
    }
    else {
      iVar1 = *(int *)(iVar3 + param_2 * 4 + 0xc);
    }
    uVar2 = 0xfffffff8;
    if (iVar1 != 0) {
      iSNDremovetaggedpatch(iVar1,param_3);
      if (*(char *)(iVar3 + 4) == '\x04') {
        *(undefined4 *)(iVar4 + param_2 * 4 + 0x14) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + param_2 * 4 + 0xc) = 0;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 iSNDvalidbank(int param_1);
 // line 0, offset 0x800fe6bc
undefined4 iSNDvalidbank(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((param_1 < 0) || ((int)(uint)DAT_8014786c <= param_1)) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(param_1 * 0xc + DAT_801478f8);
  uVar1 = 0xfffffff8;
  if ((*piVar2 != 0) && (uVar1 = 0xffffffee, *(char *)(piVar2 + 2) == '\0')) {
    return 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 iSNDischanreserved(int param_1,int param_2);
 // line 0, offset 0x800fe724
undefined4 iSNDischanreserved(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    pcVar1 = &sndchanreserved;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      if ((int)*pcVar1 == param_1) {
        return 1;
      }
      pcVar1 = &DAT_80147915 + iVar2;
      iVar2 = iVar3;
    } while (iVar3 < param_2);
  }
  return 0;
}




// decompiled code
// original method signature: 
// int iSNDallocchan(uint param_1,int param_2,undefined param_3,uint *param_4);
 // line 0, offset 0x800fe764
int iSNDallocchan(uint param_1,int param_2,undefined param_3,uint *param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  int local_38;
  
  iVar14 = 0;
  local_38 = -9;
  if (0 < param_2) {
    puVar2 = &sndchanreserved;
    iVar11 = 0;
    do {
      *puVar2 = 0xff;
      iVar10 = iVar11 + 1;
      puVar2 = &DAT_80147915 + iVar11;
      iVar11 = iVar10;
    } while (iVar10 < param_2);
  }
  DAT_80136dec = DAT_80136dec + 0x20;
  if ((int)DAT_80136dec < 0) {
    DAT_80136dec = 0;
  }
  iVar11 = 0;
  if (0 < param_2) {
    do {
      uVar12 = 0xffffffff;
      uVar7 = 0;
      if (DAT_80147871 != 0) {
        iVar10 = 0;
        uVar8 = uVar12;
        do {
          if (((((param_1 & 1 << (uVar7 & 0x1f)) != 0) &&
               (iVar5 = DAT_801478f4 + iVar10, *(char *)(iVar5 + 0xb) == '\0')) &&
              (iVar3 = iSNDischanreserved(uVar7,iVar14), iVar3 == 0)) &&
             (uVar4 = *(uint *)(iVar5 + 0x10), uVar4 < uVar8)) {
            uVar12 = uVar7;
            uVar8 = uVar4;
          }
          uVar7 = uVar7 + 1;
          iVar10 = iVar10 + 100;
        } while ((int)uVar7 < (int)(uint)DAT_80147871);
      }
      if (-1 < (int)uVar12) {
        (&sndchanreserved)[iVar14] = (char)uVar12;
        iVar14 = iVar14 + 1;
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar14;
    } while (iVar11 < param_2);
    while (iVar10 < param_2) {
      bVar13 = 0x66;
      uVar12 = 0xffffffff;
      uVar7 = 0xffffffff;
      uVar8 = 0;
      if (DAT_80147871 != 0) {
        iVar11 = 0;
        do {
          if ((((param_1 & 1 << (uVar8 & 0x1f)) != 0) &&
              (iVar5 = iSNDischanreserved(uVar8,iVar14), iVar5 == 0)) &&
             (iVar5 = DAT_801478f4 + iVar11, *(byte *)(iVar5 + 0xc) < 0x65)) {
            bVar1 = *(byte *)(iVar5 + 0xc);
            if (bVar1 < bVar13) {
              uVar4 = *(uint *)(iVar5 + 0x10);
              bVar13 = bVar1;
            }
            else {
              if ((bVar1 != bVar13) || (uVar4 = *(uint *)(iVar5 + 0x10), uVar7 <= uVar4))
              goto LAB_800fe990;
            }
            uVar12 = uVar8;
            uVar7 = uVar4;
          }
LAB_800fe990:
          uVar8 = uVar8 + 1;
          iVar11 = iVar11 + 100;
        } while ((int)uVar8 < (int)(uint)DAT_80147871);
      }
      if (-1 < (int)uVar12) {
        (&sndchanreserved)[iVar14] = (char)uVar12;
        iVar14 = iVar14 + 1;
        if (param_2 <= iVar14) break;
      }
      iVar10 = iVar10 + 1;
    }
  }
  if (iVar14 == param_2) {
    *param_4 = DAT_80136dec | (int)sndchanreserved;
    local_38 = (int)sndchanreserved;
    iVar11 = 0;
    if (0 < iVar14) {
      pcVar9 = &sndchanreserved;
      do {
        puVar6 = (uint *)(DAT_801478f4 + (int)*pcVar9 * 100);
        uVar12 = *puVar6;
        if (*(char *)((int)puVar6 + 0xb) == '\x01') {
          if ((int)uVar12 < 0) {
            uVar12 = *(uint *)((int)*(char *)(puVar6 + 0xf) * 100 + DAT_801478f4);
          }
          SNDstop(uVar12);
          uVar12 = SNDover(uVar12);
          if (uVar12 != 1) {
            while (iVar11 = iVar11 + -1, -1 < iVar11) {
              pcVar9 = pcVar9 + -1;
              *(undefined *)(DAT_801478f4 + (int)*pcVar9 * 100 + 0xb) = 0;
            }
            return -9;
          }
        }
        pcVar9 = pcVar9 + 1;
        iVar11 = iVar11 + 1;
        *(undefined *)((int)puVar6 + 0xb) = 1;
        puVar6[4] = DAT_801478a4;
        *(undefined *)(puVar6 + 3) = param_3;
      } while (iVar11 < iVar14);
    }
    iVar11 = 1;
    *(uint *)((int)sndchanreserved * 100 + DAT_801478f4) = *param_4;
    if (1 < iVar14) {
      do {
        pcVar9 = &sndchanreserved + iVar11;
        *(char *)(iVar11 + (int)sndchanreserved * 100 + DAT_801478f4 + 3) = *pcVar9;
        iVar11 = iVar11 + 1;
        *(undefined4 *)((int)*pcVar9 * 100 + DAT_801478f4) = 0xffffffff;
        *(char *)((int)*pcVar9 * 100 + DAT_801478f4 + 0x3c) = sndchanreserved;
      } while (iVar11 < iVar14);
    }
  }
  return local_38;
}




// decompiled code
// original method signature: 
// void iSNDfreechan(int param_1);
 // line 0, offset 0x800fec0c
void iSNDfreechan(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar2 = DAT_801478f4 + param_1 * 0x19;
  iVar4 = -1;
  if (*(char *)((int)piVar2 + 0x37) == '\0') {
    *(undefined *)((int)piVar2 + 0xb) = 0;
    piVar2[4] = DAT_801478a4;
    return;
  }
  iVar3 = 0;
  piVar1 = DAT_801478f4;
  if (DAT_80147871 != 0) {
    do {
      if ((((*(char *)((int)piVar1 + 0x37) == *(char *)((int)piVar2 + 0x37)) && (-1 < *piVar1)) &&
          (*(char *)((int)piVar1 + 0xb) != '\0')) &&
         (iVar5 = iVar5 + 1, *(char *)((int)piVar1 + 0x36) != '\0')) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0x19;
    } while (iVar3 < (int)(uint)DAT_80147871);
  }
  piVar2 = DAT_801478f4 + param_1 * 0x19;
  if (iVar5 != 1) {
    if (((*(char *)((int)DAT_801478f4 + iVar4 * 100 + 0xb) == '\x02') && (param_1 != iVar4)) &&
       (iVar5 == 2)) {
      *(undefined *)((int)piVar2 + 0xb) = 0;
      piVar2[4] = DAT_801478a4;
      *(undefined *)((int)DAT_801478f4 + iVar4 * 100 + 0xb) = 0;
      DAT_801478f4[iVar4 * 0x19 + 4] = DAT_801478a4;
      return;
    }
    if ((*(char *)((int)(DAT_801478f4 + iVar4 * 0x19) + 0xb) == '\x01') && (param_1 == iVar4)) {
      *(undefined *)((int)(DAT_801478f4 + iVar4 * 0x19) + 0xb) = 2;
      return;
    }
    *(undefined *)((int)piVar2 + 0xb) = 0;
    piVar2[4] = DAT_801478a4;
    return;
  }
  *(undefined *)((int)piVar2 + 0xb) = 0;
  piVar2[4] = DAT_801478a4;
  return;
}




// decompiled code
// original method signature: 
// uint iSNDgetchan(uint param_1);
 // line 0, offset 0x800fedc4
uint iSNDgetchan(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if ((-1 < (int)param_1) && (uVar2 = param_1 & 0x1f, uVar2 < (uint)DAT_80147871)) {
    puVar1 = (uint *)(DAT_801478f4 + uVar2 * 100);
    if ((*(char *)((int)puVar1 + 0xb) == '\0') || (*puVar1 != param_1)) {
      uVar2 = 0xfffffff8;
    }
    return uVar2;
  }
  return 0xfffffff8;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatform3dpos(int param_1,int param_2);
 // line 0, offset 0x800fee30
/* WARNING: Could not reconcile some variable overlaps */

undefined4 iSNDplatform3dpos(int param_1,int param_2)

{
  int iVar1;
  uint local_18;
  uint local_14;
  
  iVar1 = param_1 * 0x2c;
  *(short *)(&DAT_80147a08 + iVar1) = (short)param_2;
  if ((&DAT_80147a0c)[iVar1] == '\x02') {
    if ((&DAT_80147a0e)[iVar1] == '\x01') {
      iSNDatodlrv(param_2,(int)*(char *)(param_1 * 100 + DAT_801478f4 + 0x2d),&local_18,&local_14,
                  (int)(char)(&DAT_80147a14)[iVar1],(int)(char)(&DAT_80147a15)[iVar1]);
    }
    else {
      if ((&DAT_80147a0e)[iVar1] == '\0') {
        iSNDatolrv(param_2,(int)*(char *)(param_1 * 100 + DAT_801478f4 + 0x2d),&local_18,&local_14);
      }
    }
    (&DAT_80147a14)[iVar1] = (undefined)local_18;
    (&DAT_80147a15)[iVar1] = (undefined)local_14;
    iSNDsetvol(param_1,local_18,local_14);
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDpatchkey(int param_1,int *param_2);
 // line 0, offset 0x800fef4c
undefined4 iSNDpatchkey(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = *(char *)(DAT_801478f4 + param_1 * 100 + 0x37);
  if (cVar1 == '\0') {
    if (*param_2 < 0) {
      *param_2 = param_1;
      return 1;
    }
  }
  else {
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    if (iVar2 + 1 < (int)(uint)DAT_80147871) {
      do {
        piVar3 = (int *)(DAT_801478f4 + *param_2 * 100);
        if (((*(char *)((int)piVar3 + 0x37) == cVar1) && (*(char *)((int)piVar3 + 0xb) == '\x01'))
           && (-1 < *piVar3)) {
          return 1;
        }
        iVar2 = *param_2;
        *param_2 = iVar2 + 1;
      } while (iVar2 + 1 < (int)(uint)DAT_80147871);
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void iSNDcalcvol(int param_1);
 // line 0, offset 0x800ff050
void iSNDcalcvol(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_801478f4 + param_1 * 100;
  iVar1 = ((int)*(char *)(iVar2 + 0x2c) * (int)*(short *)(iVar2 + 0x1e) *
           (int)*(short *)(iVar2 + 0x26) * (int)DAT_8014789d) / 0x1f417f;
  *(undefined *)(iVar2 + 0x2d) = (char)iVar1;
  if (*(int *)(iVar2 + 0x50) != 0) {
    *(undefined *)(iVar2 + 0x2d) =
         (char)(((iVar1 * 0x1000000 >> 0x18) *
                (int)*(char *)(*(int *)(iVar2 + 0x50) + (uint)*(byte *)(iVar2 + 0x3a))) / 0x7f);
  }
  if (*(int *)(iVar2 + 0x44) != 0) {
    *(undefined *)(iVar2 + 0x2d) =
         *(undefined *)(*(int *)(iVar2 + 0x44) + (int)*(char *)(iVar2 + 0x2d));
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxkeyon(undefined4 param_1);
 // line 0, offset 0x800ff140
void iSNDpsxkeyon(undefined4 param_1)

{
  *(undefined2 *)(DAT_80147e2c + 0x188) = (short)param_1;
  *(undefined2 *)(DAT_80147e2c + 0x18a) = (short)((uint)param_1 >> 0x10);
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxkeyoff(undefined4 param_1);
 // line 0, offset 0x800ff168
void iSNDpsxkeyoff(undefined4 param_1)

{
  *(undefined2 *)(DAT_80147e2c + 0x18c) = (short)param_1;
  *(undefined2 *)(DAT_80147e2c + 0x18e) = (short)((uint)param_1 >> 0x10);
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxeffecton(undefined4 param_1);
 // line 0, offset 0x800ff190
void iSNDpsxeffecton(undefined4 param_1)

{
  *(ushort *)(DAT_80147e2c + 0x198) = *(ushort *)(DAT_80147e2c + 0x198) | (ushort)param_1;
  *(ushort *)(DAT_80147e2c + 0x19a) =
       *(ushort *)(DAT_80147e2c + 0x19a) | (ushort)((uint)param_1 >> 0x10);
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxeffectoff(undefined4 param_1);
 // line 0, offset 0x800ff1d0
void iSNDpsxeffectoff(undefined4 param_1)

{
  *(ushort *)(DAT_80147e2c + 0x198) = *(ushort *)(DAT_80147e2c + 0x198) & ~(ushort)param_1;
  *(ushort *)(DAT_80147e2c + 0x19a) =
       *(ushort *)(DAT_80147e2c + 0x19a) & ~(ushort)((uint)param_1 >> 0x10);
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxeffectvol(undefined2 param_1,undefined2 param_2);
 // line 0, offset 0x800ff210
void iSNDpsxeffectvol(undefined2 param_1,undefined2 param_2)

{
  *(undefined2 *)(DAT_80147e2c + 0x184) = param_1;
  *(undefined2 *)(DAT_80147e2c + 0x186) = param_2;
  return;
}




// decompiled code
// original method signature: 
// void iSNDsetvol(int param_1,int param_2,int param_3);
 // line 0, offset 0x800ff238
void iSNDsetvol(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  
  iVar1 = param_1 * 0x2c;
  puVar5 = (ushort *)(DAT_80147e28 + param_1 * 0x10);
  if ((&DAT_80147a0f)[iVar1] == '\x01') {
    if (DAT_80147870 == '\x02') {
      *puVar5 = (short)param_2 * 0x81 & 0x7fff;
      puVar5[1] = (short)param_3 * 0x81 & 0x7fff;
      return;
    }
    iVar2 = param_2 + param_3;
    if ((&DAT_80147a0e)[iVar1] == '\x01') {
      if (param_2 < 0) {
        param_2 = -param_2;
      }
      if (param_3 < 0) {
        param_3 = -param_3;
      }
      if (0x7f < param_2) {
        param_2 = 0x7f;
      }
      iVar2 = param_2 + param_3;
      if (0x7f < param_3) {
        iVar2 = param_2 + 0x7f;
      }
    }
    uVar3 = (ushort)(iVar2 * 0x81 >> 1);
  }
  else {
    if (DAT_80147870 == '\x02') {
      *puVar5 = (short)param_2 * 0x81 & 0x7fff;
      puVar5[1] = 0;
      puVar4 = (undefined2 *)
               (DAT_80147e28 + ((int)((uint)(byte)(&DAT_80147a10)[iVar1] << 0x18) >> 0x14));
      *puVar4 = 0;
      puVar4[1] = (short)param_3 * 0x81 & 0x7fff;
      return;
    }
    uVar3 = (ushort)(param_2 * 0x81 >> 1) & 0x7fff;
    *puVar5 = uVar3;
    puVar5[1] = uVar3;
    uVar3 = (ushort)(param_3 * 0x81 >> 1);
    puVar5 = (ushort *)(DAT_80147e28 + ((int)((uint)(byte)(&DAT_80147a10)[iVar1] << 0x18) >> 0x14));
  }
  *puVar5 = uVar3 & 0x7fff;
  puVar5[1] = uVar3 & 0x7fff;
  return;
}




// decompiled code
// original method signature: 
// void iSNDsetslot(int param_1,int param_2,undefined2 param_3);
 // line 0, offset 0x800ff394
void iSNDsetslot(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = DAT_80147e28 + param_1 * 0x10;
  *(undefined2 *)(iVar1 + 8) = 0xf;
  *(undefined2 *)(iVar1 + 10) = 5;
  *(undefined2 *)(iVar1 + 4) = param_3;
  *(undefined2 *)(iVar1 + 6) = (short)(param_2 >> 3);
  *(undefined2 *)(iVar1 + 0xe) = 0x200;
  return;
}




// decompiled code
// original method signature: 
// uint iSNDstartvoice(uint param_1);
 // line 0, offset 0x800ff3cc
uint iSNDstartvoice(uint param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = param_1 * 0x2c;
  (&DAT_80147a14)[iVar2] = 0;
  (&DAT_80147a15)[iVar2] = 0;
  uVar4 = (undefined2)((uint)(&DAT_801479f8)[param_1 * 0xb] / 0x1b9);
  iSNDsetslot(param_1,*(int *)(&DAT_801479f0 + iVar2),uVar4);
  uVar6 = 1 << (param_1 & 0x1f);
  (&DAT_80147a0c)[iVar2] = 2;
  (&DAT_80147a0d)[iVar2] = 2;
  (&DAT_80147a16)[iVar2] = 0;
  if ((&DAT_80147a0f)[iVar2] == '\x02') {
    iVar3 = (int)(char)(&DAT_80147a10)[iVar2] * 0x2c;
    if ((int)((uint)(byte)(&DAT_80147a17)[iVar2] << 0x18) < 0) {
      iVar5 = (int)((ulonglong)(*(uint *)(&DAT_801479f4 + iVar2) >> 2) * 0x24924925 >> 0x20);
      if (*(uint *)(&DAT_801479f4 + iVar2) !=
          (int)((ulonglong)(*(uint *)(&DAT_801479f4 + iVar2) >> 2) * 0x24924925 >> 0x20) * 0x1c) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 << 4;
    }
    else {
      iVar5 = *(int *)(*(int *)((int)&DAT_80147e10 +
                               ((int)((uint)(byte)(&DAT_80147a17)[iVar2] << 0x18) >> 0x16)) + 8);
    }
    iSNDsetslot((int)(char)(&DAT_80147a10)[iVar2],*(int *)(&DAT_801479f0 + iVar2) + iVar5,uVar4);
    cVar1 = (&DAT_80147a10)[iVar2];
    (&DAT_80147a0c)[iVar3] = 2;
    (&DAT_80147a0d)[iVar3] = 2;
    (&DAT_80147a16)[iVar3] = 0;
    uVar6 = uVar6 | 1 << ((int)cVar1 & 0x1fU);
  }
  iSNDvol(param_1,(int)(char)(&DAT_80147a12)[iVar2]);
  iSNDplatformfxlevel(param_1,0,(int)(char)(&DAT_80147a13)[iVar2]);
  return uVar6;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformoutputcaps(void);
 // line 0, offset 0x800ff5a8
undefined4 iSNDplatformoutputcaps(void)

{
  sndgs._0_2_ = 0xac44;
  sndgs._2_2_ = 0xac44;
  DAT_80147864._0_1_ = 1;
  DAT_80147864._1_1_ = 2;
  DAT_80147864._2_1_ = 0x18;
  DAT_80147864._3_1_ = 0;
  DAT_80147868._0_1_ = 0;
  DAT_80147868._1_1_ = 0;
  DAT_8014786e = 0xac44;
  DAT_80147870 = 2;
  DAT_80147871 = 0x18;
  DAT_80147872 = 0;
  DAT_80147873 = 0;
  DAT_80147874._0_1_ = 0;
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformoutputset(void);
 // line 0, offset 0x800ff600
undefined4 iSNDplatformoutputset(void)

{
  undefined *puVar1;
  int iVar2;
  
  DAT_80147871 = 0x18;
  if (DAT_80147870 < (byte)DAT_80147864) {
    DAT_80147870 = (byte)DAT_80147864;
  }
  if (DAT_80147864._1_1_ < DAT_80147870) {
    DAT_80147870 = DAT_80147864._1_1_;
  }
  if ((DAT_8014789c != '\0') && (iVar2 = 0, DAT_8014791a != DAT_80147870)) {
    puVar1 = &DAT_801479f0;
    do {
      if ((puVar1[0x1c] == '\x02') && (puVar1[0x21] == '\0')) {
        iSNDsetvol(iVar2,(int)(char)puVar1[0x24],(int)(char)puVar1[0x25]);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x2c;
    } while (iVar2 < (int)(uint)DAT_80147871);
  }
  DAT_8014791a = DAT_80147870;
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDinit(void);
 // line 0, offset 0x800ff700
undefined4 iSNDinit(void)

{
  uint uVar1;
  dword *pdVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  uVar1 = Status;
  DAT_80147e32 = 0x41;
  DMA_DPCR = DMA_DPCR | 0xb0000;
  SPU_MAIN_VOL_L = 0;
  SPU_MAIN_VOL_R = 0;
  DAT_80147e34 = 0x2000;
  DAT_80147e14 = &SPU_DELAY;
  DAT_80147e18 = &DMA_SPU_MADR;
  DAT_80147e1c = &DMA_SPU_BCR;
  DAT_80147e20 = &DMA_SPU_CHCR;
  DAT_80147e24 = &DMA_DPCR;
  DAT_80147e28 = &VOICE_00_LEFT_RIGHT;
  DAT_80147e2c = &VOICE_00_LEFT_RIGHT;
  do {
  } while ((SPU_STATUS_REG_SPUSTAT & 0x7ff) != 0);
  puVar5 = &sndpd;
  SOUND_RAM_DATA_TRANSTER_CTRL = 4;
  SPU_VOICE_CHN_FM_MODE._0_2_ = 0;
  SPU_VOICE_CHN_FM_MODE._2_2_ = 0;
  SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
  SPU_VOICE_CHN_NOISE_MODE._2_2_ = 0;
  CD_VOL_L = 0;
  CD_VOL_R = 0;
  EXT_VOL_L = 0;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  EXT_VOL_R = 0;
  SPU_CTRL_REG_CPUCNT = 0xc000;
  DMACallback();
  setCopReg(0,Status,uVar1,0);
  iSNDdmqueue((int)&sndpdsafeloop,0x1000,0x10,1,0);
  iVar3 = 0;
  if (DAT_80147871 != 0) {
    do {
      iVar4 = iVar3 + 1;
      pdVar2 = DAT_80147e28 + iVar3 * 4;
      *(undefined2 *)pdVar2 = 0;
      *(undefined2 *)((int)pdVar2 + 2) = 0;
      *(undefined2 *)(pdVar2 + 1) = 0;
      *(undefined2 *)((int)pdVar2 + 6) = 0x200;
      *(undefined2 *)((int)pdVar2 + 0xe) = 0x200;
      *(undefined2 *)(pdVar2 + 2) = 0;
      *(undefined2 *)((int)pdVar2 + 10) = 0;
      puVar5[0xff] = 0xff;
      puVar5 = puVar5 + 0x2c;
      iVar3 = iVar4;
    } while (iVar4 < (int)(uint)DAT_80147871);
  }
  iSNDpsxkeyon(0xffffff);
  *(undefined2 *)((int)DAT_80147e2c + 0x1a2) = 0xfffe;
  *(undefined2 *)(DAT_80147e2c + 0x60) = 0x3fff;
  *(undefined2 *)((int)DAT_80147e2c + 0x182) = 0x3fff;
  *(ushort *)((int)DAT_80147e2c + 0x1aa) = *(ushort *)((int)DAT_80147e2c + 0x1aa) | 1;
  iSNDpsxfxinit(DAT_8014791c);
  DAT_80147919 = 0;
  addtimer((int)iSNDserver);
  if (sndpd == '\0') {
    addexit((int)SNDSYS_restore);
    sndpd = '\x01';
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDrestore(void);
 // line 0, offset 0x800ff9a0
undefined4 iSNDrestore(void)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  if (DAT_8014789f != '\0') {
    do {
      iSNDleaveaudio();
    } while (DAT_8014789f != '\0');
  }
  uVar4 = DAT_801478a4 + 100;
  do {
    bVar1 = true;
    iVar2 = 0;
    puVar3 = &sndpd;
    if (DAT_80147871 != 0) {
      do {
        if ((puVar3[0xf5] != '\0') && (bVar1 = false, uVar4 < DAT_801478a4)) {
          iSNDpsxkeyoff(0xffffff);
          puVar3[0xf5] = 0;
          iSNDfreechan(iVar2);
          bVar1 = false;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x2c;
      } while (iVar2 < (int)(uint)DAT_80147871);
    }
    SNDSYS_service();
  } while (!bVar1);
  deltimer((int)iSNDserver);
  iSNDpsxfxinit(0);
  uVar4 = Status;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  DMACallback();
  setCopReg(0,Status,uVar4,0);
  return 0;
}




// decompiled code
// original method signature: 
// void iSNDserve(void);
 // line 0, offset 0x800ffaf4
void iSNDserve(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  uint local_30;
  
  local_30 = 0;
  uVar5 = 0;
  if (DAT_80148038 != (code *)0x0) {
    (*DAT_80148038)();
  }
  uVar7 = 0;
  if (DAT_80147871 != 0) {
    iVar8 = 0;
    do {
      puVar3 = &DAT_801479f0 + iVar8;
      puVar6 = (undefined2 *)(DAT_80147e28 + uVar7 * 0x10);
      if ((&DAT_80147a0d)[iVar8] == '\x02') {
        if (puVar6[6] == 0) {
          if ((((&DAT_80147a16)[iVar8] != '\0') && ((&DAT_80147a11)[iVar8] == '\0')) &&
             ((int)((uint)(byte)(&DAT_80147a17)[iVar8] << 0x18) < 0)) {
            uVar1 = (uint)(byte)(&DAT_80147a0f)[iVar8];
            do {
              uVar4 = uVar7;
              iVar2 = iVar8;
              if (uVar1 == 2) {
                uVar4 = (int)(char)puVar3[0x20];
                iVar2 = (int)(char)puVar3[0x20] * 0x2c;
              }
              puVar3 = &DAT_801479f0 + iVar2;
              (&DAT_80147a0d)[iVar2] = 0;
              (&DAT_80147a0c)[iVar2] = 0;
              uVar1 = uVar1 - 1;
              iSNDfreechan(uVar4);
              iVar2 = uVar4 * 0x10;
              *(undefined2 *)(iVar2 + DAT_80147e28 + 6) = 0x200;
              uVar5 = uVar5 | 1 << (uVar4 & 0x1f);
              *(undefined2 *)(iVar2 + DAT_80147e28) = 0;
              *(undefined2 *)(iVar2 + DAT_80147e28 + 2) = 0;
            } while (0 < (int)uVar1);
          }
        }
        else {
          (&DAT_80147a16)[iVar8] = 1;
        }
        if (puVar3[0x28] != '\0') {
          puVar6[2] = (short)(*(uint *)(puVar3 + 8) / 0x1b9);
          puVar3[0x28] = 0;
        }
        if (*(int *)(puVar3 + 0x10) < 1) {
          *(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) + *(int *)(puVar3 + 8);
          if (*(uint *)(puVar3 + 0x14) <= *(uint *)(puVar3 + 0xc)) {
            if ((int)((uint)(byte)puVar3[0x27] << 0x18) < 0) {
              *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar3 + 0x14);
            }
            else {
              *(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) - *(int *)(puVar3 + 0x14);
            }
          }
        }
        else {
          *(int *)(puVar3 + 0x10) = *(int *)(puVar3 + 0x10) - *(int *)(puVar3 + 8);
        }
      }
      else {
        if ((&DAT_80147a0d)[iVar8] == '\x03') {
          if (puVar6[6] == 0) {
            uVar5 = uVar5 | 1 << (uVar7 & 0x1f);
            (&DAT_80147a0d)[iVar8] = 0;
            puVar6[3] = 0x200;
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          else {
            local_30 = local_30 | 1 << (uVar7 & 0x1f);
          }
        }
      }
      if (((puVar3[0x1c] == '\x01') && (puVar3[0x1d] == '\0')) &&
         (((byte)puVar3[0x1f] < 2 || ((&DAT_80147a0d)[(int)(char)puVar3[0x20] * 0x2c] == '\0')))) {
        uVar1 = iSNDstartvoice(uVar7);
        uVar5 = uVar5 | uVar1;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x2c;
    } while ((int)uVar7 < (int)(uint)DAT_80147871);
  }
  if (local_30 != 0) {
    iSNDpsxkeyoff(local_30);
  }
  if (uVar5 != 0) {
    iSNDpsxkeyon(uVar5);
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSNDstop(uint param_1);
 // line 0, offset 0x800ffe90
undefined4 iSNDstop(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 * 0x2c;
  if (-1 < (int)((uint)(byte)(&DAT_80147a17)[iVar1] << 0x18)) {
    (*DAT_8014803c)(&DAT_801479f0 + iVar1);
  }
  iSNDfreechan(param_1);
  (&DAT_80147a0d)[iVar1] = 3;
  (&DAT_80147a0c)[iVar1] = 0;
  uVar3 = 1 << (param_1 & 0x1f);
  if (1 < (byte)(&DAT_80147a0f)[iVar1]) {
    uVar2 = SEXT14((char)(&DAT_80147a10)[iVar1]);
    iSNDfreechan(uVar2);
    uVar3 = uVar3 | 1 << (uVar2 & 0x1f);
    (&DAT_80147a0d)[uVar2 * 0x2c] = 3;
    (&DAT_80147a0c)[uVar2 * 0x2c] = 0;
  }
  iSNDpsxkeyoff(uVar3);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformpitch(int param_1,int param_2);
 // line 0, offset 0x800fff94
undefined4 iSNDplatformpitch(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x2c;
  (&DAT_801479f8)[param_1 * 0xb] =
       ((int)((uint)*(ushort *)(&DAT_80147a0a + iVar1) * param_2) >> 0xc) * 0x1b9;
  (&DAT_80147a18)[iVar1] = 1;
  if ((&DAT_80147a0f)[iVar1] == '\x02') {
    (&DAT_801479f8)[(int)(char)(&DAT_80147a10)[iVar1] * 0xb] = (&DAT_801479f8)[param_1 * 0xb];
    (&DAT_80147a18)[(int)(char)(&DAT_80147a10)[iVar1] * 0x2c] = 1;
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformfxlevel(uint param_1,undefined4 param_2,int param_3);
 // line 0, offset 0x80100058
undefined4 iSNDplatformfxlevel(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 * 0x2c;
  if ((&DAT_80147a0c)[iVar1] == '\x02') {
    uVar2 = 1 << (param_1 & 0x1f);
    if ((&DAT_80147a0f)[iVar1] == '\x02') {
      uVar2 = uVar2 | 1 << ((uint)(byte)(&DAT_80147a10)[iVar1] & 0x1f);
    }
    if (param_3 == 0) {
      iSNDpsxeffectoff(uVar2);
    }
    else {
      iSNDpsxeffecton(uVar2);
    }
  }
  else {
    (&DAT_80147a13)[iVar1] = (char)param_3;
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDvol(int param_1,int param_2);
 // line 0, offset 0x801000f8
/* WARNING: Could not reconcile some variable overlaps */

undefined4 iSNDvol(int param_1,int param_2)

{
  int iVar1;
  uint local_18;
  uint local_14;
  
  iVar1 = param_1 * 0x2c;
  if ((&DAT_80147a0c)[iVar1] == '\x02') {
    if ((&DAT_80147a0e)[iVar1] == '\0') {
      iSNDatolrv((uint)*(ushort *)(&DAT_80147a08 + iVar1),param_2,&local_18,&local_14);
    }
    else {
      if ((&DAT_80147a0e)[iVar1] == '\x01') {
        iSNDatodlrv((uint)*(ushort *)(&DAT_80147a08 + iVar1),param_2,&local_18,&local_14,
                    (int)(char)(&DAT_80147a14)[iVar1],(int)(char)(&DAT_80147a15)[iVar1]);
      }
    }
    (&DAT_80147a14)[iVar1] = (undefined)local_18;
    (&DAT_80147a15)[iVar1] = (undefined)local_14;
    iSNDsetvol(param_1,local_18,local_14);
  }
  else {
    (&DAT_80147a12)[iVar1] = (char)param_2;
  }
  return 0;
}




// decompiled code
// original method signature: 
// void SNDI_mutexalloc(void);
 // line 0, offset 0x801001ec
void SNDI_mutexalloc(void)

{
  return;
}




// decompiled code
// original method signature: 
// void SNDI_mutexfree(void);
 // line 0, offset 0x801001f4
void SNDI_mutexfree(void)

{
  return;
}




// decompiled code
// original method signature: 
// void SNDI_mutexlock(void);
 // line 0, offset 0x801001fc
void SNDI_mutexlock(void)

{
  return;
}




// decompiled code
// original method signature: 
// void SNDI_mutexunlock(void);
 // line 0, offset 0x80100204
void SNDI_mutexunlock(void)

{
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxfxinit(int param_1);
 // line 0, offset 0x8010020c
void iSNDpsxfxinit(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined auStack352 [256];
  ushort local_60;
  short local_5e;
  short local_5c;
  undefined2 local_50;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_3e;
  short local_3c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  
  if (param_1 != 0) {
    if (param_1 == 5) {
      param_1 = 1;
    }
    else {
      if (param_1 == 10) {
        param_1 = 2;
      }
      else {
        if (param_1 == 0x14) {
          param_1 = 3;
        }
        else {
          if (param_1 == 0x1e) {
            param_1 = 4;
          }
          else {
            if (param_1 == 0x28) {
              param_1 = 5;
            }
            else {
              if (param_1 == 0x32) {
                param_1 = 6;
              }
              else {
                if (param_1 == 100) {
                  param_1 = 9;
                }
                else {
                  if (param_1 == 0x6e) {
                    param_1 = 8;
                  }
                  else {
                    if (param_1 == 0x78) {
                      param_1 = 7;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_80147e36 = (undefined2)((int)(0x10000 - (uint)*(ushort *)(&sndpe + param_1 * 0x42)) >> 3);
  iSNDpsxeffectoff(0xffffff);
  iSNDpsxeffectvol(0,0);
  puVar4 = (undefined4 *)&local_60;
  blockmove((undefined4 *)(&sndpe + param_1 * 0x42),puVar4,0x42);
  if (param_1 - 7U < 2) {
    local_4a = (short)((DAT_80147904 * 0x2000) / 0x7f) - local_5e;
    local_48 = (short)((DAT_80147904 * 0x1000) / 0x7f) - local_5c;
    local_46 = local_44 + (short)((DAT_80147904 * 0x1000) / 0x7f);
    local_3e = local_3c + (short)((DAT_80147904 * 0x1000) / 0x7f);
    local_2a = local_26 + (short)((DAT_80147904 * 0x1000) / 0x7f);
    local_28 = local_24 + (short)((DAT_80147904 * 0x1000) / 0x7f);
    local_50 = (undefined2)((DAT_80147908 * 0x8100) / 0x7f);
  }
  iVar5 = 0;
  *(ushort *)(DAT_80147e2c + 0x1aa) = *(ushort *)(DAT_80147e2c + 0x1aa) & 0xff7f;
  do {
    puVar1 = (undefined2 *)((int)puVar4 + 2);
    puVar4 = (undefined4 *)((int)puVar4 + 2);
    iVar2 = iVar5 * 2;
    iVar5 = iVar5 + 1;
    *(undefined2 *)(iVar2 + DAT_80147e2c + 0x1c0) = *puVar1;
  } while (iVar5 < 0x20);
  iVar5 = 0x10000 - (uint)local_60;
  *(undefined2 *)(DAT_80147e2c + 0x1a2) = (short)iVar5;
  blockclear(auStack352,0x100);
  while (iVar5 < 0x10000) {
    iVar2 = 0x10000 - iVar5;
    if (0x20 < iVar2) {
      iVar2 = 0x20;
    }
    iVar2 = iSNDdmqueue((int)auStack352,iVar5 << 3,iVar2 << 3,1,0);
    iVar5 = iVar5 + 0x20;
    do {
      iVar3 = iSNDdmcomplete(iVar2);
    } while (iVar3 == 0);
  }
  *(ushort *)(DAT_80147e2c + 0x1aa) = *(ushort *)(DAT_80147e2c + 0x1aa) | 0x80;
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformfxinit(undefined4 param_1,int param_2);
 // line 0, offset 0x80100584
undefined4 iSNDplatformfxinit(undefined4 param_1,int param_2)

{
  DAT_8014791c = param_2;
  if (DAT_8014789c != '\0') {
    DAT_8014791c = param_2;
    iSNDpsxfxinit(param_2);
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformfxmasterlevel(undefined4 param_1,short param_2);
 // line 0, offset 0x801005bc
undefined4 iSNDplatformfxmasterlevel(undefined4 param_1,short param_2)

{
  iSNDpsxeffectvol(param_2 * 0x102,param_2 * 0x102);
  return 0;
}




// decompiled code
// original method signature: 
// uint SNDfxlevel(uint param_1,int param_2,int param_3);
 // line 0, offset 0x801005e8
uint SNDfxlevel(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint local_20 [2];
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDenteraudio();
    uVar1 = iSNDgetchan(param_1);
    if (-1 < (int)uVar1) {
      local_20[0] = 0xffffffff;
      while (iVar2 = iSNDpatchkey(uVar1,(int *)local_20), iVar2 != 0) {
        iVar2 = DAT_801478f4 + local_20[0] * 100 + param_2;
        *(undefined *)(iVar2 + 0x35) = (char)param_3;
        iSNDplatformfxlevel(local_20[0],param_2,
                            (param_3 * (int)*(char *)(iVar2 + 0x34) * (&DAT_80147900)[param_2 * 4])
                            / 0x3f01);
      }
    }
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_GetMatchValue(int param_1,int param_2);
 // line 0, offset 0x80100710
undefined4 iSPCH_GetMatchValue(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4 + 8);
}




// decompiled code
// original method signature: 
// uint VoxSentence_GetShortRule(int param_1);
 // line 0, offset 0x80100724
uint VoxSentence_GetShortRule(int param_1)

{
  return (uint)*(byte *)(param_1 + 3) & 3;
}




// decompiled code
// original method signature: 
// uint VoxSentence_GetNumPhrases(int param_1);
 // line 0, offset 0x80100730
uint VoxSentence_GetNumPhrases(int param_1)

{
  return (uint)(*(byte *)(param_1 + 3) >> 2);
}




// decompiled code
// original method signature: 
// uint VoxEvent_GetFilterLengthFlag(int param_1);
 // line 0, offset 0x8010073c
uint VoxEvent_GetFilterLengthFlag(int param_1)

{
  return (uint)*(byte *)(param_1 + 10) & 1;
}




// decompiled code
// original method signature: 
// int iSPCH_GetOffset8(int param_1,int param_2,int param_3);
 // line 0, offset 0x80100748
int iSPCH_GetOffset8(int param_1,int param_2,int param_3)

{
  return param_1 + (uint)*(byte *)(param_2 + param_3) * 4;
}




// decompiled code
// original method signature: 
// int iSPCH_GetOffset16(int param_1,int param_2,int param_3);
 // line 0, offset 0x80100760
int iSPCH_GetOffset16(int param_1,int param_2,int param_3)

{
  return param_1 + (uint)*(ushort *)(param_3 * 2 + param_2) * 4;
}




// decompiled code
// original method signature: 
// int iSPCH_MatchSample(undefined4 param_1,int param_2,int param_3,int param_4);
 // line 0, offset 0x8010077c
int iSPCH_MatchSample(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)*(char *)(param_3 + 3);
  iVar6 = 1;
  if (iVar7 < 5) {
    iVar4 = 0;
    iVar2 = param_2;
    if (0 < iVar7) {
      while( true ) {
        iVar6 = 0;
        if (0x1f < *(byte *)(iVar2 + 0xc)) break;
        bVar1 = *(byte *)(param_3 + iVar4 + 4);
        uVar5 = 1 << ((uint)*(byte *)(iVar2 + 0xc) & 0x1f);
        uVar3 = iSPCH_GetMatchValue(param_3,iVar4);
        if (((uVar5 & uVar3) != 0) &&
           (((bVar1 & 0xf) == 0 || ((uVar5 & *(uint *)(((uint)bVar1 & 0xf) * 4 + param_4)) != 0))))
        {
          iVar6 = 1;
        }
        iVar4 = iVar4 + 1;
        if (iVar6 == 0) {
          return 0;
        }
        iVar2 = param_2 + iVar4;
        if (iVar7 <= iVar4) {
          return iVar6;
        }
      }
    }
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}




// decompiled code
// original method signature: 
// uint iSPCH_GetPhraseBank(short *param_1,int param_2,short *param_3);
 // line 0, offset 0x80100880
uint iSPCH_GetPhraseBank(short *param_1,int param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  int *piVar7;
  
  sVar2 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  param_3[1] = -1;
  *param_3 = -1;
  bVar3 = bVar1 >> 4;
  uVar6 = (uint)bVar1 & 0xf;
  if (bVar3 == 1) {
    iVar4 = *(int *)(uVar6 * 4 + param_2);
    sVar5 = (short)iVar4;
    if ((-1 < iVar4) && (**(short **)(iVar4 * 4 + gVoxBanks) != sVar2)) {
      sVar5 = -1;
    }
  }
  else {
    if (bVar3 == 0) {
      iVar4 = iSPCH_FindBank(sVar2);
      *param_3 = (short)iVar4;
      goto LAB_8010096c;
    }
    if (bVar3 != 2) goto LAB_8010096c;
    iVar4 = iSPCH_FindBank(sVar2);
    sVar5 = (short)iVar4;
    piVar7 = (int *)(uVar6 * 4 + param_2);
    uVar6 = iSPCH_TestSubBankBounds(iVar4,*piVar7);
    if (uVar6 == 0) {
      sVar5 = -1;
    }
    else {
      param_3[1] = *(short *)piVar7;
    }
  }
  *param_3 = sVar5;
LAB_8010096c:
  return (uint)~(int)*param_3 >> 0x1f;
}




// decompiled code
// original method signature: 
// int iSPCH_GetBankBits(int param_1);
 // line 0, offset 0x80100994
int iSPCH_GetBankBits(int param_1)

{
  return param_1 + 8 + (uint)*(byte *)(param_1 + 3) * (((uint)*(byte *)(param_1 + 2) & 0xf) + 2);
}




// decompiled code
// original method signature: 
// void iSPCH_ClearCycleBit(int param_1,int param_2);
 // line 0, offset 0x801009b8
void iSPCH_ClearCycleBit(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 7;
  }
  iVar2 = iSPCH_GetBankBits(param_1);
  pbVar3 = (byte *)(iVar2 + (iVar1 >> 3) + 1);
  *pbVar3 = *pbVar3 & ~(byte)(1 << (param_2 + (iVar1 >> 3) * -8 & 0x1fU));
  return;
}




// decompiled code
// original method signature: 
// uint iSPCH_CheckBankBit(int param_1,int param_2);
 // line 0, offset 0x80100a1c
uint iSPCH_CheckBankBit(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = param_2 + 7;
  }
  iVar1 = iSPCH_GetBankBits(param_1);
  return (uint)*(byte *)(iVar1 + (iVar2 >> 3)) & 1 << (param_2 + (iVar2 >> 3) * -8 & 0x1fU);
}




// decompiled code
// original method signature: 
// uint iSPCH_CheckTemplateSample(int param_1,int param_2,int param_3);
 // line 0, offset 0x80100a70
uint iSPCH_CheckTemplateSample(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((int)*(short *)(param_1 + 2) < (int)(uint)*(ushort *)(param_2 + 6)) {
    uVar1 = iSPCH_CheckBankBit(param_2,param_3 + (uint)*(byte *)(param_2 + 3) *
                                                 (int)*(short *)(param_1 + 2));
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint iSPCH_SampleExists(int param_1,int param_2,int param_3);
 // line 0, offset 0x80100ac0
uint iSPCH_SampleExists(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((int)(uint)*(byte *)(param_2 + 3) < param_3) {
    uVar1 = 0;
  }
  else {
    if (*(short *)(param_1 + 2) != -1) {
      uVar1 = iSPCH_CheckTemplateSample(param_1,param_2,param_3);
    }
    if ((*(byte *)(param_2 + 2) & 0xf0) != 0) {
      uVar1 = iSPCH_CheckBankBit(param_2,param_3 + 8);
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// int iSPCH_ChooseSamples(short *param_1,int param_2,int param_3,int param_4);
 // line 0, offset 0x80100b4c
int iSPCH_ChooseSamples(short *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int aiStack56 [4];
  
  uVar5 = 0;
  sVar2 = *param_1;
  iVar8 = *(int *)((int)sVar2 * 4 + gVoxBanks);
  bVar1 = *(byte *)(iVar8 + 3);
  iVar7 = (int)param_1[3];
  iVar6 = 0;
  if (bVar1 != 0) {
    do {
      iVar3 = iSPCH_UnPackSample(iVar8,uVar5,aiStack56);
      if ((iVar3 != 0) &&
         (iVar3 = iSPCH_MatchSample((int)sVar2,(int)aiStack56,param_3,param_4), iVar3 != 0)) {
        uVar4 = iSPCH_SampleExists((int)param_1,iVar8,uVar5);
        if (uVar4 != 0) {
          (&ispch_gPickSamples)[iVar7] = (char)uVar5;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 1;
          if (param_2 <= iVar6) {
            return iVar6;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(uint)bVar1);
  }
  return iVar6;
}




// decompiled code
// original method signature: 
// int iSPCH_SampleLength(short *param_1);
 // line 0, offset 0x80100c5c
int iSPCH_SampleLength(short *param_1)

{
  int iVar1;
  int iVar2;
  int local_18 [4];
  
  iVar1 = iSPCH_UnPackSample(*(int *)((int)*param_1 * 4 + gVoxBanks),
                             (uint)(byte)(&ispch_gPickSamples)[(int)param_1[4]],local_18);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = local_18[0];
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// int iSPCH_ConvertTime(int param_1);
 // line 0, offset 0x80100cc4
int iSPCH_ConvertTime(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (gDataRate != 0) {
    iVar1 = (param_1 * 100) / gDataRate;
    if (gDataRate == 0) {
      trap(0x1c00);
    }
    if ((gDataRate == -1) && (param_1 * 100 == -0x80000000)) {
      trap(0x1800);
    }
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// void iSPCH_SentenceLength(int param_1);
 // line 0, offset 0x80100d20
void iSPCH_SentenceLength(int param_1)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = VoxSentence_GetNumPhrases(param_1);
  iVar4 = 0;
  if (0 < (int)uVar1) {
    psVar3 = &ispch_gChoice;
    do {
      iVar2 = iSPCH_SampleLength(psVar3);
      iVar5 = iVar5 + iVar2;
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 6;
    } while (iVar4 < (int)uVar1);
  }
  iSPCH_ConvertTime(iVar5);
  return;
}




// decompiled code
// original method signature: 
// void iSPCH_OrderSentences(int param_1,int param_2);
 // line 0, offset 0x80100d94
void iSPCH_OrderSentences(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte local_88 [104];
  
  iVar7 = 0;
  bVar1 = *(byte *)(param_1 + 6);
  uVar8 = (uint)bVar1;
  iVar5 = 0;
  if (bVar1 != 0) {
    do {
      pbVar3 = (byte *)iSPCH_GetOffset16(param_1,param_1 + 0xc,iVar5);
      local_88[iVar5] = *pbVar3;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + (uint)*pbVar3;
    } while (iVar5 < (int)uVar8);
  }
  iVar5 = 0;
  if (0 < iVar7) {
    do {
      iVar2 = iSPCH_Rand(iVar7);
      iVar6 = 0;
      pbVar3 = local_88;
      if (bVar1 != 0) {
        do {
          iVar2 = iVar2 - (uint)*pbVar3;
          if (iVar2 < 0) break;
          iVar6 = iVar6 + 1;
          pbVar3 = local_88 + iVar6;
        } while (iVar6 < (int)uVar8);
      }
      *(undefined *)(param_2 + iVar5) = (char)iVar6;
      pbVar3 = local_88 + iVar6;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 - (uint)*pbVar3;
      *pbVar3 = 0;
    } while (0 < iVar7);
  }
  iVar7 = 0;
  if (bVar1 != 0) {
    do {
      pcVar4 = (char *)iSPCH_GetOffset16(param_1,param_1 + 0xc,iVar7);
      if (*pcVar4 == '\0') {
        *(undefined *)(param_2 + iVar5) = (char)iVar7;
        iVar5 = iVar5 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar8);
  }
  return;
}




// decompiled code
// original method signature: 
// uint iSPCH_RepeatEvent(ushort *param_1);
 // line 0, offset 0x80100ee0
uint iSPCH_RepeatEvent(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (((uint)*param_1 == gVoxInGame) && (0 < (int)*(char *)(param_1 + 4))) {
    uVar1 = (uint)(DAT_8014805c < (int)*(char *)(param_1 + 4));
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_ShortRuleStatus(int param_1,int param_2);
 // line 0, offset 0x80100f24
undefined4 iSPCH_ShortRuleStatus(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = VoxSentence_GetShortRule(param_1);
  if ((((uVar1 == 1) && (param_2 == 2)) || ((uVar1 == 2 && (param_2 != 2)))) ||
     (uVar2 = 0, uVar1 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_SentenceGetChoices(int param_1,int param_2,byte param_3,byte param_4,int param_5);
 // line 0, offset 0x80100f8c
undefined4 iSPCH_SentenceGetChoices(int param_1,int param_2,byte param_3,byte param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  
  iVar8 = 0;
  uVar1 = VoxSentence_GetNumPhrases(param_1);
  uVar6 = 1;
  if ((int)uVar1 < 0xd) {
    iVar2 = iSPCH_ShortRuleStatus(param_1,param_5);
    if ((iVar2 == 0) || (uVar3 = iSPCH_CheckSentenceRules(param_3,param_4,param_1), uVar3 == 0)) {
LAB_80101008:
      uVar6 = 0;
    }
    else {
      iVar2 = 0;
      uVar6 = 1;
      if (0 < (int)uVar1) {
        psVar7 = &ispch_gChoice;
        do {
          psVar7[3] = (short)iVar8;
          psVar4 = (short *)iSPCH_GetOffset8(param_1,param_1 + 4,iVar2);
          uVar3 = iSPCH_GetPhraseBank(psVar4,param_2,psVar7);
          if (uVar3 == 0) {
            if (*psVar7 != -2) {
              return 0;
            }
            *psVar7 = -1;
            return 0xffffffff;
          }
          iVar5 = iSPCH_ChooseSamples(psVar7,100 - iVar8,(int)psVar4,param_2);
          iVar8 = iVar8 + iVar5;
          if (iVar5 == 0) goto LAB_80101008;
          psVar7[2] = (short)iVar5;
          iVar2 = iVar2 + 1;
          psVar7 = psVar7 + 6;
          uVar6 = 1;
        } while (iVar2 < (int)uVar1);
      }
    }
  }
  return uVar6;
}




// decompiled code
// original method signature: 
// void iSPCH_RandomizeSentencePicks(int param_1);
 // line 0, offset 0x801010cc
void iSPCH_RandomizeSentencePicks(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = VoxSentence_GetNumPhrases(param_1);
  iVar10 = 0;
  if (0 < (int)uVar2) {
    puVar8 = &ispch_gChoice;
    do {
      iVar6 = 0;
      iVar9 = (int)((uint)(ushort)puVar8[2] << 0x10) >> 0x10;
      iVar3 = (int)(iVar9 + (((uint)(ushort)puVar8[2] << 0x10) >> 0x1f)) >> 1;
      puVar7 = &ispch_gPickSamples + (int)(short)puVar8[3];
      if (0 < iVar3) {
        do {
          iVar4 = iSPCH_Rand(iVar9);
          puVar5 = puVar7 + iVar6;
          uVar1 = *puVar5;
          iVar6 = iVar6 + 1;
          *puVar5 = puVar7[iVar4];
          puVar7[iVar4] = uVar1;
        } while (iVar6 < iVar3);
      }
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 6;
    } while (iVar10 < (int)uVar2);
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_IterateChoice(int param_1);
 // line 0, offset 0x801011ac
undefined4 iSPCH_IterateChoice(int param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  uVar3 = VoxSentence_GetNumPhrases(param_1);
  iVar7 = uVar3 - 1;
  bVar2 = false;
  iVar6 = (int)(short)(&DAT_801484ea)[iVar7 * 6] + (int)(short)(&DAT_801484e8)[iVar7 * 6];
  puVar4 = &ispch_gChoice + iVar7 * 6;
  do {
    sVar1 = puVar4[4];
    puVar4[4] = sVar1 + 1;
    if ((int)(short)(sVar1 + 1) < iVar6) {
      bVar2 = true;
      puVar5 = puVar4;
    }
    else {
      iVar7 = iVar7 + -1;
      puVar4[4] = puVar4[3];
      puVar5 = puVar4 + -6;
      if (iVar7 < 0) {
        bVar2 = true;
        uVar8 = 1;
      }
      iVar6 = (int)(short)puVar4[-3] + (int)(short)puVar4[-4];
    }
    puVar4 = puVar5;
  } while (!bVar2);
  return uVar8;
}




// decompiled code
// original method signature: 
// int iSPCH_ChooseShortSentence(int param_1);
 // line 0, offset 0x8010125c
int iSPCH_ChooseShortSentence(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar1 = VoxSentence_GetNumPhrases(param_1);
  iVar3 = 0;
  iVar5 = 0;
  if (0 < (int)uVar1) {
    puVar2 = &ispch_gChoice;
    do {
      iVar3 = iVar3 + 1;
      puVar2[4] = puVar2[3];
      puVar2 = puVar2 + 6;
    } while (iVar3 < (int)uVar1);
  }
  while ((iVar4 == 0 && (iVar5 == 0))) {
    iVar4 = iSPCH_SentenceLength(param_1);
    iVar3 = GetFilterLength();
    if (iVar4 < iVar3) {
      iVar5 = 1;
      iVar4 = 1;
    }
    else {
      iVar4 = iSPCH_IterateChoice(param_1);
    }
  }
  return iVar5;
}




// decompiled code
// original method signature: 
// int iSPCH_SentenceMakeChoice(int param_1,int param_2);
 // line 0, offset 0x80101310
int iSPCH_SentenceMakeChoice(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 == 1) {
    iSPCH_RandomizeSentencePicks(param_1);
    iVar5 = iSPCH_ChooseShortSentence(param_1);
  }
  else {
    uVar1 = VoxSentence_GetNumPhrases(param_1);
    iVar4 = 0;
    if (0 < (int)uVar1) {
      iVar5 = 1;
      puVar3 = &ispch_gChoice;
      do {
        iVar4 = iVar4 + 1;
        iVar2 = iSPCH_Rand((int)(short)puVar3[2]);
        puVar3[4] = puVar3[3] + (short)iVar2;
        puVar3 = puVar3 + 6;
      } while (iVar4 < (int)uVar1);
    }
  }
  return iVar5;
}




// decompiled code
// original method signature: 
// void iSPCH_ConstantRuleSet(ushort *param_1,int param_2);
 // line 0, offset 0x801013bc
void iSPCH_ConstantRuleSet(ushort *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int aiStack56 [3];
  byte local_2c [4];
  
  if (gSentenceRuleSet != (code *)0x0) {
    uVar2 = VoxSentence_GetNumPhrases(param_2);
    iVar8 = 0;
    if (0 < (int)uVar2) {
      psVar7 = &ispch_gChoice;
      do {
        iVar3 = iSPCH_GetOffset8(param_2,param_2 + 4,iVar8);
        iVar6 = 0;
        iVar5 = iVar3;
        do {
          bVar1 = *(byte *)(iVar5 + 4) >> 4;
          if (bVar1 != 0xf) {
            uVar4 = iSPCH_GetRuleID((int)param_1,(uint)bVar1);
            iVar5 = iSPCH_UnPackSample(*(int *)((int)*psVar7 * 4 + gVoxBanks),
                                       (uint)(byte)(&ispch_gPickSamples)[(int)psVar7[4]],aiStack56);
            if (iVar5 != 0) {
              (*gSentenceRuleSet)((uint)*param_1,uVar4,1 << ((uint)local_2c[iVar6] & 0x1f));
            }
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar3 + iVar6;
        } while (iVar6 < 4);
        iVar8 = iVar8 + 1;
        psVar7 = psVar7 + 6;
      } while (iVar8 < (int)uVar2);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void iSPCH_MakeSampleRequests(int param_1,undefined4 param_2);
 // line 0, offset 0x80101508
void iSPCH_MakeSampleRequests(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int local_38;
  int local_34;
  
  iVar7 = 0;
  uVar2 = VoxSentence_GetNumPhrases(param_1);
  iVar6 = 0;
  if (0 < (int)uVar2) {
    psVar5 = &ispch_gChoice;
    do {
      iVar4 = *(int *)((int)*psVar5 * 4 + gVoxBanks);
      bVar1 = (&ispch_gPickSamples)[(int)psVar5[4]];
      if (((*(byte *)(iVar4 + 2) & 0xf0) != 0) && (gClearCycle != 0)) {
        iSPCH_ClearCycleBit(iVar4,(uint)bVar1);
      }
      iVar3 = iSPCH_UnPackSample(iVar4,(uint)bVar1,&local_38);
      if (iVar3 != 0) {
        iVar3 = local_34;
        if ((int)psVar5[1] != -1) {
          iVar3 = local_34 + (int)psVar5[1] * (uint)*(ushort *)(iVar4 + 4) * 0x100;
        }
        iVar7 = iVar7 + local_38;
        (*gSampleRequest)((int)*psVar5,iVar3,local_38,param_2);
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 6;
    } while (iVar6 < (int)uVar2);
  }
  iSPCH_ConvertTime(iVar7);
  return;
}




// decompiled code
// original method signature: 
// void iSPCH_ClearChosen(void);
 // line 0, offset 0x80101650
void iSPCH_ClearChosen(void)

{
  DAT_80148448 = 0;
  return;
}




// decompiled code
// original method signature: 
// void iSPCH_SaveChosenSentence(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
 // line 0, offset 0x8010165c
void iSPCH_SaveChosenSentence
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &gSentenceChoice;
  gSentenceChoice = param_1;
  DAT_80148440 = param_2;
  DAT_80148444 = param_3;
  do {
    uVar1 = *param_4;
    param_4 = param_4 + 1;
    iVar3 = iVar3 + 1;
    puVar2[4] = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0xc);
  DAT_80148448 = 1;
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_OneChosen(void);
 // line 0, offset 0x801016a4
undefined4 iSPCH_OneChosen(void)

{
  return DAT_80148448;
}




// decompiled code
// original method signature: 
// void iSPCH_PlayChosen(void);
 // line 0, offset 0x801016b4
void iSPCH_PlayChosen(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = iSPCH_OneChosen();
  iVar1 = DAT_8014844c;
  if (iVar2 != 0) {
    iSPCH_RuleSet(gSentenceChoice,DAT_80148444,(int)&DAT_8014844c);
    iSPCH_ConstantRuleSet(gSentenceChoice,DAT_80148440);
    iSPCH_MakeSampleRequests(DAT_80148440,iVar1);
    if (iVar1 == gVoxInGame) {
      DAT_8014805c = DAT_8014805c + 1;
    }
    else {
      DAT_8014805c = 1;
      gVoxInGame = iVar1;
    }
  }
  iSPCH_ClearChosen();
  return;
}




// decompiled code
// original method signature: 
// int iSPCH_ChooseSentence(uint *param_1);
 // line 0, offset 0x80101754
int iSPCH_ChooseSentence(uint *param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte local_98 [104];
  byte local_30 [8];
  
  iVar9 = 0;
  local_30[0] = 0;
  puVar2 = iSPCH_FindEvent(*param_1);
  iVar3 = 0;
  if (puVar2 != (ushort *)0x0) {
    uVar4 = iSPCH_RepeatEvent(puVar2);
    iVar3 = 0;
    if (uVar4 != 0) {
      iSPCH_ClearChosen();
      iVar8 = gFilterSetting;
      if ((DAT_80148064 == 1) && (iVar8 = gFilterSetting + 1, 2 < iVar8)) {
        iVar8 = 2;
      }
      uVar4 = VoxEvent_GetFilterLengthFlag((int)puVar2);
      if (((uVar4 & 0xff) != 0) && (iVar8 == 1)) {
        iVar8 = 0;
      }
      uVar4 = iSPCH_GetRuleSettings(puVar2,param_1,local_30);
      iSPCH_OrderSentences((int)puVar2,(int)local_98);
      bVar1 = *(byte *)(puVar2 + 3);
      iVar3 = -1;
      if (bVar1 != 0) {
        iVar3 = 0;
        do {
          if ((int)(uint)bVar1 <= iVar9) {
            return iVar3;
          }
          uVar7 = (uint)local_98[iVar9];
          if ((uint)bVar1 <= uVar7) {
            return iVar3;
          }
          iVar5 = iSPCH_GetOffset16((int)puVar2,(int)(puVar2 + 6),uVar7);
          iVar6 = iSPCH_SentenceGetChoices(iVar5,(int)param_1,(byte)uVar4,local_30[0],iVar8);
          if ((0 < iVar6) && (iVar3 = iSPCH_SentenceMakeChoice(iVar5,iVar8), iVar3 != 0)) {
            iSPCH_SaveChosenSentence(puVar2,iVar5,uVar7,param_1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar3 == 0);
      }
    }
  }
  return iVar3;
}




// decompiled code
// original method signature: 
// void SPCH_SetPreLoadTicks(undefined4 param_1);
 // line 0, offset 0x801018f4
void SPCH_SetPreLoadTicks(undefined4 param_1)

{
  gPreLoadTicks = param_1;
  return;
}




// decompiled code
// original method signature: 
// int iSNDdetunetolinear(int param_1);
 // line 0, offset 0x80101900
int iSNDdetunetolinear(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x1000;
  if (0x4af < param_1) {
    do {
      param_1 = param_1 + -0x4b0;
      iVar2 = iVar2 << 1;
    } while (0x4af < param_1);
  }
  while (param_1 < -0x4af) {
    iVar2 = iVar2 >> 1;
    param_1 = param_1 + 0x4b0;
  }
  iVar1 = param_1 * 0x369d >> 0x10;
  if (iVar1 < -0xff) {
    iVar1 = -0xff;
  }
  if (iVar1 < 0) {
    iVar2 = (int)(iVar2 * ((uint)(byte)(&snddefaultenvelope)[iVar1] + 0x100)) >> 9;
  }
  else {
    iVar2 = (int)(iVar2 * ((uint)(byte)(&sndcents)[iVar1] + 0x100)) >> 8;
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// void iSNDcalcpitch(int param_1);
 // line 0, offset 0x801019bc
void iSNDcalcpitch(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_801478f4 + param_1 * 100;
  if (*(short *)(iVar3 + 0x5e) == 0) {
    iVar2 = (int)*(short *)(iVar3 + 0x5c);
    if (*(short *)(iVar3 + 0x5a) != 0) {
      if (*(int *)(iVar3 + 0x4c) == 0) {
        cVar1 = *(char *)(iVar3 + 0x2f);
      }
      else {
        cVar1 = *(char *)(*(int *)(iVar3 + 0x4c) + (int)*(char *)(iVar3 + 0x2f));
      }
      iVar2 = iVar2 + (((int)cVar1 + -0x40) * (int)*(short *)(iVar3 + 0x5a) >> 6);
    }
    if (*(int *)(iVar3 + 0x54) != 0) {
      iVar2 = iVar2 + (((int)*(char *)(*(int *)(iVar3 + 0x54) + (uint)*(byte *)(iVar3 + 0x3b)) +
                       -0x40) * (int)*(short *)(iVar3 + 0x58) >> 6);
    }
    iVar2 = iSNDdetunetolinear(iVar2);
    *(undefined2 *)(iVar3 + 0x5e) = (short)iVar2;
  }
  *(undefined2 *)(iVar3 + 0x62) =
       (short)((int)((uint)*(ushort *)(iVar3 + 0x5e) * (uint)*(ushort *)(iVar3 + 0x60)) >> 0xc);
  return;
}




// decompiled code
// original method signature: 
// void iSNDresetpatch(int param_1);
 // line 0, offset 0x80101abc
void iSNDresetpatch(int param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}




// decompiled code
// original method signature: 
// void iSNDresettimbre(int param_1,int param_2);
 // line 0, offset 0x80101ac4
void iSNDresettimbre(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x25;
  puVar2 = (undefined4 *)(param_2 + 0x94);
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0x3c;
  *(undefined4 *)(param_1 + 0x30) = 0x40;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0x7f;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x7f;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x7f;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x7f;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 100) = 0x801371c4;
  return;
}




// decompiled code
// original method signature: 
// void iSNDresolveheader(int param_1,int param_2);
 // line 0, offset 0x80101b7c
void iSNDresolveheader(int param_1,int param_2)

{
  *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48) + *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74) + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80) + *(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100) + *(int *)(param_1 + 100);
  }
  return;
}




// decompiled code
// original method signature: 
// uint iSNDfindfreekey(void);
 // line 0, offset 0x80101bfc
uint iSNDfindfreekey(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    bVar1 = DAT_801371cc + 1;
    if ((byte)(DAT_801371cc + 1) == 0) {
      bVar1 = DAT_801371cc + 2;
    }
    DAT_801371cc = bVar1;
    iVar3 = 0;
    iVar2 = DAT_801478f4;
    if (DAT_80147871 == 0) break;
    while ((*(char *)(iVar2 + 0xb) == '\0' || (*(byte *)(iVar2 + 0x37) != DAT_801371cc))) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 100;
      if ((int)(uint)DAT_80147871 <= iVar3) goto LAB_80101c7c;
    }
  }
LAB_80101c7c:
  return (uint)DAT_801371cc;
}




// decompiled code
// original method signature: 
// uint iSNDplaytaggedtimbre(undefined4 param_1,undefined2 *param_2,int param_3,int param_4,short param_5,int param_6,short param_7);
 // line 0, offset 0x80101c8c
uint iSNDplaytaggedtimbre
               (undefined4 param_1,undefined2 *param_2,int param_3,int param_4,short param_5,
               int param_6,short param_7)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  undefined uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  uint local_30 [2];
  
  cVar1 = *(char *)((int)param_2 + 7);
  iVar15 = (int)cVar1;
  cVar2 = *(char *)(param_2 + 4);
  uVar3 = *(undefined *)((int)param_2 + 9);
  uVar4 = *(undefined *)(param_2 + 5);
  iSNDresolveheader(param_3,param_4);
  iVar14 = *(int *)(param_3 + 0x30);
  if (*(int *)(param_3 + 0x34) != 0) {
    iVar6 = randrange(*(int *)(param_3 + 0x34));
    iVar14 = iVar14 + iVar6;
  }
  if (iVar14 < 0x80) {
    if (iVar14 < 0) {
      iVar14 = 0;
    }
  }
  else {
    iVar14 = 0x7f;
  }
  uVar7 = iSNDallocchan(*(uint *)(param_3 + 0x14),*(int *)(param_3 + 0x2c),
                        (char)*(undefined4 *)(param_3 + 0x18),local_30);
  uVar10 = uVar7;
  if (-1 < (int)uVar7) {
    iVar6 = DAT_801478f4 + uVar7 * 100;
    *(undefined *)(iVar6 + 0x33) = *(undefined *)(param_3 + 0x94);
    sVar13 = *(short *)(param_3 + 0x40);
    *(short *)(iVar6 + 0x5c) = sVar13;
    sVar13 = sVar13 + ((short)*(undefined4 *)(param_3 + 0x1c) - param_5) * -100;
    *(short *)(iVar6 + 0x5c) = sVar13;
    if (*(int *)(param_3 + 0x90) != 0) {
      *(short *)(iVar6 + 0x5c) = sVar13 + param_7;
    }
    if (*(int *)(param_3 + 0x44) != 0) {
      iVar8 = randrange(*(int *)(param_3 + 0x44));
      *(short *)(iVar6 + 0x5c) = *(short *)(iVar6 + 0x5c) + (short)iVar8;
    }
    *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(param_3 + 0x48);
    *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(param_3 + 0x54);
    uVar12 = *(undefined4 *)(param_3 + 0x5c);
    *(int *)(iVar6 + 0x1c) = (int)cVar2 << 0x10;
    *(undefined4 *)(iVar6 + 0x4c) = uVar12;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(char *)(iVar6 + 0x3d) = cVar1;
    if ((int)*(char *)(iVar6 + 0x33) != 1) {
      iVar15 = (iVar15 + -0x40) * (int)*(char *)(iVar6 + 0x33) + 0x40;
    }
    iVar15 = iVar14 + iVar15 + -0x40;
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    else {
      if (0x7f < iVar15) {
        iVar15 = 0x7f;
      }
    }
    if (*(int *)(iVar6 + 0x48) != 0) {
      iVar15 = (int)*(char *)(*(int *)(iVar6 + 0x48) + iVar15);
    }
    iVar8 = *(int *)(param_3 + 0x38);
    if (*(int *)(param_3 + 0x3c) != 0) {
      iVar9 = randrange(*(int *)(param_3 + 0x3c));
      iVar8 = iVar8 + iVar9;
    }
    iVar9 = iVar8;
    if (0x7f < iVar8) {
      iVar9 = 0x7f;
    }
    if (iVar8 < -0x80) {
      iVar9 = -0x80;
    }
    *(undefined *)(iVar6 + 0x2e) = (char)iVar14;
    *(undefined *)(iVar6 + 0x2c) = (char)((iVar9 * param_6) / 0x7f);
    uVar12 = *(undefined4 *)(param_3 + 0x28);
    *(undefined *)(iVar6 + 0x2f) = uVar3;
    *(short *)(iVar6 + 0x5a) = (short)uVar12 * 100;
    *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(param_3 + 100);
    iVar14 = *(int *)(param_3 + 0x70);
    *(undefined *)(iVar6 + 0x31) = 0;
    *(int *)(iVar6 + 0x24) = iVar14 << 0x10;
    *(undefined *)(iVar6 + 0x30) = *(undefined *)(param_3 + 0x24);
    *(undefined *)(iVar6 + 0x32) = *(undefined *)(param_3 + 0x20);
    iVar14 = **(int **)(iVar6 + 0x40);
    *(int *)(iVar6 + 0x28) = iVar14;
    if (iVar14 < 0) {
      *(undefined4 *)(iVar6 + 0x28) = 0x7fffffff;
    }
    iVar8 = *(int *)(iVar6 + 0x28);
    iVar14 = *(int *)(*(int *)(iVar6 + 0x40) + 4) * 0x10000 - *(int *)(iVar6 + 0x24);
    if (iVar8 == 0) {
      trap(0x1c00);
    }
    if ((iVar8 == -1) && (iVar14 == -0x80000000)) {
      trap(0x1800);
    }
    *(int *)(iVar6 + 0x20) = iVar14 / iVar8;
    *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(param_3 + 0x74);
    *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(param_3 + 0x80);
    *(undefined *)(iVar6 + 0x38) = *(undefined *)(param_3 + 0x78);
    *(undefined *)(iVar6 + 0x39) = *(undefined *)(param_3 + 0x84);
    *(ushort *)(iVar6 + 0x58) = (ushort)*(byte *)(param_3 + 0x88);
    if (*(int *)(param_3 + 0x7c) == 0) {
      *(undefined *)(iVar6 + 0x3a) = 0;
    }
    else {
      uVar10 = iSNDrandom();
      if (*(uint *)(param_3 + 0x78) == 0) {
        trap(0x1c00);
      }
      *(undefined *)(iVar6 + 0x3a) = (char)(uVar10 % *(uint *)(param_3 + 0x78));
    }
    if (*(int *)(param_3 + 0x8c) == 0) {
      *(undefined *)(iVar6 + 0x3b) = 0;
    }
    else {
      uVar10 = iSNDrandom();
      if (*(uint *)(param_3 + 0x84) == 0) {
        trap(0x1c00);
      }
      *(undefined *)(iVar6 + 0x3b) = (char)(uVar10 % *(uint *)(param_3 + 0x84));
    }
    *(undefined2 *)(iVar6 + 0x3e) = param_2[7];
    uVar5 = param_2[6];
    *(undefined2 *)(iVar6 + 0x5e) = 0;
    *(undefined2 *)(iVar6 + 0x60) = uVar5;
    iSNDcalcpitch(uVar7);
    uVar3 = *(undefined *)(param_3 + 0x4c);
    *(undefined *)(iVar6 + 0x35) = uVar4;
    *(undefined *)(iVar6 + 0x34) = uVar3;
    *(undefined *)(iVar6 + 10) = *(undefined *)(param_2 + 2);
    *(undefined2 *)(iVar6 + 8) = *param_2;
    iSNDcalcvol(uVar7);
    if (*(char *)((int)param_2 + 0xb) == '\0') {
      uVar10 = (iVar15 + -0x40) * 0x100 & 0xffff;
    }
    else {
      uVar10 = (uint)(ushort)param_2[8];
    }
    uVar11 = iSNDplatformplay(param_1,uVar7,*(undefined *)(iVar6 + 0x2d),
                              (uint)*(ushort *)(iVar6 + 0x62),(uint)(ushort)param_2[7],
                              (DAT_80147900 * (int)*(char *)(iVar6 + 0x34) *
                              (int)*(char *)(iVar6 + 0x35)) / 0x3f01,uVar10);
    uVar10 = local_30[0];
    if ((int)uVar11 < 0) {
      iSNDfreechan(uVar7);
      uVar10 = uVar11;
    }
  }
  return uVar10;
}




// decompiled code
// original method signature: 
// uint iSNDplaytaggedpatch(int param_1,undefined2 *param_2);
 // line 0, offset 0x8010218c
uint iSNDplaytaggedpatch(int param_1,undefined2 *param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int aiStack408 [4];
  int local_188;
  byte *apbStack256 [38];
  uint local_68 [12];
  byte *local_38;
  uint local_34;
  int local_30;
  byte *local_2c;
  
  uVar11 = 0xfffffff7;
  iVar9 = 0;
  iVar10 = 0;
  iVar13 = 0;
  if (param_1 == 0) {
    return 0xfffffff8;
  }
  cVar1 = *(char *)((int)param_2 + 5);
  iVar7 = (int)cVar1;
  iVar6 = (int)*(char *)(param_2 + 3);
  local_38 = (byte *)(param_1 + 8);
  if ((*(byte *)(param_1 + 3) & 2) == 0) {
    local_38 = (byte *)(param_1 + 4);
  }
  iSNDresetpatch((int)aiStack408);
  iSNDresettimbre((int)aiStack408,(int)apbStack256);
  iSNDenteraudio();
  uVar3 = iSNDfindfreekey();
  pbVar2 = (byte *)0;
  while( true ) {
    pbVar12 = pbVar2;
    iVar4 = iSNDgettag(&local_38,&local_34,&local_30,&local_2c);
    if (iVar4 == 0) break;
    pbVar2 = local_38;
    if (local_34 != 0xfd) {
      if (local_34 == 0xfe) {
        if (((aiStack408[1] <= iVar6) && (iVar6 <= aiStack408[2])) &&
           ((aiStack408[3] <= iVar7 && (iVar7 <= local_188)))) {
          uVar11 = iSNDplaytaggedtimbre
                             (pbVar12,param_2,(int)aiStack408,(int)apbStack256,(short)cVar1,iVar6,
                              (short)iVar13);
          if ((int)uVar11 < 0) goto LAB_8010248c;
          local_68[iVar9] = uVar11;
          iVar9 = iVar9 + 1;
        }
        iSNDresettimbre((int)aiStack408,(int)apbStack256);
        pbVar2 = pbVar12;
      }
      else {
        pbVar2 = pbVar12;
        if ((int)local_34 < 0x26) {
          aiStack408[local_34] = local_30;
          apbStack256[local_34] = local_2c;
          pbVar2 = pbVar12;
          if (local_34 == 0x24) {
            iVar13 = randrange(local_30);
            pbVar2 = pbVar12;
          }
        }
      }
    }
  }
  if ((((aiStack408[1] <= iVar6) && (iVar6 <= aiStack408[2])) && (aiStack408[3] <= iVar7)) &&
     (iVar7 <= local_188)) {
    uVar11 = iSNDplaytaggedtimbre
                       (pbVar12,param_2,(int)aiStack408,(int)apbStack256,(short)cVar1,iVar6,
                        (short)iVar13);
    if ((int)uVar11 < 0) goto LAB_8010248c;
    local_68[iVar9] = uVar11;
    iVar9 = iVar9 + 1;
  }
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      uVar3 = iSNDgetchan(local_68[0]);
      if (-1 < (int)uVar3) {
        iVar13 = DAT_801478f4 + uVar3 * 100;
        *(undefined *)(iVar13 + 0x37) = 0;
        *(undefined *)(iVar13 + 0x36) = 0;
      }
    }
    else {
      iVar13 = 0;
      if (0 < iVar9) {
        puVar8 = local_68;
        do {
          uVar5 = iSNDgetchan(*puVar8);
          if (-1 < (int)uVar5) {
            iVar10 = DAT_801478f4 + uVar5 * 100;
            *(undefined *)(iVar10 + 0x37) = (char)uVar3;
            *(undefined *)(iVar10 + 0x36) = 0;
          }
          iVar13 = iVar13 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar13 < iVar9);
      }
      *(undefined *)(iVar10 + 0x36) = 1;
    }
    iSNDleaveaudio();
    return uVar11;
  }
LAB_8010248c:
  iVar13 = 0;
  iSNDleaveaudio();
  puVar8 = local_68;
  if (0 < iVar9) {
    do {
      uVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      iVar13 = iVar13 + 1;
      SNDstop(uVar3);
    } while (iVar13 < iVar9);
  }
  return uVar11;
}




// decompiled code
// original method signature: 
// int iSNDresolvetaggedpatch(int param_1,int param_2,int *param_3);
 // line 0, offset 0x801024ec
int iSNDresolvetaggedpatch(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte *local_28;
  uint local_24;
  int iStack32;
  byte *pbStack28;
  
  iVar2 = -1;
  if ((*(byte *)(param_1 + 3) & 2) == 0) {
    local_28 = (byte *)(param_1 + 4);
  }
  else {
    local_28 = (byte *)(param_1 + 8);
  }
  while (iVar1 = iSNDgettag(&local_28,&local_24,&iStack32,&pbStack28), iVar1 != 0) {
    if (local_24 == 0xfd) {
      iVar2 = iSNDplatformresolve(local_28,param_2,param_3);
    }
  }
  if (-1 < iVar2) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// undefined4 iSNDremovetaggedpatch(int param_1,int *param_2);
 // line 0, offset 0x801025c0
undefined4 iSNDremovetaggedpatch(int param_1,int *param_2)

{
  int iVar1;
  byte *local_20;
  uint local_1c;
  int iStack24;
  byte *pbStack20;
  
  if ((*(byte *)(param_1 + 3) & 2) == 0) {
    local_20 = (byte *)(param_1 + 4);
  }
  else {
    local_20 = (byte *)(param_1 + 8);
  }
  while( true ) {
    iVar1 = iSNDgettag(&local_20,&local_1c,&iStack24,&pbStack20);
    if (iVar1 == 0) break;
    if (local_1c == 0xfd) {
      iSNDplatformremove(local_20,param_2);
    }
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDdownloadbank(int param_1,int param_2);
 // line 0, offset 0x8010266c
undefined4 iSNDdownloadbank(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int aiStack2088 [510];
  undefined4 local_30 [2];
  
  uVar8 = 7;
  iVar3 = 0xff;
  puVar1 = local_30;
  do {
    *puVar1 = 0xffffffff;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -2;
  } while (-1 < iVar3);
  iVar3 = 0;
  if (*(short *)(param_1 + 6) != 0) {
    iVar7 = 0xc;
    iVar6 = 0x14;
    iVar4 = param_1;
    iVar5 = param_1;
    do {
      if (*(char *)(param_1 + 4) == '\x04') {
        iVar2 = *(int *)(iVar4 + 0x14);
      }
      else {
        iVar2 = *(int *)(iVar5 + 0xc);
      }
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 4) == '\x04') {
          iVar2 = param_1 + iVar6 + *(int *)(iVar4 + 0x14);
          *(int *)(iVar4 + 0x14) = iVar2;
        }
        else {
          iVar2 = param_1 + iVar7 + *(int *)(iVar5 + 0xc);
          *(int *)(iVar5 + 0xc) = iVar2;
        }
        iVar2 = iSNDresolvetaggedpatch(iVar2,param_2,aiStack2088);
        if (iVar2 != 7) {
          uVar8 = 8;
        }
      }
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 6));
  }
  return uVar8;
}




// decompiled code
// original method signature: 
// int iSNDbankalloc(void);
 // line 0, offset 0x801027bc
int iSNDbankalloc(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_801478f8;
  if (DAT_8014786c != 0) {
    do {
      if (*piVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < (int)(uint)DAT_8014786c);
  }
  return -9;
}




// decompiled code
// original method signature: 
// int SNDgetvol(uint param_1);
 // line 0, offset 0x80102810
int SNDgetvol(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_8014789c == '\0') {
    iVar1 = -10;
  }
  else {
    iSNDenteraudio();
    uVar2 = iSNDgetchan(param_1);
    if ((int)uVar2 < 0) {
      iSNDleaveaudio();
      iVar1 = -8;
    }
    else {
      iSNDleaveaudio();
      iVar1 = (int)*(char *)(uVar2 * 100 + DAT_801478f4 + 0x2d);
    }
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// int printf(char *__format,...);
 // line 0, offset 0x801028ac
int printf(char *__format,...)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// int iSNDpacketplayoverhead(int param_1);
 // line 0, offset 0x801028bc
int iSNDpacketplayoverhead(int param_1)

{
  return param_1 * 0x18 + 0x40;
}




// decompiled code
// original method signature: 
// int SNDPKTPLAY_overhead(int param_1);
 // line 0, offset 0x801028d0
int SNDPKTPLAY_overhead(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = iSNDpacketplayoverhead(param_1);
  iVar2 = iSNDplatformpacketoverhead();
  return iVar1 + iVar2;
}




// decompiled code
// original method signature: 
// int SNDPKTPLAY_create(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
 // line 0, offset 0x801028fc
int SNDPKTPLAY_create(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (DAT_8014789c == '\0') {
    iVar1 = -10;
  }
  else {
    iVar1 = 0;
    piVar3 = &sndpps;
    do {
      if (*piVar3 == 0) {
        iVar2 = iSNDplatformpacketplaycreate(iVar1,param_1);
        if (-1 < iVar2) {
          iVar2 = iSNDplatformpacketoverhead();
          puVar4 = (undefined4 *)((int)param_1 + iVar2);
          iVar2 = iSNDplatformpacketoverhead();
          *(undefined4 **)(&sndpps + iVar1) = puVar4;
          *(int **)(puVar4 + 6) = param_1;
          puVar4[7] = param_3;
          puVar4[8] = param_4;
          *(short *)(puVar4 + 2) = (short)(((param_2 - iVar2) - 0x40U) / 0x18);
          *puVar4 = 0xffffffff;
          return iVar1;
        }
        return -6;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < 1);
    iVar1 = -9;
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// uint SNDPKTPLAY_start(int param_1,uint *param_2,uint *param_3,int param_4);
 // line 0, offset 0x80102a10
uint SNDPKTPLAY_start(int param_1,uint *param_2,uint *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  short sVar9;
  uint local_30 [2];
  
  if (DAT_8014789c == '\0') {
    uVar5 = 0xfffffff6;
  }
  else {
    bVar2 = *(byte *)((int)param_2 + 2);
    puVar8 = (uint *)(&sndpps)[param_1];
    iSNDenteraudio();
    iVar6 = iSNDallocchan(*param_3,(uint)bVar2,*(undefined *)((int)param_3 + 6),local_30);
    if (iVar6 < 0) {
      iSNDleaveaudio();
      uVar5 = 0xfffffff7;
    }
    else {
      *puVar8 = local_30[0];
      *(undefined2 *)((int)puVar8 + 10) = 0;
      *(undefined2 *)((int)puVar8 + 0xe) = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      puVar8[5] = 0;
      *(undefined2 *)(puVar8 + 3) = 0xffff;
      puVar8[9] = *param_2;
      iVar7 = DAT_801478f4 + iVar6 * 100;
      if (*(char *)(param_4 + 0xb) == '\0') {
        sVar9 = ((short)*(char *)(param_4 + 7) + -0x40) * 0x100;
      }
      else {
        sVar9 = *(short *)(param_4 + 0x10);
      }
      *(undefined *)(iVar7 + 10) = 0xff;
      *(undefined2 *)(iVar7 + 0x5c) = *(undefined2 *)(param_3 + 1);
      uVar4 = *(undefined2 *)(param_4 + 0xc);
      *(undefined4 *)(iVar7 + 0x14) = 0;
      *(undefined2 *)(iVar7 + 0x60) = uVar4;
      cVar1 = *(char *)(param_4 + 8);
      *(undefined4 *)(iVar7 + 0x20) = 0;
      *(undefined4 *)(iVar7 + 0x28) = 0x7fffffff;
      *(undefined4 *)(iVar7 + 0x24) = 0x7f0000;
      *(int *)(iVar7 + 0x1c) = (int)cVar1 << 0x10;
      *(undefined *)(iVar7 + 0x2c) = *(undefined *)((int)param_3 + 7);
      *(undefined *)(iVar7 + 0x2e) = *(undefined *)(param_3 + 2);
      uVar3 = *(undefined *)(param_4 + 9);
      *(undefined *)(iVar7 + 0x30) = 1;
      *(undefined *)(iVar7 + 0x31) = 0;
      *(undefined *)(iVar7 + 0x32) = 0;
      *(undefined *)(iVar7 + 0x33) = 1;
      *(undefined *)(iVar7 + 0x2f) = uVar3;
      *(undefined *)(iVar7 + 0x34) = *(undefined *)((int)param_3 + 9);
      *(undefined *)(iVar7 + 0x35) = *(undefined *)(param_4 + 10);
      cVar1 = *(char *)((int)param_3 + 10);
      *(undefined *)(iVar7 + 0x37) = 0;
      *(undefined *)(iVar7 + 0x36) = 0;
      *(short *)(iVar7 + 0x5a) = (short)cVar1 * 100;
      uVar3 = *(undefined *)(param_4 + 7);
      *(undefined4 *)(iVar7 + 0x40) = 0;
      *(undefined4 *)(iVar7 + 0x44) = 0;
      *(undefined *)(iVar7 + 0x3d) = uVar3;
      *(undefined4 *)(iVar7 + 0x48) = 0;
      *(undefined4 *)(iVar7 + 0x4c) = 0;
      *(undefined4 *)(iVar7 + 0x50) = 0;
      *(undefined4 *)(iVar7 + 0x54) = 0;
      *(undefined2 *)(iVar7 + 0x5e) = 0;
      iSNDcalcpitch(iVar6);
      iSNDcalcvol(iVar6);
      uVar5 = iSNDplatformpacketplay
                        (param_1,iVar6,sVar9,*(undefined *)(iVar7 + 0x2d),
                         (uint)*(ushort *)(iVar7 + 0x62),(uint)*(ushort *)(param_4 + 0xe),
                         (char)((DAT_80147900 * (int)*(char *)(iVar7 + 0x34) *
                                (int)*(char *)(iVar7 + 0x35)) / 0x3f01),(ushort *)param_2);
      if ((int)uVar5 < 0) {
        iSNDfreechan(iVar6);
        iSNDleaveaudio();
      }
      else {
        iSNDleaveaudio();
        uVar5 = *puVar8;
      }
    }
  }
  return uVar5;
}




// decompiled code
// original method signature: 
// undefined4 SNDPKTPLAY_submit(int param_1,int param_2);
 // line 0, offset 0x80102cfc
undefined4 SNDPKTPLAY_submit(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar5 = (&sndpps)[param_1];
    iSNDenteraudio();
    if ((int)*(short *)(iVar5 + 0xe) < (int)*(short *)(iVar5 + 8) + -1) {
      iVar3 = (int)*(short *)(iVar5 + 10) + (int)*(short *)(iVar5 + 0xe);
      if ((int)*(short *)(iVar5 + 8) <= iVar3) {
        iVar3 = iVar3 - (int)*(short *)(iVar5 + 8);
      }
      puVar4 = (undefined4 *)(iVar5 + iVar3 * 0x18 + 0x28);
      puVar4[1] = *(undefined4 *)(param_2 + 4);
      *puVar4 = *(undefined4 *)(iVar5 + 4);
      iVar2 = 0;
      iVar3 = param_2;
      if (*(char *)(iVar5 + 0x26) != '\0') {
        do {
          iVar2 = iVar2 + 1;
          puVar4[2] = *(undefined4 *)(iVar3 + 0xc);
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < (int)(uint)*(byte *)(iVar5 + 0x26));
      }
      *(short *)(iVar5 + 0xe) = *(short *)(iVar5 + 0xe) + 1;
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + *(int *)(param_2 + 4);
      uVar1 = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    else {
      uVar1 = 0xfffffff3;
    }
    iSNDleaveaudio();
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// int SNDPKTPLAY_submitspace(int param_1);
 // line 0, offset 0x80102e70
int SNDPKTPLAY_submitspace(int param_1)

{
  if (DAT_8014789c != '\0') {
    return ((int)*(short *)((&sndpps)[param_1] + 8) - (int)*(short *)((&sndpps)[param_1] + 0xe)) +
           -1;
  }
  return -10;
}




// decompiled code
// original method signature: 
// int SNDPKTPLAY_unsafeframesoutstanding(int param_1);
 // line 0, offset 0x80102ec4
int SNDPKTPLAY_unsafeframesoutstanding(int param_1)

{
  return *(int *)((&sndpps)[param_1] + 0x10) + *(int *)((&sndpps)[param_1] + 0x14);
}




// decompiled code
// original method signature: 
// int SNDPKTPLAY_framesoutstanding(int param_1);
 // line 0, offset 0x80102eec
int SNDPKTPLAY_framesoutstanding(int param_1)

{
  int iVar1;
  
  if (DAT_8014789c == '\0') {
    iVar1 = -10;
  }
  else {
    iSNDenteraudio();
    iVar1 = SNDPKTPLAY_unsafeframesoutstanding(param_1);
    iSNDleaveaudio();
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDPKTPLAY_purge(int param_1,int param_2,int param_3);
 // line 0, offset 0x80102f3c
undefined4 SNDPKTPLAY_purge(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (DAT_8014789c == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar7 = (&sndpps)[param_1];
    iVar12 = 0;
    iSNDenteraudio();
    iVar10 = (int)*(short *)(iVar7 + 10);
    sVar1 = *(short *)(iVar7 + 0xe);
    iVar9 = (int)*(short *)(iVar7 + 10);
    if (0 < (int)sVar1) {
      iVar11 = iVar9 * 0x18 + 0x28;
      iVar8 = iVar10 * 0x18 + iVar7;
      do {
        piVar3 = (int *)(iVar7 + iVar11);
        if ((*piVar3 < param_2) || (param_3 < *piVar3)) {
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
          iVar6 = piVar3[3];
          *(int *)(iVar8 + 0x28) = *piVar3;
          *(int *)(iVar8 + 0x2c) = iVar4;
          *(int *)(iVar8 + 0x30) = iVar5;
          *(int *)(iVar8 + 0x34) = iVar6;
          iVar4 = piVar3[5];
          *(int *)(iVar8 + 0x38) = piVar3[4];
          *(int *)(iVar8 + 0x3c) = iVar4;
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 0x18;
          if ((int)*(short *)(iVar7 + 8) <= iVar10) {
            iVar10 = 0;
            iVar8 = iVar7;
          }
        }
        else {
          *(short *)(iVar7 + 0xe) = *(short *)(iVar7 + 0xe) + -1;
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) - piVar3[1];
          if (*(code **)(iVar7 + 0x1c) != (code *)0x0) {
            (**(code **)(iVar7 + 0x1c))(piVar3[2]);
          }
        }
        iVar11 = iVar11 + 0x18;
        iVar9 = iVar9 + 1;
        if ((int)*(short *)(iVar7 + 8) <= iVar9) {
          iVar11 = 0x28;
          iVar9 = 0;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)sVar1);
    }
    iSNDleaveaudio();
    uVar2 = 0;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// undefined4 SNDPKTPLAY_stop(int param_1);
 // line 0, offset 0x80103118
undefined4 SNDPKTPLAY_stop(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    puVar2 = (uint *)(&sndpps)[param_1];
    iSNDenteraudio();
    SNDstop(*puVar2);
    SNDPKTPLAY_purge(param_1,0,0x7fffffff);
    if (((code *)puVar2[7] != (code *)0x0) && (-1 < (int)((uint)*(ushort *)(puVar2 + 3) << 0x10))) {
      (*(code *)puVar2[7])(puVar2[(int)*(short *)(puVar2 + 3) * 6 + 0xc]);
    }
    *puVar2 = 0xffffffff;
    iSNDleaveaudio();
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDPKTPLAY_destroy(int param_1);
 // line 0, offset 0x801031f4
undefined4 SNDPKTPLAY_destroy(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_8014789c == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    iSNDplatformpacketplaydestroy(param_1);
    (&sndpps)[param_1] = 0;
    uVar1 = 0;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 iSNDpacketget(int param_1,int param_2,undefined4 *param_3);
 // line 0, offset 0x80103248
undefined4 iSNDpacketget(int param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (&sndpps)[param_1];
  if ((param_2 + 1U == (uint)*(byte *)(iVar4 + 0x26)) &&
     (-1 < (int)((uint)*(ushort *)(iVar4 + 0xc) << 0x10))) {
    sVar1 = *(short *)(iVar4 + 0xc);
    *(undefined2 *)(iVar4 + 0xc) = 0xffff;
    if (*(code **)(iVar4 + 0x1c) != (code *)0x0) {
      (**(code **)(iVar4 + 0x1c))(*(undefined4 *)(iVar4 + (int)sVar1 * 0x18 + 0x30));
    }
  }
  uVar2 = 0;
  if (*(short *)(iVar4 + 0xe) != 0) {
    iVar3 = iVar4 + (int)*(short *)(iVar4 + 10) * 0x18 + 0x28;
    *param_3 = *(undefined4 *)(iVar3 + 4);
    if (param_2 + 1U == (uint)*(byte *)(iVar4 + 0x26)) {
      *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(iVar4 + 10);
      *(short *)(iVar4 + 0xe) = *(short *)(iVar4 + 0xe) + -1;
      *(short *)(iVar4 + 10) = *(short *)(iVar4 + 10) + 1;
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + *(int *)(iVar3 + 4);
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) - *(int *)(iVar3 + 4);
      if ((int)((uint)*(ushort *)(iVar4 + 8) << 0x10) <=
          (int)((uint)*(ushort *)(iVar4 + 10) << 0x10)) {
        *(undefined2 *)(iVar4 + 10) = 0;
      }
    }
    uVar2 = *(undefined4 *)(iVar3 + param_2 * 4 + 8);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void iSNDpacketfreeframes(int param_1,int param_2,int param_3);
 // line 0, offset 0x801033c4
void iSNDpacketfreeframes(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (&sndpps)[param_1];
  if (param_2 + 1U == (uint)*(byte *)(iVar1 + 0x26)) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) - param_3;
    if (*(code **)(iVar1 + 0x20) != (code *)0x0) {
      (**(code **)(iVar1 + 0x20))(param_1,param_3);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDmulu64(int *param_1,uint param_2,uint param_3);
 // line 0, offset 0x80103424
void iSNDmulu64(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_2 & 0xffff) * (param_3 & 0xffff);
  uVar2 = (param_2 & 0xffff) * (param_3 >> 0x10);
  uVar3 = (param_2 >> 0x10) * (param_3 & 0xffff);
  *param_1 = uVar1 + uVar2 * 0x10000 + uVar3 * 0x10000;
  param_1[1] = (uVar2 >> 0x10) + (uVar3 >> 0x10) + (param_2 >> 0x10) * (param_3 >> 0x10) +
               ((uVar1 >> 0x10) + (uVar2 & 0xffff) + (uVar3 & 0xffff) >> 0x10);
  return;
}




// decompiled code
// original method signature: 
// int iSNDdivu64(uint param_1,uint param_2,uint param_3);
 // line 0, offset 0x801034c0
int iSNDdivu64(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x1f;
  do {
    iVar2 = iVar2 * 2;
    param_2 = param_2 * 2 + (param_1 >> 0x1f);
    param_1 = param_1 << 1;
    if (param_3 <= param_2) {
      param_2 = param_2 - param_3;
      iVar2 = iVar2 + 1;
    }
    bVar1 = iVar3 != 0;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  return iVar2;
}




// decompiled code
// original method signature: 
// int iSNDstreamgetrequestptr(uint param_1);
 // line 0, offset 0x80103508
int iSNDstreamgetrequestptr(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < (int)param_1) {
    piVar1 = (int *)iSNDstreamgetstreamptr(param_1 & 0xff);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar3 = 0;
    if (0 < (int)((uint)*(byte *)((int)piVar1 + 0x16) << 0x18)) {
      iVar2 = *piVar1;
      do {
        if (*(uint *)(iVar2 + 4) == param_1) {
          return iVar2;
        }
        iVar2 = iVar2 + 0x2c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)*(char *)((int)piVar1 + 0x16));
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// char * strrchr(char *__s,int __c);
 // line 0, offset 0x80103590
char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)0xa0)();
  return pcVar1;
}




// decompiled code
// original method signature: 
// int tolower(int __c);
 // line 0, offset 0x801035a0
int tolower(int __c)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// undefined4 SNDattributessetdef(undefined4 *param_1);
 // line 0, offset 0x801035b0
undefined4 SNDattributessetdef(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined *)((int)param_1 + 7) = 0x7f;
  *(undefined *)(param_1 + 2) = 0x40;
  *(undefined *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 9) = 0;
  *(undefined *)((int)param_1 + 10) = 0;
  *(undefined *)((int)param_1 + 0xb) = 0;
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDpatchtohdr(int param_1,undefined2 *param_2,int *param_3,int *param_4);
 // line 0, offset 0x801035e4
/* WARNING: Could not reconcile some variable overlaps */

undefined4 iSNDpatchtohdr(int param_1,undefined2 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  byte *local_28;
  uint local_24;
  int local_20;
  byte *pbStack28;
  
  SNDattributessetdef(param_3);
  local_28 = (byte *)(param_1 + 8);
  if ((*(byte *)(param_1 + 3) & 2) == 0) {
    local_28 = (byte *)(param_1 + 4);
  }
  *param_2 = 0x5622;
  *(undefined *)(param_2 + 1) = 1;
  *(undefined *)((int)param_2 + 3) = 5;
  *param_4 = 0;
  while (iVar1 = iSNDgettag(&local_28,&local_24,&local_20,&pbStack28), iVar1 != 0) {
    if (local_24 == 0x80) {
      *(undefined *)((int)param_3 + 0xb) = (undefined)local_20;
    }
    else {
      if (local_24 == 0x82) {
        *(undefined *)(param_2 + 1) = (undefined)local_20;
      }
      else {
        if (local_24 == 0x84) {
          *param_2 = (undefined2)local_20;
        }
        else {
          if (local_24 == 0x85) {
            *param_4 = local_20;
          }
          else {
            if (local_24 == 0x13) {
              *(undefined *)((int)param_3 + 9) = (undefined)local_20;
            }
            else {
              if (local_24 == 10) {
                *(undefined *)((int)param_3 + 10) = (undefined)local_20;
              }
              else {
                if (local_24 == 5) {
                  *param_3 = local_20;
                }
                else {
                  if (local_24 == 6) {
                    *(undefined *)((int)param_3 + 6) = (undefined)local_20;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// int memcmp(byte *param_1,byte *param_2,int param_3);
 // line 0, offset 0x80103734
int memcmp(byte *param_1,byte *param_2,int param_3)

{
  do {
    if (*param_1 != *param_2) {
      return (uint)*param_1 - (uint)*param_2;
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (0 < param_3);
  return 0;
}




// decompiled code
// original method signature: 
// int FUN_80103750(byte *param_1,byte *param_2,int param_3);
 // line 0, offset 0x80103750
int FUN_80103750(byte *param_1,byte *param_2,int param_3)

{
  do {
    if (*param_1 != *param_2) {
      return (uint)*param_1 - (uint)*param_2;
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (0 < param_3);
  return 0;
}




// decompiled code
// original method signature: 
// void iSNDpacketgetirq(void);
 // line 0, offset 0x80103784
void iSNDpacketgetirq(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (&DAT_80147e10)[sndpp];
  iVar2 = (int)*(char *)(iVar3 + 0x42);
  if (iVar2 < 0) {
    return;
  }
  iVar1 = iVar2 * 0x2c;
  if (((uint)(&DAT_801479fc)[iVar2 * 0xb] >> 0xc <= (uint)*(ushort *)(iVar3 + 0x40)) ||
     (*(int *)(iVar3 + 0xc) - (uint)*(ushort *)(iVar3 + 0x40) <=
      (uint)(&DAT_801479fc)[iVar2 * 0xb] >> 0xc)) {
    if ((uint)(&DAT_801479fc)[iVar2 * 0xb] >> 0xb < *(uint *)(iVar3 + 0xc)) {
      (&DAT_80147a00)[iVar2 * 0xb] = (&DAT_801479fc)[iVar2 * 0xb];
      if (-1 < (int)((uint)(byte)(&DAT_80147a10)[iVar1] << 0x18)) {
        (&DAT_80147a00)[(int)(char)(&DAT_80147a10)[iVar1] * 0xb] = (&DAT_801479fc)[iVar2 * 0xb];
        return;
      }
    }
    else {
      (&DAT_801479fc)[iVar2 * 0xb] = 0;
      if (-1 < (int)((uint)(byte)(&DAT_80147a10)[iVar1] << 0x18)) {
        (&DAT_801479fc)[(int)(char)(&DAT_80147a10)[iVar1] * 0xb] = 0;
      }
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDpacketsetirq(void);
 // line 0, offset 0x801038bc
void iSNDpacketsetirq(void)

{
  int *piVar1;
  int iVar2;
  
  iSNDpsxdisablespuirq();
  iVar2 = 0;
  if (DAT_80147919 == '\0') {
    do {
      sndpp = sndpp + 1;
      if (0 < sndpp) {
        sndpp = 0;
      }
      piVar1 = (int *)(&DAT_80147e10)[sndpp];
      if ((piVar1 != (int *)0x0) && (-1 < *(char *)((int)piVar1 + 0x42))) {
        *(undefined2 *)(DAT_80147e2c + 0x1a4) = (short)(*piVar1 + 8 >> 3);
        InterruptCallback();
        iSNDpsxenablespuirq();
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDpacketirqcallback(void);
 // line 0, offset 0x8010399c
void iSNDpacketirqcallback(void)

{
  iSNDpacketgetirq();
  iSNDpacketsetirq();
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxzerospu(undefined4 *param_1,int param_2);
 // line 0, offset 0x801039c4
void iSNDpsxzerospu(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2 >> 2) {
    do {
      *param_1 = 0x200;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      iVar1 = iVar1 + 4;
      param_1 = param_1 + 4;
    } while (iVar1 < param_2 >> 2);
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDpacketpurgeframes(int param_1,uint param_2,uint param_3);
 // line 0, offset 0x801039fc
void iSNDpacketpurgeframes(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (&DAT_80147e10)[param_1];
  iVar2 = (int)*(char *)(iVar6 + 0x42) * 0x2c;
  do {
    uVar1 = *(ushort *)(iVar6 + 0x46);
    uVar7 = param_2 / (uint)uVar1;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    uVar5 = (uVar7 + 1) * (uint)uVar1 - param_2;
    if ((int)param_3 < (int)uVar5) {
      uVar5 = param_3;
    }
    puVar3 = (ushort *)(uVar7 * 2 + *(int *)(iVar6 + 0x2c));
    uVar1 = *puVar3;
    uVar7 = uVar5;
    if ((int)(uint)uVar1 < (int)uVar5) {
      uVar7 = (uint)uVar1;
    }
    *puVar3 = uVar1 - (short)uVar7;
    if ((uVar7 != 0) && (iVar4 = 0, (&DAT_80147a0f)[iVar2] != '\0')) {
      do {
        iSNDpacketfreeframes(param_1,iVar4,uVar7);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)(byte)(&DAT_80147a0f)[iVar2]);
    }
    param_2 = param_2 + uVar5;
    param_3 = param_3 - uVar5;
    if (*(uint *)(iVar6 + 0xc) <= param_2) {
      param_2 = 0;
    }
  } while (0 < (int)param_3);
  return;
}




// decompiled code
// original method signature: 
// void iSNDfillspuwithpackets(int param_1,int param_2);
 // line 0, offset 0x80103b54
void iSNDfillspuwithpackets(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int local_30 [2];
  
  piVar11 = (int *)(&DAT_80147e10)[param_1];
  iVar5 = (int)*(char *)((int)piVar11 + 0x42) * 0x2c;
  if (*(short *)(piVar11 + 0xf) == 0) {
    *(undefined2 *)((int)piVar11 + 0x3e) = 0;
    *(undefined2 *)(piVar11 + 0xf) = *(undefined2 *)(piVar11 + 0x11);
    *(undefined2 *)(param_2 * 2 + piVar11[0xb]) = 0;
  }
  if (piVar11[5] == 0) {
    iVar10 = 0;
    piVar7 = piVar11;
    if ((&DAT_80147a0f)[iVar5] != '\0') {
      do {
        iSNDpsxzerospu((undefined4 *)piVar7[0x12],0x10);
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
    }
    *(short *)((int)piVar11 + 0x3e) = *(short *)((int)piVar11 + 0x3e) + 0x10;
    *(short *)(piVar11 + 0xf) = *(short *)(piVar11 + 0xf) + -0x10;
  }
  sVar2 = *(short *)(piVar11 + 0xf);
  do {
    if (sVar2 == 0) goto LAB_80103ec0;
    uVar3 = *(ushort *)(piVar11 + 0xd);
    if (uVar3 == 0) {
      iVar10 = 0;
      piVar7 = piVar11;
      if ((&DAT_80147a0f)[iVar5] != '\0') {
        do {
          iVar6 = iSNDpacketget(param_1,iVar10,local_30);
          piVar7[9] = iVar6;
          iVar10 = iVar10 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
      }
      if (piVar11[9] == 0) {
        if ((int)(uint)*(ushort *)(piVar11 + 0x10) < piVar11[5] - piVar11[6]) {
          return;
        }
        if (*(ushort *)(piVar11 + 0xe) < *(ushort *)((int)piVar11 + 0x36)) goto LAB_80103fe4;
        if (*(ushort *)((int)piVar11 + 0x36) < 2) {
          iVar10 = 0;
          piVar7 = piVar11;
          if ((&DAT_80147a0f)[iVar5] != '\0') {
            do {
              piVar1 = piVar7 + 0x12;
              piVar7 = piVar7 + 1;
              iSNDpsxzerospu((undefined4 *)(*piVar1 + (uint)*(ushort *)((int)piVar11 + 0x3e)),
                             (uint)*(ushort *)(piVar11 + 0xf));
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
          }
        }
        else {
          iVar10 = 0;
          piVar7 = piVar11;
          if ((&DAT_80147a0f)[iVar5] != '\0') {
            do {
              *(undefined *)(piVar7[0x12] + 1) = 2;
              iVar10 = iVar10 + 1;
              *(undefined *)((uint)*(ushort *)(piVar11 + 0x11) + piVar7[0x12] + -0xf) = 2;
              piVar7 = piVar7 + 1;
            } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
          }
        }
        if (*(short *)((int)piVar11 + 0x3e) == 0) {
          *(short *)((int)piVar11 + 0x36) = *(short *)((int)piVar11 + 0x36) + 1;
        }
        *(undefined2 *)(piVar11 + 0xf) = 0;
LAB_80103ec0:
        if (param_2 == 0) {
          iVar10 = 0;
          piVar7 = piVar11;
          if ((&DAT_80147a0f)[iVar5] != '\0') {
            do {
              piVar1 = piVar7 + 0x12;
              piVar7 = piVar7 + 1;
              *(byte *)(*piVar1 + 1) = *(byte *)(*piVar1 + 1) | 4;
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
          }
        }
        else {
          if ((param_2 == (uint)*(ushort *)(piVar11 + 0xe) - 1) &&
             (iVar10 = 0, piVar7 = piVar11, (&DAT_80147a0f)[iVar5] != '\0')) {
            do {
              *(byte *)((uint)*(ushort *)(piVar11 + 0x11) + piVar7[0x12] + -0xf) =
                   *(byte *)((uint)*(ushort *)(piVar11 + 0x11) + piVar7[0x12] + -0xf) | 1;
              iVar10 = iVar10 + 1;
              piVar7 = piVar7 + 1;
            } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
          }
        }
        iVar10 = 0;
        piVar7 = piVar11;
        if ((&DAT_80147a0f)[iVar5] != '\0') {
          do {
            uVar9 = 0;
            if (param_2 == 0) {
              uVar9 = (uint)(iVar10 == 0);
            }
            iVar6 = iSNDdmqueue(piVar7[0x12],
                                *piVar11 +
                                (param_2 << ((uint)*(byte *)((int)piVar11 + 0x43) & 0x1f)) +
                                piVar11[2] * iVar10,(uint)*(ushort *)(piVar11 + 0x11),2,uVar9);
            piVar11[8] = iVar6;
            iVar10 = iVar10 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
        }
LAB_80103fe4:
        *(undefined2 *)((int)piVar11 + 0x3a) = (short)param_2;
        piVar11[5] = piVar11[5] + (uint)*(ushort *)((int)piVar11 + 0x46);
        return;
      }
      *(undefined2 *)((int)piVar11 + 0x36) = 0;
      *(undefined2 *)((int)piVar11 + 0x32) = 0;
      uVar4 = (undefined2)((local_30[0] * 4) / 7);
      *(undefined2 *)(piVar11 + 0xd) = uVar4;
      *(undefined2 *)(piVar11 + 0xc) = uVar4;
      uVar3 = *(ushort *)(piVar11 + 0xd);
    }
    if (uVar3 < *(ushort *)(piVar11 + 0xf)) {
      uVar3 = *(ushort *)(piVar11 + 0xd);
    }
    else {
      uVar3 = *(ushort *)(piVar11 + 0xf);
    }
    psVar8 = (short *)(param_2 * 2 + piVar11[0xb]);
    *psVar8 = *psVar8 + (short)((int)((uint)uVar3 * 7) >> 2);
    iVar10 = 0;
    piVar7 = piVar11;
    if ((&DAT_80147a0f)[iVar5] != '\0') {
      do {
        blockmove((undefined4 *)
                  (piVar11[9] + (uint)*(ushort *)((int)piVar11 + 0x32) +
                  (uint)*(ushort *)(piVar11 + 0xc) * iVar10),
                  (undefined4 *)(piVar7[0x12] + (uint)*(ushort *)((int)piVar11 + 0x3e)),(uint)uVar3)
        ;
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar10 < (int)(uint)(byte)(&DAT_80147a0f)[iVar5]);
    }
    *(short *)((int)piVar11 + 0x3e) = *(short *)((int)piVar11 + 0x3e) + uVar3;
    *(short *)((int)piVar11 + 0x32) = *(short *)((int)piVar11 + 0x32) + uVar3;
    *(ushort *)(piVar11 + 0xf) = *(short *)(piVar11 + 0xf) - uVar3;
    sVar2 = *(short *)(piVar11 + 0xf);
    *(ushort *)(piVar11 + 0xd) = *(short *)(piVar11 + 0xd) - uVar3;
  } while( true );
}




// decompiled code
// original method signature: 
// void iSNDpacketserve(void);
 // line 0, offset 0x80104024
void iSNDpacketserve(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iSNDstreamhotroddatachunks();
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_80147e10 + iVar1);
    if ((iVar1 != 0) && (-1 < (int)*(char *)(iVar1 + 0x42))) {
      iVar2 = *(int *)(iVar1 + 0x1c);
      iVar4 = ((int)((uint)(&DAT_801479fc)[(int)*(char *)(iVar1 + 0x42) * 0xb] >> 0xc) / 0x1c) *
              0x1c;
      if (iVar4 < iVar2) {
        uVar3 = (iVar4 + *(int *)(iVar1 + 0xc)) - iVar2;
      }
      else {
        uVar3 = iVar4 - iVar2;
      }
      if (0x70ffffff < *(int *)(iVar1 + 0x18)) {
        *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -0x70000000;
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -0x70000000;
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + uVar3;
      iSNDpacketpurgeframes(iVar5,*(uint *)(iVar1 + 0x1c),uVar3);
      *(int *)(iVar1 + 0x1c) = iVar4;
      if ((*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18) < *(int *)(iVar1 + 0x10)) &&
         (iVar2 = iSNDdmcomplete(*(int *)(iVar1 + 0x20)), iVar2 != 0)) {
        uVar3 = (uint)*(ushort *)(iVar1 + 0x3a) + 1;
        if ((uint)*(ushort *)(iVar1 + 0x38) <= uVar3) {
          uVar3 = uVar3 - (uint)*(ushort *)(iVar1 + 0x38);
        }
        iSNDfillspuwithpackets(iVar5,uVar3);
      }
    }
    iVar5 = iVar5 + 1;
    iVar1 = iVar5 * 4;
  } while (iVar5 < 1);
  return;
}




// decompiled code
// original method signature: 
// int iSNDplatformpacketoverhead(void);
 // line 0, offset 0x801041b8
int iSNDplatformpacketoverhead(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_801234e4;
  if ((int)PTR_DAT_801234e4 < 0) {
    puVar1 = PTR_DAT_801234e4 + 0xfff;
  }
  return (((int)puVar1 >> 0xc) + 3U & 0xfffffffc) * 2 + 0x1050;
}




// decompiled code
// original method signature: 
// int iSNDplatformcalcdatarate(ushort *param_1);
 // line 0, offset 0x801041ec
int iSNDplatformcalcdatarate(ushort *param_1)

{
  return (int)((uint)*param_1 * (uint)*(byte *)(param_1 + 1) * 0x92) >> 8;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformpacketplaycreate(int param_1,int *param_2);
 // line 0, offset 0x8010421c
undefined4 iSNDplatformpacketplaycreate(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_8014803c = iSNDpsxpacketstop;
  *(undefined *)((int)param_2 + 0x42) = 0xff;
  *(int **)(param_2 + 0xb) = param_2 + 0x414;
  iVar1 = iSNDpsxmalloc((int)PTR_DAT_801234e4);
  *param_2 = iVar1;
  *(undefined **)(param_2 + 1) = PTR_DAT_801234e4;
  if (*param_2 == 0) {
    uVar2 = 0xfffffff7;
  }
  else {
    *(int **)(&DAT_80147e10 + param_1) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void iSNDplatformpacketplaydestroy(int param_1);
 // line 0, offset 0x801042c0
void iSNDplatformpacketplaydestroy(int param_1)

{
  iSNDpsxfree(*(int *)(&DAT_80147e10)[param_1]);
  (&DAT_80147e10)[param_1] = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformpacketplay(int param_1,int param_2,undefined2 param_3,undefined param_4,int param_5,undefined4 param_6,undefined param_7,ushort *param_8);
 // line 0, offset 0x80104304
/* WARNING: Removing unreachable block (ram,0x801043cc) */
/* WARNING: Removing unreachable block (ram,0x801043f4) */

undefined4
iSNDplatformpacketplay
          (int param_1,int param_2,undefined2 param_3,undefined param_4,int param_5,
          undefined4 param_6,undefined param_7,ushort *param_8)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = param_2 * 0x2c;
  puVar3 = (undefined4 *)(&DAT_80147e10)[param_1];
  (&DAT_80147a11)[iVar2] = 0;
  (&DAT_80147a10)[iVar2] = 0xff;
  (&DAT_80147a0e)[iVar2] = 0;
  (&DAT_80147a0f)[iVar2] = *(undefined *)(param_8 + 1);
  *(undefined4 *)(&DAT_801479f4 + iVar2) = 0;
  *(undefined2 *)(&DAT_80147a08 + iVar2) = param_3;
  (&DAT_80147a12)[iVar2] = param_4;
  (&DAT_80147a13)[iVar2] = param_7;
  *(undefined4 *)(&DAT_801479f0 + iVar2) = *puVar3;
  (&DAT_80147a17)[iVar2] = (char)param_1;
  uVar5 = 0x1000 / (int)(uint)(byte)(&DAT_80147a0f)[iVar2];
  if ((&DAT_80147a0f)[iVar2] == 0) {
    trap(0x1c00);
  }
  *(short *)(puVar3 + 0x11) = (short)uVar5;
  *(undefined2 *)((int)puVar3 + 0x46) = (short)((int)((uVar5 & 0xffff) * 0x1c) >> 4);
  bVar1 = (&DAT_80147a0f)[iVar2];
  *(undefined4 **)(puVar3 + 0x12) = puVar3 + 0x14;
  *(undefined *)((int)puVar3 + 0x43) = (char)(0xd - (uint)bVar1);
  puVar3[0x13] = (int)puVar3 + (uint)*(ushort *)(puVar3 + 0x11) + 0x50;
  uVar5 = (int)puVar3[1] >> (0xd - (uint)bVar1 & 0x1f);
  *(short *)(puVar3 + 0xe) = (short)uVar5;
  uVar5 = uVar5 & 0xffff;
  bVar1 = (&DAT_80147a0f)[iVar2];
  uVar6 = (int)uVar5 / (int)(uint)bVar1;
  if (bVar1 == 0) {
    trap(0x1c00);
  }
  if (((uint)bVar1 == 0xffffffff) && (uVar5 == 0x80000000)) {
    trap(0x1800);
  }
  *(short *)(puVar3 + 0xe) = (short)uVar6;
  iVar7 = (uVar6 & 0xffff) * (uint)*(ushort *)((int)puVar3 + 0x46);
  *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)((int)puVar3 + 0x46);
  iVar4 = 0;
  *(undefined *)((int)puVar3 + 0x42) = (char)param_2;
  *(undefined2 *)((int)puVar3 + 0x36) = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)(puVar3 + 0xd) = 0;
  *(undefined2 *)((int)puVar3 + 0x32) = 0;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[2] = (uint)*(ushort *)(puVar3 + 0xe) << ((uint)*(byte *)((int)puVar3 + 0x43) & 0x1f);
  puVar3[3] = iVar7;
  puVar3[4] = iVar7 - (uint)*(ushort *)((int)puVar3 + 0x46);
  do {
    do {
      iVar7 = iSNDdmcomplete(puVar3[8]);
    } while (iVar7 == 0);
    iSNDfillspuwithpackets(param_1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  DAT_80148038 = iSNDpacketserve;
  DAT_80148040 = iSNDpacketsetirq;
  (&DAT_801479fc)[param_2 * 0xb] = 0;
  (&DAT_80147a00)[param_2 * 0xb] = 0;
  (&DAT_80147a04)[param_2 * 0xb] = puVar3[3] << 0xc;
  *(short *)(&DAT_80147a0a + iVar2) = (short)((uint)*param_8 * 0x17c7 >> 0x10);
  if (1 < (byte)(&DAT_80147a0f)[iVar2]) {
    (&DAT_80147a10)[iVar2] = *(undefined *)(param_2 * 100 + DAT_801478f4 + 4);
    (&DAT_80147a11)[(int)(char)(&DAT_80147a10)[iVar2] * 0x2c] = 1;
    (&DAT_801479fc)[(int)(char)(&DAT_80147a10)[iVar2] * 0xb] = 0;
    (&DAT_80147a00)[(int)(char)(&DAT_80147a10)[iVar2] * 0xb] = 0;
    (&DAT_80147a04)[(int)(char)(&DAT_80147a10)[iVar2] * 0xb] = (&DAT_80147a04)[param_2 * 0xb];
  }
  iSNDplatformpitch(param_2,param_5);
  uVar5 = Status;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iSNDpacketsetirq();
  setCopReg(0,Status,uVar5,0);
  (&DAT_80147a0c)[iVar2] = 1;
  return 0;
}




// decompiled code
// original method signature: 
// void iSNDpsxpacketstop(int param_1);
 // line 0, offset 0x801046c8
void iSNDpsxpacketstop(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = Status;
  iVar4 = 0;
  puVar2 = &sndpd;
  *(undefined *)
   (*(int *)((int)&DAT_80147e10 + ((int)((uint)*(byte *)(param_1 + 0x27) << 0x18) >> 0x16)) + 0x42)
       = 0xff;
  *(undefined *)(param_1 + 0x27) = 0xff;
  iVar3 = 0;
  if (DAT_80147871 != 0) {
    do {
      if (-1 < (int)((uint)(byte)puVar2[0xff] << 0x18)) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 0x2c;
    } while (iVar4 < (int)(uint)DAT_80147871);
  }
  if (iVar3 == 0) {
    DAT_80148038 = 0;
    DAT_80148040 = iSNDpacketsetirq;
  }
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  iSNDpacketsetirq();
  setCopReg(0,Status,uVar1,0);
  return;
}




// decompiled code
// original method signature: 
// void iSNDserveraddclient(undefined4 param_1);
 // line 0, offset 0x8010479c
void iSNDserveraddclient(undefined4 param_1)

{
  (&DAT_801478c4)[(int)DAT_801478a1] = param_1;
  DAT_801478a1 = DAT_801478a1 + '\x01';
  return;
}




// decompiled code
// original method signature: 
// void iSNDserverremoveclient(int param_1);
 // line 0, offset 0x801047cc
void iSNDserverremoveclient(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ('\0' < DAT_801478a1) {
    iVar1 = 0;
    while (*(int *)((int)&DAT_801478c4 + iVar1) != param_1) {
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 * 4;
      if ((int)DAT_801478a1 <= iVar2) {
        return;
      }
    }
    DAT_801478a1 = DAT_801478a1 + -1;
    if (iVar2 < (int)DAT_801478a1) {
      do {
        iVar1 = iVar2 + 1;
        (&DAT_801478c4)[iVar2] = (&DAT_801478c4)[iVar1];
        iVar2 = iVar1;
      } while (iVar1 < (int)DAT_801478a1);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void SNDSYS_service(void);
 // line 0, offset 0x80104878
void SNDSYS_service(void)

{
  code **ppcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &sndgs;
  iVar2 = 0;
  if ('\0' < DAT_801478a1) {
    do {
      ppcVar1 = (code **)(puVar3 + 0x19);
      puVar3 = puVar3 + 1;
      (**ppcVar1)();
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)DAT_801478a1);
  }
  return;
}




// decompiled code
// original method signature: 
// uint * _dbl_shift_us(uint *param_1,int param_2,uint param_3,uint param_4,int param_5);
 // line 0, offset 0x801048e8
uint * _dbl_shift_us(uint *param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint local_res8;
  uint local_resc;
  
  if (param_2 == 0) {
    iVar1 = 0;
    local_res8 = param_3;
    local_resc = param_4;
    if (0 < param_5) {
      do {
        local_resc = local_resc << 1;
        if ((local_res8 & 0x80000000) != 0) {
          local_resc = local_resc | 1;
        }
        local_res8 = local_res8 << 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_5);
    }
  }
  else {
    iVar1 = 0;
    local_res8 = param_3;
    local_resc = param_4;
    if (0 < param_5) {
      do {
        local_res8 = local_res8 >> 1;
        if ((local_resc & 1) != 0) {
          local_res8 = local_res8 | 0x80000000;
        }
        local_resc = local_resc >> 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_5);
    }
  }
  *param_1 = local_res8;
  param_1[1] = local_resc;
  return param_1;
}




// decompiled code
// original method signature: 
// uint iSNDtimeremaining(int param_1);
 // line 0, offset 0x801049a8
uint iSNDtimeremaining(int param_1)

{
  if ((&DAT_801479f8)[param_1 * 0xb] != 0) {
    if ((&DAT_801479f8)[param_1 * 0xb] == 0) {
      trap(0x1c00);
    }
    return (uint)((&DAT_80147a04)[param_1 * 0xb] - (&DAT_801479fc)[param_1 * 0xb]) /
           (uint)(&DAT_801479f8)[param_1 * 0xb];
  }
  return 0x7fffffff;
}




// decompiled code
// original method signature: 
// void GPU_cw(void);
 // line 0, offset 0x80104a0c
void GPU_cw(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void _padSetVsyncParam(void);
 // line 0, offset 0x80104a1c
void _padSetVsyncParam(void)

{
  DAT_8014857c = 0;
  DAT_80148580 = FUN_80104ab0;
  DAT_80148584 = FUN_80104a48;
  DAT_80148588 = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_80104a48(void);
 // line 0, offset 0x80104a48
undefined4 FUN_80104a48(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(uint *)(PTR_I_STAT_80137cd8 + 4) & 1) != 0) &&
     (uVar1 = 0, (*(uint *)PTR_I_STAT_80137cd8 & 1) != 0)) {
    if (_padFuncIntGun != (code *)0x0) {
      (*_padFuncIntGun)();
    }
    uVar1 = 1;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// undefined4 FUN_80104ab0(void);
 // line 0, offset 0x80104ab0
undefined4 FUN_80104ab0(void)

{
  int iVar1;
  
  DAT_80137ce0 = 1;
  if ((_padChanStart != 0) && (DAT_8014858c < 0x96)) {
    DAT_8014858c = DAT_8014858c + 1;
  }
  if ((_padChanStop == 0) && (DAT_80148590 < 0x96)) {
    DAT_80148590 = DAT_80148590 + 1;
  }
  if ((_padIntExec != 0) && (_padChanStart <= _padChanStop)) {
    _padSioState = 0;
    _padSioChan = _padChanStart;
    iVar1 = _padInitSioMode(_padInfoDir + _padChanStart * 0xf0);
    if (iVar1 == 0) {
      (*_padFuncNextPort)(0xffff);
    }
    _padTotalCurr = 0;
    if (_padSioChan <= _padChanStop) {
      do {
        FUN_80105060();
      } while (_padSioChan <= _padChanStop);
    }
    *(undefined2 *)(PTR_JOY_MCD_DATA_80137cdc + 0xe) = 0x88;
  }
  return 0;
}




// decompiled code
// original method signature: 
// void _padStartCom(void);
 // line 0, offset 0x80104c1c
void _padStartCom(void)

{
  undefined *puVar1;
  
  _padIntExec = 0;
  EnterCriticalSection();
  SysDeqIntRP();
  SysEnqIntRP();
  puVar1 = PTR_I_STAT_80137cd8;
  *(undefined4 *)PTR_I_STAT_80137cd8 = 0xfffffffe;
  *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) | 1;
  ChangeClearRCnt();
  ExitCriticalSection();
  (*_padFuncClrInfo)(_padInfoDir);
  (*_padFuncClrInfo)(_padInfoDir + 0xf0);
  _padIntExec = 1;
  DAT_8014858c = 0;
  DAT_80148590 = 0;
  return;
}




// decompiled code
// original method signature: 
// void _padStopCom(void);
 // line 0, offset 0x80104ce8
void _padStopCom(void)

{
  EnterCriticalSection();
  ChangeClearRCnt();
  SysDeqIntRP();
  ExitCriticalSection();
  return;
}




// decompiled code
// original method signature: 
// undefined4 _padInitSioMode(int param_1);
 // line 0, offset 0x80104d2c
undefined4 _padInitSioMode(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_JOY_MCD_DATA_80137cdc;
  *(undefined2 *)(PTR_JOY_MCD_DATA_80137cdc + 10) = 0x40;
  *(undefined2 *)(puVar2 + 10) = 0;
  *(undefined2 *)(puVar2 + 8) = 0xd;
  *(undefined2 *)(puVar2 + 0xe) = 0x88;
  uVar6 = 0x91;
  if (*(char *)(param_1 + 0xe8) == '\b') {
    uVar6 = 0x50;
  }
  setRC2wait(uVar6);
  uVar5 = 0x1003;
  if (_padSioChan != 0) {
    uVar5 = 0x3003;
  }
  iVar3 = _padSioChan * 4;
  *(undefined2 *)(PTR_JOY_MCD_DATA_80137cdc + 10) = uVar5;
  iVar3 = *(int *)(&_padFixResult + iVar3);
  pcVar1 = _padFuncRecvAuto;
  if (-1 < iVar3) {
    while (0 < iVar3) {
      iVar3 = *(int *)(&_padFixResult + _padSioChan * 4) + -1;
      _padFuncRecvAuto = pcVar1;
      *(int *)(&_padFixResult + _padSioChan * 4) = iVar3;
      (*_padFuncRecvAuto)(*(int *)(param_1 + 0xc) + iVar3 * 0xf0);
      iVar3 = *(int *)(&_padFixResult + _padSioChan * 4);
      pcVar1 = _padFuncRecvAuto;
    }
    _padFuncRecvAuto = pcVar1;
    if (*(int *)(&_padFixResult + _padSioChan * 4) == 0) {
      _padFuncRecvAuto = pcVar1;
      *(int *)(&_padFixResult + _padSioChan * 4) = -1;
      (*pcVar1)(param_1);
      (*_padFuncClrCmdNo)(param_1);
    }
  }
  puVar2 = PTR_JOY_MCD_DATA_80137cdc;
  if ((*(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4) & 0x200) != 0) {
    *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 10) = *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 10) | 0x10
    ;
    if ((*(ushort *)(puVar2 + 4) & 0x200) != 0) {
      do {
        uVar4 = chkRC2wait();
      } while (uVar4 == 0);
      *PTR_JOY_MCD_DATA_80137cdc = 1;
      setRC2wait(100);
      iVar3 = _padClrIntSio0();
      if (iVar3 == 0) {
        return 0;
      }
      _padWaitRXready();
      setRC2wait(0x1ae);
      do {
        if ((*(uint *)PTR_I_STAT_80137cd8 & 0x80) != 0) {
          *PTR_JOY_MCD_DATA_80137cdc = 0x42;
          setRC2wait(0x3c);
          iVar3 = _padClrIntSio0();
          if (iVar3 == 0) {
            return 0;
          }
          _padWaitRXready();
          setRC2wait(0x1ae);
          do {
            if ((*(uint *)PTR_I_STAT_80137cd8 & 0x80) != 0) {
              *PTR_JOY_MCD_DATA_80137cdc = 1;
              setRC2wait(0x3c);
              iVar3 = _padClrIntSio0();
              if (iVar3 == 0) {
                return 0;
              }
              _padWaitRXready();
              return 0;
            }
            uVar4 = chkRC2wait();
          } while (uVar4 == 0);
          return 0;
        }
        uVar4 = chkRC2wait();
      } while (uVar4 == 0);
      return 0;
    }
    *(undefined4 *)PTR_I_STAT_80137cd8 = 0xffffff7f;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0x36) != '\0') {
    return 0;
  }
  return 1;
}




// decompiled code
// original method signature: 
// void FUN_80105060(void);
 // line 0, offset 0x80105060
void FUN_80105060(void)

{
  code **ppcVar1;
  int iVar2;
  
  ppcVar1 = (code **)(&padIntFunc + _padSioState);
  _padSioState = _padSioState + 1;
  iVar2 = (**ppcVar1)();
  if (iVar2 < 0) {
    (*_padFuncNextPort)();
  }
  else {
    if (_padSioState != 0) {
      setRC2wait(0x3c);
      iVar2 = _padClrIntSio0();
      if (iVar2 == 0) {
        (*_padFuncNextPort)(0xfffffffd);
      }
    }
    if (4 < _padSioState) {
      _padSioState = _padSioState + -1;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// uint _padSioRW(int param_1,int param_2);
 // line 0, offset 0x80105128
uint _padSioRW(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  undefined2 uVar6;
  
  puVar4 = PTR_I_STAT_80137cd8;
  bVar3 = (byte)param_2;
  if (param_2 < 0) {
    bVar1 = *PTR_JOY_MCD_DATA_80137cdc;
    *(undefined *)(param_1 + 0x44) = 0xff;
    *(undefined *)(param_1 + 0x45) = 1;
    **(byte **)(param_1 + 0x40) = ~bVar3;
    uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4);
    while ((uVar2 & 1) == 0) {
      uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4);
    }
    do {
      uVar5 = chkRC2wait();
    } while (uVar5 == 0);
    *PTR_JOY_MCD_DATA_80137cdc = ~bVar3;
  }
  else {
    uVar6 = 0x88;
    if (((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8) &&
       (uVar6 = 0x88, 8 < *(byte *)(param_1 + 0x44))) {
      uVar6 = 0x22;
    }
    _startTime = (uint)(ushort)TMR_SYSCLOCK_VAL;
    uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4);
    _waitTime = 0x1ae;
    while ((uVar2 & 2) == 0) {
      uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4);
    }
    bVar1 = *PTR_JOY_MCD_DATA_80137cdc;
    *(undefined2 *)(PTR_JOY_MCD_DATA_80137cdc + 0xe) = uVar6;
    uVar5 = *(uint *)puVar4;
    while ((uVar5 & 0x80) == 0) {
      uVar5 = chkRC2wait();
      if (uVar5 != 0) {
        return 0xffffffec;
      }
      uVar5 = *(uint *)PTR_I_STAT_80137cd8;
    }
    *PTR_JOY_MCD_DATA_80137cdc = bVar3;
    *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
    *(byte *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x44)) = bVar1;
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
  }
  return (uint)bVar1;
}




// decompiled code
// original method signature: 
// uint _padSioRW2(int param_1,undefined param_2);
 // line 0, offset 0x80105300
uint _padSioRW2(int param_1,undefined param_2)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x88;
  if (((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8) && (8 < *(byte *)(param_1 + 0x44))) {
    uVar3 = 0x22;
  }
  do {
  } while ((*(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4) & 2) == 0);
  setRC2wait(400);
  bVar1 = *PTR_JOY_MCD_DATA_80137cdc;
  if ((*(char *)(param_1 + 0x44) == '\0') && ((int)(uint)bVar1 >> 4 == 8)) {
    *(undefined2 *)(PTR_JOY_MCD_DATA_80137cdc + 0xe) = 0x22;
  }
  else {
    *(undefined2 *)(PTR_JOY_MCD_DATA_80137cdc + 0xe) = uVar3;
  }
  uVar2 = *(uint *)PTR_I_STAT_80137cd8;
  while( true ) {
    if ((uVar2 & 0x80) != 0) {
      if ((*(char *)(param_1 + 0xe8) != '\b') && (_padSioState == 2)) {
        setRC2wait(0x3c);
        do {
          uVar2 = chkRC2wait();
        } while (uVar2 == 0);
      }
      *PTR_JOY_MCD_DATA_80137cdc = param_2;
      *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
      if (*(char *)(param_1 + 0x44) != -1) {
        *(byte *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x44)) = bVar1;
      }
      *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
      return (uint)bVar1;
    }
    uVar2 = (uint)(ushort)TMR_SYSCLOCK_VAL;
    if (uVar2 < _startTime) {
      if ((ushort)TMR_SYSCLOCK_MAX == 0) {
        uVar2 = uVar2 + 0x10000;
      }
      else {
        uVar2 = (uint)(ushort)TMR_SYSCLOCK_MAX + uVar2;
      }
    }
    uVar2 = uVar2 - _startTime;
    if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
      uVar2 = uVar2 >> 3;
    }
    if (_waitTime <= uVar2) break;
    uVar2 = *(uint *)PTR_I_STAT_80137cd8;
  }
  return 0xfffffffe;
}




// decompiled code
// original method signature: 
// undefined4 _padClrIntSio0(void);
 // line 0, offset 0x80105538
undefined4 _padClrIntSio0(void)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = PTR_JOY_MCD_DATA_80137cdc;
  *(undefined4 *)PTR_I_STAT_80137cd8 = 0xffffff7f;
  uVar1 = *(ushort *)(puVar2 + 4);
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 10) =
           *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 10) | 0x10;
      return 1;
    }
    uVar3 = chkRC2wait();
    if (uVar3 != 0) break;
    uVar1 = *(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4);
  }
  return 0;
}




// decompiled code
// original method signature: 
// void _padWaitRXready(void);
 // line 0, offset 0x801055c8
void _padWaitRXready(void)

{
  do {
  } while ((*(ushort *)(PTR_JOY_MCD_DATA_80137cdc + 4) & 2) == 0);
  return;
}




// decompiled code
// original method signature: 
// void _padSetAct(int param_1,undefined4 param_2,undefined param_3);
 // line 0, offset 0x801055f0
void _padSetAct(int param_1,undefined4 param_2,undefined param_3)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined *)(param_1 + 0x34) = param_3;
  return;
}




// decompiled code
// original method signature: 
// void _padSendAtLoadInfo(int param_1);
 // line 0, offset 0x801055fc
void _padSendAtLoadInfo(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    FUN_80105ec0(param_1,*(undefined *)(param_1 + 0xe4));
  }
  else {
    if (bVar1 < 4) {
      if (bVar1 == 2) {
        FUN_80105eac(param_1);
      }
    }
    else {
      if (bVar1 == 4) {
        FUN_80105f00(param_1,*(undefined *)(param_1 + 0x47));
      }
    }
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 _padRecvAtLoadInfo(int *param_1);
 // line 0, offset 0x80105680
undefined4 _padRecvAtLoadInfo(int *param_1)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  
  bVar1 = *(byte *)((int)param_1 + 0x46);
  if (bVar1 == 3) {
    bVar1 = *(byte *)(param_1[0xf] + 4);
    bVar3 = *(byte *)(param_1[0xf] + 5);
    *(undefined *)((int)param_1 + 0x47) = 0;
    *(short *)((int)param_1 + 0xe6) = (ushort)bVar3 + (ushort)bVar1 * 0x100;
  }
  else {
    if (3 < bVar1) {
      if (bVar1 != 4) {
        return 1;
      }
      bVar3 = *(char *)((int)param_1 + 0x47) + 1;
      bVar1 = *(byte *)(param_1[0xf] + 4);
      *(byte *)((int)param_1 + 0x47) = bVar3;
      param_1[0x3b] = param_1[0x3b] + 8 + ((uint)bVar1 + 3 & 0x1fc);
      if (*(byte *)((int)param_1 + 0xea) <= bVar3) {
        iVar4 = _padGetActSize((int)param_1);
        if (iVar4 < 0x81) {
          *(undefined *)((int)param_1 + 0x46) = 0xff;
          _padLoadActInfo(param_1,(int)param_1 + 99);
          *(undefined *)((int)param_1 + 0x46) = 2;
        }
        else {
          *(undefined *)((int)param_1 + 0x46) = 0xfe;
          *(undefined *)((int)param_1 + 0x49) = 2;
        }
      }
      return 0;
    }
    if (bVar1 != 2) {
      return 1;
    }
    *(undefined *)((int)param_1 + 0xe3) = *(undefined *)(param_1[0xf] + 3);
    uVar2 = *(undefined *)(param_1[0xf] + 4);
    *(undefined2 *)((int)param_1 + 0xe6) = 0;
    *(undefined *)(param_1 + 0x39) = uVar2;
    *(undefined *)((int)param_1 + 0xe9) = *(undefined *)(param_1[0xf] + 5);
    uVar2 = *(undefined *)(param_1[0xf] + 6);
    param_1[0x3b] = 0;
    *(undefined *)((int)param_1 + 0xea) = uVar2;
  }
  return 1;
}




// decompiled code
// original method signature: 
// int _padGetActSize(int param_1);
 // line 0, offset 0x801057cc
int _padGetActSize(int param_1)

{
  return ((int)((uint)*(byte *)(param_1 + 0xe3) + 1) >> 1) * 4 +
         ((uint)*(byte *)(param_1 + 0xe9) * 5 + 3 & 0xffc) + 4 + *(int *)(param_1 + 0xec);
}




// decompiled code
// original method signature: 
// undefined4 _padLoadActInfo(int *param_1,int param_2);
 // line 0, offset 0x80105804
undefined4 _padLoadActInfo(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_1[1] != 0) {
      return 0;
    }
    iVar1 = (*_padFuncChkEng)();
    if (iVar1 == 0) {
      *(undefined *)((int)param_1 + 0x49) = 4;
      *(undefined *)((int)param_1 + 0x46) = 1;
      param_1[5] = -0x7fefa728;
      param_1[6] = -0x7fefa680;
      iVar1 = (param_2 + 3 >> 2) * 4;
      *param_1 = iVar1;
      *(undefined *)((int)param_1 + 0x47) = 0;
      iVar1 = iVar1 + ((int)((uint)*(byte *)((int)param_1 + 0xe3) + 1) >> 1) * 4;
      param_1[1] = iVar1;
      param_1[2] = iVar1 + ((uint)*(byte *)((int)param_1 + 0xe9) * 5 + 3 & 0xffc);
      return 1;
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void FUN_801058d8(int param_1);
 // line 0, offset 0x801058d8
void FUN_801058d8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    FUN_80105ee0(param_1,*(undefined *)(param_1 + 0x47));
  }
  else {
    if (bVar1 < 4) {
      if (bVar1 == 2) {
        FUN_80105ec0(param_1,*(undefined *)(param_1 + 0x47));
      }
    }
    else {
      if (bVar1 == 4) {
        if (*(char *)(param_1 + 0x48) == '\0') {
          FUN_80105f00(param_1,*(undefined *)(param_1 + 0x47));
        }
        else {
          FUN_80105f20(param_1);
        }
      }
    }
  }
  return;
}




// decompiled code
// original method signature: 
// uint _padSetActAlign(int param_1,undefined4 param_2);
 // line 0, offset 0x80105bf4
uint _padSetActAlign(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*_padFuncChkEng)();
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x46) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0x80105c5c;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0x80105c78;
  }
  return (uint)(iVar1 == 0);
}




// decompiled code
// original method signature: 
// uint _padSetMainMode(int param_1,char param_2,undefined param_3);
 // line 0, offset 0x80105d40
uint _padSetMainMode(int param_1,char param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = (*_padFuncChkEng)();
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x46) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0x80105dd8;
    *(undefined4 *)(param_1 + 0x18) = 0x80105e2c;
    *(char *)(param_1 + 0x51) = param_2;
    *(undefined *)(param_1 + 0x52) = param_3;
    *(bool *)(param_1 + 0x53) = param_2 == *(char *)(param_1 + 0xe4);
  }
  return (uint)(iVar1 == 0);
}




// decompiled code
// original method signature: 
// undefined4 FUN_80105e2c(int param_1);
 // line 0, offset 0x80105e2c
undefined4 FUN_80105e2c(int param_1)

{
  if (*(char *)(param_1 + 0x53) == '\0') {
    (*_padFuncClrInfo)();
  }
  else {
    if (*(char *)(param_1 + 0x46) == '\x02') {
      return 1;
    }
    *(undefined *)(param_1 + 0x46) = 0xfe;
  }
  return 0;
}




// decompiled code
// original method signature: 
// void _padCmdParaMode(int param_1,undefined param_2);
 // line 0, offset 0x80105e8c
void _padCmdParaMode(int param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x36) = 0x43;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined *)(param_1 + 0x24) = param_2;
  *(undefined *)(param_1 + 0x35) = 1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_80105eac(int param_1);
 // line 0, offset 0x80105eac
void FUN_80105eac(int param_1)

{
  *(undefined *)(param_1 + 0x36) = 0x45;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x35) = 0;
  return;
}




// decompiled code
// original method signature: 
// void FUN_80105ec0(int param_1,undefined param_2);
 // line 0, offset 0x80105ec0
void FUN_80105ec0(int param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x36) = 0x4c;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined *)(param_1 + 0x24) = param_2;
  *(undefined *)(param_1 + 0x35) = 1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_80105ee0(int param_1,undefined param_2);
 // line 0, offset 0x80105ee0
void FUN_80105ee0(int param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x36) = 0x46;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined *)(param_1 + 0x24) = param_2;
  *(undefined *)(param_1 + 0x35) = 1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_80105f00(int param_1,undefined param_2);
 // line 0, offset 0x80105f00
void FUN_80105f00(int param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x36) = 0x47;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined *)(param_1 + 0x24) = param_2;
  *(undefined *)(param_1 + 0x35) = 1;
  return;
}




// decompiled code
// original method signature: 
// void FUN_80105f20(int param_1);
 // line 0, offset 0x80105f20
void FUN_80105f20(int param_1)

{
  *(undefined *)(param_1 + 0x36) = 0x4b;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x35) = 0;
  return;
}




// decompiled code
// original method signature: 
// void transmult(int *param_1,int *param_2,undefined4 *param_3);
 // line 0, offset 0x80105f40
void transmult(int *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_58 [10];
  int *local_30;
  int *local_2c;
  
  iVar10 = 0;
  iVar13 = 8;
  iVar12 = 4;
  piVar11 = param_1;
  do {
    iVar6 = 0;
    iVar9 = 0x18;
    iVar8 = 0xc;
    local_30 = (int *)((int)param_1 + iVar12);
    local_2c = (int *)((int)param_1 + iVar13);
    piVar7 = param_2;
    do {
      iVar5 = *piVar7;
      piVar7 = piVar7 + 1;
      uVar1 = fixedmult(*piVar11,iVar5);
      piVar2 = (int *)((int)param_2 + iVar8);
      iVar8 = iVar8 + 4;
      uVar3 = fixedmult(*local_30,*piVar2);
      piVar2 = (int *)((int)param_2 + iVar9);
      iVar9 = iVar9 + 4;
      uVar4 = fixedmult(*local_2c,*piVar2);
      iVar5 = iVar10 + iVar6;
      iVar6 = iVar6 + 1;
      local_58[iVar5] = uVar1 + uVar3 + uVar4;
    } while (iVar6 < 3);
    iVar13 = iVar13 + 0xc;
    iVar12 = iVar12 + 0xc;
    iVar10 = iVar10 + 3;
    piVar11 = piVar11 + 3;
  } while (iVar10 < 9);
  blockmove(local_58,param_3,0x24);
  return;
}




// decompiled code
// original method signature: 
// void fastmovfxya(int iParm1,int iParm2,int iParm3);
 // line 0, offset 0x80106084
void fastmovfxya(int iParm1,int iParm2,int iParm3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_t6;
  short local_10;
  short local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  iVar4 = primptr;
  iVar7 = (int)*(short *)(iParm1 + 4);
  iVar6 = (int)*(short *)(iParm1 + 6);
  local_10 = (short)((*(int *)(iParm1 + 0xc) << 0x14) >> 0x14);
  iVar5 = DAT_801486fc - iParm2;
  local_e = (short)((*(int *)(iParm1 + 0xc) << 4) >> 0x14);
  if (0 < iVar5) {
    iParm2 = iParm2 + iVar5;
    local_10 = local_10 + (short)iVar5;
    iVar7 = iVar7 - iVar5;
  }
  iVar5 = (iParm2 + iVar7) - DAT_80148704;
  if (0 < iVar5) {
    iVar7 = iVar7 - iVar5;
  }
  iVar5 = DAT_80148700 - iParm3;
  if (0 < iVar5) {
    iParm3 = iParm3 + iVar5;
    local_e = local_e + (short)iVar5;
    iVar6 = iVar6 - iVar5;
  }
  iVar5 = (iParm3 + iVar6) - DAT_80148708;
  if (0 < iVar5) {
    iVar6 = iVar6 - iVar5;
  }
  local_c = (undefined2)iVar7;
  local_a = (undefined2)iVar6;
  if ((0 < iVar7) && (0 < iVar6)) {
    primptr = primptr + 0x18;
    SetDrawMove(iVar4,(undefined4 *)&local_10,DAT_801486e8 + iParm2,DAT_801486ec + iParm3);
    uVar1 = nextprim + 2U & 3;
    uVar2 = iVar4 + 2U & 3;
    puVar3 = (uint *)((iVar4 + 2U) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
              (*(int *)((nextprim + 2U) - uVar1) << (3 - uVar1) * 8 |
              in_t6 & 0xffffffffU >> (uVar1 + 1) * 8) >> (3 - uVar2) * 8;
    uVar1 = nextprim + 2U & 3;
    puVar3 = (uint *)((nextprim + 2U) - uVar1);
    *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(iVar4 << 8) >> (3 - uVar1) * 8;
    nextprim = iVar4;
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDmemconstrain(int *param_1,int *param_2);
 // line 0, offset 0x801061a8
void iSNDmemconstrain(int *param_1,int *param_2)

{
  if ((int)(uint)DAT_80148786 < *param_1 + *param_2) {
    *param_2 = (uint)DAT_80148786 - *param_1;
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDmeminit(undefined4 param_1,int param_2);
 // line 0, offset 0x801061d4
void iSNDmeminit(undefined4 param_1,int param_2)

{
  sndmm = param_1;
  DAT_80148784 = 0;
  DAT_80148786 = (short)(param_2 >> 2);
  DAT_80148788 = 0;
  return;
}




// decompiled code
// original method signature: 
// uint iSNDmemrestore(void);
 // line 0, offset 0x801061f4
uint iSNDmemrestore(void)

{
  if (DAT_80148786 == 0) {
    trap(0x1c00);
  }
  return (uint)(DAT_80148788 * 100) / (uint)DAT_80148786;
}




// decompiled code
// original method signature: 
// int iSNDmalloc(int param_1);
 // line 0, offset 0x80106238
/* WARNING: Could not reconcile some variable overlaps */

int iSNDmalloc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  uint local_1c;
  
  iVar3 = 0;
  if (DAT_80148784 < 0x80) {
    iVar4 = param_1 + 3 >> 2;
    if (DAT_80148784 == 0) {
      local_1c = (uint)DAT_80148786;
      local_20 = 0;
      iSNDmemconstrain(&local_20,(int *)&local_1c);
    }
    else {
      iVar2 = 0;
      if (DAT_80148784 != 0) {
LAB_801062d4:
        if (iVar3 == 0) {
          local_1c = (uint)*(ushort *)((int)&DAT_8014878c + iVar2);
          local_20 = 0;
        }
        else {
          local_20 = (uint)*(ushort *)((int)&DAT_80148788 + iVar2) +
                     (uint)*(ushort *)((int)&DAT_80148788 + iVar2 + 2);
          local_1c = (uint)*(ushort *)((int)&DAT_8014878c + iVar2) - local_20;
        }
        iSNDmemconstrain(&local_20,(int *)&local_1c);
        if ((int)local_1c < iVar4) goto LAB_80106378;
        uVar1 = (uint)DAT_80148784;
        while (iVar3 < (int)uVar1) {
          *(undefined4 *)(&DAT_8014878c + uVar1 * 2) =
               *(undefined4 *)(&DAT_8014878c + (uVar1 - 1) * 2);
          uVar1 = uVar1 - 1;
        }
        goto LAB_801063d8;
      }
LAB_8010638c:
      local_20 = (uint)*(ushort *)((int)&DAT_80148788 + iVar2) +
                 (uint)*(ushort *)((int)&DAT_80148788 + iVar2 + 2);
      local_1c = (uint)DAT_80148786 - local_20;
      iSNDmemconstrain(&local_20,(int *)&local_1c);
    }
    iVar2 = 0;
    if (iVar4 <= (int)local_1c) {
LAB_801063d8:
      (&DAT_8014878e)[iVar3 * 2] = (short)iVar4;
      (&DAT_8014878c)[iVar3 * 2] = (undefined2)local_20;
      DAT_80148784 = DAT_80148784 + 1;
      iVar2 = sndmm + local_20 * 4;
      if (DAT_80148788 < local_20 + iVar4) {
        DAT_80148788 = local_20 + iVar4;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
LAB_80106378:
  iVar3 = iVar3 + 1;
  iVar2 = iVar3 * 4;
  if ((int)(uint)DAT_80148784 <= iVar3) goto LAB_8010638c;
  goto LAB_801062d4;
}




// decompiled code
// original method signature: 
// void _patch_gte(void);
 // line 0, offset 0x80106454
void _patch_gte(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  
  DAT_8014898c = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = FUN_000000b0();
  piVar3 = (int *)(*(int *)(iVar1 + 0x18) + 0x28);
  piVar4 = &DAT_80106500;
  piVar2 = piVar3;
  do {
    iVar1 = *piVar4;
    iVar5 = *piVar2;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
    if (iVar1 != iVar5) goto LAB_801064dc;
  } while (piVar4 != &DAT_80106518);
  piVar4 = &DAT_80106518;
  do {
    *piVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (piVar4 != (int *)0x80106530);
LAB_801064dc:
  FlushCache();
  ExitCriticalSection();
  return;
}




// decompiled code
// original method signature: 
// undefined * startIntrVSync(void);
 // line 0, offset 0x80106534
undefined * startIntrVSync(void)

{
  *(undefined4 *)PTR_TMR_HRETRACE_MODE_80137d14 = 0x100;
  Vcount = 0;
  FUN_80106624(&DAT_80137cf0,8);
  InterruptCallback();
  return &LAB_801065f8;
}




// decompiled code
// original method signature: 
// void FUN_8010658c(void);
 // line 0, offset 0x8010658c
void FUN_8010658c(void)

{
  code **ppcVar1;
  int iVar2;
  
  iVar2 = 0;
  ppcVar1 = (code **)&DAT_80137cf0;
  Vcount = Vcount + 1;
  do {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    iVar2 = iVar2 + 1;
    ppcVar1 = ppcVar1 + 1;
  } while (iVar2 < 8);
  return;
}




// decompiled code
// original method signature: 
// void FUN_80106624(undefined4 *param_1,int param_2);
 // line 0, offset 0x80106624
void FUN_80106624(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}




// decompiled code
// original method signature: 
// void ChangeClearPAD(void);
 // line 0, offset 0x80106654
void ChangeClearPAD(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void ChangeClearRCnt(void);
 // line 0, offset 0x80106664
void ChangeClearRCnt(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xc0)();
  return;
}




// decompiled code
// original method signature: 
// void SetDQA(undefined4 param_1);
 // line 0, offset 0x80106674
void SetDQA(undefined4 param_1)

{
  setCopControlWord(2,0xd800,param_1);
  return;
}




// decompiled code
// original method signature: 
// void SetDQB(undefined4 param_1);
 // line 0, offset 0x80106680
void SetDQB(undefined4 param_1)

{
  setCopControlWord(2,0xe000,param_1);
  return;
}




// decompiled code
// original method signature: 
// int setjmp(__jmp_buf_tag *__env);
 // line 0, offset 0x8010668c
int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// void HookEntryInt(void);
 // line 0, offset 0x8010669c
void HookEntryInt(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// undefined * startIntrDMA(void);
 // line 0, offset 0x801066ac
undefined * startIntrDMA(void)

{
  FUN_80106924(&DAT_8013bd24,8);
  *(undefined4 *)PTR_DMA_DICR_8013bd20 = 0;
  InterruptCallback();
  return &LAB_80106878;
}




// decompiled code
// original method signature: 
// void FUN_801066f8(void);
 // line 0, offset 0x801066f8
void FUN_801066f8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code **ppcVar4;
  
  uVar3 = *(uint *)PTR_DMA_DICR_8013bd20 >> 0x18 & 0x7f;
  if (uVar3 != 0) {
    do {
      iVar1 = 0;
      ppcVar4 = (code **)&DAT_8013bd24;
      while ((uVar3 != 0 && (iVar1 < 7))) {
        if ((uVar3 & 1) != 0) {
          *(uint *)PTR_DMA_DICR_8013bd20 =
               *(uint *)PTR_DMA_DICR_8013bd20 & (1 << (iVar1 + 0x18U & 0x1f) | 0xffffffU);
          if (*ppcVar4 != (code *)0x0) {
            (**ppcVar4)();
          }
        }
        ppcVar4 = ppcVar4 + 1;
        uVar3 = uVar3 >> 1;
        iVar1 = iVar1 + 1;
      }
      uVar3 = *(uint *)PTR_DMA_DICR_8013bd20 >> 0x18 & 0x7f;
    } while (uVar3 != 0);
  }
  if (((*(uint *)PTR_DMA_DICR_8013bd20 & 0xff000000) == 0x80000000) ||
     ((*(uint *)PTR_DMA_DICR_8013bd20 & 0x8000) != 0)) {
    printf(s_DMA_bus_error__code__08x_80057608,*(undefined4 *)PTR_DMA_DICR_8013bd20);
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      printf(s_MADR__d___08x_80057624,iVar1,
             *(undefined4 *)(PTR_DMA_MDEC_IN_MADR_8013bd44 + iVar1 * 0x10));
      iVar1 = iVar2;
    } while (iVar2 < 7);
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_80106924(undefined4 *param_1,int param_2);
 // line 0, offset 0x80106924
void FUN_80106924(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}




// decompiled code
// original method signature: 
// void _96_remove(void);
 // line 0, offset 0x80106954
void _96_remove(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void ExitCriticalSection(void);
 // line 0, offset 0x8010696c
void ExitCriticalSection(void)

{
  syscall(0);
  return;
}




// decompiled code
// original method signature: 
// void ReturnFromException(void);
 // line 0, offset 0x8010697c
void ReturnFromException(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void EnterCriticalSection(void);
 // line 0, offset 0x8010698c
void EnterCriticalSection(void)

{
  syscall(0);
  return;
}




// decompiled code
// original method signature: 
// void ResetEntryInt(void);
 // line 0, offset 0x8010699c
void ResetEntryInt(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// uint remapshiftjiscode(uint param_1);
 // line 0, offset 0x801069c4
uint remapshiftjiscode(uint param_1)

{
  if (param_1 - 0x20 < 0x60) {
    param_1 = (uint)*(ushort *)(&DAT_8013bd50 + (param_1 - 0x20) * 2);
  }
  return param_1;
}




// decompiled code
// original method signature: 
// uint decodeshiftjis(byte **param_1);
 // line 0, offset 0x801069ec
uint decodeshiftjis(byte **param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar4 = *param_1;
  bVar1 = *pbVar4;
  pbVar5 = pbVar4 + 1;
  if ((bVar1 & 0x80) == 0) {
    uVar3 = remapshiftjiscode((uint)bVar1);
  }
  else {
    bVar2 = *pbVar5;
    pbVar5 = pbVar4 + 2;
    uVar3 = (uint)CONCAT11(bVar1,bVar2);
  }
  *param_1 = pbVar5;
  return uVar3 & 0xffff;
}




// decompiled code
// original method signature: 
// undefined4 _err_math(int param_1,undefined4 param_2);
 // line 0, offset 0x80106a54
undefined4 _err_math(int param_1,undefined4 param_2)

{
  if ((param_1 == 0x21) || (math_errno = param_1, math_err_point = param_2, param_1 == 0x22)) {
    math_errno = param_1;
    math_err_point = param_2;
    DeliverEvent();
  }
  return 0;
}




// decompiled code
// original method signature: 
// void csincos(undefined4 param_1,int *param_2,int *param_3);
 // line 0, offset 0x80106ac4
void csincos(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_60 [6];
  int local_48;
  int local_3c [5];
  int local_28;
  int local_1c [5];
  int local_8;
  
  piVar2 = local_60;
  uVar3 = 0;
  piVar6 = local_1c;
  piVar5 = &H_cor_tbl;
  piVar4 = local_3c;
  do {
    if (piVar2[0x10] < 0) {
      piVar2[1] = *piVar2 + (piVar2[8] >> (uVar3 & 0x1f));
      *piVar4 = piVar2[8] - (*piVar2 >> (uVar3 & 0x1f));
      iVar1 = piVar2[0x10] + *piVar5;
    }
    else {
      piVar2[1] = *piVar2 - (piVar2[8] >> (uVar3 & 0x1f));
      *piVar4 = piVar2[8] + (*piVar2 >> (uVar3 & 0x1f));
      iVar1 = piVar2[0x10] - *piVar5;
    }
    *piVar6 = iVar1;
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 6);
  *param_3 = local_48 - (local_8 * local_28 >> 0xc);
  *param_2 = local_28 + (local_8 * local_48 >> 0xc);
  return;
}




// decompiled code
// original method signature: 
// int PCread(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x80106be4
int PCread(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_3 != 0) {
    bVar1 = 0x8000 < param_3;
    while( true ) {
      uVar3 = param_3;
      if (bVar1) {
        uVar3 = 0x8000;
      }
      iVar2 = _SN_read();
      iVar4 = iVar4 + iVar2;
      if (iVar2 == -1) break;
      param_3 = param_3 - iVar2;
      if (iVar2 < (int)uVar3) {
        return iVar4;
      }
      bVar1 = 0x8000 < param_3;
      if (param_3 == 0) {
        return iVar4;
      }
    }
    iVar4 = -1;
  }
  return iVar4;
}




// decompiled code
// original method signature: 
// void PCopen(void);
 // line 0, offset 0x80106ca4
void PCopen(void)

{
  trap(0x103);
  return;
}




// decompiled code
// original method signature: 
// void PCinit(void);
 // line 0, offset 0x80106cc4
void PCinit(void)

{
  trap(0x101);
  return;
}




// decompiled code
// original method signature: 
// void PCcreat(void);
 // line 0, offset 0x80106cd0
void PCcreat(void)

{
  trap(0x102);
  return;
}




// decompiled code
// original method signature: 
// undefined4 psxdevelopmentsystem(void);
 // line 0, offset 0x80106cf0
undefined4 psxdevelopmentsystem(void)

{
  int in_zero;
  undefined4 uVar1;
  
  if (*(short *)(in_zero + 0x86) == 0x375a) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (*(short *)(in_zero + 0x86) != 0x275a) {
      return 0xffffffff;
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void PClseek(void);
 // line 0, offset 0x80106d1c
void PClseek(void)

{
  trap(0x107);
  return;
}




// decompiled code
// original method signature: 
// void PCclose(void);
 // line 0, offset 0x80106d40
void PCclose(void)

{
  trap(0x104);
  return;
}




// decompiled code
// original method signature: 
// int PCwrite(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x80106d50
int PCwrite(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_3 != 0) {
    bVar1 = 0x8000 < param_3;
    while( true ) {
      uVar3 = param_3;
      if (bVar1) {
        uVar3 = 0x8000;
      }
      iVar2 = _SN_write();
      iVar4 = iVar4 + iVar2;
      if (iVar2 == -1) break;
      param_3 = param_3 - iVar2;
      if (iVar2 < (int)uVar3) {
        return iVar4;
      }
      bVar1 = 0x8000 < param_3;
      if (param_3 == 0) {
        return iVar4;
      }
    }
    iVar4 = -1;
  }
  return iVar4;
}




// decompiled code
// original method signature: 
// void EnableEvent(void);
 // line 0, offset 0x80106e10
void EnableEvent(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void OpenEvent(void);
 // line 0, offset 0x80106e20
void OpenEvent(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void DisableEvent(void);
 // line 0, offset 0x80106e30
void DisableEvent(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// uint * _dbl_shift(uint *param_1,int param_2,uint param_3,uint param_4,int param_5);
 // line 0, offset 0x80106e40
uint * _dbl_shift(uint *param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint local_res8;
  uint local_resc;
  
  if (param_2 == 0) {
    iVar1 = 0;
    local_res8 = param_3;
    local_resc = param_4;
    if (0 < param_5) {
      do {
        local_resc = local_resc << 1;
        if ((local_res8 & 0x80000000) != 0) {
          local_resc = local_resc | 1;
        }
        local_res8 = local_res8 << 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_5);
    }
  }
  else {
    iVar1 = 0;
    local_res8 = param_3;
    local_resc = param_4;
    if (0 < param_5) {
      do {
        local_res8 = local_res8 >> 1;
        if ((local_resc & 1) != 0) {
          local_res8 = local_res8 | 0x80000000;
        }
        local_resc = (int)local_resc >> 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_5);
    }
  }
  *param_1 = local_res8;
  param_1[1] = local_resc;
  return param_1;
}




// decompiled code
// original method signature: 
// uint * _mainasu(uint *param_1,uint param_2,uint param_3);
 // line 0, offset 0x80106f00
uint * _mainasu(uint *param_1,uint param_2,uint param_3)

{
  uint local_res4;
  uint local_res8;
  
  local_res8 = ~param_3;
  local_res4 = ~param_2;
  _add_mant_d(&local_res4,local_res4,local_res8,1,0);
  *param_1 = local_res4;
  param_1[1] = local_res8;
  return param_1;
}




// decompiled code
// original method signature: 
// uint * _add_mant_d(uint *param_1,uint param_2,int param_3,uint param_4,int param_5);
 // line 0, offset 0x80106f70
uint * _add_mant_d(uint *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int local_res8;
  uint local_c;
  
  local_c = param_2 >> 0x10;
  uVar1 = (param_2 & 0xffff) + (param_4 & 0xffff);
  if ((uVar1 & 0x10000) != 0) {
    local_c = local_c + 1;
  }
  local_c = local_c + (param_4 >> 0x10);
  local_res8 = param_3;
  if ((local_c & 0x10000) != 0) {
    local_res8 = param_3 + 1;
  }
  *param_1 = local_c * 0x10000 | uVar1 & 0xffff;
  param_1[1] = local_res8 + param_5;
  return param_1;
}




// decompiled code
// original method signature: 
// void TermPrim(uint *param_1);
 // line 0, offset 0x80107020
void TermPrim(uint *param_1)

{
  *param_1 = *param_1 | 0xffffff;
  return;
}




// decompiled code
// original method signature: 
// void AddPrim(uint *param_1,uint *param_2);
 // line 0, offset 0x80107040
void AddPrim(uint *param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xff000000 | *param_1 & 0xffffff;
  *param_1 = *param_1 & 0xff000000 | (uint)param_2 & 0xffffff;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_80107080(void);
 // line 0, offset 0x80107080
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80107080(void)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte local_20;
  byte local_18 [8];
  
  *PTR_CDROM_REG0_8013c20c = 1;
  local_20 = *PTR_CDROM_REG3_8013c218 & 7;
  uVar7 = 0;
  if (local_20 == 0) {
LAB_801075c4:
    uVar2 = 0;
  }
  else {
    while (iVar5 = 0, local_20 != (*PTR_CDROM_REG3_8013c218 & 7)) {
      local_20 = *PTR_CDROM_REG3_8013c218 & 7;
    }
    do {
      pbVar3 = local_18 + iVar5;
      iVar6 = iVar5;
      if ((*PTR_CDROM_REG0_8013c20c & 0x20) == 0) break;
      iVar5 = iVar5 + 1;
      *pbVar3 = *PTR_CDROM_REG1_8013c210;
      iVar6 = iVar5;
    } while (iVar5 < 8);
    while (iVar5 < 8) {
      local_18[iVar5] = 0;
      iVar5 = iVar5 + 1;
    }
    *PTR_CDROM_REG0_8013c20c = 1;
    *PTR_CDROM_REG3_8013c218 = 7;
    *PTR_CDROM_REG2_8013c214 = 7;
    if ((local_20 != 3) || (*(int *)(&DAT_8013c10c + (uint)CD_com * 4) != 0)) {
      if (((_CD_status & 0x10) == 0) && ((local_18[0] & 0x10) != 0)) {
        CD_nopen = CD_nopen + 1;
      }
      _CD_status = (uint)local_18[0];
      CD_status1 = (uint)local_18[1];
      uVar7 = _CD_status & 0x1d;
    }
    if (((local_20 == 5) && (0 < CD_debug)) && (printf(s_DiskError__800577a0), 0 < CD_debug)) {
      printf(s_com__s_code___02x__02x__800577ac,(&CD_comstr)[(uint)CD_com],_CD_status,CD_status1);
    }
    switch(local_20) {
    case 1:
      if ((uVar7 != 0) && (iVar6 == 1)) {
        uVar7 = 0;
      }
      DAT_8013c225 = 1;
      if (uVar7 != 0) {
        DAT_8013c225 = 5;
      }
      pbVar3 = &DAT_801489a4;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      *PTR_CDROM_REG0_8013c20c = 0;
      uVar2 = 4;
      *PTR_CDROM_REG3_8013c218 = 0;
      break;
    case 2:
      DAT_8013c224 = 2;
      if (uVar7 != 0) {
        DAT_8013c224 = 5;
      }
      pbVar3 = &DAT_8014899c;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 2;
      break;
    case 3:
      if (uVar7 == 0) {
        if (*(int *)(&DAT_8013c00c + (uint)CD_com * 4) == 0) {
          DAT_8013c224 = 2;
          pbVar3 = &DAT_8014899c;
          pbVar4 = local_18;
          iVar5 = 7;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            iVar5 = iVar5 + -1;
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          } while (iVar5 != -1);
          uVar2 = 2;
        }
        else {
          DAT_8013c224 = 3;
          pbVar3 = &DAT_8014899c;
          pbVar4 = local_18;
          iVar5 = 7;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            iVar5 = iVar5 + -1;
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          } while (iVar5 != -1);
          uVar2 = 1;
        }
      }
      else {
        DAT_8013c224 = 5;
        pbVar3 = &DAT_8014899c;
        pbVar4 = local_18;
        iVar5 = 7;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          iVar5 = iVar5 + -1;
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
        } while (iVar5 != -1);
        uVar2 = 2;
      }
      break;
    case 4:
      pbVar3 = &DAT_801489ac;
      DAT_8013c226 = 4;
      pbVar4 = local_18;
      DAT_8013c225 = 4;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      pbVar3 = &DAT_801489a4;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 4;
      break;
    case 5:
      pbVar3 = &DAT_8014899c;
      DAT_8013c225 = 5;
      pbVar4 = local_18;
      DAT_8013c224 = 5;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      pbVar3 = &DAT_801489a4;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 6;
      break;
    default:
      puts(s_CDROM__unknown_intr_800577c8);
      printf(s___d__800577dc,(uint)local_20);
      goto LAB_801075c4;
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// uint CD_sync(int param_1,undefined *param_2);
 // line 0, offset 0x801075dc
uint CD_sync(int param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  uVar4 = VSync(-1);
  DAT_801489b4 = uVar4 + 0x3c0;
  DAT_801489b8 = 0;
  DAT_801489bc = s_CD_sync_800577fc;
  while( true ) {
    uVar4 = VSync(-1);
    if ((DAT_801489b4 < (int)uVar4) ||
       (iVar5 = DAT_801489b8 + 1, bVar3 = 0x3c0000 < DAT_801489b8, DAT_801489b8 = iVar5, bVar3)) {
      puts(s_CD_timeout__80057774);
      printf(s__s___s__Sync__s__Ready__s_80057784,DAT_801489bc,(&CD_comstr)[(uint)CD_com],
             (&CD_intstr)[(uint)DAT_8013c224],(&CD_intstr)[(uint)DAT_8013c225]);
      CD_flush();
      iVar6 = -1;
    }
    else {
      iVar6 = 0;
      DAT_801489b8 = iVar5;
    }
    if (iVar6 != 0) {
      return 0xffffffff;
    }
    uVar4 = CheckCallback();
    if (uVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_8013c20c;
      while( true ) {
        uVar4 = FUN_80107080();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (CD_cbready != (code *)0x0)) {
          (*CD_cbready)((uint)DAT_8013c225,&DAT_801489a4);
        }
        if (((uVar4 & 2) != 0) && (CD_cbsync != (code *)0x0)) {
          (*CD_cbsync)((uint)DAT_8013c224,&DAT_8014899c);
        }
      }
      *PTR_CDROM_REG0_8013c20c = bVar1 & 3;
    }
    uVar4 = (uint)DAT_8013c224;
    if ((DAT_8013c224 == 2) || (DAT_8013c224 == 5)) break;
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_8013c224 = 2;
  puVar7 = &DAT_8014899c;
  iVar5 = 7;
  if (param_2 == (undefined *)0x0) {
    DAT_8013c224 = 2;
    return uVar4;
  }
  do {
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    iVar5 = iVar5 + -1;
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  } while (iVar5 != -1);
  return uVar4;
}




// decompiled code
// original method signature: 
// uint CD_ready(int param_1,undefined *param_2);
 // line 0, offset 0x8010785c
uint CD_ready(int param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  uVar4 = VSync(-1);
  DAT_801489b4 = uVar4 + 0x3c0;
  DAT_801489b8 = 0;
  DAT_801489bc = s_CD_ready_80057804;
  while( true ) {
    uVar4 = VSync(-1);
    if ((DAT_801489b4 < (int)uVar4) ||
       (iVar5 = DAT_801489b8 + 1, bVar3 = 0x3c0000 < DAT_801489b8, DAT_801489b8 = iVar5, bVar3)) {
      puts(s_CD_timeout__80057774);
      printf(s__s___s__Sync__s__Ready__s_80057784,DAT_801489bc,(&CD_comstr)[(uint)CD_com],
             (&CD_intstr)[(uint)DAT_8013c224],(&CD_intstr)[(uint)DAT_8013c225]);
      CD_flush();
      iVar6 = -1;
    }
    else {
      iVar6 = 0;
      DAT_801489b8 = iVar5;
    }
    if (iVar6 != 0) {
      return 0xffffffff;
    }
    uVar4 = CheckCallback();
    if (uVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_8013c20c;
      while( true ) {
        uVar4 = FUN_80107080();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (CD_cbready != (code *)0x0)) {
          (*CD_cbready)((uint)DAT_8013c225,&DAT_801489a4);
        }
        if (((uVar4 & 2) != 0) && (CD_cbsync != (code *)0x0)) {
          (*CD_cbsync)((uint)DAT_8013c224,&DAT_8014899c);
        }
      }
      *PTR_CDROM_REG0_8013c20c = bVar1 & 3;
    }
    uVar4 = (uint)DAT_8013c226;
    if (DAT_8013c226 != 0) break;
    uVar4 = (uint)DAT_8013c225;
    if (DAT_8013c225 != 0) {
      DAT_8013c225 = 0;
      puVar7 = &DAT_801489a4;
      iVar5 = 7;
      if (param_2 == (undefined *)0x0) {
        DAT_8013c225 = 0;
        return uVar4;
      }
      do {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
      } while (iVar5 != -1);
      return uVar4;
    }
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_8013c226 = 0;
  puVar7 = &DAT_801489ac;
  if (param_2 == (undefined *)0x0) {
    DAT_8013c226 = 0;
    return uVar4;
  }
  iVar5 = 7;
  do {
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    iVar5 = iVar5 + -1;
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  } while (iVar5 != -1);
  return uVar4;
}




// decompiled code
// original method signature: 
// undefined4 CD_cw(byte param_1,undefined *param_2,undefined *param_3,int param_4);
 // line 0, offset 0x80107b24
undefined4 CD_cw(byte param_1,undefined *param_2,undefined *param_3,int param_4)

{
  byte bVar1;
  undefined uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  
  if (1 < CD_debug) {
    printf(s__s____80057810,(&CD_comstr)[(uint)param_1]);
  }
  if ((*(int *)(&DAT_8013c18c + (uint)param_1 * 4) == 0) || (param_2 != (undefined *)0x0)) {
    CD_sync(0,(undefined *)0x0);
    if (param_1 == 2) {
      iVar8 = 0;
      puVar5 = param_2;
      do {
        (&CD_pos)[iVar8] = *puVar5;
        iVar8 = iVar8 + 1;
        puVar5 = param_2 + iVar8;
      } while (iVar8 < 4);
    }
    if (param_1 == 0xe) {
      CD_mode = *param_2;
    }
    DAT_8013c224 = 0;
    if (*(int *)(&DAT_8013c08c + (uint)param_1 * 4) != 0) {
      DAT_8013c225 = 0;
    }
    *PTR_CDROM_REG0_8013c20c = 0;
    iVar8 = 0;
    puVar5 = param_2;
    if (0 < *(int *)(&DAT_8013c18c + (uint)param_1 * 4)) {
      do {
        *PTR_CDROM_REG2_8013c214 = *puVar5;
        iVar8 = iVar8 + 1;
        puVar5 = param_2 + iVar8;
      } while (iVar8 < *(int *)(&DAT_8013c18c + (uint)param_1 * 4));
    }
    CD_com = param_1;
    *PTR_CDROM_REG1_8013c210 = param_1;
    uVar4 = 0;
    if (param_4 == 0) {
      uVar6 = VSync(-1);
      DAT_801489b4 = uVar6 + 0x3c0;
      DAT_801489b8 = 0;
      DAT_801489bc = s_CD_cw_80057828;
      while (DAT_8013c224 == 0) {
        uVar6 = VSync(-1);
        if ((DAT_801489b4 < (int)uVar6) ||
           (iVar8 = DAT_801489b8 + 1, bVar3 = 0x3c0000 < DAT_801489b8, DAT_801489b8 = iVar8, bVar3))
        {
          puts(s_CD_timeout__80057774);
          printf(s__s___s__Sync__s__Ready__s_80057784,DAT_801489bc,(&CD_comstr)[(uint)CD_com],
                 (&CD_intstr)[(uint)DAT_8013c224],(&CD_intstr)[(uint)DAT_8013c225]);
          CD_flush();
          iVar7 = -1;
        }
        else {
          iVar7 = 0;
          DAT_801489b8 = iVar8;
        }
        if (iVar7 != 0) {
          return 0xffffffff;
        }
        uVar6 = CheckCallback();
        if (uVar6 != 0) {
          bVar1 = *PTR_CDROM_REG0_8013c20c;
          while( true ) {
            uVar6 = FUN_80107080();
            if (uVar6 == 0) break;
            if (((uVar6 & 4) != 0) && (CD_cbready != (code *)0x0)) {
              (*CD_cbready)((uint)DAT_8013c225,&DAT_801489a4);
            }
            if (((uVar6 & 2) != 0) && (CD_cbsync != (code *)0x0)) {
              (*CD_cbsync)((uint)DAT_8013c224,&DAT_8014899c);
            }
          }
          *PTR_CDROM_REG0_8013c20c = bVar1 & 3;
        }
      }
      puVar9 = &DAT_8014899c;
      iVar8 = 7;
      if (param_3 != (undefined *)0x0) {
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar8 = iVar8 + -1;
          *param_3 = uVar2;
          param_3 = param_3 + 1;
        } while (iVar8 != -1);
      }
      uVar4 = 0;
      if (DAT_8013c224 == 5) {
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    uVar4 = 0xfffffffe;
    if (0 < CD_debug) {
      printf(s__s__no_param_80057818,(&CD_comstr)[(uint)param_1]);
      uVar4 = 0xfffffffe;
    }
  }
  return uVar4;
}




// decompiled code
// original method signature: 
// void CD_flush(void);
 // line 0, offset 0x80107f30
void CD_flush(void)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_8013c20c = 1;
  bVar1 = *PTR_CDROM_REG3_8013c218;
  while ((bVar1 & 7) != 0) {
    *PTR_CDROM_REG0_8013c20c = 1;
    *PTR_CDROM_REG3_8013c218 = 7;
    *PTR_CDROM_REG2_8013c214 = 7;
    bVar1 = *PTR_CDROM_REG3_8013c218;
  }
  DAT_8013c226 = 0;
  DAT_8013c225 = 0;
  DAT_8013c224 = 2;
  *PTR_CDROM_REG0_8013c20c = 0;
  *PTR_CDROM_REG3_8013c218 = 0;
  *(undefined4 *)PTR_COMMON_DELAY_8013c21c = 0x1325;
  return;
}




// decompiled code
// original method signature: 
// undefined4 CD_initvol(void);
 // line 0, offset 0x80108004
undefined4 CD_initvol(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8013c220;
  if ((*(short *)(PTR_VOICE_00_LEFT_RIGHT_8013c220 + 0x1b8) == 0) &&
     (*(short *)(PTR_VOICE_00_LEFT_RIGHT_8013c220 + 0x1ba) == 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8013c220 + 0x180) = 0x3fff;
    *(undefined2 *)(puVar1 + 0x182) = 0x3fff;
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8013c220;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8013c220 + 0x1b0) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1b2) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1aa) = 0xc001;
  *PTR_CDROM_REG0_8013c20c = 2;
  *PTR_CDROM_REG2_8013c214 = 0x80;
  *PTR_CDROM_REG3_8013c218 = 0;
  *PTR_CDROM_REG0_8013c20c = 3;
  *PTR_CDROM_REG1_8013c210 = 0x80;
  *PTR_CDROM_REG2_8013c214 = 0;
  *PTR_CDROM_REG3_8013c218 = 0x20;
  return 0;
}




// decompiled code
// original method signature: 
// void CD_initintr(void);
 // line 0, offset 0x801080f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CD_initintr(void)

{
  CD_cbready = 0;
  CD_cbsync = 0;
  CD_status1 = 0;
  _CD_status = 0;
  ResetCallback();
  InterruptCallback();
  return;
}




// decompiled code
// original method signature: 
// undefined4 CD_init(void);
 // line 0, offset 0x80108140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 CD_init(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puts(s_CD_init__80057868);
  printf(s_addr__08x_80057874,&PTR_DAT_8013c228);
  CD_com = 0;
  CD_mode = 0;
  CD_cbready = 0;
  CD_cbsync = 0;
  CD_status1 = 0;
  _CD_status = 0;
  ResetCallback();
  InterruptCallback();
  *PTR_CDROM_REG0_8013c20c = 1;
  bVar1 = *PTR_CDROM_REG3_8013c218;
  while ((bVar1 & 7) != 0) {
    *PTR_CDROM_REG0_8013c20c = 1;
    *PTR_CDROM_REG3_8013c218 = 7;
    *PTR_CDROM_REG2_8013c214 = 7;
    bVar1 = *PTR_CDROM_REG3_8013c218;
  }
  DAT_8013c226 = 0;
  DAT_8013c225 = 0;
  DAT_8013c224 = 2;
  *PTR_CDROM_REG0_8013c20c = 0;
  *PTR_CDROM_REG3_8013c218 = 0;
  *(undefined4 *)PTR_COMMON_DELAY_8013c21c = 0x1325;
  CD_cw(1,(undefined *)0x0,(undefined *)0x0,0);
  if ((_CD_status & 0x10) != 0) {
    CD_cw(1,(undefined *)0x0,(undefined *)0x0,0);
  }
  iVar2 = CD_cw(10,(undefined *)0x0,(undefined *)0x0,0);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    iVar2 = CD_cw(0xc,(undefined *)0x0,(undefined *)0x0,0);
    if (iVar2 == 0) {
      uVar4 = CD_sync(0,(undefined *)0x0);
      uVar3 = 0xffffffff;
      if (uVar4 == 2) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// undefined4 CD_datasync(int param_1);
 // line 0, offset 0x80108320
undefined4 CD_datasync(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = VSync(-1);
  DAT_801489b4 = uVar2 + 0x3c0;
  DAT_801489b8 = 0;
  DAT_801489bc = s_CD_datasync_80057880;
  do {
    uVar2 = VSync(-1);
    if ((DAT_801489b4 < (int)uVar2) ||
       (iVar3 = DAT_801489b8 + 1, bVar1 = 0x3c0000 < DAT_801489b8, DAT_801489b8 = iVar3, bVar1)) {
      puts(s_CD_timeout__80057774);
      printf(s__s___s__Sync__s__Ready__s_80057784,DAT_801489bc,(&CD_comstr)[(uint)CD_com],
             (&CD_intstr)[(uint)DAT_8013c224],(&CD_intstr)[(uint)DAT_8013c225]);
      CD_flush();
      iVar4 = -1;
    }
    else {
      iVar4 = 0;
      DAT_801489b8 = iVar3;
    }
    uVar5 = 0xffffffff;
  } while (((iVar4 == 0) && (uVar5 = 0, (*(uint *)PTR_DMA_CDROM_CHCR_8013c250 & 0x1000000) != 0)) &&
          (uVar5 = 1, param_1 == 0));
  return uVar5;
}




// decompiled code
// original method signature: 
// undefined4 CD_getsector(undefined4 param_1,uint param_2);
 // line 0, offset 0x80108488
undefined4 CD_getsector(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  *PTR_CDROM_REG0_8013c20c = 0;
  *PTR_CDROM_REG3_8013c218 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_8013c240 = 0x20943;
  *(undefined4 *)PTR_COMMON_DELAY_8013c21c = 0x1323;
  *(uint *)PTR_DMA_DPCR_8013c244 = *(uint *)PTR_DMA_DPCR_8013c244 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_8013c248 = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_8013c24c = param_2 | 0x10000;
  do {
  } while ((*PTR_CDROM_REG0_8013c20c & 0x40) == 0);
  *(undefined4 *)PTR_DMA_CDROM_CHCR_8013c250 = 0x11000000;
  uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_8013c250;
  while ((uVar1 & 0x1000000) != 0) {
    uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_8013c250;
  }
  *(undefined4 *)PTR_COMMON_DELAY_8013c21c = 0x1325;
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 CD_getsector2(undefined4 param_1,uint param_2);
 // line 0, offset 0x80108588
undefined4 CD_getsector2(undefined4 param_1,uint param_2)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_8013c20c = 0;
  *PTR_CDROM_REG3_8013c218 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_8013c240 = 0x21020843;
  *(undefined4 *)PTR_COMMON_DELAY_8013c21c = 0x1325;
  *(uint *)PTR_DMA_DPCR_8013c244 = *(uint *)PTR_DMA_DPCR_8013c244 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_8013c248 = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_8013c24c = param_2 | 0x10000;
  bVar1 = *PTR_CDROM_REG0_8013c20c;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *PTR_CDROM_REG0_8013c20c;
  }
  *(undefined4 *)PTR_DMA_CDROM_CHCR_8013c250 = 0x11400100;
  return 0;
}




// decompiled code
// original method signature: 
// void FUN_80108680(void);
 // line 0, offset 0x80108680
void FUN_80108680(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *PTR_CDROM_REG0_8013c20c;
  while( true ) {
    uVar2 = FUN_80107080();
    if (uVar2 == 0) break;
    if (((uVar2 & 4) != 0) && (CD_cbready != (code *)0x0)) {
      (*CD_cbready)((uint)DAT_8013c225,&DAT_801489a4);
    }
    if (((uVar2 & 2) != 0) && (CD_cbsync != (code *)0x0)) {
      (*CD_cbsync)((uint)DAT_8013c224,&DAT_8014899c);
    }
  }
  *PTR_CDROM_REG0_8013c20c = bVar1 & 3;
  return;
}




// decompiled code
// original method signature: 
// void init_ring_status(int param_1,uint param_2);
 // line 0, offset 0x80108758
void init_ring_status(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = uVar2 + param_1;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(StRingAddr + iVar1 * 0x20) = 0;
    } while (uVar2 < param_2);
  }
  return;
}




// decompiled code
// original method signature: 
// void data_ready_callback(void);
 // line 0, offset 0x80108798
void data_ready_callback(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(StRingAddr + StRingIdx2 * 0x20);
  *puVar1 = 2;
  DAT_801489d0 = *(undefined4 *)(puVar1 + 0xe);
  DAT_801489d4 = *(undefined4 *)(puVar1 + 4);
  StRingIdx2 = StRingIdx1;
  if (StFunc1 != (code *)0x0) {
    (*StFunc1)();
  }
  StFinalSector = 0;
  return;
}




// decompiled code
// original method signature: 
// undefined4 DsReadyCallback(undefined4 param_1);
 // line 0, offset 0x80108824
undefined4 DsReadyCallback(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_801489e4;
  DAT_801489e4 = param_1;
  return uVar1;
}




// decompiled code
// original method signature: 
// void DsDataCallback(void);
 // line 0, offset 0x80108838
void DsDataCallback(void)

{
  DMACallback();
  return;
}




// decompiled code
// original method signature: 
// void StSetMask(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 // line 0, offset 0x8010885c
void StSetMask(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  StEndFrame = param_3;
  StSTART_FLAG = param_1;
  StStartFrame = param_2;
  return;
}




// decompiled code
// original method signature: 
// void FUN_8010887c(void);
 // line 0, offset 0x8010887c
void FUN_8010887c(void)

{
  CdSyncCallback(DAT_8013c2b8);
  DAT_8013c2b4 = 0;
  return;
}




// decompiled code
// original method signature: 
// void FUN_801088b0(char param_1,undefined4 param_2);
 // line 0, offset 0x801088b0
void FUN_801088b0(char param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte abStack32 [16];
  
  if (param_1 == '\x01') {
    DAT_8013c2c4 = param_2;
    if (0 < DAT_8013c2a4) {
      DAT_8013c2c4 = param_2;
      if (DAT_8013c2a0 == 0x200) {
        if ((CD_read_dma_mode & 1) == 0) {
          DAT_8013c2c4 = param_2;
          CdGetSector(abStack32,3);
        }
        else {
          DAT_8013c2c4 = param_2;
          CdDataCallback();
          CdGetSector2(abStack32,3);
          CdDataSync(0);
          CdDataCallback();
        }
        iVar1 = CdPosToInt(abStack32);
        if (iVar1 != DAT_8013c2b0) {
          puts(s_CdRead__sector_error_80057898);
          DAT_8013c2a4 = -1;
        }
      }
      if ((CD_read_dma_mode & 1) == 0) {
        CdGetSector(DAT_8013c298,DAT_8013c2a0);
        DAT_8013c298 = DAT_8013c298 + DAT_8013c2a0 * 4;
        DAT_8013c2a4 = DAT_8013c2a4 + -1;
        DAT_8013c2b0 = DAT_8013c2b0 + 1;
      }
      else {
        CdGetSector2(DAT_8013c298,DAT_8013c2a0);
      }
    }
  }
  else {
    DAT_8013c2a4 = -1;
    DAT_8013c2c4 = param_2;
  }
  DAT_8013c2a8 = VSync(-1);
  if (DAT_8013c2a4 < 0) {
    FUN_80108bf4(1);
  }
  uVar2 = VSync(-1);
  if (DAT_8013c2ac + 0x4b0 < (int)uVar2) {
    DAT_8013c2a4 = -1;
  }
  if ((DAT_8013c2a4 == 0) || (uVar2 = VSync(-1), DAT_8013c2ac + 0x4b0 < (int)uVar2)) {
    CdReadyCallback(DAT_8013c2bc);
    if ((CD_read_dma_mode & 1) != 0) {
      CdDataCallback();
    }
    CdSyncCallback(FUN_8010887c);
    CdControlF(9,(undefined *)0x0);
    DAT_8013c2b4 = 1;
    if (CD_cbread != (code *)0x0) {
      uVar3 = 5;
      if (DAT_8013c2a4 == 0) {
        uVar3 = 2;
      }
      (*CD_cbread)(uVar3,param_2);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void FUN_80108b24(void);
 // line 0, offset 0x80108b24
void FUN_80108b24(void)

{
  DAT_8013c298 = DAT_8013c298 + DAT_8013c2a0 * 4;
  DAT_8013c2a4 = DAT_8013c2a4 + -1;
  DAT_8013c2b0 = DAT_8013c2b0 + 1;
  if (DAT_8013c2a4 == 0) {
    CdReadyCallback(DAT_8013c2bc);
    if ((CD_read_dma_mode & 1) != 0) {
      CdDataCallback();
    }
    CdSyncCallback(FUN_8010887c);
    CdControlF(9,(undefined *)0x0);
    DAT_8013c2b4 = 1;
    if (CD_cbread != (code *)0x0) {
      (*CD_cbread)(2,DAT_8013c2c4);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_80108bf4(int param_1);
 // line 0, offset 0x80108bf4
undefined4 FUN_80108bf4(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined local_18 [8];
  
  CdSyncCallback(0);
  CdReadyCallback(0);
  if ((CD_read_dma_mode & 1) != 0) {
    CdDataCallback();
  }
  uVar1 = CdStatus();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = VSync(-1);
    if ((uVar1 & 0x3f) == 0) {
      puts(s_CdRead__Shell_open____800578b0);
    }
    CdControlF(1,(undefined *)0x0);
    DAT_8013c2ac = VSync(-1);
    DAT_8013c2a4 = 0xffffffff;
    return 0xffffffff;
  }
  if (param_1 != 0) {
    puts(s_CdRead__retry____800578c8);
    CdControl(9,(undefined *)0x0,(undefined *)0x0);
    puVar2 = CdLastPos();
    iVar3 = CdControl(2,puVar2,(undefined *)0x0);
    if (iVar3 == 0) {
      DAT_8013c2a4 = 0xffffffff;
      return 0xffffffff;
    }
  }
  CdFlush();
  local_18[0] = (undefined)DAT_8013c29c;
  uVar5 = DAT_8013c29c & 0xff;
  uVar1 = CdMode();
  if (((uVar5 != uVar1) || (param_1 != 0)) &&
     (iVar3 = CdControl(0xe,local_18,(undefined *)0x0), iVar3 == 0)) {
    DAT_8013c2a4 = 0xffffffff;
    return 0xffffffff;
  }
  pbVar4 = CdLastPos();
  DAT_8013c2b0 = CdPosToInt(pbVar4);
  CdReadyCallback(FUN_801088b0);
  if ((CD_read_dma_mode & 1) != 0) {
    CdDataCallback();
  }
  DAT_8013c298 = DAT_8013c294;
  CdControlF(6,(undefined *)0x0);
  DAT_8013c2a4 = DAT_8013c290;
  DAT_8013c2a8 = VSync(-1);
  return DAT_8013c2a4;
}




// decompiled code
// original method signature: 
// uint CdRead(undefined4 param_1,undefined4 param_2,uint param_3);
 // line 0, offset 0x80108ddc
uint CdRead(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_8013c2b4 != 0) {
    uVar1 = VSync(-1);
    do {
      if (DAT_8013c2b4 == 0) goto LAB_80108e58;
      uVar2 = VSync(-1);
    } while (uVar2 - uVar1 < 0x79);
    CdSyncCallback(DAT_8013c2b8);
    DAT_8013c2b4 = 0;
  }
LAB_80108e58:
  if ((param_3 & 0x30) == 0) {
    DAT_8013c2a0 = 0x200;
  }
  else {
    if ((param_3 & 0x30) == 0x20) {
      DAT_8013c2a0 = 0x249;
    }
    else {
      DAT_8013c2a0 = 0x246;
    }
  }
  DAT_8013c29c = param_3 | 0x20;
  DAT_8013c290 = param_1;
  DAT_8013c294 = param_2;
  DAT_8013c2b8 = CdSyncCallback(0);
  DAT_8013c2bc = CdReadyCallback(0);
  if ((CD_read_dma_mode & 1) != 0) {
    DAT_8013c2c0 = CdDataCallback();
  }
  DAT_8013c2ac = VSync(-1);
  uVar1 = CdStatus();
  if ((uVar1 & 0xe0) != 0) {
    CdControlB(9,(undefined *)0x0,(undefined *)0x0);
  }
  iVar3 = FUN_80108bf4(0);
  return (uint)(0 < iVar3);
}




// decompiled code
// original method signature: 
// int CdReadSync(int param_1,undefined *param_2);
 // line 0, offset 0x80108f78
int CdReadSync(int param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    uVar1 = VSync(-1);
    iVar2 = -1;
    if (((int)uVar1 <= DAT_8013c2ac + 0x4b0) &&
       ((DAT_8013c2a4 < 0 ||
        (uVar1 = VSync(-1), iVar2 = DAT_8013c2a4, DAT_8013c2a8 + 0x3c < (int)uVar1)))) {
      FUN_80108bf4(1);
      iVar2 = DAT_8013c290;
    }
  } while ((param_1 == 0) && (((DAT_8013c2b4 != 0 && (iVar2 == 0)) || (0 < iVar2))));
  CdReady(1,param_2);
  if ((DAT_8013c2b4 != 0) && (iVar2 == 0)) {
    iVar2 = 1;
  }
  return iVar2;
}




// decompiled code
// original method signature: 
// int toupper(int __c);
 // line 0, offset 0x8010907c
int toupper(int __c)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)0xa0)();
  return iVar1;
}




// decompiled code
// original method signature: 
// undefined4 CdInit(void);
 // line 0, offset 0x8010908c
undefined4 CdInit(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    uVar1 = FUN_8010911c();
    if (uVar1 == 1) {
      CD_cbsync = FUN_80109158;
      CD_cbready = FUN_80109180;
      CD_cbread = FUN_801091a8;
      CD_read_dma_mode = 0;
      return 1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  printf(s_CdInit__Init_failed_800578e8);
  return 0;
}




// decompiled code
// original method signature: 
// uint FUN_8010911c(void);
 // line 0, offset 0x8010911c
uint FUN_8010911c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CD_init();
  if (iVar1 == 0) {
    iVar1 = CD_initvol();
    uVar2 = (uint)(iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void FUN_80109158(void);
 // line 0, offset 0x80109158
void FUN_80109158(void)

{
  DeliverEvent();
  return;
}




// decompiled code
// original method signature: 
// void FUN_80109180(void);
 // line 0, offset 0x80109180
void FUN_80109180(void)

{
  DeliverEvent();
  return;
}




// decompiled code
// original method signature: 
// void FUN_801091a8(void);
 // line 0, offset 0x801091a8
void FUN_801091a8(void)

{
  DeliverEvent();
  return;
}




// decompiled code
// original method signature: 
// void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar);
 // line 0, offset 0x801091dc
void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = __nmemb;
  if (__nmemb != 0) {
    do {
      sVar2 = __nmemb >> 1;
      pvVar3 = (void *)((int)__base + __size * sVar2);
      iVar1 = (*__compar)(pvVar3,__key);
      if (iVar1 < 0) {
        uVar4 = sVar2 + 1;
        sVar2 = uVar5;
      }
      else {
        if (iVar1 < 1) {
          return pvVar3;
        }
      }
      __nmemb = uVar4 + sVar2;
      uVar5 = sVar2;
    } while (uVar4 < sVar2);
  }
  return (void *)0x0;
}




// decompiled code
// original method signature: 
// void CdGetToc(byte *param_1);
 // line 0, offset 0x8010929c
void CdGetToc(byte *param_1)

{
  CdGetToc2(1,param_1);
  return;
}




// decompiled code
// original method signature: 
// int CdGetToc2(undefined4 param_1,byte *param_2);
 // line 0, offset 0x801092c0
int CdGetToc2(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char local_30 [8];
  undefined uStack40;
  byte local_27;
  byte local_26;
  
  local_30[0] = '\x01';
  uVar2 = CdSyncCallback(0);
  uVar3 = CdControlB(0x13,(undefined *)0x0,&uStack40);
  if (uVar3 != 0) {
    uVar3 = (uint)(local_27 >> 4) * 10 + ((uint)local_27 & 0xf);
    uVar8 = (uint)(local_26 >> 4) * 10 + ((uint)local_26 & 0xf);
    if (1 < CD_debug) {
      printf(s_track__d__d_80057908,uVar3,uVar8);
    }
    local_30[0] = '\0';
    uVar4 = CdControlB(0x14,local_30,&uStack40);
    if (uVar4 != 0) {
      *param_2 = local_27;
      param_2[2] = 0;
      param_2[1] = local_26;
      iVar6 = 1;
      if (uVar3 <= uVar8) {
        pbVar5 = param_2 + 4;
        do {
          local_30[0] = (char)uVar3 + (char)((int)uVar3 / 10) * '\x06';
          uVar4 = CdControlB(0x14,local_30,&uStack40);
          iVar6 = iVar6 + 1;
          if (uVar4 == 0) goto LAB_80109490;
          *pbVar5 = local_27;
          uVar3 = uVar3 + 1;
          pbVar5[2] = 0;
          pbVar5[1] = local_26;
          pbVar5 = pbVar5 + 4;
        } while ((int)uVar3 <= (int)uVar8);
      }
      iVar6 = iVar6 + -1;
      if ((1 < CD_debug) && (iVar7 = 0, -1 < iVar6)) {
        do {
          bVar1 = *param_2;
          pbVar5 = param_2 + 1;
          param_2 = param_2 + 4;
          iVar7 = iVar7 + 1;
          printf(s_CdGetToc2___02x__02x_00_80057918,(uint)bVar1,(uint)*pbVar5);
        } while (iVar7 <= iVar6);
      }
      CdSyncCallback(uVar2);
      return iVar6;
    }
  }
LAB_80109490:
  if (CD_debug != 0) {
    printf(s_CdGetToc2__error_80057934);
  }
  CdSyncCallback(uVar2);
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformcdpanvol(int param_1,int param_2);
 // line 0, offset 0x801094ec
/* WARNING: Could not reconcile some variable overlaps */

undefined4 iSNDplatformcdpanvol(int param_1,int param_2)

{
  int local_10;
  int local_c;
  
  iSNDpvtolrv(param_1,param_2,&local_10,&local_c);
  *(ushort *)(DAT_80147e2c + 0x1b0) = (short)local_10 * 0x102 & 0x7fff;
  *(ushort *)(DAT_80147e2c + 0x1b2) = (short)local_c * 0x102 & 0x7fff;
  return 0;
}




// decompiled code
// original method signature: 
// void _card_open(void);
 // line 0, offset 0x801095f0
void _card_open(void)

{
  InitCARD();
  StartCARD();
  _bu_init();
  return;
}




// decompiled code
// original method signature: 
// void _card_start(void);
 // line 0, offset 0x80109620
void _card_start(void)

{
  int iVar1;
  
  iVar1 = EnterCriticalSection();
  DAT_801489ec = OpenEvent();
  DAT_801489f0 = OpenEvent();
  DAT_801489f4 = OpenEvent();
  DAT_801489f8 = OpenEvent();
  DAT_801489fc = OpenEvent();
  DAT_80148a00 = OpenEvent();
  DAT_80148a04 = OpenEvent();
  DAT_80148a08 = OpenEvent();
  EnableEvent();
  EnableEvent();
  EnableEvent();
  EnableEvent();
  EnableEvent();
  EnableEvent();
  EnableEvent();
  EnableEvent();
  _clr_card_event();
  if (iVar1 == 1) {
    ExitCriticalSection();
  }
  return;
}




// decompiled code
// original method signature: 
// void _card_close(void);
 // line 0, offset 0x801097fc
void _card_close(void)

{
  StopCARD();
  return;
}




// decompiled code
// original method signature: 
// void _card_stop(void);
 // line 0, offset 0x8010981c
void _card_stop(void)

{
  int iVar1;
  
  iVar1 = EnterCriticalSection();
  CloseEvent();
  CloseEvent();
  CloseEvent();
  CloseEvent();
  CloseEvent();
  CloseEvent();
  CloseEvent();
  CloseEvent();
  if (iVar1 == 1) {
    ExitCriticalSection();
  }
  return;
}




// decompiled code
// original method signature: 
// void _clr_card_event(void);
 // line 0, offset 0x801098d0
void _clr_card_event(void)

{
  TestEvent();
  TestEvent();
  TestEvent();
  TestEvent();
  TestEvent();
  TestEvent();
  TestEvent();
  TestEvent();
  DAT_80148a0c = 0;
  DAT_80148a10 = 0;
  DAT_80148a14 = 0;
  DAT_80148a18 = 0;
  DAT_80148a1c = 0;
  DAT_80148a20 = 0;
  DAT_80148a24 = 0;
  DAT_80148a28 = 0;
  return;
}




// decompiled code
// original method signature: 
// int _get_card_event(void);
 // line 0, offset 0x801099d8
int _get_card_event(void)

{
  int iVar1;
  
  do {
    iVar1 = DAT_80148a0c + DAT_80148a10 * 2 + DAT_80148a14 * 4 + DAT_80148a18 * 8;
  } while (iVar1 == 0);
  TestEvent();
  TestEvent();
  TestEvent();
  TestEvent();
  DAT_80148a0c = 0;
  DAT_80148a10 = 0;
  DAT_80148a14 = 0;
  DAT_80148a18 = 0;
  return iVar1 >> 1;
}




// decompiled code
// original method signature: 
// int _get_card_event_x(void);
 // line 0, offset 0x80109ab0
int _get_card_event_x(void)

{
  int iVar1;
  
  do {
    iVar1 = DAT_80148a1c + DAT_80148a20 * 2 + DAT_80148a24 * 4 + DAT_80148a28 * 8;
  } while (iVar1 == 0);
  TestEvent();
  TestEvent();
  TestEvent();
  TestEvent();
  DAT_80148a1c = 0;
  DAT_80148a20 = 0;
  DAT_80148a24 = 0;
  DAT_80148a28 = 0;
  return iVar1 >> 1;
}




// decompiled code
// original method signature: 
// int _chk_card_event(void);
 // line 0, offset 0x80109b88
int _chk_card_event(void)

{
  return DAT_80148a0c + DAT_80148a10 * 2 + DAT_80148a14 * 4 + DAT_80148a18 * 8;
}




// decompiled code
// original method signature: 
// int _chk_card_event_x(void);
 // line 0, offset 0x80109bc4
int _chk_card_event_x(void)

{
  return DAT_80148a1c + DAT_80148a20 * 2 + DAT_80148a24 * 4 + DAT_80148a28 * 8;
}




// decompiled code
// original method signature: 
// void UserFuncInit(void);
 // line 0, offset 0x80109c00
void UserFuncInit(void)

{
  DAT_8013c2e0 = 0xffffffff;
  return;
}




// decompiled code
// original method signature: 
// void UserFuncOpen(undefined4 param_1);
 // line 0, offset 0x80109c10
void UserFuncOpen(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_8013c2e0 + 1;
  if (iVar3 < 4) {
    iVar2 = 3;
    puVar1 = &DAT_80148a38 + iVar3 * 4;
    DAT_8013c2e0 = iVar3;
    (&DAT_80148a6c)[iVar3] = param_1;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  else {
    printf(s_libmcrd__event_overflow_80057948);
  }
  return;
}




// decompiled code
// original method signature: 
// void UserFuncExecute(void);
 // line 0, offset 0x80109c8c
void UserFuncExecute(void)

{
  int iVar1;
  
  if ((-1 < DAT_8013c2e0) &&
     (iVar1 = (*(code *)(&DAT_80148a6c)[DAT_8013c2e0])(DAT_8013c2e0 * 0x10 + -0x7feb75d4),
     iVar1 != 0)) {
    DAT_8013c2e0 = DAT_8013c2e0 + -1;
  }
  return;
}




// decompiled code
// original method signature: 
// uint UserFuncComplete(void);
 // line 0, offset 0x80109cf8
uint UserFuncComplete(void)

{
  return DAT_8013c2e0 >> 0x1f;
}




// decompiled code
// original method signature: 
// void _card_info(void);
 // line 0, offset 0x80109d10
void _card_info(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void _card_clear(void);
 // line 0, offset 0x80109d20
void _card_clear(void)

{
  _new_card();
  _card_write();
  return;
}




// decompiled code
// original method signature: 
// void _card_load(void);
 // line 0, offset 0x80109d60
void _card_load(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// int open(char *__file,int __oflag,...);
 // line 0, offset 0x80109d70
int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = FUN_000000b0();
  return iVar1;
}




// decompiled code
// original method signature: 
// int close(int __fd);
 // line 0, offset 0x80109d80
int close(int __fd)

{
  int iVar1;
  
  iVar1 = FUN_000000b0();
  return iVar1;
}




// decompiled code
// original method signature: 
// __off_t lseek(int __fd,__off_t __offset,int __whence);
 // line 0, offset 0x80109d90
__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = FUN_000000b0();
  return _Var1;
}




// decompiled code
// original method signature: 
// ssize_t read(int __fd,void *__buf,size_t __nbytes);
 // line 0, offset 0x80109da0
ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = FUN_000000b0();
  return sVar1;
}




// decompiled code
// original method signature: 
// ssize_t write(int __fd,void *__buf,size_t __n);
 // line 0, offset 0x80109db0
ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = FUN_000000b0();
  return sVar1;
}




// decompiled code
// original method signature: 
// undefined4 firstfile(char *pcParm1);
 // line 0, offset 0x80109dc0
undefined4 firstfile(char *pcParm1)

{
  char cVar1;
  bool bVar2;
  int in_zero;
  int iVar3;
  undefined4 uVar4;
  char **ppcVar5;
  char *pcVar6;
  char **ppcVar7;
  
  cVar1 = *pcParm1;
  pcVar6 = &DAT_80148a84;
  while (':' < cVar1) {
    cVar1 = *pcParm1;
    pcParm1 = pcParm1 + 1;
    *pcVar6 = cVar1;
    cVar1 = *pcParm1;
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = '\0';
  ppcVar7 = *(char ***)(in_zero + 0x150);
  ppcVar5 = ppcVar7 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while (ppcVar7 < ppcVar5) {
    if ((*ppcVar7 != (char *)0x0) && (iVar3 = strcmp(*ppcVar7,&DAT_80148a84), iVar3 == 0)) {
      DAT_80148a7c = ppcVar7[0xd];
      bVar2 = true;
      goto LAB_80109e90;
    }
    ppcVar7 = ppcVar7 + 0x14;
  }
  bVar2 = false;
LAB_80109e90:
  uVar4 = 0;
  if (bVar2) {
    ppcVar7 = *(char ***)(in_zero + 0x150);
    ppcVar5 = ppcVar7 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
    while (ppcVar7 < ppcVar5) {
      if ((*ppcVar7 != (char *)0x0) && (iVar3 = strcmp(*ppcVar7,&DAT_80148a84), iVar3 == 0)) {
        *(code **)(ppcVar7 + 0xd) = FUN_80109f5c;
        break;
      }
      ppcVar7 = ppcVar7 + 0x14;
    }
    uVar4 = firstfile2();
  }
  return uVar4;
}




// decompiled code
// original method signature: 
// void FUN_80109f5c(int *piParm1,undefined4 uParm2,undefined4 uParm3);
 // line 0, offset 0x80109f5c
void FUN_80109f5c(int *piParm1,undefined4 uParm2,undefined4 uParm3)

{
  code *pcVar1;
  int in_zero;
  int iVar2;
  char **ppcVar3;
  char **ppcVar4;
  
  if (*piParm1 == 0) {
    *piParm1 = 1;
  }
  pcVar1 = DAT_80148a7c;
  ppcVar4 = *(char ***)(in_zero + 0x150);
  ppcVar3 = ppcVar4 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  do {
    if (ppcVar3 <= ppcVar4) {
LAB_8010a020:
      (*DAT_80148a7c)(piParm1,uParm2,uParm3);
      return;
    }
    if ((*ppcVar4 != (char *)0x0) && (iVar2 = strcmp(*ppcVar4,&DAT_80148a84), iVar2 == 0)) {
      *(code **)(ppcVar4 + 0xd) = pcVar1;
      goto LAB_8010a020;
    }
    ppcVar4 = ppcVar4 + 0x14;
  } while( true );
}




// decompiled code
// original method signature: 
// void nextfile(void);
 // line 0, offset 0x8010a060
void nextfile(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void erase(void);
 // line 0, offset 0x8010a070
void erase(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void format(void);
 // line 0, offset 0x8010a080
void format(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void _new_card(void);
 // line 0, offset 0x8010a090
void _new_card(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void _card_write(void);
 // line 0, offset 0x8010a0a0
void _card_write(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void _padInitDirSeq(void);
 // line 0, offset 0x8010a0b0
void _padInitDirSeq(void)

{
  _padFuncSendAuto = FUN_8010a0e4;
  _padFuncChkEng = FUN_8010a510;
  _padFuncRecvAuto = FUN_8010a1e4;
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_8010a0e4(int param_1);
 // line 0, offset 0x8010a0e4
undefined4 FUN_8010a0e4(int param_1)

{
  byte bVar1;
  
  if (**(char **)(param_1 + 0x3c) == -0xd) {
    if (*(char *)(param_1 + 0xe8) != '\0') {
      if (*(char *)(param_1 + 0x49) == '\x02') {
        (*_padFuncClrInfo)(param_1);
      }
      goto LAB_8010a140;
    }
LAB_8010a198:
    _padCmdParaMode(param_1,0);
  }
  else {
LAB_8010a140:
    bVar1 = *(byte *)(param_1 + 0x46);
    if (bVar1 == 1) {
      _padCmdParaMode(param_1,1);
      return 0;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0xfe) goto LAB_8010a198;
      if (bVar1 == 0xff) {
        return 0;
      }
    }
    if (*(code **)(param_1 + 0x14) == (code *)0x0) {
      _padSendAtLoadInfo(param_1);
    }
    else {
      (**(code **)(param_1 + 0x14))(param_1);
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// void FUN_8010a1e4(int *param_1);
 // line 0, offset 0x8010a1e4
void FUN_8010a1e4(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)param_1[0xf];
  cVar2 = *(char *)(param_1 + 0x3a);
  *(byte *)(param_1 + 0x3a) = bVar1 >> 4;
  if (bVar1 >> 4 == 0xf) {
    *(char *)(param_1 + 0x3a) = cVar2;
  }
  else {
    *(undefined *)param_1[0xc] = 0;
    *(undefined *)(param_1[0xc] + 1) = *(undefined *)param_1[0xf];
    iVar3 = 2;
    if (2 < *(byte *)(param_1 + 0x11)) {
      do {
        *(undefined *)(param_1[0xc] + iVar3) = *(undefined *)(param_1[0xf] + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x11));
    }
  }
  if (((*(char *)(param_1[0xf] + 1) == '\0') &&
      (((*(char *)((int)param_1 + 0x46) != '\x01' || (param_1[5] != 0)) &&
       (*(char *)(param_1 + 0x14) == '\0')))) ||
     ((((iVar3 = FUN_8010a510((int)param_1), iVar3 == 0 && (*(char *)((int)param_1 + 0x37) == '\0'))
       && (*(char *)((int)param_1 + 0x4a) == '\0')) && (*(char *)(param_1 + 0x3a) != cVar2)))) {
    (*_padFuncClrInfo)(param_1);
  }
  *(undefined *)((int)param_1 + 0x4a) = 0;
  if (*(char *)((int)param_1 + 0x46) == -1) {
    return;
  }
  if (((byte)(*(char *)((int)param_1 + 0x46) - 2U) < 0xfc) && (*(char *)param_1[0xf] != -0xd)) {
    (*_padFuncClrInfo)(param_1);
  }
  if ((*(char *)((int)param_1 + 0x46) != '\0') && (*(char *)((int)param_1 + 0x36) == '\0')) {
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 0x46);
  if (bVar1 == 1) {
    cVar2 = *(char *)((int)param_1 + 0x46);
    *(undefined *)((int)param_1 + 0x47) = 0;
LAB_8010a3d4:
    *(char *)((int)param_1 + 0x46) = cVar2 + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        cVar2 = *(char *)((int)param_1 + 0x46);
        *(undefined *)((int)param_1 + 0x49) = 1;
        goto LAB_8010a3d4;
      }
    }
    else {
      if (bVar1 == 0xfe) {
        *(undefined *)((int)param_1 + 0x46) = 0xff;
        return;
      }
    }
    if ((code *)param_1[6] == (code *)0x0) {
      uVar4 = _padRecvAtLoadInfo(param_1);
      cVar2 = (char)uVar4;
    }
    else {
      cVar2 = (*(code *)param_1[6])(param_1);
    }
    *(char *)((int)param_1 + 0x46) = *(char *)((int)param_1 + 0x46) + cVar2;
  }
  return;
}




// decompiled code
// original method signature: 
// void _dirFailAuto(int param_1);
 // line 0, offset 0x8010a434
void _dirFailAuto(int param_1)

{
  byte bVar1;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (*(char *)(param_1 + 0x46) == '\0') {
LAB_8010a4cc:
    if (**(char **)(param_1 + 0x3c) != -0xd) {
      **(undefined **)(param_1 + 0x30) = 0xff;
      *(undefined *)(*(int *)(param_1 + 0x30) + 1) = 0;
      *(undefined *)(param_1 + 0xe8) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x46) == '\x01') {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if (1 < bVar1) {
        *(undefined *)(param_1 + 0x49) = 2;
        *(undefined *)(param_1 + 0x46) = 0xff;
        return;
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if (3 < bVar1) {
        if (*(char *)(param_1 + 0x49) != '\0') {
          (*_padFuncClrInfo)(param_1);
        }
        goto LAB_8010a4cc;
      }
    }
    *(char *)(param_1 + 0x4a) = bVar1 + 1;
  }
  return;
}




// decompiled code
// original method signature: 
// undefined4 FUN_8010a510(int param_1);
 // line 0, offset 0x8010a510
undefined4 FUN_8010a510(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_1 + 0xe6) == 0) || (uVar1 = 0, *(char *)(param_1 + 0x46) != -1)) {
    uVar1 = 1;
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// void bzero(void *__s,size_t __n);
 // line 0, offset 0x8010a540
void bzero(void *__s,size_t __n)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxmemconstrain(uint *param_1,int *param_2);
 // line 0, offset 0x8010a550
void iSNDpsxmemconstrain(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_80147e32;
  uVar1 = *param_1;
  if ((int)uVar1 < (int)uVar2) {
    *param_1 = uVar2;
    *param_2 = *param_2 - (uVar2 - uVar1);
    uVar1 = *param_1;
  }
  if ((int)(uint)DAT_80147e34 < (int)(uVar1 + *param_2)) {
    *param_2 = (uint)DAT_80147e34 - uVar1;
  }
  if ((int)(uint)DAT_80147e36 < (int)(*param_1 + *param_2)) {
    *param_2 = (uint)DAT_80147e36 - *param_1;
  }
  return;
}




// decompiled code
// original method signature: 
// int iSNDpsxmalloc(int param_1);
 // line 0, offset 0x8010a5cc
/* WARNING: Could not reconcile some variable overlaps */

int iSNDpsxmalloc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_20;
  int local_1c;
  
  iVar4 = 0;
  if (DAT_80147e30 < 0x80) {
    iVar5 = param_1 + 0x3f >> 6;
    if (DAT_80147e30 == 0) {
      local_20 = (uint)DAT_80147e32;
      local_1c = (uint)DAT_80147e34 - local_20;
    }
    else {
      if (DAT_80147e30 != 0) {
        iVar1 = 0;
        do {
          if (iVar4 == 0) {
            local_20 = (uint)DAT_80147e32;
            local_1c = (uint)*(ushort *)((int)&DAT_80147e38 + iVar1) - local_20;
          }
          else {
            local_20 = (uint)*(ushort *)((int)&DAT_80147e34 + iVar1) +
                       (uint)*(ushort *)((int)&DAT_80147e36 + iVar1);
            local_1c = (uint)*(ushort *)((int)&DAT_80147e38 + iVar1) - local_20;
          }
          iSNDpsxmemconstrain(&local_20,&local_1c);
          if (iVar5 <= local_1c) {
            uVar2 = (uint)DAT_80147e30;
            iVar1 = iVar4 << 2;
            if (iVar4 < (int)uVar2) {
              do {
                uVar3 = uVar2 - 1;
                *(undefined4 *)(&DAT_80147e38 + uVar2 * 2) =
                     *(undefined4 *)(&DAT_80147e38 + uVar3 * 2);
                uVar2 = uVar3;
              } while (iVar4 < (int)uVar3);
              iVar1 = iVar4 << 2;
            }
            goto LAB_8010a778;
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar4 * 4;
        } while (iVar4 < (int)(uint)DAT_80147e30);
      }
      local_20 = (uint)(ushort)(&DAT_80147e34)[iVar4 * 2] + (uint)(ushort)(&DAT_80147e36)[iVar4 * 2]
      ;
      local_1c = (uint)DAT_80147e34 - local_20;
    }
    iSNDpsxmemconstrain(&local_20,&local_1c);
    iVar1 = iVar4 << 2;
    if (iVar5 <= local_1c) {
LAB_8010a778:
      *(undefined2 *)((int)&DAT_80147e3a + iVar1) = (short)iVar5;
      *(undefined2 *)((int)&DAT_80147e38 + iVar1) = (undefined2)local_20;
      DAT_80147e30 = DAT_80147e30 + 1;
      return local_20 << 6;
    }
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDpsxfree(int param_1);
 // line 0, offset 0x8010a7c8
undefined4 iSNDpsxfree(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_80147e30 != 0) {
    iVar1 = 0;
    do {
      if ((uint)*(ushort *)((int)&DAT_80147e38 + iVar1) == param_1 >> 6) {
        DAT_80147e30 = DAT_80147e30 - 1;
        if (iVar2 < (int)(uint)DAT_80147e30) {
          do {
            iVar1 = iVar2 + 1;
            *(undefined4 *)(&DAT_80147e38 + iVar2 * 2) = *(undefined4 *)(&DAT_80147e38 + iVar1 * 2);
            iVar2 = iVar1;
          } while (iVar1 < (int)(uint)DAT_80147e30);
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 * 4;
    } while (iVar2 < (int)(uint)DAT_80147e30);
  }
  return 0xfffffff8;
}




// decompiled code
// original method signature: 
// void iSNDdmtransfer(void);
 // line 0, offset 0x8010a880
void iSNDdmtransfer(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  uVar1 = Status;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  uVar5 = 0xffffffff;
  if ((int)((uint)DAT_80147924 << 0x18) < 1) {
    setCopReg(0,Status,Status,0);
  }
  else {
    bVar4 = 0;
    DAT_80147926 = 1;
    iVar3 = 0;
    puVar2 = &DAT_80147928;
    do {
      if (*puVar2 != 0) {
        if (bVar4 < *(byte *)((int)puVar2 + 0xb)) {
          uVar5 = *puVar2;
          bVar4 = *(byte *)((int)puVar2 + 0xb);
          DAT_80147925 = (char)iVar3;
        }
        else {
          if ((*(byte *)((int)puVar2 + 0xb) == bVar4) && (*puVar2 < uVar5)) {
            uVar5 = *puVar2;
            DAT_80147925 = (char)iVar3;
          }
        }
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 5;
    } while (iVar3 < 10);
    iVar3 = (int)DAT_80147925;
    if (((&DAT_80147934)[iVar3 * 0x14] != '\0') && (DAT_80147919 = 1, DAT_80148040 != (code *)0x0))
    {
      (*DAT_80148040)();
    }
    (&DAT_80147938)[iVar3 * 5] = DAT_801478a4 + 0xf;
    *(undefined2 *)(DAT_80147e2c + 0x1a6) = (&DAT_80147930)[iVar3 * 10];
    *(ushort *)(DAT_80147e2c + 0x1aa) = *(ushort *)(DAT_80147e2c + 0x1aa) & 0xffcf | 0x20;
    *DAT_80147e14 = *DAT_80147e14 & 0xf0ffffff | 0x20000000;
    *DAT_80147e18 = (&DAT_8014792c)[iVar3 * 5];
    *DAT_80147e1c = (uint)(byte)(&DAT_80147932)[iVar3 * 0x14] << 0x10 | 0x10;
    *DAT_80147e20 = 0x1000201;
    setCopReg(0,Status,uVar1,0);
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDdmcallback(void);
 // line 0, offset 0x8010aa64
void iSNDdmcallback(void)

{
  uint uVar1;
  int iVar2;
  int local_10;
  
  uVar1 = Status;
  local_10 = 0;
  do {
    local_10 = local_10 + 1;
  } while (local_10 < 0x2ee);
  *(ushort *)(DAT_80147e2c + 0x1aa) = *(ushort *)(DAT_80147e2c + 0x1aa) & 0xffcf;
  if ((*(ushort *)(DAT_80147e2c + 0x1aa) & 0x30) != 0) {
    iVar2 = 1;
    do {
      if (4000 < iVar2) break;
      iVar2 = iVar2 + 1;
    } while ((*(ushort *)(DAT_80147e2c + 0x1aa) & 0x30) != 0);
  }
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  if ((&DAT_80147928)[(int)DAT_80147925 * 5] != 0) {
    if ((DAT_80147919 != '\0') && (DAT_80147919 = '\0', DAT_80148040 != (code *)0x0)) {
      (*DAT_80148040)();
    }
    (&DAT_80147928)[(int)DAT_80147925 * 5] = 0;
    DAT_80147924 = DAT_80147924 - 1;
    if ((int)((uint)DAT_80147924 << 0x18) < 1) {
      setCopReg(0,Status,uVar1,0);
      DAT_80147926 = 0;
      return;
    }
  }
  setCopReg(0,Status,uVar1,0);
  iSNDdmtransfer();
  return;
}




// decompiled code
// original method signature: 
// void iSNDdmservice(void);
 // line 0, offset 0x8010ac20
void iSNDdmservice(void)

{
  if (DAT_80147926 == '\0') {
    iSNDdmtransfer();
  }
  else {
    if ((uint)(&DAT_80147938)[(int)DAT_80147925 * 5] <= DAT_801478a4) {
      iSNDdmcallback();
    }
  }
  return;
}




// decompiled code
// original method signature: 
// int iSNDdmqueue(int param_1,uint param_2,uint param_3,undefined param_4,undefined4 param_5);
 // line 0, offset 0x8010aca0
int iSNDdmqueue(int param_1,uint param_2,uint param_3,undefined param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_3 & 0x3f) != 0) {
    param_3 = param_3 + 0x40;
  }
  DAT_80147920 = DAT_80147920 + 1;
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  if (DAT_80147920 == 0) {
    DAT_80147920 = 1;
  }
  iVar1 = DAT_80147920;
  iVar3 = 0;
  piVar2 = &DAT_80147928;
  do {
    iVar3 = iVar3 + 1;
    if (*piVar2 == 0) {
      DAT_80147924 = DAT_80147924 + '\x01';
      piVar2[1] = param_1;
      *piVar2 = iVar1;
      *(short *)(piVar2 + 2) = (short)(param_2 >> 3);
      *(undefined *)((int)piVar2 + 10) = (char)((int)param_3 >> 6);
      *(undefined *)((int)piVar2 + 0xb) = param_4;
      *(undefined *)(piVar2 + 3) = (undefined)param_5;
      setCopReg(0,Status,Status,0);
      iSNDdmservice();
      return DAT_80147920;
    }
    piVar2 = piVar2 + 5;
  } while (iVar3 < 10);
  setCopReg(0,Status,Status,0);
  return 0;
}




// decompiled code
// original method signature: 
// int iSNDdmqueuesplit(int param_1,uint param_2,uint param_3,undefined param_4);
 // line 0, offset 0x8010ad94
int iSNDdmqueuesplit(int param_1,uint param_2,uint param_3,undefined param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (0 < (int)param_3) {
    do {
      uVar2 = 0x1000;
      if ((int)param_3 < 0x1000) {
        uVar2 = param_3;
      }
      while (10 - (int)DAT_80147924 < 7) {
        iSNDdmservice();
      }
      iVar1 = iSNDdmqueue(param_1,param_2,uVar2,param_4,0);
      param_1 = param_1 + uVar2;
      param_3 = param_3 - uVar2;
      param_2 = param_2 + uVar2;
    } while (0 < (int)param_3);
  }
  return iVar1;
}




// decompiled code
// original method signature: 
// undefined4 iSNDdmcomplete(int param_1);
 // line 0, offset 0x8010ae6c
undefined4 iSNDdmcomplete(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iSNDdmservice();
  puVar1 = &sndpd;
  iVar2 = 0;
  if (0 < (int)((uint)DAT_80147924 << 0x18)) {
    do {
      iVar2 = iVar2 + 1;
      if (*(int *)(puVar1 + 0x10) == param_1) {
        return 0;
      }
      puVar1 = puVar1 + 0x14;
    } while (iVar2 < 10);
  }
  return 1;
}




// decompiled code
// original method signature: 
// int iSNDabs(int param_1);
 // line 0, offset 0x8010aedc
int iSNDabs(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}




// decompiled code
// original method signature: 
// void iSNDatodlrv(int param_1,int param_2,uint *param_3,uint *param_4,int param_5,int param_6);
 // line 0, offset 0x8010aef4
void iSNDatodlrv(int param_1,int param_2,uint *param_3,uint *param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iSNDlibatodlrv(param_1,param_2,param_3,param_4);
  if (param_5 < 0) {
    if (param_6 < 0) {
      uVar2 = 2;
      if (param_5 < param_6) {
        uVar2 = 1;
      }
      goto LAB_8010af88;
    }
  }
  else {
    if (-1 < param_6) {
      uVar2 = 1;
      if (param_5 < param_6) {
        uVar2 = 2;
      }
      goto LAB_8010af88;
    }
  }
  iVar3 = iSNDabs(param_5);
  iVar1 = iSNDabs(param_6);
  uVar2 = 3;
  if (iVar1 < iVar3) {
    uVar2 = 4;
  }
LAB_8010af88:
  iVar3 = 0;
  if (param_1 - 0x4000U < 0x8000) {
    iVar1 = 4;
    if ((int)*param_3 < (int)*param_4) {
      iVar1 = 3;
    }
    if (((uVar2 < 3) && (iVar3 = 2, iVar1 == 3)) && (uVar2 == 2)) {
      iVar3 = 1;
    }
  }
  else {
    iVar1 = 1;
    if ((int)*param_3 < (int)*param_4) {
      iVar1 = 2;
    }
    if (((2 < uVar2) && (iVar3 = 2, iVar1 == 2)) && (uVar2 == 3)) {
      iVar3 = 1;
    }
  }
  if (param_5 < 0) {
    *param_3 = -*param_3;
  }
  if (param_6 < 0) {
    *param_4 = -*param_4;
  }
  if (iVar3 == 1) {
    *param_3 = -*param_3;
  }
  else {
    if (iVar3 == 2) {
      *param_4 = -*param_4;
    }
  }
  return;
}




// decompiled code
// original method signature: 
// void iSNDatolrv(int param_1,int param_2,uint *param_3,uint *param_4);
 // line 0, offset 0x8010b0a8
void iSNDatolrv(int param_1,int param_2,uint *param_3,uint *param_4)

{
  iSNDlibatodlrv(param_1,param_2,param_3,param_4);
  if ((int)*param_3 < 0) {
    *param_3 = -*param_3;
  }
  if ((int)*param_4 < 0) {
    *param_4 = -*param_4;
  }
  return;
}




// decompiled code
// original method signature: 
// uint VoxSentence_GetNumPhrases(int param_1);
 // line 0, offset 0x8010b100
uint VoxSentence_GetNumPhrases(int param_1)

{
  return (uint)(*(byte *)(param_1 + 3) >> 2);
}




// decompiled code
// original method signature: 
// int iSPCH_GetOffset8(int param_1,int param_2,int param_3);
 // line 0, offset 0x8010b10c
int iSPCH_GetOffset8(int param_1,int param_2,int param_3)

{
  return param_1 + (uint)*(byte *)(param_2 + param_3) * 4;
}




// decompiled code
// original method signature: 
// int iSPCH_GetOffset16(int param_1,int param_2,int param_3);
 // line 0, offset 0x8010b124
int iSPCH_GetOffset16(int param_1,int param_2,int param_3)

{
  return param_1 + (uint)*(ushort *)(param_3 * 2 + param_2) * 4;
}




// decompiled code
// original method signature: 
// int iSPCH_GetRuleDataAddr(int param_1);
 // line 0, offset 0x8010b140
int iSPCH_GetRuleDataAddr(int param_1)

{
  return param_1 + (uint)*(byte *)(param_1 + 6) * 2 + 0xc;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_SentenceUsesParm(int param_1,uint param_2);
 // line 0, offset 0x8010b158
undefined4 iSPCH_SentenceUsesParm(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = VoxSentence_GetNumPhrases(param_1);
  iVar5 = 0;
  uVar6 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = iSPCH_GetOffset8(param_1,param_1 + 4,iVar5);
      iVar4 = 0;
      iVar3 = iVar2;
      if (((uint)*(byte *)(iVar2 + 2) & 0xf) == param_2) {
        return 1;
      }
      do {
        iVar4 = iVar4 + 1;
        if (((uint)*(byte *)(iVar3 + 4) & 0xf) == param_2) {
          uVar6 = 1;
          break;
        }
        iVar3 = iVar2 + iVar4;
      } while (iVar4 < 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  return uVar6;
}




// decompiled code
// original method signature: 
// uint iSPCH_GetRuleID(int param_1,uint param_2);
 // line 0, offset 0x8010b220
uint iSPCH_GetRuleID(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = iSPCH_GetRuleDataAddr(param_1);
  if (param_2 < 8) {
    uVar2 = (uint)*(byte *)(param_2 * 2 + iVar1);
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// void iSPCH_RuleSet(ushort *param_1,int param_2,int param_3);
 // line 0, offset 0x8010b294
void iSPCH_RuleSet(ushort *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_30;
  byte *pbVar6;
  int iVar7;
  uint local_38;
  uint local_34;
  
  if (gSentenceRuleSet != (code *)0x0) {
    cVar1 = *(char *)((int)param_1 + 7);
    iVar7 = 0;
    pbVar6 = (byte *)iSPCH_GetRuleDataAddr((int)param_1);
    iVar3 = iSPCH_GetOffset16((int)param_1,(int)(param_1 + 6),param_2);
    if (0 < (int)cVar1) {
      do {
        bVar2 = *pbVar6;
        uVar5 = (uint)pbVar6[1] & 0xf;
        local_30 = (uint)(pbVar6[1] >> 4);
        switch(pbVar6[1] >> 4) {
        case 0:
        case 3:
          local_38 = (uint)bVar2;
          local_34 = uVar5;
          iVar4 = iSPCH_SentenceUsesParm(iVar3,uVar5);
          if (iVar4 != 0) {
            (*gSentenceRuleSet)((uint)*param_1,(uint)bVar2,*(undefined4 *)(uVar5 * 4 + param_3),
                                param_3,local_38,local_34,local_30);
          }
        }
        iVar7 = iVar7 + 1;
        pbVar6 = pbVar6 + 2;
      } while (iVar7 < (int)cVar1);
    }
  }
  return;
}




// decompiled code
// original method signature: 
// uint iSPCH_GetRuleSettings(ushort *param_1,undefined4 *param_2,undefined *param_3);
 // line 0, offset 0x8010b3cc
uint iSPCH_GetRuleSettings(ushort *param_1,undefined4 *param_2,undefined *param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  uVar12 = 0;
  cVar1 = *(char *)((int)param_1 + 7);
  uVar11 = 0;
  pbVar2 = (byte *)iSPCH_GetRuleDataAddr((int)param_1);
  uVar10 = 1;
  puVar13 = param_2;
  do {
    puVar13 = puVar13 + 1;
    iVar8 = 0;
    pbVar7 = pbVar2;
    if (0 < (int)cVar1) {
      do {
        uVar9 = 0;
        uVar4 = (uint)pbVar7[1] & 0xf;
        if (uVar10 == 0xc) {
          uVar5 = 0;
          if ((pbVar7[1] & 0xf) == 0) {
LAB_8010b498:
            uVar6 = 1 << (7U - iVar8 & 0x1f);
            if (pbVar7[1] >> 4 == 4) {
              if (param_2[uVar4] != 0) {
LAB_8010b4d4:
                uVar9 = uVar6;
              }
            }
            else {
              if (gSentenceRuleTest == (code *)0x0) {
                iVar3 = -1;
              }
              else {
                iVar3 = (*gSentenceRuleTest)
                                  ((uint)*param_1,(uint)*pbVar7,uVar5,param_1,(uint)*pbVar7,uVar4);
              }
              if (iVar3 == 0) {
                uVar9 = 0;
              }
              else {
                if (0 < iVar3) goto LAB_8010b4d4;
                uVar11 = uVar11 | uVar6;
              }
            }
            uVar12 = uVar12 | uVar9;
          }
        }
        else {
          if (uVar4 == uVar10) {
            uVar5 = *puVar13;
            goto LAB_8010b498;
          }
        }
        iVar8 = iVar8 + 1;
        pbVar7 = pbVar7 + 2;
      } while (iVar8 < (int)cVar1);
    }
    uVar10 = uVar10 + 1;
    if (0xc < (int)uVar10) {
      *param_3 = (char)uVar11;
      return uVar12 & 0xff;
    }
  } while( true );
}




// decompiled code
// original method signature: 
// uint iSPCH_CheckSentenceRules(byte param_1,byte param_2,int param_3);
 // line 0, offset 0x8010b58c
uint iSPCH_CheckSentenceRules(byte param_1,byte param_2,int param_3)

{
  return (uint)((byte)((*(byte *)(param_3 + 2) ^ param_1) & *(byte *)(param_3 + 1) & ~param_2) == 0)
  ;
}




// decompiled code
// original method signature: 
// void iSPCH_InitSample(undefined4 *param_1);
 // line 0, offset 0x8010b5ac
void iSPCH_InitSample(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined *)(param_1 + 3) = 0xff;
  *(undefined *)((int)param_1 + 0xd) = 0xff;
  *(undefined *)((int)param_1 + 0xe) = 0xff;
  *(undefined *)((int)param_1 + 0xf) = 0xff;
  return;
}




// decompiled code
// original method signature: 
// undefined4 iSPCH_UnPackSample(int param_1,uint param_2,int *param_3);
 // line 0, offset 0x8010b5d4
undefined4 iSPCH_UnPackSample(int param_1,uint param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  uVar11 = 0;
  bVar2 = false;
  iSPCH_InitSample(param_3);
  iVar10 = 0;
  if ((int)param_2 < (int)(uint)*(byte *)(param_1 + 3)) {
    bVar1 = *(byte *)(param_1 + 2);
    uVar6 = (uint)bVar1 & 0xf;
    iVar9 = uVar6 + 2;
    iVar4 = 0;
    param_3[2] = uVar6;
    pbVar7 = (byte *)(param_1 + 8 + param_2 * iVar9);
    piVar3 = param_3;
    if ((bVar1 & 0xf) != 0) {
      do {
        iVar8 = iVar4 + 2;
        iVar4 = iVar4 + 1;
        *(byte *)(piVar3 + 3) = pbVar7[iVar8];
        piVar3 = (int *)((int)param_3 + iVar4);
      } while (iVar4 < (int)uVar6);
    }
    if ((*pbVar7 & 0x80) != 0) {
      param_2 = (uint)pbVar7[1];
      pbVar7 = (byte *)(param_1 + 8 + param_2 * iVar9);
    }
    pbVar5 = pbVar7 + iVar9;
    iVar4 = param_2 + 1;
    iVar8 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
    param_3[1] = iVar8 * 0x100;
    do {
      if (iVar4 < (int)(uint)*(byte *)(param_1 + 3)) {
        if ((*pbVar5 & 0x80) == 0) {
          bVar2 = true;
          iVar10 = ((uint)*pbVar5 * 0x100 + (uint)pbVar5[1]) * 0x100;
        }
        else {
          pbVar5 = pbVar5 + iVar9;
          iVar4 = iVar4 + 1;
        }
      }
      else {
        bVar2 = true;
        iVar10 = (uint)*(ushort *)(param_1 + 4) << 8;
      }
    } while (!bVar2);
    *param_3 = iVar10 + iVar8 * -0x100;
    uVar11 = 1;
  }
  return uVar11;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformresolve(undefined4 param_1,int param_2,int *param_3);
 // line 0, offset 0x8010b75c
undefined4 iSNDplatformresolve(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_res0;
  uint local_38;
  int local_34;
  byte *local_30 [2];
  
  iVar6 = 0;
  iVar7 = 0;
  iVar4 = 0;
  local_res0 = param_1;
  iVar2 = 1;
  puVar3 = (uint *)0;
  while ((puVar9 = puVar3, iVar10 = iVar2, iVar8 = iVar4,
         iVar4 = iSNDgettag((byte **)register0x00000074,&local_38,&local_34,local_30), iVar4 != 0 &&
         (local_38 != 0xfe))) {
    iVar4 = iVar8;
    iVar2 = iVar10;
    puVar3 = puVar9;
    if (((local_38 != 0x80) &&
        (((iVar4 = local_34, iVar2 = iVar10, puVar3 = puVar9, local_38 != 0x88 &&
          (iVar4 = iVar8, iVar2 = iVar10, puVar3 = (uint *)local_30[0], local_38 != 0x8a)) &&
         (iVar4 = iVar8, iVar2 = local_34, puVar3 = puVar9, local_38 != 0x82)))) &&
       (iVar4 = iVar8, iVar2 = iVar10, puVar3 = puVar9, local_38 == 0x85)) {
      iVar6 = local_34;
      iVar4 = iVar8;
      iVar2 = iVar10;
      puVar3 = puVar9;
    }
  }
  if (param_2 != 0) {
    iVar4 = *param_3;
    piVar1 = param_3;
    while (iVar4 != -1) {
      if (*piVar1 == iVar8) {
        *puVar9 = piVar1[1];
        break;
      }
      iVar4 = piVar1[2];
      iVar7 = iVar7 + 1;
      piVar1 = piVar1 + 2;
    }
    if (*puVar9 != 0) {
      return 7;
    }
    iVar4 = iVar6 / 0x1c;
    if (iVar6 != iVar4 * 0x1c) {
      iVar4 = iVar4 + 1;
    }
    uVar11 = iVar4 * iVar10 * 0x10;
    uVar5 = iSNDpsxmalloc(uVar11);
    if (uVar5 == 0) {
      return 0xfffffffa;
    }
    iVar6 = iSNDdmqueuesplit(param_2 + iVar8,uVar5,uVar11,1);
    *puVar9 = uVar5;
    param_3[iVar7 * 2] = iVar8;
    (param_3 + iVar7 * 2)[1] = uVar5;
    do {
      iVar7 = iSNDdmcomplete(iVar6);
    } while (iVar7 == 0);
  }
  return 7;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformremove(undefined4 param_1,int *param_2);
 // line 0, offset 0x8010b958
undefined4 iSNDplatformremove(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_res0;
  uint local_28;
  int iStack36;
  byte *local_20 [2];
  
  piVar4 = (int *)0x0;
  local_res0 = param_1;
  while ((iVar1 = iSNDgettag((byte **)register0x00000074,&local_28,&iStack36,local_20), iVar1 != 0
         && (local_28 != 0xfe))) {
    if (local_28 == 0x8a) {
      piVar4 = (int *)local_20[0];
    }
  }
  iVar1 = 0;
  if (*param_2 != -1) {
    iVar2 = *param_2;
    piVar3 = param_2;
    do {
      piVar3 = piVar3 + 2;
      if (iVar2 == *piVar4) {
        return 0;
      }
      iVar2 = *piVar3;
      iVar1 = iVar1 + 1;
    } while (iVar2 != -1);
  }
  param_2[iVar1 * 2] = *piVar4;
  if (*piVar4 != 0) {
    iSNDpsxfree(*piVar4);
  }
  return 0;
}




// decompiled code
// original method signature: 
// undefined4 iSNDplatformplay(undefined4 param_1,int param_2,undefined param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
 // line 0, offset 0x8010ba48
/* WARNING: Could not reconcile some variable overlaps */

undefined4
iSNDplatformplay(undefined4 param_1,int param_2,undefined param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_res0;
  uint local_30;
  int local_2c;
  byte *local_28 [2];
  
  puVar7 = (undefined4 *)0x0;
  puVar5 = &DAT_00005622;
  iVar6 = 0;
  iVar1 = param_2 * 0x2c;
  (&DAT_80147a11)[iVar1] = 0;
  (&DAT_80147a10)[iVar1] = 0xff;
  local_2c._0_1_ = 1;
  (&DAT_80147a0e)[iVar1] = 0;
  local_res0 = param_1;
  do {
    (&DAT_80147a0f)[iVar1] = (undefined)local_2c;
    puVar2 = puVar5;
    iVar4 = iVar6;
    puVar3 = puVar7;
    while( true ) {
      do {
        puVar7 = puVar3;
        iVar6 = iVar4;
        puVar5 = puVar2;
        iVar4 = iSNDgettag((byte **)register0x00000074,&local_30,&local_2c,local_28);
        if ((iVar4 == 0) || (local_30 == 0xfe)) {
          *(int *)(&DAT_801479f4 + iVar1) = iVar6;
          (&DAT_80147a12)[iVar1] = param_3;
          *(undefined2 *)(&DAT_80147a08 + iVar1) = (undefined2)param_7;
          (&DAT_80147a13)[iVar1] = (undefined)param_6;
          *(undefined4 *)(&DAT_801479f0 + iVar1) = *puVar7;
          (&DAT_801479fc)[param_2 * 0xb] = 0;
          (&DAT_80147a00)[param_2 * 0xb] = 0;
          (&DAT_80147a04)[param_2 * 0xb] = iVar6 << 0xc;
          *(short *)(&DAT_80147a0a + iVar1) = (short)((uint)((int)puVar5 * 0x17c7) >> 0x10);
          if (1 < (byte)(&DAT_80147a0f)[iVar1]) {
            (&DAT_80147a10)[iVar1] = *(undefined *)(param_2 * 100 + DAT_801478f4 + 4);
            (&DAT_80147a11)[(int)(char)(&DAT_80147a10)[iVar1] * 0x2c] = 1;
            (&DAT_801479fc)[(int)(char)(&DAT_80147a10)[iVar1] * 0xb] = 0;
            (&DAT_80147a00)[(int)(char)(&DAT_80147a10)[iVar1] * 0xb] = 0;
            (&DAT_80147a04)[(int)(char)(&DAT_80147a10)[iVar1] * 0xb] =
                 (&DAT_80147a04)[param_2 * 0xb];
          }
          iSNDplatformpitch(param_2,param_4);
          (&DAT_80147a0c)[iVar1] = 1;
          return 0;
        }
        puVar2 = puVar5;
        iVar4 = iVar6;
        puVar3 = (undefined4 *)local_28[0];
      } while ((local_30 == 0x8a) ||
              (puVar2 = puVar5, iVar4 = local_2c, puVar3 = puVar7, local_30 == 0x85));
      if (local_30 == 0x82) break;
      puVar2 = (undefined *)local_2c;
      iVar4 = iVar6;
      puVar3 = puVar7;
      if ((local_30 != 0x84) && (puVar2 = puVar5, iVar4 = iVar6, puVar3 = puVar7, local_30 == 0x92))
      {
        (&DAT_80147a0e)[iVar1] = (undefined)local_2c;
        puVar2 = puVar5;
        iVar4 = iVar6;
        puVar3 = puVar7;
      }
    }
  } while( true );
}




// decompiled code
// original method signature: 
// int randrange(int param_1);
 // line 0, offset 0x8010bcf4
int randrange(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0x10001) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x10000;
  }
  uVar1 = iSNDrandom();
  return (int)(((uVar1 & 0x7fff) - 0x4000) * param_1) >> 0xe;
}




// decompiled code
// original method signature: 
// undefined4 iSNDgettag(byte **param_1,uint *param_2,int *param_3,byte **param_4);
 // line 0, offset 0x8010bd50
undefined4 iSNDgettag(byte **param_1,uint *param_2,int *param_3,byte **param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  bVar1 = **param_1;
  pbVar4 = *param_1;
  while (bVar1 == 0xfc) {
    *param_1 = pbVar4 + 1;
    bVar1 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  }
  bVar1 = **param_1;
  *param_2 = (uint)bVar1;
  if (bVar1 == 0xff) {
    uVar2 = 0;
  }
  else {
    pbVar4 = *param_1;
    *param_1 = pbVar4 + 1;
    if ((*param_2 == 0xfd) || (*param_2 == 0xfe)) {
      uVar2 = 1;
    }
    else {
      uVar5 = (uint)pbVar4[1];
      if (pbVar4[1] == 0xff) {
        *param_1 = pbVar4 + 2;
        uVar5 = iSNDgetdata(pbVar4 + 2,4);
        *param_1 = *param_1 + 3;
      }
      pbVar4 = *param_1;
      *param_1 = pbVar4 + 1;
      *param_4 = pbVar4 + 1;
      if (uVar5 < 5) {
        iVar3 = iSNDgetdata(*param_1,uVar5);
        *param_3 = iVar3;
      }
      uVar2 = 1;
      *param_1 = *param_1 + uVar5;
    }
  }
  return uVar2;
}




// decompiled code
// original method signature: 
// int iSNDrandom(void);
 // line 0, offset 0x8010be80
int iSNDrandom(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = DAT_8013c304 + DAT_8013c300;
  iVar5 = 0;
  if ((uVar1 < DAT_8013c304) || (uVar1 < DAT_8013c300)) {
    iVar5 = 1;
  }
  uVar2 = uVar1 + DAT_8013c2fc + iVar5;
  uVar3 = uVar2 + DAT_8013c2f8 + (uint)(uVar2 < DAT_8013c2fc);
  uVar4 = uVar3 + DAT_8013c2f4 + (uint)(uVar3 < DAT_8013c2f8);
  sndseed = uVar4 + sndseed + (uint)(uVar4 < DAT_8013c2f4);
  DAT_8013c2f4 = uVar4;
  DAT_8013c2f8 = uVar3;
  DAT_8013c2fc = uVar2;
  DAT_8013c300 = uVar1;
  if ((((DAT_8013c304 + 1 == 0) &&
       (DAT_8013c300 = uVar1 + 1, DAT_8013c2f4 = uVar4, DAT_8013c2f8 = uVar3, DAT_8013c2fc = uVar2,
       DAT_8013c300 == 0)) &&
      (DAT_8013c2fc = uVar2 + 1, DAT_8013c2f4 = uVar4, DAT_8013c2f8 = uVar3, DAT_8013c2fc == 0)) &&
     ((DAT_8013c2f8 = uVar3 + 1, DAT_8013c2f4 = uVar4, DAT_8013c2f8 == 0 &&
      (DAT_8013c2f4 = uVar4 + 1, DAT_8013c2f4 == 0)))) {
    sndseed = sndseed + 1;
  }
  DAT_8013c304 = DAT_8013c304 + 1;
  return sndseed;
}




// decompiled code
// original method signature: 
// void iSNDpsxenablespuirq(void);
 // line 0, offset 0x8010bf80
void iSNDpsxenablespuirq(void)

{
  *(ushort *)(DAT_80147e2c + 0x1aa) = *(ushort *)(DAT_80147e2c + 0x1aa) | 0x40;
  return;
}




// decompiled code
// original method signature: 
// void iSNDpsxdisablespuirq(void);
 // line 0, offset 0x8010bfa4
void iSNDpsxdisablespuirq(void)

{
  *(ushort *)(DAT_80147e2c + 0x1aa) = *(ushort *)(DAT_80147e2c + 0x1aa) & 0xffbf;
  return;
}




// decompiled code
// original method signature: 
// void SysDeqIntRP(void);
 // line 0, offset 0x8010bfc8
void SysDeqIntRP(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xc0)();
  return;
}




// decompiled code
// original method signature: 
// void SysEnqIntRP(void);
 // line 0, offset 0x8010bfd8
void SysEnqIntRP(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xc0)();
  return;
}




// decompiled code
// original method signature: 
// void setRC2wait(undefined4 param_1);
 // line 0, offset 0x8010bfe8
void setRC2wait(undefined4 param_1)

{
  _waitTime = param_1;
  _startTime = (uint)(ushort)TMR_SYSCLOCK_VAL;
  return;
}




// decompiled code
// original method signature: 
// uint chkRC2wait(void);
 // line 0, offset 0x8010c008
uint chkRC2wait(void)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)TMR_SYSCLOCK_VAL;
  if (uVar1 < _startTime) {
    if ((ushort)TMR_SYSCLOCK_MAX == 0) {
      uVar1 = uVar1 + 0x10000;
    }
    else {
      uVar1 = uVar1 + (uint)(ushort)TMR_SYSCLOCK_MAX;
    }
  }
  if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
    uVar1 = uVar1 - _startTime >> 3;
  }
  else {
    uVar1 = uVar1 - _startTime;
  }
  return (uint)(uVar1 < _waitTime) ^ 1;
}




// decompiled code
// original method signature: 
// void FUN_8010c0a8(int param_1);
 // line 0, offset 0x8010c0a8
void FUN_8010c0a8(int param_1)

{
  DAT_8013c310 = (*_padFuncSendAuto)();
  **(undefined **)(param_1 + 0x3c) = 0;
  _padSioRW(param_1,-2);
  return;
}




// decompiled code
// original method signature: 
// uint FUN_8010c1c8(int param_1);
 // line 0, offset 0x8010c1c8
uint FUN_8010c1c8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined uVar3;
  
  if (DAT_8013c310 != 0) {
    (*_padFuncSendAuto)(*(int *)(param_1 + 0xc) + 0x1e0);
    (*_padFuncSendAuto)(*(int *)(param_1 + 0xc) + 0x2d0);
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x36) == '\0') {
    uVar3 = (undefined)_padModeMtap;
  }
  uVar1 = _padSioRW2(param_1,uVar3);
  if (-1 < (int)uVar1) {
    uVar2 = uVar1 & 0xf;
    if ((uVar1 & 0xf0) == 0) {
      uVar1 = 0xfffffff7;
    }
    else {
      DAT_8013c308 = uVar2 << 1;
      uVar1 = 0;
      if (uVar2 == 0) {
        DAT_8013c308 = 0x20;
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}




// decompiled code
// original method signature: 
// uint FUN_8010c288(int param_1);
 // line 0, offset 0x8010c288
uint FUN_8010c288(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (**(byte **)(param_1 + 0x3c) >> 4 == 8) {
    uVar3 = (uint)(*(char *)(param_1 + 0x36) == '\0');
  }
  uVar1 = (*_padFuncGetTxd)(param_1,uVar3);
  uVar2 = _padSioRW2(param_1,uVar1);
  uVar3 = uVar2;
  if (((uVar2 != 0x5a) && (uVar3 = uVar2, uVar2 != 0)) && (uVar3 = 0xfffffff7, (int)uVar2 < 0)) {
    uVar3 = uVar2;
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// uint FUN_8010c314(int param_1);
 // line 0, offset 0x8010c314
uint FUN_8010c314(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_s3;
  uint uVar8;
  
  (*_padFuncCurrLimit)();
  uVar8 = 0;
  if ((_padModeMtap != 0) && ((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8)) {
    uVar8 = (uint)(*(char *)(param_1 + 0x36) == '\0');
  }
  if (uVar8 != 0) {
    iVar5 = -1;
    iVar7 = -0xf0;
    do {
      DAT_8013c308 = DAT_8013c308 + -1;
      if (DAT_8013c308 < 1) break;
      if (-1 < iVar5) {
        (*_padFuncCurrLimit)(*(int *)(param_1 + 0xc) + iVar7);
      }
      uVar2 = (*_padFuncGetTxd)(param_1,1);
      uVar3 = _padSioRW2(param_1,uVar2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      setRC2wait(0x3c);
      iVar4 = _padClrIntSio0();
      iVar5 = iVar5 + 1;
      if (iVar4 == 0) {
        return 0xfffffffd;
      }
      iVar7 = iVar7 + 0xf0;
    } while (iVar5 < 4);
  }
  if (1 < DAT_8013c308) {
    piVar6 = (int *)(&_padFixResult + (uint)(_padSioChan == 0) * 4);
    iVar5 = (uint)(_padSioChan == 0) * 0xf0;
    do {
      iVar7 = *piVar6;
      if (iVar7 < 0) break;
      if (0 < iVar7) {
        unaff_s3 = *(int *)(iVar5 + _padInfoDir + 0xc) + iVar7 * 0xf0 + -0xf0;
        (*_padFuncRecvAuto)(unaff_s3);
      }
      iVar7 = *piVar6;
      if (iVar7 == 3) {
        (*_padFuncRecvAuto)(unaff_s3 + -0xf0);
        iVar7 = 1;
LAB_8010c548:
        *piVar6 = iVar7;
      }
      else {
        if (iVar7 < 4) {
          if ((iVar7 < 2) && (-1 < iVar7)) {
            unaff_s3 = _padInfoDir + iVar5;
            (*_padFuncRecvAuto)(unaff_s3);
            (*_padFuncClrCmdNo)(unaff_s3);
            iVar7 = -1;
            goto LAB_8010c548;
          }
        }
        else {
          if (iVar7 == 4) {
            *piVar6 = 3;
          }
        }
      }
      uVar3 = (*_padFuncGetTxd)(param_1,uVar8);
      uVar3 = _padSioRW(param_1,uVar3 & 0xff);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      setRC2wait(0x3c);
      iVar7 = _padClrIntSio0();
      if (iVar7 == 0) {
        return 0xfffffffd;
      }
      DAT_8013c308 = DAT_8013c308 + -1;
    } while (1 < DAT_8013c308);
  }
  while( true ) {
    DAT_8013c308 = DAT_8013c308 + -1;
    if (DAT_8013c308 < 1) {
      _padWaitRXready();
      bVar1 = *(byte *)(param_1 + 0x44);
      *(char *)(param_1 + 0x44) = bVar1 + 1;
      *(undefined *)((uint)bVar1 + *(int *)(param_1 + 0x3c)) = *PTR_JOY_MCD_DATA_8013c30c;
      (*_padFuncNextPort)(0);
      return 0;
    }
    uVar3 = (*_padFuncGetTxd)(param_1,uVar8);
    uVar3 = _padSioRW(param_1,uVar3 & 0xff);
    if ((int)uVar3 < 0) break;
    setRC2wait(0x3c);
    iVar5 = _padClrIntSio0();
    if (iVar5 == 0) {
      return 0xfffffffd;
    }
  }
  return uVar3;
}




// decompiled code
// original method signature: 
// void SetDrawMove(int param_1,undefined4 *param_2,uint param_3,int param_4);
 // line 0, offset 0x8010c698
void SetDrawMove(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined uVar1;
  undefined4 uVar2;
  
  uVar1 = 5;
  if ((*(short *)(param_2 + 1) == 0) || (*(short *)((int)param_2 + 6) == 0)) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0x1000000;
  *(undefined4 *)(param_1 + 8) = 0x80000000;
  *(undefined *)(param_1 + 3) = uVar1;
  uVar2 = *param_2;
  *(uint *)(param_1 + 0x10) = param_4 << 0x10 | param_3 & 0xffff;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  return;
}




// decompiled code
// original method signature: 
// void DeliverEvent(void);
 // line 0, offset 0x8010c6f8
void DeliverEvent(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void _SN_read(void);
 // line 0, offset 0x8010c708
void _SN_read(void)

{
  trap(0x105);
  return;
}




// decompiled code
// original method signature: 
// void _SN_write(void);
 // line 0, offset 0x8010c720
void _SN_write(void)

{
  trap(0x106);
  return;
}




// decompiled code
// original method signature: 
// void iSNDpvtolrv(int param_1,int param_2,int *param_3,int *param_4);
 // line 0, offset 0x8010c738
void iSNDpvtolrv(int param_1,int param_2,int *param_3,int *param_4)

{
  *param_3 = param_2;
  *param_4 = param_2;
  if (param_1 != 0x40) {
    if (param_1 < 0x40) {
      *param_4 = param_2 * param_1 >> 6;
      return;
    }
    *param_3 = param_2 * (0x7f - param_1) >> 6;
  }
  return;
}




// decompiled code
// original method signature: 
// void InitCARD(void);
 // line 0, offset 0x8010c784
void InitCARD(void)

{
  ChangeClearPAD();
  EnterCriticalSection();
  ReadInitPadFlag();
  InitCARD2();
  _copy_memcard_patch();
  _patch_card();
  _patch_card2();
  ExitCriticalSection();
  return;
}




// decompiled code
// original method signature: 
// void StartCARD(void);
 // line 0, offset 0x8010c7f0
void StartCARD(void)

{
  EnterCriticalSection();
  StartCARD2();
  ChangeClearPAD();
  ExitCriticalSection();
  return;
}




// decompiled code
// original method signature: 
// void StopCARD(void);
 // line 0, offset 0x8010c828
void StopCARD(void)

{
  StopCARD2();
  _ExitCard();
  return;
}




// decompiled code
// original method signature: 
// void _bu_init(void);
 // line 0, offset 0x8010c854
void _bu_init(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xa0)();
  return;
}




// decompiled code
// original method signature: 
// void CloseEvent(void);
 // line 0, offset 0x8010c864
void CloseEvent(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void TestEvent(void);
 // line 0, offset 0x8010c874
void TestEvent(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void firstfile2(void);
 // line 0, offset 0x8010c884
void firstfile2(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void iSNDlibatodlrv(int param_1,int param_2,uint *param_3,uint *param_4);
 // line 0, offset 0x8010c894
void iSNDlibatodlrv(int param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = iSNDsin(param_1 >> 6);
  uVar2 = param_2 * (0x10000 - uVar1) >> 0x10;
  *param_3 = uVar2;
  if (0x7f < uVar2) {
    *param_3 = 0x7f;
  }
  uVar1 = param_2 * (uVar1 + 0x10000) >> 0x10;
  *param_4 = uVar1;
  if (0x7f < uVar1) {
    *param_4 = 0x7f;
  }
  return;
}




// decompiled code
// original method signature: 
// int iSNDgetdata(byte *param_1,int param_2);
 // line 0, offset 0x8010c928
int iSNDgetdata(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_2 + -1;
  if (param_2 != 0) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 * 0x100 + (uint)bVar1;
    } while (iVar2 != -1);
  }
  if ((param_2 == 1) && (0x7f < iVar3)) {
    iVar3 = iVar3 + -0x100;
  }
  else {
    if (((param_2 == 2) && (iVar2 = -0x10000, 0x7fff < iVar3)) ||
       ((param_2 == 3 && (iVar2 = -0x1000000, 0x7fffff < iVar3)))) {
      iVar3 = iVar3 + iVar2;
    }
  }
  return iVar3;
}




// decompiled code
// original method signature: 
// undefined4 ReadInitPadFlag(void);
 // line 0, offset 0x8010c9b0
undefined4 ReadInitPadFlag(void)

{
  return DAT_8013c338;
}




// decompiled code
// original method signature: 
// void InitCARD2(void);
 // line 0, offset 0x8010c9c0
void InitCARD2(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void _patch_card(void);
 // line 0, offset 0x8010ca68
void _patch_card(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  DAT_80148ac4 = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = FUN_000000b0();
  DAT_0000dffc = (undefined4 *)
                 (*(int *)(*(int *)(iVar1 + 0x18) + 0x70) * 0x10000 +
                  (*(uint *)(*(int *)(iVar1 + 0x18) + 0x74) & 0xffff) + 0x28);
  puVar2 = &DAT_8010ca40;
  do {
    *DAT_0000dffc = *puVar2;
    puVar2 = puVar2 + 1;
    DAT_0000dffc = DAT_0000dffc + 1;
  } while (puVar2 != &DAT_8010ca54);
  FlushCache();
  return;
}




// decompiled code
// original method signature: 
// void _patch_card2(void);
 // line 0, offset 0x8010cafc
void _patch_card2(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  DAT_80148ac4 = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = FUN_000000b0();
  iVar1 = *(int *)(iVar1 + 0x16c);
  puVar2 = &DAT_8010ca54;
  do {
    *(undefined4 *)(iVar1 + 0x9c8) = *puVar2;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (puVar2 != (undefined4 *)_patch_card);
  FlushCache();
  return;
}




// decompiled code
// original method signature: 
// void _copy_memcard_patch(void);
 // line 0, offset 0x8010cb6c
void _copy_memcard_patch(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_0000df80;
  puVar2 = &DAT_8010c9d0;
  do {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (puVar2 != &DAT_8010ca40);
  return;
}




// decompiled code
// original method signature: 
// void StartCARD2(void);
 // line 0, offset 0x8010cba0
void StartCARD2(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void StopCARD2(void);
 // line 0, offset 0x8010cbb0
void StopCARD2(void)

{
  FUN_000000b0();
  return;
}




// decompiled code
// original method signature: 
// void _ExitCard(void);
 // line 0, offset 0x8010cbc0
void _ExitCard(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  DAT_80148ad4 = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = FUN_000000b0();
  iVar1 = *(int *)(iVar1 + 0x18);
  puVar2 = &DAT_8010cc30;
  do {
    *(undefined4 *)(iVar1 + 0x70) = *puVar2;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (puVar2 != (undefined4 *)0x8010cc3c);
  FlushCache();
  ExitCriticalSection();
  return;
}




// decompiled code
// original method signature: 
// uint iSNDsin(uint param_1);
 // line 0, offset 0x8010cc40
uint iSNDsin(uint param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 >> 8 & 3;
  param_1 = param_1 & 0xff;
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        return -(uint)*(ushort *)(&sndsintbl + param_1 * 2);
      }
      return -(uint)*(ushort *)(&sndsintbl + (0x100 - param_1) * 2);
    }
    param_1 = 0x100 - param_1;
  }
  return (uint)*(ushort *)(&sndsintbl + param_1 * 2);
}





