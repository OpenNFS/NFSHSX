#include "THISDUST.H"
#include "FEMENU.H"


// decompiled code
// original method signature: 
// struct tListIterator * /*$ra*/ __13tListIteratorPsPc(struct tListIterator *this /*$v0*/, short *selection /*$a1*/, char *valPtr /*$a2*/)
 // line 61, offset 0x80023dd0
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x80023DD0
	/* end block 1 */
	// End offset: 0x80023DD0
	// End Line: 62

	/* begin block 2 */
		// Start line: 122
	/* end block 2 */
	// End Line: 123

	/* begin block 3 */
		// Start line: 122
	/* end block 3 */
	// End Line: 123

tListIterator * __13tListIteratorPsPc(tListIterator *this,short *selection,char *valPtr)

{
  *(undefined4 *)(this->_vf + 2) = 0x800113c8;
  this->fSelectionList = selection;
  this->fValue = valPtr;
  this->fMaxValue = '\0';
  this->fMinValue = '\0';
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._13tListIterator(struct tListIterator *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 68, offset 0x80023df4
	/* begin block 1 */
		// Start line: 69
		// Start offset: 0x80023DF4
	/* end block 1 */
	// End offset: 0x80023DF4
	// End Line: 69

	/* begin block 2 */
		// Start line: 132
	/* end block 2 */
	// End Line: 133

	/* begin block 3 */
		// Start line: 136
	/* end block 3 */
	// End Line: 137

	/* begin block 4 */
		// Start line: 136
	/* end block 4 */
	// End Line: 137

void ___13tListIterator(tListIterator *this,int __in_chrg)

{
  *(undefined4 *)(this->_vf + 2) = 0x800113c8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__13tListIterator7tPlayer(struct tListIterator *this /*$a0*/)
 // line 73, offset 0x80023e28
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x80023E28
	/* end block 1 */
	// End offset: 0x80023E28
	// End Line: 75

	/* begin block 2 */
		// Start line: 141
	/* end block 2 */
	// End Line: 142

	/* begin block 3 */
		// Start line: 146
	/* end block 3 */
	// End Line: 147

	/* begin block 4 */
		// Start line: 146
	/* end block 4 */
	// End Line: 147

	/* begin block 5 */
		// Start line: 147
	/* end block 5 */
	// End Line: 148

	/* begin block 6 */
		// Start line: 147
	/* end block 6 */
	// End Line: 148

char Value__13tListIterator7tPlayer(tListIterator *this)

{
  return *this->fValue;
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__13tListIterator7tPlayer(struct tListIterator *this /*$s0*/)
 // line 78, offset 0x80023e3c
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x80023E3C
	/* end block 1 */
	// End offset: 0x80023E3C
	// End Line: 79

	/* begin block 2 */
		// Start line: 152
	/* end block 2 */
	// End Line: 153

	/* begin block 3 */
		// Start line: 156
	/* end block 3 */
	// End Line: 157

	/* begin block 4 */
		// Start line: 156
	/* end block 4 */
	// End Line: 157

short TextValue__13tListIterator7tPlayer(tListIterator *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)(this->_vf + 2) + 0x14))
                    ((int)&this->fSelectionList + (int)*(short *)(*(int *)(this->_vf + 2) + 0x10),
                     0xffffffff);
  return this->fSelectionList[uVar1 & 0xff];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__13tListIterator7tPlayer(struct tListIterator *this /*$a0*/)
 // line 83, offset 0x80023e8c
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80023E8C
	/* end block 1 */
	// End offset: 0x80023ED0
	// End Line: 87

	/* begin block 2 */
		// Start line: 162
	/* end block 2 */
	// End Line: 163

	/* begin block 3 */
		// Start line: 166
	/* end block 3 */
	// End Line: 167

	/* begin block 4 */
		// Start line: 166
	/* end block 4 */
	// End Line: 167

	/* begin block 5 */
		// Start line: 167
	/* end block 5 */
	// End Line: 168

	/* begin block 6 */
		// Start line: 167
	/* end block 6 */
	// End Line: 168

void Increment__13tListIterator7tPlayer(tListIterator *this)

{
  *this->fValue = *this->fValue + '\x01';
  if (this->fSelectionList[(uint)(byte)*this->fValue] == 0) {
    *this->fValue = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__13tListIterator7tPlayer(struct tListIterator *this /*$a0*/)
 // line 90, offset 0x80023ed8
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x80023ED8
	/* end block 1 */
	// End offset: 0x80023F58
	// End Line: 98

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

	/* begin block 3 */
		// Start line: 180
	/* end block 3 */
	// End Line: 181

	/* begin block 4 */
		// Start line: 180
	/* end block 4 */
	// End Line: 181

	/* begin block 5 */
		// Start line: 181
	/* end block 5 */
	// End Line: 182

	/* begin block 6 */
		// Start line: 181
	/* end block 6 */
	// End Line: 182

void Decrement__13tListIterator7tPlayer(tListIterator *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)this->fValue;
  bVar1 = *pbVar2;
  if (bVar1 == 0) {
    if (0 < this->fSelectionList[(uint)bVar1 + 1]) {
      do {
        *pbVar2 = *pbVar2 + 1;
        pbVar2 = (byte *)this->fValue;
      } while (0 < this->fSelectionList[(uint)*pbVar2 + 1]);
      return;
    }
  }
  else {
    *pbVar2 = bVar1 - 1;
  }
  return;
}



// decompiled code
// original method signature: 
// struct tListIteratorIndexed * /*$ra*/ __20tListIteratorIndexedPsPcT2(struct tListIteratorIndexed *this /*$s0*/, short *selection /*$a1*/, char *valPtr /*$a2*/, char *index /*$s1*/)
 // line 104, offset 0x80023f60
	/* begin block 1 */
		// Start line: 105
		// Start offset: 0x80023F60
	/* end block 1 */
	// End offset: 0x80023F60
	// End Line: 105

	/* begin block 2 */
		// Start line: 201
	/* end block 2 */
	// End Line: 202

	/* begin block 3 */
		// Start line: 208
	/* end block 3 */
	// End Line: 209

	/* begin block 4 */
		// Start line: 208
	/* end block 4 */
	// End Line: 209

tListIteratorIndexed *
__20tListIteratorIndexedPsPcT2(tListIteratorIndexed *this,short *selection,char *valPtr,char *index)

{
  __13tListIteratorPsPc((tListIterator *)this,selection,valPtr);
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011398;
  this->fIndex = index;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._20tListIteratorIndexed(struct tListIteratorIndexed *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 110, offset 0x80023fa4
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x80023FA4
	/* end block 1 */
	// End offset: 0x80023FA4
	// End Line: 111

	/* begin block 2 */
		// Start line: 218
	/* end block 2 */
	// End Line: 219

	/* begin block 3 */
		// Start line: 222
	/* end block 3 */
	// End Line: 223

	/* begin block 4 */
		// Start line: 222
	/* end block 4 */
	// End Line: 223

void ___20tListIteratorIndexed(tListIteratorIndexed *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011398;
  ___13tListIterator((tListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this /*$a0*/)
 // line 114, offset 0x80023fcc
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x80023FCC
	/* end block 1 */
	// End offset: 0x80023FCC
	// End Line: 116

	/* begin block 2 */
		// Start line: 226
	/* end block 2 */
	// End Line: 227

	/* begin block 3 */
		// Start line: 230
	/* end block 3 */
	// End Line: 231

	/* begin block 4 */
		// Start line: 230
	/* end block 4 */
	// End Line: 231

	/* begin block 5 */
		// Start line: 231
	/* end block 5 */
	// End Line: 232

	/* begin block 6 */
		// Start line: 231
	/* end block 6 */
	// End Line: 232

char Value__20tListIteratorIndexed7tPlayer(tListIteratorIndexed *this)

{
  return (this->tListIterator).fValue[(uint)(byte)*this->fIndex];
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this /*$s0*/)
 // line 119, offset 0x80023ff0
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x80023FF0
	/* end block 1 */
	// End offset: 0x80023FF0
	// End Line: 120

	/* begin block 2 */
		// Start line: 236
	/* end block 2 */
	// End Line: 237

	/* begin block 3 */
		// Start line: 240
	/* end block 3 */
	// End Line: 241

	/* begin block 4 */
		// Start line: 240
	/* end block 4 */
	// End Line: 241

short TextValue__20tListIteratorIndexed7tPlayer(tListIteratorIndexed *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((this->tListIterator)._vf + 2);
  uVar2 = (**(code **)(iVar1 + 0x14))
                    ((int)&(this->tListIterator).fSelectionList + (int)*(short *)(iVar1 + 0x10),
                     0xffffffff);
  return (this->tListIterator).fSelectionList[uVar2 & 0xff];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this /*$a0*/)
 // line 126, offset 0x80024040
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x80024040
	/* end block 1 */
	// End offset: 0x800240A0
	// End Line: 130

	/* begin block 2 */
		// Start line: 248
	/* end block 2 */
	// End Line: 249

	/* begin block 3 */
		// Start line: 254
	/* end block 3 */
	// End Line: 255

	/* begin block 4 */
		// Start line: 254
	/* end block 4 */
	// End Line: 255

	/* begin block 5 */
		// Start line: 255
	/* end block 5 */
	// End Line: 256

	/* begin block 6 */
		// Start line: 255
	/* end block 6 */
	// End Line: 256

void Increment__20tListIteratorIndexed7tPlayer(tListIteratorIndexed *this)

{
  char *pcVar1;
  byte *pbVar2;
  
  pcVar1 = (this->tListIterator).fValue + (uint)(byte)*this->fIndex;
  *pcVar1 = *pcVar1 + '\x01';
  pbVar2 = (byte *)((this->tListIterator).fValue + (uint)(byte)*this->fIndex);
  if ((this->tListIterator).fSelectionList[(uint)*pbVar2] == 0) {
    *pbVar2 = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this /*$a0*/)
 // line 133, offset 0x800240a8
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x800240A8
	/* end block 1 */
	// End offset: 0x8002414C
	// End Line: 141

	/* begin block 2 */
		// Start line: 264
	/* end block 2 */
	// End Line: 265

	/* begin block 3 */
		// Start line: 268
	/* end block 3 */
	// End Line: 269

	/* begin block 4 */
		// Start line: 268
	/* end block 4 */
	// End Line: 269

	/* begin block 5 */
		// Start line: 269
	/* end block 5 */
	// End Line: 270

	/* begin block 6 */
		// Start line: 269
	/* end block 6 */
	// End Line: 270

void Decrement__20tListIteratorIndexed7tPlayer(tListIteratorIndexed *this)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)this->fIndex;
  pcVar2 = (this->tListIterator).fValue;
  bVar1 = pcVar2[(uint)*pbVar3];
  if (bVar1 == 0) {
    if (0 < (this->tListIterator).fSelectionList[(uint)bVar1 + 1]) {
      do {
        pcVar2[(uint)*pbVar3] = pcVar2[(uint)*pbVar3] + '\x01';
        pbVar3 = (byte *)this->fIndex;
        pcVar2 = (this->tListIterator).fValue;
      } while (0 < (this->tListIterator).fSelectionList[(uint)(byte)pcVar2[(uint)*pbVar3] + 1]);
      return;
    }
  }
  else {
    pcVar2[(uint)*pbVar3] = bVar1 - 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._26tListIteratorDoubleIndexed(struct tListIteratorDoubleIndexed *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 156, offset 0x80024154
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x80024154
	/* end block 1 */
	// End offset: 0x80024154
	// End Line: 157

	/* begin block 2 */
		// Start line: 308
	/* end block 2 */
	// End Line: 309

	/* begin block 3 */
		// Start line: 302
	/* end block 3 */
	// End Line: 303

	/* begin block 4 */
		// Start line: 302
	/* end block 4 */
	// End Line: 303

void ___26tListIteratorDoubleIndexed(tListIteratorDoubleIndexed *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011368;
  ___13tListIterator((tListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this /*$a0*/)
 // line 160, offset 0x8002417c
	/* begin block 1 */
		// Start line: 161
		// Start offset: 0x8002417C
	/* end block 1 */
	// End offset: 0x8002417C
	// End Line: 162

	/* begin block 2 */
		// Start line: 306
	/* end block 2 */
	// End Line: 307

	/* begin block 3 */
		// Start line: 310
	/* end block 3 */
	// End Line: 311

	/* begin block 4 */
		// Start line: 310
	/* end block 4 */
	// End Line: 311

	/* begin block 5 */
		// Start line: 311
	/* end block 5 */
	// End Line: 312

	/* begin block 6 */
		// Start line: 311
	/* end block 6 */
	// End Line: 312

char Value__26tListIteratorDoubleIndexed7tPlayer(tListIteratorDoubleIndexed *this)

{
  return (this->tListIterator).fValue
         [(uint)(byte)*this->fIndex1 * this->index1multiplier + (uint)(byte)*this->fIndex2];
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this /*$s0*/)
 // line 165, offset 0x800241b8
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x800241B8
	/* end block 1 */
	// End offset: 0x800241B8
	// End Line: 166

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

	/* begin block 3 */
		// Start line: 320
	/* end block 3 */
	// End Line: 321

	/* begin block 4 */
		// Start line: 320
	/* end block 4 */
	// End Line: 321

short TextValue__26tListIteratorDoubleIndexed7tPlayer(tListIteratorDoubleIndexed *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((this->tListIterator)._vf + 2);
  uVar2 = (**(code **)(iVar1 + 0x14))
                    ((int)&(this->tListIterator).fSelectionList + (int)*(short *)(iVar1 + 0x10),
                     0xffffffff);
  return (this->tListIterator).fSelectionList[uVar2 & 0xff];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this /*$a0*/)
 // line 172, offset 0x80024208
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x80024208
	/* end block 1 */
	// End offset: 0x8002429C
	// End Line: 176

	/* begin block 2 */
		// Start line: 328
	/* end block 2 */
	// End Line: 329

	/* begin block 3 */
		// Start line: 334
	/* end block 3 */
	// End Line: 335

	/* begin block 4 */
		// Start line: 334
	/* end block 4 */
	// End Line: 335

	/* begin block 5 */
		// Start line: 335
	/* end block 5 */
	// End Line: 336

	/* begin block 6 */
		// Start line: 335
	/* end block 6 */
	// End Line: 336

void Increment__26tListIteratorDoubleIndexed7tPlayer(tListIteratorDoubleIndexed *this)

{
  char *pcVar1;
  byte *pbVar2;
  
  pcVar1 = (this->tListIterator).fValue +
           (uint)(byte)*this->fIndex1 * this->index1multiplier + (uint)(byte)*this->fIndex2;
  *pcVar1 = *pcVar1 + '\x01';
  pbVar2 = (byte *)((this->tListIterator).fValue +
                   (uint)(byte)*this->fIndex1 * this->index1multiplier + (uint)(byte)*this->fIndex2)
  ;
  if ((this->tListIterator).fSelectionList[(uint)*pbVar2] == 0) {
    *pbVar2 = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this /*$a0*/)
 // line 179, offset 0x800242a4
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x800242A4
	/* end block 1 */
	// End offset: 0x80024388
	// End Line: 187

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

	/* begin block 3 */
		// Start line: 348
	/* end block 3 */
	// End Line: 349

	/* begin block 4 */
		// Start line: 348
	/* end block 4 */
	// End Line: 349

	/* begin block 5 */
		// Start line: 349
	/* end block 5 */
	// End Line: 350

	/* begin block 6 */
		// Start line: 349
	/* end block 6 */
	// End Line: 350

void Decrement__26tListIteratorDoubleIndexed7tPlayer(tListIteratorDoubleIndexed *this)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)this->fIndex1;
  iVar4 = this->index1multiplier;
  pbVar3 = (byte *)this->fIndex2;
  pcVar2 = (this->tListIterator).fValue;
  bVar1 = pcVar2[(uint)*pbVar5 * iVar4 + (uint)*pbVar3];
  if (bVar1 == 0) {
    if (0 < (this->tListIterator).fSelectionList[(uint)bVar1 + 1]) {
      do {
        pcVar2[(uint)*pbVar5 * iVar4 + (uint)*pbVar3] =
             pcVar2[(uint)*pbVar5 * iVar4 + (uint)*pbVar3] + '\x01';
        pbVar5 = (byte *)this->fIndex1;
        iVar4 = this->index1multiplier;
        pbVar3 = (byte *)this->fIndex2;
        pcVar2 = (this->tListIterator).fValue;
      } while (0 < (this->tListIterator).fSelectionList
                   [(uint)(byte)pcVar2[(uint)*pbVar5 * iVar4 + (uint)*pbVar3] + 1]);
      return;
    }
  }
  else {
    pcVar2[(uint)*pbVar5 * iVar4 + (uint)*pbVar3] = bVar1 - 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._24tListIteratorMultiPlayer(struct tListIteratorMultiPlayer *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 202, offset 0x80024390
	/* begin block 1 */
		// Start line: 203
		// Start offset: 0x80024390
	/* end block 1 */
	// End offset: 0x80024390
	// End Line: 203

	/* begin block 2 */
		// Start line: 400
	/* end block 2 */
	// End Line: 401

	/* begin block 3 */
		// Start line: 382
	/* end block 3 */
	// End Line: 383

	/* begin block 4 */
		// Start line: 382
	/* end block 4 */
	// End Line: 383

void ___24tListIteratorMultiPlayer(tListIteratorMultiPlayer *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011338;
  ___13tListIterator((tListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 206, offset 0x800243b8
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x800243B8
	/* end block 1 */
	// End offset: 0x800243C8
	// End Line: 211

	/* begin block 2 */
		// Start line: 386
	/* end block 2 */
	// End Line: 387

	/* begin block 3 */
		// Start line: 390
	/* end block 3 */
	// End Line: 391

	/* begin block 4 */
		// Start line: 390
	/* end block 4 */
	// End Line: 391

	/* begin block 5 */
		// Start line: 391
	/* end block 5 */
	// End Line: 392

	/* begin block 6 */
		// Start line: 391
	/* end block 6 */
	// End Line: 392

char Value__24tListIteratorMultiPlayer7tPlayer(tListIteratorMultiPlayer *this,tPlayer atIndex)

{
  if (atIndex == ~kPlayerOne) {
    atIndex = kPlayerOne;
  }
  return (this->tListIterator).fValue[atIndex];
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this /*$s0*/, enum tPlayer atIndex /*$a1*/)
 // line 214, offset 0x800243e0
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x800243E0
	/* end block 1 */
	// End offset: 0x800243E0
	// End Line: 215

	/* begin block 2 */
		// Start line: 402
	/* end block 2 */
	// End Line: 403

	/* begin block 3 */
		// Start line: 406
	/* end block 3 */
	// End Line: 407

	/* begin block 4 */
		// Start line: 406
	/* end block 4 */
	// End Line: 407

short TextValue__24tListIteratorMultiPlayer7tPlayer(tListIteratorMultiPlayer *this,tPlayer atIndex)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((this->tListIterator)._vf + 2);
  uVar2 = (**(code **)(iVar1 + 0x14))
                    ((int)&(this->tListIterator).fSelectionList + (int)*(short *)(iVar1 + 0x10));
  return (this->tListIterator).fSelectionList[uVar2 & 0xff];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 221, offset 0x80024430
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80024430
	/* end block 1 */
	// End offset: 0x8002448C
	// End Line: 228

	/* begin block 2 */
		// Start line: 414
	/* end block 2 */
	// End Line: 415

	/* begin block 3 */
		// Start line: 420
	/* end block 3 */
	// End Line: 421

	/* begin block 4 */
		// Start line: 420
	/* end block 4 */
	// End Line: 421

	/* begin block 5 */
		// Start line: 421
	/* end block 5 */
	// End Line: 422

	/* begin block 6 */
		// Start line: 421
	/* end block 6 */
	// End Line: 422

void Increment__24tListIteratorMultiPlayer7tPlayer(tListIteratorMultiPlayer *this,tPlayer atIndex)

{
  char *pcVar1;
  byte *pbVar2;
  
  if (atIndex == ~kPlayerOne) {
    atIndex = kPlayerOne;
  }
  pcVar1 = (this->tListIterator).fValue + atIndex;
  *pcVar1 = *pcVar1 + '\x01';
  pbVar2 = (byte *)((this->tListIterator).fValue + atIndex);
  if ((this->tListIterator).fSelectionList[(uint)*pbVar2] == 0) {
    *pbVar2 = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 231, offset 0x80024494
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x80024494
	/* end block 1 */
	// End offset: 0x8002452C
	// End Line: 242

	/* begin block 2 */
		// Start line: 436
	/* end block 2 */
	// End Line: 437

	/* begin block 3 */
		// Start line: 440
	/* end block 3 */
	// End Line: 441

	/* begin block 4 */
		// Start line: 440
	/* end block 4 */
	// End Line: 441

	/* begin block 5 */
		// Start line: 441
	/* end block 5 */
	// End Line: 442

	/* begin block 6 */
		// Start line: 441
	/* end block 6 */
	// End Line: 442

void Decrement__24tListIteratorMultiPlayer7tPlayer(tListIteratorMultiPlayer *this,tPlayer atIndex)

{
  byte bVar1;
  short sVar2;
  char *pcVar3;
  
  if (atIndex == ~kPlayerOne) {
    atIndex = kPlayerOne;
  }
  pcVar3 = (this->tListIterator).fValue;
  bVar1 = pcVar3[atIndex];
  if (bVar1 != 0) {
    pcVar3[atIndex] = bVar1 - 1;
    return;
  }
  sVar2 = (this->tListIterator).fSelectionList[(uint)bVar1 + 1];
  while (0 < sVar2) {
    pcVar3[atIndex] = pcVar3[atIndex] + '\x01';
    pcVar3 = (this->tListIterator).fValue;
    sVar2 = (this->tListIterator).fSelectionList[(uint)(byte)pcVar3[atIndex] + 1];
  }
  return;
}



// decompiled code
// original method signature: 
// struct tListIteratorRange * /*$ra*/ __18tListIteratorRangeccPc(struct tListIteratorRange *this /*$s0*/, char minValue /*$a1*/, char maxValue /*$a2*/, char *valPtr /*$a3*/)
 // line 250, offset 0x80024534
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x80024534
	/* end block 1 */
	// End offset: 0x80024534
	// End Line: 251

	/* begin block 2 */
		// Start line: 469
	/* end block 2 */
	// End Line: 470

	/* begin block 3 */
		// Start line: 478
	/* end block 3 */
	// End Line: 479

	/* begin block 4 */
		// Start line: 478
	/* end block 4 */
	// End Line: 479

tListIteratorRange *
__18tListIteratorRangeccPc(tListIteratorRange *this,char minValue,char maxValue,char *valPtr)

{
  __13tListIteratorPsPc((tListIterator *)this,(short *)0x0,valPtr);
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011308;
  (this->tListIterator).fMinValue = minValue;
  (this->tListIterator).fMaxValue = maxValue;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._18tListIteratorRange(struct tListIteratorRange *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 257, offset 0x80024590
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x80024590
	/* end block 1 */
	// End offset: 0x80024590
	// End Line: 258

	/* begin block 2 */
		// Start line: 491
	/* end block 2 */
	// End Line: 492

	/* begin block 3 */
		// Start line: 495
	/* end block 3 */
	// End Line: 496

	/* begin block 4 */
		// Start line: 495
	/* end block 4 */
	// End Line: 496

void ___18tListIteratorRange(tListIteratorRange *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011308;
  ___13tListIterator((tListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__18tListIteratorRange7tPlayer(struct tListIteratorRange *this /*$a0*/)
 // line 262, offset 0x800245b8
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x800245B8
	/* end block 1 */
	// End offset: 0x800245B8
	// End Line: 267

	/* begin block 2 */
		// Start line: 500
	/* end block 2 */
	// End Line: 501

	/* begin block 3 */
		// Start line: 505
	/* end block 3 */
	// End Line: 506

	/* begin block 4 */
		// Start line: 505
	/* end block 4 */
	// End Line: 506

	/* begin block 5 */
		// Start line: 509
	/* end block 5 */
	// End Line: 510

char Value__18tListIteratorRange7tPlayer(tListIteratorRange *this)

{
  return *(this->tListIterator).fValue;
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__18tListIteratorRange7tPlayer(struct tListIteratorRange *this /*$a0*/)
 // line 270, offset 0x800245cc
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x800245CC
	/* end block 1 */
	// End offset: 0x800245CC
	// End Line: 272

	/* begin block 2 */
		// Start line: 517
	/* end block 2 */
	// End Line: 518

	/* begin block 3 */
		// Start line: 521
	/* end block 3 */
	// End Line: 522

	/* begin block 4 */
		// Start line: 521
	/* end block 4 */
	// End Line: 522

	/* begin block 5 */
		// Start line: 522
	/* end block 5 */
	// End Line: 523

	/* begin block 6 */
		// Start line: 522
	/* end block 6 */
	// End Line: 523

short TextValue__18tListIteratorRange7tPlayer(tListIteratorRange *this)

{
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__18tListIteratorRange7tPlayer(struct tListIteratorRange *this /*$a0*/)
 // line 276, offset 0x800245d4
	/* begin block 1 */
		// Start line: 277
		// Start offset: 0x800245D4
	/* end block 1 */
	// End offset: 0x800245F4
	// End Line: 282

	/* begin block 2 */
		// Start line: 528
	/* end block 2 */
	// End Line: 529

	/* begin block 3 */
		// Start line: 533
	/* end block 3 */
	// End Line: 534

	/* begin block 4 */
		// Start line: 533
	/* end block 4 */
	// End Line: 534

	/* begin block 5 */
		// Start line: 537
	/* end block 5 */
	// End Line: 538

void Increment__18tListIteratorRange7tPlayer(tListIteratorRange *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(this->tListIterator).fValue;
  bVar1 = *pbVar2;
  if (bVar1 < (byte)(this->tListIterator).fMaxValue) {
    *pbVar2 = bVar1 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__18tListIteratorRange7tPlayer(struct tListIteratorRange *this /*$a0*/)
 // line 285, offset 0x800245fc
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x800245FC
	/* end block 1 */
	// End offset: 0x8002461C
	// End Line: 291

	/* begin block 2 */
		// Start line: 547
	/* end block 2 */
	// End Line: 548

	/* begin block 3 */
		// Start line: 551
	/* end block 3 */
	// End Line: 552

	/* begin block 4 */
		// Start line: 551
	/* end block 4 */
	// End Line: 552

	/* begin block 5 */
		// Start line: 555
	/* end block 5 */
	// End Line: 556

void Decrement__18tListIteratorRange7tPlayer(tListIteratorRange *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(this->tListIterator).fValue;
  bVar1 = *pbVar2;
  if ((byte)(this->tListIterator).fMinValue < bVar1) {
    *pbVar2 = bVar1 - 1;
  }
  return;
}



// decompiled code
// original method signature: 
// struct tListIteratorRangeIndexed * /*$ra*/ __25tListIteratorRangeIndexedccPcT3(struct tListIteratorRangeIndexed *this /*$s0*/, char minValue /*$a1*/, char maxValue /*$a2*/, char *valPtr /*$a3*/, char *index /*stack 16*/)
 // line 298, offset 0x80024624
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x80024624
	/* end block 1 */
	// End offset: 0x80024624
	// End Line: 299

	/* begin block 2 */
		// Start line: 569
	/* end block 2 */
	// End Line: 570

	/* begin block 3 */
		// Start line: 577
	/* end block 3 */
	// End Line: 578

	/* begin block 4 */
		// Start line: 577
	/* end block 4 */
	// End Line: 578

tListIteratorRangeIndexed *
__25tListIteratorRangeIndexedccPcT3
          (tListIteratorRangeIndexed *this,char minValue,char maxValue,char *valPtr,char *index)

{
  __18tListIteratorRangeccPc((tListIteratorRange *)this,minValue,maxValue,valPtr);
  *(undefined4 *)((this->tListIteratorRange).tListIterator._vf + 2) = 0x800112d8;
  this->fIndex = index;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tListIteratorRangeIndexed(struct tListIteratorRangeIndexed *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 304, offset 0x80024670
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80024670
	/* end block 1 */
	// End offset: 0x80024670
	// End Line: 305

	/* begin block 2 */
		// Start line: 587
	/* end block 2 */
	// End Line: 588

	/* begin block 3 */
		// Start line: 591
	/* end block 3 */
	// End Line: 592

	/* begin block 4 */
		// Start line: 591
	/* end block 4 */
	// End Line: 592

void ___25tListIteratorRangeIndexed(tListIteratorRangeIndexed *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIteratorRange).tListIterator._vf + 2) = 0x800112d8;
  ___18tListIteratorRange((tListIteratorRange *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__25tListIteratorRangeIndexed7tPlayer(struct tListIteratorRangeIndexed *this /*$a0*/)
 // line 308, offset 0x80024698
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x80024698
	/* end block 1 */
	// End offset: 0x80024698
	// End Line: 310

	/* begin block 2 */
		// Start line: 595
	/* end block 2 */
	// End Line: 596

	/* begin block 3 */
		// Start line: 599
	/* end block 3 */
	// End Line: 600

	/* begin block 4 */
		// Start line: 599
	/* end block 4 */
	// End Line: 600

	/* begin block 5 */
		// Start line: 600
	/* end block 5 */
	// End Line: 601

	/* begin block 6 */
		// Start line: 600
	/* end block 6 */
	// End Line: 601

char Value__25tListIteratorRangeIndexed7tPlayer(tListIteratorRangeIndexed *this)

{
  return (this->tListIteratorRange).tListIterator.fValue[(uint)(byte)*this->fIndex];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__25tListIteratorRangeIndexed7tPlayer(struct tListIteratorRangeIndexed *this /*$a0*/)
 // line 313, offset 0x800246bc
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x800246BC
	/* end block 1 */
	// End offset: 0x800246F0
	// End Line: 316

	/* begin block 2 */
		// Start line: 605
	/* end block 2 */
	// End Line: 606

	/* begin block 3 */
		// Start line: 609
	/* end block 3 */
	// End Line: 610

	/* begin block 4 */
		// Start line: 609
	/* end block 4 */
	// End Line: 610

	/* begin block 5 */
		// Start line: 610
	/* end block 5 */
	// End Line: 611

	/* begin block 6 */
		// Start line: 610
	/* end block 6 */
	// End Line: 611

void Increment__25tListIteratorRangeIndexed7tPlayer(tListIteratorRangeIndexed *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)((this->tListIteratorRange).tListIterator.fValue + (uint)(byte)*this->fIndex);
  bVar1 = *pbVar2;
  if (bVar1 < (byte)(this->tListIteratorRange).tListIterator.fMaxValue) {
    *pbVar2 = bVar1 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__25tListIteratorRangeIndexed7tPlayer(struct tListIteratorRangeIndexed *this /*$a0*/)
 // line 319, offset 0x800246f8
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x800246F8
	/* end block 1 */
	// End offset: 0x8002472C
	// End Line: 322

	/* begin block 2 */
		// Start line: 617
	/* end block 2 */
	// End Line: 618

	/* begin block 3 */
		// Start line: 621
	/* end block 3 */
	// End Line: 622

	/* begin block 4 */
		// Start line: 621
	/* end block 4 */
	// End Line: 622

	/* begin block 5 */
		// Start line: 622
	/* end block 5 */
	// End Line: 623

	/* begin block 6 */
		// Start line: 622
	/* end block 6 */
	// End Line: 623

void Decrement__25tListIteratorRangeIndexed7tPlayer(tListIteratorRangeIndexed *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)((this->tListIteratorRange).tListIterator.fValue + (uint)(byte)*this->fIndex);
  bVar1 = *pbVar2;
  if ((byte)(this->tListIteratorRange).tListIterator.fMinValue < bVar1) {
    *pbVar2 = bVar1 - 1;
  }
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItem * /*$ra*/ __9tMenuItemUi(struct tMenuItem *this /*$v0*/, unsigned int textDescription /*$a1*/)
 // line 423, offset 0x80024734
	/* begin block 1 */
		// Start line: 424
		// Start offset: 0x80024734
	/* end block 1 */
	// End offset: 0x80024734
	// End Line: 424

	/* begin block 2 */
		// Start line: 727
	/* end block 2 */
	// End Line: 728

	/* begin block 3 */
		// Start line: 829
	/* end block 3 */
	// End Line: 830

	/* begin block 4 */
		// Start line: 829
	/* end block 4 */
	// End Line: 830

tMenuItem * __9tMenuItemUi(tMenuItem *this,uint textDescription)

{
  *(undefined4 *)this->_vf = 0x80011280;
  this->fTextDescription = textDescription;
  this->fFlags = 0;
  this->fSelFade = 0;
  this->fButtonImage = -1;
  this->fNumFrames = 0;
  this->fNewMenu = (tMenu *)0x0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._9tMenuItem(struct tMenuItem *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 433, offset 0x80024764
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x80024764
	/* end block 1 */
	// End offset: 0x80024764
	// End Line: 434

	/* begin block 2 */
		// Start line: 848
	/* end block 2 */
	// End Line: 849

	/* begin block 3 */
		// Start line: 852
	/* end block 3 */
	// End Line: 853

	/* begin block 4 */
		// Start line: 852
	/* end block 4 */
	// End Line: 853

void ___9tMenuItem(tMenuItem *this,int __in_chrg)

{
  *(undefined4 *)this->_vf = 0x80011280;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DebounceKeys__9tMenuItem(struct tMenuItem *this /*$a0*/)
 // line 442, offset 0x80024798
	/* begin block 1 */
		// Start line: 443
		// Start offset: 0x80024798
	/* end block 1 */
	// End offset: 0x80024798
	// End Line: 444

	/* begin block 2 */
		// Start line: 861
	/* end block 2 */
	// End Line: 862

	/* begin block 3 */
		// Start line: 870
	/* end block 3 */
	// End Line: 871

	/* begin block 4 */
		// Start line: 870
	/* end block 4 */
	// End Line: 871

	/* begin block 5 */
		// Start line: 871
	/* end block 5 */
	// End Line: 872

	/* begin block 6 */
		// Start line: 871
	/* end block 6 */
	// End Line: 872

long DebounceKeys__9tMenuItem(tMenuItem *this)

{
  return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__9tMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItem *this /*$a0*/)
 // line 447, offset 0x800247a0
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x800247A0
	/* end block 1 */
	// End offset: 0x800247A0
	// End Line: 448

	/* begin block 2 */
		// Start line: 876
	/* end block 2 */
	// End Line: 877

	/* begin block 3 */
		// Start line: 880
	/* end block 3 */
	// End Line: 881

	/* begin block 4 */
		// Start line: 880
	/* end block 4 */
	// End Line: 881

	/* begin block 5 */
		// Start line: 881
	/* end block 5 */
	// End Line: 882

	/* begin block 6 */
		// Start line: 881
	/* end block 6 */
	// End Line: 882

void ProcessInput__9tMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand(tMenuItem *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__9tMenuItemb(struct tMenuItem *this /*$a0*/, void * selected /*$a1*/)
 // line 461, offset 0x800247a8
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x800247A8
	/* end block 1 */
	// End offset: 0x800247A8
	// End Line: 462

	/* begin block 2 */
		// Start line: 895
	/* end block 2 */
	// End Line: 896

	/* begin block 3 */
		// Start line: 908
	/* end block 3 */
	// End Line: 909

	/* begin block 4 */
		// Start line: 908
	/* end block 4 */
	// End Line: 909

void UpdateTransition__9tMenuItemb(tMenuItem *this,void *selected)

{
  UpdateSelFade__9tMenuItemb(this,selected);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__9tMenuItem(struct tMenuItem *this /*$a0*/)
 // line 466, offset 0x800247c8
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x800247C8
	/* end block 1 */
	// End offset: 0x800247C8
	// End Line: 468

	/* begin block 2 */
		// Start line: 914
	/* end block 2 */
	// End Line: 915

	/* begin block 3 */
		// Start line: 918
	/* end block 3 */
	// End Line: 919

	/* begin block 4 */
		// Start line: 918
	/* end block 4 */
	// End Line: 919

	/* begin block 5 */
		// Start line: 919
	/* end block 5 */
	// End Line: 920

	/* begin block 6 */
		// Start line: 919
	/* end block 6 */
	// End Line: 920

void * TransitionIsFinished__9tMenuItem(tMenuItem *this)

{
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateSelFade__9tMenuItemb(struct tMenuItem *this /*$a0*/, void * selected /*$a1*/)
 // line 471, offset 0x800247d0
	/* begin block 1 */
		// Start line: 472
		// Start offset: 0x800247D0
	/* end block 1 */
	// End offset: 0x80024820
	// End Line: 478

	/* begin block 2 */
		// Start line: 924
	/* end block 2 */
	// End Line: 925

	/* begin block 3 */
		// Start line: 928
	/* end block 3 */
	// End Line: 929

	/* begin block 4 */
		// Start line: 928
	/* end block 4 */
	// End Line: 929

	/* begin block 5 */
		// Start line: 929
	/* end block 5 */
	// End Line: 930

	/* begin block 6 */
		// Start line: 929
	/* end block 6 */
	// End Line: 930

void UpdateSelFade__9tMenuItemb(tMenuItem *this,void *selected)

{
  short sVar1;
  
  if (selected == (void *)0x0) {
    sVar1 = this->fSelFade + -10;
  }
  else {
    sVar1 = this->fSelFade + 0x40;
  }
  this->fSelFade = sVar1;
  if (0x80 < this->fSelFade) {
    this->fSelFade = 0x80;
  }
  if (this->fSelFade < 0) {
    this->fSelFade = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__9tMenuItemiib(struct tMenuItem *this /*$a0*/, void * selected /*$a3*/)
 // line 481, offset 0x80024828
	/* begin block 1 */
		// Start line: 482
		// Start offset: 0x80024828
	/* end block 1 */
	// End offset: 0x80024828
	// End Line: 482

	/* begin block 2 */
		// Start line: 944
	/* end block 2 */
	// End Line: 945

	/* begin block 3 */
		// Start line: 948
	/* end block 3 */
	// End Line: 949

	/* begin block 4 */
		// Start line: 948
	/* end block 4 */
	// End Line: 949

void Draw__9tMenuItemiib(tMenuItem *this,void *selected)

{
  (**(code **)(*(int *)this->_vf + 0x24))
            ((int)&this->fFlags + (int)*(short *)(*(int *)this->_vf + 0x20));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__9tMenuItemiiib(struct tMenuItem *this /*$a0*/, int x /*$a1*/, int y /*$a3*/, void * selected /*stack 16*/)
 // line 486, offset 0x80024864
	/* begin block 1 */
		// Start line: 487
		// Start offset: 0x80024864
	/* end block 1 */
	// End offset: 0x80024864
	// End Line: 487

	/* begin block 2 */
		// Start line: 954
	/* end block 2 */
	// End Line: 955

	/* begin block 3 */
		// Start line: 958
	/* end block 3 */
	// End Line: 959

	/* begin block 4 */
		// Start line: 958
	/* end block 4 */
	// End Line: 959

void Draw__9tMenuItemiiib(tMenuItem *this,int x,int y,void *selected)

{
  undefined4 in_stack_00000010;
  
  (**(code **)(*(int *)this->_vf + 0x34))
            ((int)&this->fFlags + (int)*(short *)(*(int *)this->_vf + 0x30),in_stack_00000010,x,y,0)
  ;
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemInteractive * /*$ra*/ __20tMenuItemInteractiveUi(struct tMenuItemInteractive *this /*$s0*/, unsigned int textDescription /*$a1*/)
 // line 533, offset 0x800248a8
	/* begin block 1 */
		// Start line: 534
		// Start offset: 0x800248A8
	/* end block 1 */
	// End offset: 0x800248A8
	// End Line: 534

	/* begin block 2 */
		// Start line: 1007
	/* end block 2 */
	// End Line: 1008

	/* begin block 3 */
		// Start line: 1053
	/* end block 3 */
	// End Line: 1054

	/* begin block 4 */
		// Start line: 1053
	/* end block 4 */
	// End Line: 1054

tMenuItemInteractive * __20tMenuItemInteractiveUi(tMenuItemInteractive *this,uint textDescription)

{
  __9tMenuItemUi((tMenuItem *)this,textDescription);
  *(undefined4 *)(this->tMenuItem)._vf = 0x80011228;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._20tMenuItemInteractive(struct tMenuItemInteractive *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 538, offset 0x800248dc
	/* begin block 1 */
		// Start line: 539
		// Start offset: 0x800248DC
	/* end block 1 */
	// End offset: 0x800248DC
	// End Line: 539

	/* begin block 2 */
		// Start line: 1059
	/* end block 2 */
	// End Line: 1060

	/* begin block 3 */
		// Start line: 1063
	/* end block 3 */
	// End Line: 1064

	/* begin block 4 */
		// Start line: 1063
	/* end block 4 */
	// End Line: 1064

void ___20tMenuItemInteractive(tMenuItemInteractive *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItem)._vf = 0x80011228;
  ___9tMenuItem((tMenuItem *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemLeftRightChoice * /*$ra*/ __24tMenuItemLeftRightChoiceUiP13tListIterator(struct tMenuItemLeftRightChoice *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tListIterator *dataPtr /*$s1*/)
 // line 552, offset 0x80024904
	/* begin block 1 */
		// Start line: 553
		// Start offset: 0x80024904
	/* end block 1 */
	// End offset: 0x80024904
	// End Line: 553

	/* begin block 2 */
		// Start line: 1077
	/* end block 2 */
	// End Line: 1078

	/* begin block 3 */
		// Start line: 1091
	/* end block 3 */
	// End Line: 1092

	/* begin block 4 */
		// Start line: 1091
	/* end block 4 */
	// End Line: 1092

tMenuItemLeftRightChoice *
__24tMenuItemLeftRightChoiceUiP13tListIterator
          (tMenuItemLeftRightChoice *this,uint textDescription,tListIterator *dataPtr)

{
  uint uVar1;
  
  __20tMenuItemInteractiveUi((tMenuItemInteractive *)this,textDescription);
  uVar1 = (this->tMenuItemInteractive).tMenuItem.fFlags;
  *(undefined4 *)(this->tMenuItemInteractive).tMenuItem._vf = 0x800111d0;
  *(tListIterator **)((this->tMenuItemInteractive).tMenuItem._vf + 4) = dataPtr;
  (this->tMenuItemInteractive).tMenuItem.fFlags = uVar1 | 0x400;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._24tMenuItemLeftRightChoice(struct tMenuItemLeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 559, offset 0x80024954
	/* begin block 1 */
		// Start line: 560
		// Start offset: 0x80024954
	/* end block 1 */
	// End offset: 0x80024954
	// End Line: 560

	/* begin block 2 */
		// Start line: 1107
	/* end block 2 */
	// End Line: 1108

	/* begin block 3 */
		// Start line: 1111
	/* end block 3 */
	// End Line: 1112

	/* begin block 4 */
		// Start line: 1111
	/* end block 4 */
	// End Line: 1112

void ___24tMenuItemLeftRightChoice(tMenuItemLeftRightChoice *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemInteractive).tMenuItem._vf = 0x800111d0;
  ___20tMenuItemInteractive((tMenuItemInteractive *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__24tMenuItemLeftRightChoice7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemLeftRightChoice *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$s0*/)
 // line 563, offset 0x8002497c
	/* begin block 1 */
		// Start line: 564
		// Start offset: 0x8002497C

		/* begin block 1.1 */
			// Start line: 564
			// Start offset: 0x8002497C

			/* begin block 1.1.1 */
				// Start line: 564
				// Start offset: 0x8002497C
				// Variables:
			// 		struct tMenuItem *this; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 564
					// Start offset: 0x8002497C
				/* end block 1.1.1.1 */
				// End offset: 0x8002497C
				// End Line: 564
			/* end block 1.1.1 */
			// End offset: 0x8002497C
			// End Line: 564
		/* end block 1.1 */
		// End offset: 0x8002499C
		// End Line: 566
	/* end block 1 */
	// End offset: 0x80024A1C
	// End Line: 581

	/* begin block 2 */
		// Start line: 1115
	/* end block 2 */
	// End Line: 1116

	/* begin block 3 */
		// Start line: 1119
	/* end block 3 */
	// End Line: 1120

	/* begin block 4 */
		// Start line: 1119
	/* end block 4 */
	// End Line: 1120

void ProcessInput__24tMenuItemLeftRightChoice7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuItemLeftRightChoice *this,tPlayer fromPlayer,tInputKeyType *keyval)

{
  int SFXnum;
  int iVar1;
  
  if (((this->tMenuItemInteractive).tMenuItem.fFlags & 1) == 0) {
    if (*keyval == kInput_KeyType_Left) {
      iVar1 = *(int *)((this->tMenuItemInteractive).tMenuItem._vf + 4);
      SFXnum = *(int *)(iVar1 + 0xc);
      (**(code **)(SFXnum + 0x2c))(iVar1 + (int)*(short *)(SFXnum + 0x28));
      SFXnum = 5;
    }
    else {
      if (*keyval != kInput_KeyType_Right) {
        return;
      }
      iVar1 = *(int *)((this->tMenuItemInteractive).tMenuItem._vf + 4);
      SFXnum = *(int *)(iVar1 + 0xc);
      (**(code **)(SFXnum + 0x24))(iVar1 + (int)*(short *)(SFXnum + 0x20));
      SFXnum = 6;
    }
    *keyval = kInput_KeyType_AlreadyProcessed;
    AudioCmn_PlayFESFX__Fi(SFXnum);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__24tMenuItemLeftRightChoiceb(struct tMenuItemLeftRightChoice *this /*$s1*/, void * selected /*$s3*/)
 // line 590, offset 0x80024a2c
	/* begin block 1 */
		// Start line: 591
		// Start offset: 0x80024A2C
	/* end block 1 */
	// End offset: 0x80024A2C
	// End Line: 591

	/* begin block 2 */
		// Start line: 1166
	/* end block 2 */
	// End Line: 1167

	/* begin block 3 */
		// Start line: 1174
	/* end block 3 */
	// End Line: 1175

	/* begin block 4 */
		// Start line: 1174
	/* end block 4 */
	// End Line: 1175

void Draw__24tMenuItemLeftRightChoiceb(tMenuItemLeftRightChoice *this,void *selected)

{
  short index;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = TextSys_WordX__Fi((this->tMenuItemInteractive).tMenuItem.fTextDescription);
  iVar2 = TextSys_WordY__Fi((this->tMenuItemInteractive).tMenuItem.fTextDescription);
  FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType
            (*(short *)&(this->tMenuItemInteractive).tMenuItem.fTextDescription,(short)iVar1,
             (short)iVar2,(uint)(selected != (void *)0x0),textType_Options);
  iVar4 = *(int *)((this->tMenuItemInteractive).tMenuItem._vf + 4);
  iVar3 = *(int *)(iVar4 + 0xc);
  index = (**(code **)(iVar3 + 0x1c))(iVar4 + (int)*(short *)(iVar3 + 0x18),gMenu_SubMenuPlayer);
  FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType
            (index,(short)((uint)((iVar1 + 0xb4) * 0x10000) >> 0x10),(short)iVar2,
             (uint)(selected != (void *)0x0),textType_Options);
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemLeftRightSlider * /*$ra*/ __24tMenuItemLeftRightSliderUiP13tListIterator(struct tMenuItemLeftRightSlider *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tListIterator *dataPtr /*$s1*/)
 // line 612, offset 0x80024af8
	/* begin block 1 */
		// Start line: 613
		// Start offset: 0x80024AF8
	/* end block 1 */
	// End offset: 0x80024AF8
	// End Line: 613

	/* begin block 2 */
		// Start line: 1211
	/* end block 2 */
	// End Line: 1212

	/* begin block 3 */
		// Start line: 1218
	/* end block 3 */
	// End Line: 1219

	/* begin block 4 */
		// Start line: 1218
	/* end block 4 */
	// End Line: 1219

tMenuItemLeftRightSlider *
__24tMenuItemLeftRightSliderUiP13tListIterator
          (tMenuItemLeftRightSlider *this,uint textDescription,tListIterator *dataPtr)

{
  uint uVar1;
  
  __20tMenuItemInteractiveUi((tMenuItemInteractive *)this,textDescription);
  uVar1 = (this->tMenuItemInteractive).tMenuItem.fFlags;
  *(tListIterator **)((this->tMenuItemInteractive).tMenuItem._vf + 4) = dataPtr;
  (this->tMenuItemInteractive).tMenuItem.fFlags = uVar1 | 0x80;
  uVar1 = (this->tMenuItemInteractive).tMenuItem.fFlags;
  *(undefined4 *)(this->tMenuItemInteractive).tMenuItem._vf = 0x80011178;
  (this->tMenuItemInteractive).tMenuItem.fFlags = uVar1 | 0x80;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._24tMenuItemLeftRightSlider(struct tMenuItemLeftRightSlider *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 621, offset 0x80024b54
	/* begin block 1 */
		// Start line: 622
		// Start offset: 0x80024B54
	/* end block 1 */
	// End offset: 0x80024B54
	// End Line: 622

	/* begin block 2 */
		// Start line: 1239
	/* end block 2 */
	// End Line: 1240

	/* begin block 3 */
		// Start line: 1244
	/* end block 3 */
	// End Line: 1245

	/* begin block 4 */
		// Start line: 1244
	/* end block 4 */
	// End Line: 1245

void ___24tMenuItemLeftRightSlider(tMenuItemLeftRightSlider *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemInteractive).tMenuItem._vf = 0x80011178;
  ___20tMenuItemInteractive((tMenuItemInteractive *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DebounceKeys__24tMenuItemLeftRightSlider(struct tMenuItemLeftRightSlider *this /*$a0*/)
 // line 625, offset 0x80024b7c
	/* begin block 1 */
		// Start line: 626
		// Start offset: 0x80024B7C
	/* end block 1 */
	// End offset: 0x80024B7C
	// End Line: 627

	/* begin block 2 */
		// Start line: 1248
	/* end block 2 */
	// End Line: 1249

	/* begin block 3 */
		// Start line: 1252
	/* end block 3 */
	// End Line: 1253

	/* begin block 4 */
		// Start line: 1252
	/* end block 4 */
	// End Line: 1253

	/* begin block 5 */
		// Start line: 1253
	/* end block 5 */
	// End Line: 1254

	/* begin block 6 */
		// Start line: 1253
	/* end block 6 */
	// End Line: 1254

long DebounceKeys__24tMenuItemLeftRightSlider(tMenuItemLeftRightSlider *this)

{
  return 0x600;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__24tMenuItemLeftRightSlider7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemLeftRightSlider *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$s0*/)
 // line 630, offset 0x80024b84
	/* begin block 1 */
		// Start line: 631
		// Start offset: 0x80024B84

		/* begin block 1.1 */
			// Start line: 631
			// Start offset: 0x80024B84

			/* begin block 1.1.1 */
				// Start line: 631
				// Start offset: 0x80024B84
				// Variables:
			// 		struct tMenuItem *this; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 631
					// Start offset: 0x80024B84
				/* end block 1.1.1.1 */
				// End offset: 0x80024B84
				// End Line: 631
			/* end block 1.1.1 */
			// End offset: 0x80024B84
			// End Line: 631
		/* end block 1.1 */
		// End offset: 0x80024BA4
		// End Line: 633
	/* end block 1 */
	// End offset: 0x80024C1C
	// End Line: 649

	/* begin block 2 */
		// Start line: 1258
	/* end block 2 */
	// End Line: 1259

	/* begin block 3 */
		// Start line: 1262
	/* end block 3 */
	// End Line: 1263

	/* begin block 4 */
		// Start line: 1262
	/* end block 4 */
	// End Line: 1263

void ProcessInput__24tMenuItemLeftRightSlider7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuItemLeftRightSlider *this,tPlayer fromPlayer,tInputKeyType *keyval)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  if (((this->tMenuItemInteractive).tMenuItem.fFlags & 1) == 0) {
    if (*keyval == kInput_KeyType_Left) {
      iVar3 = *(int *)((this->tMenuItemInteractive).tMenuItem._vf + 4);
      sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0x28);
      pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0x2c);
    }
    else {
      if (*keyval != kInput_KeyType_Right) {
        return;
      }
      iVar3 = *(int *)((this->tMenuItemInteractive).tMenuItem._vf + 4);
      sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0x20);
      pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0x24);
    }
    (*pcVar2)(iVar3 + (int)sVar1);
    *keyval = kInput_KeyType_AlreadyProcessed;
    AudioCmn_PlayFESFXVol__Fii(0x15,0x40);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSlider__FsssssssssbT9ss(short value /*$a0*/, short min /*$a1*/, short max /*$a2*/, short fX /*$a3*/, int fY /*stack 16*/, int fWidth /*stack 20*/, int fHeight /*stack 24*/, int rectwidth /*stack 28*/, int rectspace /*stack 32*/, void * reverse /*stack 36*/, void * shadow /*stack 40*/, int fSelFade /*stack 44*/, int fFadeVal /*stack 48*/)
 // line 665, offset 0x80024c2c
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x80024C2C
		// Variables:
	// 		struct POLY_F4 *prim; // $s0
	// 		short x1; // $s1
	// 		short width; // stack offset -80
	// 		short factor; // stack offset -72
	// 		int myDarkBlue; // $fp
	// 		int Col; // $v0
	/* end block 1 */
	// End offset: 0x800251B4
	// End Line: 762

	/* begin block 2 */
		// Start line: 1318
	/* end block 2 */
	// End Line: 1319

	/* begin block 3 */
		// Start line: 1333
	/* end block 3 */
	// End Line: 1334

	/* begin block 4 */
		// Start line: 1333
	/* end block 4 */
	// End Line: 1334

void DrawSlider__FsssssssssbT9ss
               (short value,short min,short max,short fX,int fY,int fWidth,int fHeight,int rectwidth
               ,int rectspace,void *reverse,void *shadow,int fSelFade,int fFadeVal)

{
  bool bVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *col1;
  int iVar7;
  int amount;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar6 = (uint)(ushort)fX;
  iVar10 = (int)(short)fWidth;
  iVar13 = ((int)value - (int)min) * iVar10;
  iVar9 = (int)max - (int)min;
  if (iVar9 == 0) {
    trap(0x1c00);
  }
  if ((iVar9 == -1) && (iVar13 == -0x80000000)) {
    trap(0x1800);
  }
  amount = (int)(short)fSelFade;
  bVar1 = amount == 0;
  uVar11 = (uint)bVar1;
  sVar8 = (short)(iVar13 / iVar9);
  if (reverse == (void *)0x0) {
    iVar13 = (int)fX;
    puVar3 = DAT_1f800004;
    puVar4 = DAT_1f800000;
    iVar9 = iVar13;
    while (DAT_1f800000 = puVar4, DAT_1f800004 = puVar3, iVar9 < iVar13 + iVar10) {
      DAT_1f800000 = puVar4;
      *puVar3 = *puVar3 & 0xff000000 | *puVar4 & 0xffffff;
      DAT_1f800004 = puVar3 + 6;
      *puVar4 = *puVar4 & 0xff000000 | (uint)puVar3 & 0xffffff;
      sVar2 = (short)uVar6;
      *(short *)(puVar3 + 2) = sVar2;
      *(short *)((int)puVar3 + 10) = (short)fY;
      *(short *)(puVar3 + 3) = sVar2 + (short)rectwidth;
      *(short *)((int)puVar3 + 0xe) = (short)fY;
      *(short *)(puVar3 + 4) = sVar2;
      *(short *)(puVar3 + 5) = sVar2 + (short)rectwidth;
      *(short *)((int)puVar3 + 0x12) = (short)fY + (short)fHeight;
      *(short *)((int)puVar3 + 0x16) = (short)fY + (short)fHeight;
      uVar5 = 0;
      if (shadow == (void *)0x0) {
        if ((int)sVar2 < iVar13 + (int)sVar8) {
          if (amount == 0) {
            col1 = (undefined *)0xc83c1e;
          }
          else {
            iVar9 = (int)sVar2 - iVar13;
            if (iVar10 == 0) {
              trap(0x1c00);
            }
            if ((iVar10 == -1) && (iVar9 * 0xbe == -0x80000000)) {
              trap(0x1800);
            }
            if (iVar10 == 0) {
              trap(0x1c00);
            }
            if ((iVar10 == -1) && (iVar9 * 0x7c == -0x80000000)) {
              trap(0x1800);
            }
            if (iVar10 == 0) {
              trap(0x1c00);
            }
            if ((iVar10 == -1) && (iVar9 * -0xd2 == -0x80000000)) {
              trap(0x1800);
            }
            col1 = (undefined *)
                   CalcFadeVal__Fiii(0xc83c1e,((iVar9 * -0xd2) / iVar10 + 0xd2 >> uVar11) << 0x10 |
                                              (((iVar9 * 0x7c) / iVar10 + 0x42 >> uVar11) << 0x10)
                                              >> 8 | (int)(short)((iVar9 * 0xbe) / iVar10 >> uVar11)
                                     ,amount);
          }
        }
        else {
          col1 = &DAT_00280f00;
        }
        uVar5 = CalcFadeVal__Fii((int)col1,(int)(short)fFadeVal);
      }
      puVar3[1] = uVar5;
      SetPolyF4((int)puVar3);
      SetSemiTrans((int)puVar3,0);
      uVar6 = uVar6 + (rectwidth & 0xffffU) + (rectspace & 0xffffU);
      iVar9 = (int)(uVar6 * 0x10000) >> 0x10;
      puVar3 = DAT_1f800004;
      puVar4 = DAT_1f800000;
    }
  }
  else {
    iVar9 = uVar6 + fWidth + -1;
    iVar13 = (int)(uVar6 << 0x10) >> 0x10;
    if ((int)(uVar6 << 0x10) <= iVar9 * 0x10000) {
      iVar12 = iVar13 + iVar10;
      do {
        puVar4 = DAT_1f800004;
        puVar3 = DAT_1f800000;
        *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
        uVar6 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 6;
        *puVar3 = *puVar3 & 0xff000000 | uVar6;
        sVar2 = (short)iVar9;
        *(short *)(puVar4 + 2) = sVar2;
        *(short *)((int)puVar4 + 10) = (short)fY;
        *(short *)(puVar4 + 3) = sVar2 + (short)rectwidth;
        *(short *)((int)puVar4 + 0xe) = (short)fY;
        *(short *)(puVar4 + 4) = sVar2;
        *(short *)(puVar4 + 5) = sVar2 + (short)rectwidth;
        *(short *)((int)puVar4 + 0x12) = (short)fY + (short)fHeight;
        *(short *)((int)puVar4 + 0x16) = (short)fY + (short)fHeight;
        uVar6 = 0;
        if (shadow == (void *)0x0) {
          if ((int)sVar2 < iVar12 - (int)sVar8) {
            col1 = &DAT_00280f00;
          }
          else {
            iVar7 = iVar12 - (int)sVar2;
            if (amount == 0) {
              col1 = (undefined *)0xc83c1e;
            }
            else {
              if (iVar10 == 0) {
                trap(0x1c00);
              }
              if ((iVar10 == -1) && (iVar7 * 0xbe == -0x80000000)) {
                trap(0x1800);
              }
              if (iVar10 == 0) {
                trap(0x1c00);
              }
              if ((iVar10 == -1) && (iVar7 * 0x7c == -0x80000000)) {
                trap(0x1800);
              }
              if (iVar10 == 0) {
                trap(0x1c00);
              }
              if ((iVar10 == -1) && (iVar7 * -0xd2 == -0x80000000)) {
                trap(0x1800);
              }
              col1 = (undefined *)
                     CalcFadeVal__Fiii(0xc83c1e,((iVar7 * -0xd2) / iVar10 + 0xd2 >> bVar1) << 0x10 |
                                                (((iVar7 * 0x7c) / iVar10 + 0x42 >> bVar1) << 0x10)
                                                >> 8 | (int)(short)((iVar7 * 0xbe) / iVar10 >> bVar1
                                                                   ),amount);
            }
          }
          uVar6 = CalcFadeVal__Fii((int)col1,(int)(short)fFadeVal);
        }
        puVar4[1] = uVar6;
        SetPolyF4((int)puVar4);
        SetSemiTrans((int)puVar4,0);
        iVar9 = iVar9 - ((rectwidth & 0xffffU) + (rectspace & 0xffffU));
      } while (iVar13 <= iVar9 * 0x10000 >> 0x10);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__24tMenuItemLeftRightSliderb(struct tMenuItemLeftRightSlider *this /*$s1*/, void * selected /*$s2*/)
 // line 853, offset 0x800251e4
	/* begin block 1 */
		// Start line: 854
		// Start offset: 0x800251E4

		/* begin block 1.1 */
			// Start line: 861
			// Start offset: 0x80025228
			// Variables:
		// 		struct tListIterator *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 861
				// Start offset: 0x80025228
			/* end block 1.1.1 */
			// End offset: 0x80025228
			// End Line: 861
		/* end block 1.1 */
		// End offset: 0x80025228
		// End Line: 861

		/* begin block 1.2 */
			// Start line: 861
			// Start offset: 0x80025228

			/* begin block 1.2.1 */
				// Start line: 861
				// Start offset: 0x80025228
			/* end block 1.2.1 */
			// End offset: 0x80025228
			// End Line: 861
		/* end block 1.2 */
		// End offset: 0x80025228
		// End Line: 861
	/* end block 1 */
	// End offset: 0x800252EC
	// End Line: 865

	/* begin block 2 */
		// Start line: 1671
	/* end block 2 */
	// End Line: 1672

	/* begin block 3 */
		// Start line: 1763
	/* end block 3 */
	// End Line: 1764

	/* begin block 4 */
		// Start line: 1763
	/* end block 4 */
	// End Line: 1764

void Draw__24tMenuItemLeftRightSliderb(tMenuItemLeftRightSlider *this,void *selected)

{
  ushort uVar1;
  int iVar2;
  int local_1c;
  uint wordnum;
  
  if (*(int *)((this->tMenuItemInteractive).tMenuItem._vf + 8) == 0) {
    iVar2 = TextSys_WordX__Fi((this->tMenuItemInteractive).tMenuItem.fTextDescription);
    wordnum = (this->tMenuItemInteractive).tMenuItem.fTextDescription;
    *(short *)((this->tMenuItemInteractive).tMenuItem._vf + 8) = (short)iVar2;
    iVar2 = TextSys_WordY__Fi(wordnum);
    *(short *)((this->tMenuItemInteractive).tMenuItem._vf + 10) = (short)iVar2;
  }
  FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType
            (*(short *)&(this->tMenuItemInteractive).tMenuItem.fTextDescription,
             (short)(((uint)*(ushort *)((this->tMenuItemInteractive).tMenuItem._vf + 8) + 8) *
                     0x10000 >> 0x10),
             (short)(((uint)*(ushort *)((this->tMenuItemInteractive).tMenuItem._vf + 10) + 3) *
                     0x10000 >> 0x10),(uint)(selected != (void *)0x0),textType_Options);
  local_1c = *(int *)((this->tMenuItemInteractive).tMenuItem._vf + 4);
  iVar2 = *(int *)(local_1c + 0xc);
  uVar1 = (**(code **)(iVar2 + 0x14))(local_1c + (int)*(short *)(iVar2 + 0x10),0xffffffff);
  iVar2 = *(int *)((this->tMenuItemInteractive).tMenuItem._vf + 4);
  if (selected == (void *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = 0x80;
  }
  DrawSlider__FsssssssssbT9ss
            (uVar1 & 0xff,(ushort)*(byte *)(iVar2 + 8),(ushort)*(byte *)(iVar2 + 9),
             (short)(((uint)*(ushort *)((this->tMenuItemInteractive).tMenuItem._vf + 8) + 0x73) *
                     0x10000 >> 0x10),
             (int)(((uint)*(ushort *)((this->tMenuItemInteractive).tMenuItem._vf + 10) + 4) *
                  0x10000) >> 0x10,(int)*(short *)&this->fData,
             (int)*(short *)((int)&this->fData + 2),6,4,(void *)0x0,(void *)0x0,local_1c,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDimensions__24tMenuItemLeftRightSliderssss(struct tMenuItemLeftRightSlider *this /*$a0*/, short x /*$a1*/, short y /*$a2*/, short width /*$a3*/, int height /*stack 16*/)
 // line 868, offset 0x80025310
	/* begin block 1 */
		// Start line: 869
		// Start offset: 0x80025310
	/* end block 1 */
	// End offset: 0x80025310
	// End Line: 869

	/* begin block 2 */
		// Start line: 1789
	/* end block 2 */
	// End Line: 1790

	/* begin block 3 */
		// Start line: 1793
	/* end block 3 */
	// End Line: 1794

	/* begin block 4 */
		// Start line: 1793
	/* end block 4 */
	// End Line: 1794

void SetDimensions__24tMenuItemLeftRightSliderssss
               (tMenuItemLeftRightSlider *this,short x,short y,short width,int height)

{
  *(short *)((this->tMenuItemInteractive).tMenuItem._vf + 8) = x;
  *(short *)((this->tMenuItemInteractive).tMenuItem._vf + 10) = y;
  *(short *)&this->fData = width;
  *(undefined2 *)((int)&this->fData + 2) = (short)height;
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemGoToMenuButton * /*$ra*/ __23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v(struct tMenuItemGoToMenuButton *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tMenu *newMenu /*$s1*/, TDRFuncPtr___23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v3OnButtonPress OnButtonPress /*$s2*/)
 // line 881, offset 0x80025328
	/* begin block 1 */
		// Start line: 882
		// Start offset: 0x80025328
	/* end block 1 */
	// End offset: 0x80025328
	// End Line: 882

	/* begin block 2 */
		// Start line: 1811
	/* end block 2 */
	// End Line: 1812

	/* begin block 3 */
		// Start line: 1819
	/* end block 3 */
	// End Line: 1820

	/* begin block 4 */
		// Start line: 1819
	/* end block 4 */
	// End Line: 1820

tMenuItemGoToMenuButton *
__23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v
          (tMenuItemGoToMenuButton *this,uint textDescription,tMenu *newMenu,
          TDRFuncPtr___23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v3OnButtonPress
          OnButtonPress)

{
  __20tMenuItemInteractiveUi((tMenuItemInteractive *)this,textDescription);
  *(undefined4 *)(this->tMenuItemInteractive).tMenuItem._vf = 0x80011120;
  (this->tMenuItemInteractive).tMenuItem.fNewMenu = newMenu;
  *(TDRFuncPtr___23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v3OnButtonPress *)
   ((this->tMenuItemInteractive).tMenuItem._vf + 4) = OnButtonPress;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23tMenuItemGoToMenuButton(struct tMenuItemGoToMenuButton *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 888, offset 0x8002537c
	/* begin block 1 */
		// Start line: 889
		// Start offset: 0x8002537C
	/* end block 1 */
	// End offset: 0x8002537C
	// End Line: 889

	/* begin block 2 */
		// Start line: 1832
	/* end block 2 */
	// End Line: 1833

	/* begin block 3 */
		// Start line: 1836
	/* end block 3 */
	// End Line: 1837

	/* begin block 4 */
		// Start line: 1836
	/* end block 4 */
	// End Line: 1837

void ___23tMenuItemGoToMenuButton(tMenuItemGoToMenuButton *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemInteractive).tMenuItem._vf = 0x80011120;
  ___20tMenuItemInteractive((tMenuItemInteractive *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__23tMenuItemGoToMenuButton7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemGoToMenuButton *this /*$a0*/, enum tInputKeyType *keyval /*$s0*/, struct tMenuCommand *command /*$a3*/)
 // line 897, offset 0x800253a4
	/* begin block 1 */
		// Start line: 898
		// Start offset: 0x800253A4

		/* begin block 1.1 */
			// Start line: 898
			// Start offset: 0x800253A4

			/* begin block 1.1.1 */
				// Start line: 898
				// Start offset: 0x800253A4
				// Variables:
			// 		struct tMenuItem *this; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 898
					// Start offset: 0x800253A4
				/* end block 1.1.1.1 */
				// End offset: 0x800253A4
				// End Line: 898
			/* end block 1.1.1 */
			// End offset: 0x800253A4
			// End Line: 898
		/* end block 1.1 */
		// End offset: 0x800253C4
		// End Line: 900

		/* begin block 1.2 */
			// Start line: 902
			// Start offset: 0x800253C4

			/* begin block 1.2.1 */
				// Start line: 903
				// Start offset: 0x800253D4

				/* begin block 1.2.1.1 */
					// Start line: 905
					// Start offset: 0x800253D4

					/* begin block 1.2.1.1.1 */
						// Start line: 905
						// Start offset: 0x800253D4
						// Variables:
					// 		struct tMenuItem *this; // $a0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 905
							// Start offset: 0x800253D4
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800253D4
						// End Line: 905
					/* end block 1.2.1.1.1 */
					// End offset: 0x800253D4
					// End Line: 905

					/* begin block 1.2.1.1.2 */
						// Start line: 913
						// Start offset: 0x800253E4

						/* begin block 1.2.1.1.2.1 */
							// Start line: 917
							// Start offset: 0x800253F8
							// Variables:
						// 		struct tMenuItem *this; // $a0

							/* begin block 1.2.1.1.2.1.1 */
								// Start line: 917
								// Start offset: 0x800253F8
							/* end block 1.2.1.1.2.1.1 */
							// End offset: 0x800253F8
							// End Line: 917
						/* end block 1.2.1.1.2.1 */
						// End offset: 0x800253F8
						// End Line: 917
					/* end block 1.2.1.1.2 */
					// End offset: 0x80025404
					// End Line: 918
				/* end block 1.2.1.1 */
				// End offset: 0x80025404
				// End Line: 918
			/* end block 1.2.1 */
			// End offset: 0x80025424
			// End Line: 925
		/* end block 1.2 */
		// End offset: 0x80025424
		// End Line: 925
	/* end block 1 */
	// End offset: 0x80025424
	// End Line: 925

	/* begin block 2 */
		// Start line: 1845
	/* end block 2 */
	// End Line: 1846

	/* begin block 3 */
		// Start line: 1854
	/* end block 3 */
	// End Line: 1855

	/* begin block 4 */
		// Start line: 1854
	/* end block 4 */
	// End Line: 1855

void ProcessInput__23tMenuItemGoToMenuButton7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuItemGoToMenuButton *this,tInputKeyType *keyval,tMenuCommand *command)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *in_a3;
  
  uVar2 = (this->tMenuItemInteractive).tMenuItem.fFlags;
  if (((uVar2 & 1) == 0) && (command->type == kMenu_Command_GoToMenuOneWay)) {
    if ((this->tMenuItemInteractive).tMenuItem.fNewMenu != (tMenu *)0x0) {
      if ((uVar2 & 0x40) == 0) {
        *in_a3 = 1;
      }
      else {
        *in_a3 = 2;
      }
      *(tMenu **)(in_a3 + 1) = (this->tMenuItemInteractive).tMenuItem.fNewMenu;
    }
    pcVar1 = *(code **)((this->tMenuItemInteractive).tMenuItem._vf + 4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    command->type = kMenu_Command_GoToMenu;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ tMenuConstructor__5tMenuP9tMenuItemPv(struct tMenu *this /*$a0*/, struct tMenuItem *firstItem /*$a1*/, void *ap /*$a2*/)
 // line 966, offset 0x80025434
	/* begin block 1 */
		// Start line: 967
		// Start offset: 0x80025434
		// Variables:
	// 		int i; // $v0

		/* begin block 1.1 */
			// Start line: 967
			// Start offset: 0x80025434

			/* begin block 1.1.1 */
				// Start line: 974
				// Start offset: 0x80025440
				// Variables:
			// 		struct tMenuItem *p; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8002545C
			// End Line: 978
		/* end block 1.1 */
		// End offset: 0x80025464
		// End Line: 979
	/* end block 1 */
	// End offset: 0x80025464
	// End Line: 981

	/* begin block 2 */
		// Start line: 1952
	/* end block 2 */
	// End Line: 1953

	/* begin block 3 */
		// Start line: 1992
	/* end block 3 */
	// End Line: 1993

	/* begin block 4 */
		// Start line: 1992
	/* end block 4 */
	// End Line: 1993

	/* begin block 5 */
		// Start line: 1999
	/* end block 5 */
	// End Line: 2000

void tMenuConstructor__5tMenuP9tMenuItemPv(tMenu *this,tMenuItem *firstItem,void *ap)

{
  int iVar1;
  _func_21 *p_Var2;
  
  iVar1 = 0;
  this->VertHelp = 0;
  *(tMenuItem **)this->fItemList = firstItem;
  do {
    iVar1 = iVar1 + 1;
    p_Var2 = *(_func_21 **)ap;
    this->fItemList[iVar1] = p_Var2;
    ap = (_func_21 **)ap + 1;
  } while (p_Var2 != (_func_21 *)0x0);
  return;
}



// decompiled code
// original method signature: 
// struct tMenu * /*$ra*/ __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs(struct tMenu *this /*$v0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/)
 // line 1009, offset 0x8002546c
	/* begin block 1 */
		// Start line: 1010
		// Start offset: 0x8002546C
	/* end block 1 */
	// End offset: 0x8002546C
	// End Line: 1010

	/* begin block 2 */
		// Start line: 2013
	/* end block 2 */
	// End Line: 2014

	/* begin block 3 */
		// Start line: 2061
	/* end block 3 */
	// End Line: 2062

	/* begin block 4 */
		// Start line: 2061
	/* end block 4 */
	// End Line: 2062

tMenu * __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
                  (tMenu *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,tMenu *optionsMenu,
                  TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress
                  OnButtonPress,int title)

{
  *(undefined4 *)(this->_vf + 2) = 0x800110c8;
  this->fFlags = flags;
  this->fCurrentItem = 0;
  this->fScreen = screenHandler;
  this->fNextMenu = nextMenu;
  this->fNeverAnyEnabled = (void *)0x0;
  this->fChildMenu = (tMenu *)0x0;
  this->fOptionsMenu = optionsMenu;
  *(TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress *)
   &this->fOnButtonPress = OnButtonPress;
  this->fTitle = (short)title;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._5tMenu(struct tMenu *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1022, offset 0x800254b0
	/* begin block 1 */
		// Start line: 1023
		// Start offset: 0x800254B0
	/* end block 1 */
	// End offset: 0x800254B0
	// End Line: 1023

	/* begin block 2 */
		// Start line: 2087
	/* end block 2 */
	// End Line: 2088

	/* begin block 3 */
		// Start line: 2091
	/* end block 3 */
	// End Line: 2092

	/* begin block 4 */
		// Start line: 2091
	/* end block 4 */
	// End Line: 2092

void ___5tMenu(tMenu *this,int __in_chrg)

{
  *(undefined4 *)(this->_vf + 2) = 0x800110c8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__5tMenu(struct tMenu *this /*$a0*/)
 // line 1026, offset 0x800254e4
	/* begin block 1 */
		// Start line: 1027
		// Start offset: 0x800254E4
		// Variables:
	// 		int original; // $a1

		/* begin block 1.1 */
			// Start line: 1030
			// Start offset: 0x800254E4

			/* begin block 1.1.1 */
				// Start line: 1030
				// Start offset: 0x800254E4
				// Variables:
			// 		struct tMenuItem *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 1030
					// Start offset: 0x800254E4
				/* end block 1.1.1.1 */
				// End offset: 0x800254E4
				// End Line: 1030
			/* end block 1.1.1 */
			// End offset: 0x800254E4
			// End Line: 1030
		/* end block 1.1 */
		// End offset: 0x80025514
		// End Line: 1031

		/* begin block 1.2 */
			// Start line: 1036
			// Start offset: 0x80025514

			/* begin block 1.2.1 */
				// Start line: 1036
				// Start offset: 0x80025514
				// Variables:
			// 		struct tMenuItem *this; // $v0

				/* begin block 1.2.1.1 */
					// Start line: 1036
					// Start offset: 0x80025514
				/* end block 1.2.1.1 */
				// End offset: 0x80025514
				// End Line: 1036
			/* end block 1.2.1 */
			// End offset: 0x80025514
			// End Line: 1036
		/* end block 1.2 */
		// End offset: 0x80025570
		// End Line: 1043
	/* end block 1 */
	// End offset: 0x80025570
	// End Line: 1043

	/* begin block 2 */
		// Start line: 2095
	/* end block 2 */
	// End Line: 2096

	/* begin block 3 */
		// Start line: 2099
	/* end block 3 */
	// End Line: 2100

	/* begin block 4 */
		// Start line: 2099
	/* end block 4 */
	// End Line: 2100

	/* begin block 5 */
		// Start line: 2102
	/* end block 5 */
	// End Line: 2103

void Initialize__5tMenu(tMenu *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = this->fCurrentItem;
  if (((*(uint *)this->fItemList[iVar2] ^ 1) & 1) == 0) {
    do {
      iVar1 = this->fCurrentItem + 1;
      if ((*(uint *)this->fItemList[this->fCurrentItem] & 1) == 0) {
        return;
      }
      this->fCurrentItem = iVar1;
      if (this->fItemList[iVar1] == (_func_21 *)0x0) {
        this->fCurrentItem = 0;
      }
    } while (iVar2 != this->fCurrentItem);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__5tMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenu *this /*$s0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$s2*/, struct tMenuCommand *command /*$s1*/)
 // line 1047, offset 0x80025578
	/* begin block 1 */
		// Start line: 1048
		// Start offset: 0x80025578
		// Variables:
	// 		int lastItem; // $a0

		/* begin block 1.1 */
			// Start line: 1076
			// Start offset: 0x80025620

			/* begin block 1.1.1 */
				// Start line: 1077
				// Start offset: 0x800256A4

				/* begin block 1.1.1.1 */
					// Start line: 1090
					// Start offset: 0x8002570C
					// Variables:
				// 		struct tMenuItem *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 1090
						// Start offset: 0x8002570C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002570C
					// End Line: 1090
				/* end block 1.1.1.1 */
				// End offset: 0x8002570C
				// End Line: 1090

				/* begin block 1.1.1.2 */
					// Start line: 1107
					// Start offset: 0x80025780
					// Variables:
				// 		struct tMenuItem *this; // $v0

					/* begin block 1.1.1.2.1 */
						// Start line: 1107
						// Start offset: 0x80025780
					/* end block 1.1.1.2.1 */
					// End offset: 0x80025780
					// End Line: 1107
				/* end block 1.1.1.2 */
				// End offset: 0x80025780
				// End Line: 1107
			/* end block 1.1.1 */
			// End offset: 0x8002587C
			// End Line: 1178
		/* end block 1.1 */
		// End offset: 0x8002587C
		// End Line: 1178
	/* end block 1 */
	// End offset: 0x8002587C
	// End Line: 1178

	/* begin block 2 */
		// Start line: 2138
	/* end block 2 */
	// End Line: 2139

	/* begin block 3 */
		// Start line: 2141
	/* end block 3 */
	// End Line: 2142

	/* begin block 4 */
		// Start line: 2141
	/* end block 4 */
	// End Line: 2142

void ProcessInput__5tMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenu *this,tPlayer fromPlayer,tInputKeyType *keyval,tMenuCommand *command)

{
  int iVar1;
  tMenuCommandType tVar2;
  _func_21 *p_Var3;
  tInputKeyType tVar4;
  int iVar5;
  
  if (((this->fFlags & 4) != 0) && (*keyval == kInput_KeyType_Start)) {
    *keyval = kInput_KeyType_Cross;
  }
  if (((this->fFlags & 0x10000) != 0) && (*keyval == kInput_KeyType_Cross)) {
    *keyval = kInput_KeyType_Start;
  }
  p_Var3 = this->fItemList[this->fCurrentItem];
  if (p_Var3 != (_func_21 *)0x0) {
    (**(code **)(*(int *)(p_Var3 + 0x18) + 0x1c))
              (p_Var3 + (int)*(short *)(*(int *)(p_Var3 + 0x18) + 0x18),fromPlayer,keyval,command);
  }
  tVar4 = *keyval;
  if (tVar4 == kInput_KeyType_Triangle) {
    tVar2 = kMenu_Command_BackupMenu;
  }
  else {
    if ((int)tVar4 < 0x11) {
      if (tVar4 == kInput_KeyType_Circle) {
        DisplayHelp__14tFEApplications(FEApp,0);
        return;
      }
      if ((int)tVar4 < 5) {
        if (tVar4 != kInput_KeyType_Cross) {
          return;
        }
        if (this->fNextMenu == (tMenu *)0x0) {
          return;
        }
        command->type = kMenu_Command_GoToMenu;
        command->nextMenu = this->fNextMenu;
      }
      else {
        if (tVar4 != kInput_KeyType_Square) {
          return;
        }
        if (this->fOptionsMenu == (tMenu *)0x0) {
          return;
        }
        command->type = kMenu_Command_GoToMenu;
        command->nextMenu = this->fOptionsMenu;
      }
      *keyval = kInput_KeyType_AlreadyProcessed;
      return;
    }
    if (tVar4 == kInput_KeyType_Down) {
      iVar5 = this->fCurrentItem;
      do {
        iVar1 = this->fCurrentItem + 1;
        this->fCurrentItem = iVar1;
        if (this->fItemList[iVar1] == (_func_21 *)0x0) {
          this->fCurrentItem = 0;
        }
      } while ((*(uint *)this->fItemList[this->fCurrentItem] & 1) != 0);
      if (this->fCurrentItem != iVar5) {
        AudioCmn_PlayFESFX__Fi(4);
      }
      goto LAB_80025878;
    }
    if ((int)tVar4 < 0x401) {
      if (tVar4 != kInput_KeyType_Up) {
        return;
      }
      iVar5 = this->fCurrentItem;
      do {
        iVar1 = this->fCurrentItem;
        if (iVar1 < 1) {
          p_Var3 = this->fItemList[iVar1 + 1];
          while (p_Var3 != (_func_21 *)0x0) {
            iVar1 = this->fCurrentItem;
            this->fCurrentItem = iVar1 + 1;
            p_Var3 = this->fItemList[iVar1 + 2];
          }
        }
        else {
          this->fCurrentItem = iVar1 + -1;
        }
      } while ((*(uint *)this->fItemList[this->fCurrentItem] & 1) != 0);
      if (this->fCurrentItem != iVar5) {
        AudioCmn_PlayFESFX__Fi(3);
      }
      goto LAB_80025878;
    }
    if (tVar4 != kInput_KeyType_Start) {
      return;
    }
    if (this->fOnButtonPress != (_func_22 *)0x0) {
      (*this->fOnButtonPress)(command);
      goto LAB_80025878;
    }
    tVar2 = kMenu_Command_StartRace;
    if ((this->fFlags & 1) == 0) {
      if ((this->fFlags & 2) == 0) {
        return;
      }
      command->type = kMenu_Command_Start2PlayerRace;
      goto LAB_80025878;
    }
  }
  command->type = tVar2;
LAB_80025878:
  *keyval = kInput_KeyType_AlreadyProcessed;
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetNumberEnabledItems__5tMenu(struct tMenu *this /*$a0*/)
 // line 1195, offset 0x80025894
	/* begin block 1 */
		// Start line: 1196
		// Start offset: 0x80025894
		// Variables:
	// 		short result; // $a1
	// 		short i; // $v1

		/* begin block 1.1 */
			// Start line: 1200
			// Start offset: 0x800258AC

			/* begin block 1.1.1 */
				// Start line: 1203
				// Start offset: 0x800258B0

				/* begin block 1.1.1.1 */
					// Start line: 1205
					// Start offset: 0x800258CC

					/* begin block 1.1.1.1.1 */
						// Start line: 1205
						// Start offset: 0x800258CC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1205
							// Start offset: 0x800258CC
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800258CC
						// End Line: 1205
					/* end block 1.1.1.1.1 */
					// End offset: 0x800258CC
					// End Line: 1205
				/* end block 1.1.1.1 */
				// End offset: 0x800258E8
				// End Line: 1206
			/* end block 1.1.1 */
			// End offset: 0x800258E8
			// End Line: 1206
		/* end block 1.1 */
		// End offset: 0x800258F0
		// End Line: 1207
	/* end block 1 */
	// End offset: 0x800258F4
	// End Line: 1209

	/* begin block 2 */
		// Start line: 2419
	/* end block 2 */
	// End Line: 2420

	/* begin block 3 */
		// Start line: 2437
	/* end block 3 */
	// End Line: 2438

	/* begin block 4 */
		// Start line: 2437
	/* end block 4 */
	// End Line: 2438

	/* begin block 5 */
		// Start line: 2438
	/* end block 5 */
	// End Line: 2439

	/* begin block 6 */
		// Start line: 2438
	/* end block 6 */
	// End Line: 2439

short GetNumberEnabledItems__5tMenu(tMenu *this)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  if (this->fNeverAnyEnabled != (void *)0x0) {
    return 0;
  }
  iVar2 = 0;
  while (puVar1 = *(uint **)((int)this->fItemList + ((iVar2 << 0x10) >> 0xe)), puVar1 != (uint *)0x0
        ) {
    if (((*puVar1 ^ 1) & 1) != 0) {
      sVar3 = sVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  }
  return sVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__5tMenu(struct tMenu *this /*$s1*/)
 // line 1217, offset 0x800258fc
	/* begin block 1 */
		// Start line: 1218
		// Start offset: 0x800258FC

		/* begin block 1.1 */
			// Start line: 1222
			// Start offset: 0x80025928
			// Variables:
		// 		short item; // $s0
		/* end block 1.1 */
		// End offset: 0x80025994
		// End Line: 1223
	/* end block 1 */
	// End offset: 0x80025994
	// End Line: 1223

	/* begin block 2 */
		// Start line: 2430
	/* end block 2 */
	// End Line: 2431

	/* begin block 3 */
		// Start line: 2476
	/* end block 3 */
	// End Line: 2477

	/* begin block 4 */
		// Start line: 2476
	/* end block 4 */
	// End Line: 2477

void Draw__5tMenu(tMenu *this)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  
  if (-1 < this->fTitle) {
    FETextRender_Title__Fs(this->fTitle);
  }
  p_Var1 = this->fItemList[0];
  iVar3 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    iVar2 = *(int *)(this->fItemList[(int)(short)iVar3] + 0x18);
    (**(code **)(iVar2 + 0x24))
              (this->fItemList[(int)(short)iVar3] + (int)*(short *)(iVar2 + 0x20),
               (uint)((int)(short)iVar3 == this->fCurrentItem));
    iVar3 = iVar3 + 1;
    p_Var1 = *(_func_21 **)((int)this->fItemList + (iVar3 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__5tMenu(struct tMenu *this /*$s1*/)
 // line 1226, offset 0x800259a8
	/* begin block 1 */
		// Start line: 1227
		// Start offset: 0x800259A8

		/* begin block 1.1 */
			// Start line: 1227
			// Start offset: 0x800259A8
			// Variables:
		// 		short item; // $s0
		/* end block 1.1 */
		// End offset: 0x80025A28
		// End Line: 1229
	/* end block 1 */
	// End offset: 0x80025A28
	// End Line: 1231

	/* begin block 2 */
		// Start line: 2490
	/* end block 2 */
	// End Line: 2491

	/* begin block 3 */
		// Start line: 2494
	/* end block 3 */
	// End Line: 2495

	/* begin block 4 */
		// Start line: 2494
	/* end block 4 */
	// End Line: 2495

void UpdateTransition__5tMenu(tMenu *this)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  
  p_Var1 = this->fItemList[0];
  iVar3 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    iVar2 = *(int *)(this->fItemList[(int)(short)iVar3] + 0x18);
    (**(code **)(iVar2 + 0x54))
              (this->fItemList[(int)(short)iVar3] + (int)*(short *)(iVar2 + 0x50),
               (uint)(this->fCurrentItem == (int)(short)iVar3));
    iVar3 = iVar3 + 1;
    p_Var1 = *(_func_21 **)((int)this->fItemList + (iVar3 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__5tMenu(struct tMenu *this /*$a0*/)
 // line 1235, offset 0x80025a3c
	/* begin block 1 */
		// Start line: 1236
		// Start offset: 0x80025A3C
	/* end block 1 */
	// End offset: 0x80025A3C
	// End Line: 1236

	/* begin block 2 */
		// Start line: 2508
	/* end block 2 */
	// End Line: 2509

	/* begin block 3 */
		// Start line: 2512
	/* end block 3 */
	// End Line: 2513

	/* begin block 4 */
		// Start line: 2512
	/* end block 4 */
	// End Line: 2513

	/* begin block 5 */
		// Start line: 2513
	/* end block 5 */
	// End Line: 2514

	/* begin block 6 */
		// Start line: 2513
	/* end block 6 */
	// End Line: 2514

void TransitionOff__5tMenu(tMenu *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__5tMenu(struct tMenu *this /*$a0*/)
 // line 1239, offset 0x80025a44
	/* begin block 1 */
		// Start line: 1240
		// Start offset: 0x80025A44
	/* end block 1 */
	// End offset: 0x80025A44
	// End Line: 1240

	/* begin block 2 */
		// Start line: 2517
	/* end block 2 */
	// End Line: 2518

	/* begin block 3 */
		// Start line: 2520
	/* end block 3 */
	// End Line: 2521

	/* begin block 4 */
		// Start line: 2520
	/* end block 4 */
	// End Line: 2521

	/* begin block 5 */
		// Start line: 2521
	/* end block 5 */
	// End Line: 2522

	/* begin block 6 */
		// Start line: 2521
	/* end block 6 */
	// End Line: 2522

void TransitionOn__5tMenu(tMenu *this)

{
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__5tMenu(struct tMenu *this /*$a0*/)
 // line 1243, offset 0x80025a4c
	/* begin block 1 */
		// Start line: 1244
		// Start offset: 0x80025A4C
	/* end block 1 */
	// End offset: 0x80025A4C
	// End Line: 1245

	/* begin block 2 */
		// Start line: 2525
	/* end block 2 */
	// End Line: 2526

	/* begin block 3 */
		// Start line: 2528
	/* end block 3 */
	// End Line: 2529

	/* begin block 4 */
		// Start line: 2528
	/* end block 4 */
	// End Line: 2529

	/* begin block 5 */
		// Start line: 2529
	/* end block 5 */
	// End Line: 2530

	/* begin block 6 */
		// Start line: 2529
	/* end block 6 */
	// End Line: 2530

void * TransitionIsFinished__5tMenu(tMenu *this)

{
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsSubMenu__5tMenu(struct tMenu *this /*$a0*/)
 // line 1253, offset 0x80025a54
	/* begin block 1 */
		// Start line: 1254
		// Start offset: 0x80025A54
	/* end block 1 */
	// End offset: 0x80025A54
	// End Line: 1255

	/* begin block 2 */
		// Start line: 2539
	/* end block 2 */
	// End Line: 2540

	/* begin block 3 */
		// Start line: 2548
	/* end block 3 */
	// End Line: 2549

	/* begin block 4 */
		// Start line: 2548
	/* end block 4 */
	// End Line: 2549

	/* begin block 5 */
		// Start line: 2549
	/* end block 5 */
	// End Line: 2550

	/* begin block 6 */
		// Start line: 2549
	/* end block 6 */
	// End Line: 2550

void * IsSubMenu__5tMenu(tMenu *this)

{
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DebounceKeys__5tMenu(struct tMenu *this /*$a0*/)
 // line 1258, offset 0x80025a5c
	/* begin block 1 */
		// Start line: 1259
		// Start offset: 0x80025A5C
	/* end block 1 */
	// End offset: 0x80025A5C
	// End Line: 1259

	/* begin block 2 */
		// Start line: 2554
	/* end block 2 */
	// End Line: 2555

	/* begin block 3 */
		// Start line: 2558
	/* end block 3 */
	// End Line: 2559

	/* begin block 4 */
		// Start line: 2558
	/* end block 4 */
	// End Line: 2559

long DebounceKeys__5tMenu(tMenu *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this->fItemList[this->fCurrentItem] + 0x18);
  lVar2 = (**(code **)(iVar1 + 0x14))
                    (this->fItemList[this->fCurrentItem] + (int)*(short *)(iVar1 + 0x10));
  return lVar2;
}





