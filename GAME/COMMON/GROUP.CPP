#include "NFS4.H"
#include "GROUP.H"

// decompiled code
// original method signature: 
// struct SerializedGroup * /*$ra*/ LocateNextGroupType__15SerializedGroupi(struct SerializedGroup *this /*$a0*/, int type /*$a1*/)
 // line 44, offset 0x8009c128
	/* begin block 1 */
		// Start line: 45
		// Start offset: 0x8009C128
		// Variables:
	// 		struct SerializedGroup *group; // $a0
	/* end block 1 */
	// End offset: 0x8009C148
	// End Line: 59

SerializedGroup * LocateNextGroupType__15SerializedGroupi(SerializedGroup *this,int type)

{
  SerializedGroup *pSVar1;
  SerializedGroup *pSVar2;
  
  pSVar2 = (SerializedGroup *)((int)&this->m_type + this->m_length);
  pSVar1 = (SerializedGroup *)0x0;
  if (pSVar2->m_type == type) {
    pSVar1 = pSVar2;
  }
  return pSVar1;
}



// decompiled code
// original method signature: 
// struct SerializedGroup * /*$ra*/ LocateGroupType__15SerializedGroupii(struct SerializedGroup *this /*$a0*/, int type /*$a1*/, int index /*$a2*/)
 // line 63, offset 0x8009c150
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x8009C150
		// Variables:
	// 		int count; // $t0
	// 		int numElems; // $a3
	// 		struct SerializedGroup *group; // $a0

		/* begin block 1.1 */
			// Start line: 65
			// Start offset: 0x8009C150
			// Variables:
		// 		struct SerializedGroup *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 65
				// Start offset: 0x8009C150
			/* end block 1.1.1 */
			// End offset: 0x8009C150
			// End Line: 65
		/* end block 1.1 */
		// End offset: 0x8009C150
		// End Line: 65
	/* end block 1 */
	// End offset: 0x8009C1B8
	// End Line: 100

SerializedGroup * LocateGroupType__15SerializedGroupii(SerializedGroup *this,int type,int index)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = this->m_num_elements;
  this = this + 1;
  while( true ) {
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      return (SerializedGroup *)0x0;
    }
    if ((this->m_type == type) && (bVar1 = iVar4 == index, iVar4 = iVar4 + 1, bVar1)) break;
    uVar2 = this->m_length & 3;
    if (uVar2 != 0) {
      this->m_length = (this->m_length + 4U) - uVar2;
    }
    this = (SerializedGroup *)((int)&this->m_type + this->m_length);
  }
  return this;
}



// decompiled code
// original method signature: 
// struct SerializedGroup * /*$ra*/ LocateGroupNum__15SerializedGroupi(struct SerializedGroup *this /*$a0*/, int index /*$a1*/)
 // line 103, offset 0x8009c1c0
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x8009C1C0
		// Variables:
	// 		int numElems; // $v0
	// 		char *group; // $a0

		/* begin block 1.1 */
			// Start line: 108
			// Start offset: 0x8009C1DC
			// Variables:
		// 		struct SerializedGroup *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 108
				// Start offset: 0x8009C1DC
			/* end block 1.1.1 */
			// End offset: 0x8009C1DC
			// End Line: 108
		/* end block 1.1 */
		// End offset: 0x8009C1DC
		// End Line: 108

		/* begin block 1.2 */
			// Start line: 108
			// Start offset: 0x8009C1DC
			// Variables:
		// 		int i; // $v1
		/* end block 1.2 */
		// End offset: 0x8009C1FC
		// End Line: 115
	/* end block 1 */
	// End offset: 0x8009C1FC
	// End Line: 117

SerializedGroup * LocateGroupNum__15SerializedGroupi(SerializedGroup *this,int index)

{
  int iVar1;
  SerializedGroup *pSVar2;
  
  pSVar2 = this + 1;
  if (this->m_num_elements <= index) {
    return (SerializedGroup *)0x0;
  }
  iVar1 = 0;
  if (0 < index) {
    do {
      iVar1 = iVar1 + 1;
      pSVar2 = (SerializedGroup *)((int)&pSVar2->m_type + pSVar2->m_length);
    } while (iVar1 < index);
  }
  return pSVar2;
}



// decompiled code
// original method signature: 
// struct Group * /*$ra*/ LocateCreateGroupType__15SerializedGroupiP9SimpleMemi(struct SerializedGroup *this /*$s0*/, int type /*$s1*/, struct SimpleMem *mem /*$s3*/, int index /*$s2*/)
 // line 120, offset 0x8009c204
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x8009C204
	/* end block 1 */
	// End offset: 0x8009C260
	// End Line: 135

Group * LocateCreateGroupType__15SerializedGroupiP9SimpleMemi
                  (SerializedGroup *this,int type,SimpleMem *mem,int index)

{
  SerializedGroup *source;
  Group *pGVar1;
  
  source = LocateGroupType__15SerializedGroupii(this,type,index);
  if (source == (SerializedGroup *)0x0) {
    pGVar1 = (Group *)0x0;
  }
  else {
    source = LocateGroupType__15SerializedGroupii(this,type,index);
    pGVar1 = CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem(this,source,mem);
  }
  return pGVar1;
}



// decompiled code
// original method signature: 
// struct Group * /*$ra*/ CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem(struct SerializedGroup *this /*$a0*/, struct SerializedGroup *source /*$s2*/, struct SimpleMem *mem /*$a2*/)
 // line 168, offset 0x8009c27c
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x8009C27C
		// Variables:
	// 		int newLen; // $s1
	// 		struct Group *ret; // $s0

		/* begin block 1.1 */
			// Start line: 169
			// Start offset: 0x8009C27C
			// Variables:
		// 		struct SerializedGroup *this; // $s2

			/* begin block 1.1.1 */
				// Start line: 169
				// Start offset: 0x8009C27C
			/* end block 1.1.1 */
			// End offset: 0x8009C27C
			// End Line: 169
		/* end block 1.1 */
		// End offset: 0x8009C27C
		// End Line: 169

		/* begin block 1.2 */
			// Start line: 169
			// Start offset: 0x8009C27C
			// Variables:
		// 		struct SerializedGroup *this; // $s2

			/* begin block 1.2.1 */
				// Start line: 169
				// Start offset: 0x8009C27C
			/* end block 1.2.1 */
			// End offset: 0x8009C27C
			// End Line: 169
		/* end block 1.2 */
		// End offset: 0x8009C27C
		// End Line: 169

		/* begin block 1.3 */
			// Start line: 169
			// Start offset: 0x8009C27C
			// Variables:
		// 		struct Group *this; // $s0

			/* begin block 1.3.1 */
				// Start line: 169
				// Start offset: 0x8009C27C
			/* end block 1.3.1 */
			// End offset: 0x8009C27C
			// End Line: 169
		/* end block 1.3 */
		// End offset: 0x8009C27C
		// End Line: 169
	/* end block 1 */
	// End offset: 0x8009C27C
	// End Line: 169

Group * CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                  (SerializedGroup *this,SerializedGroup *source,SimpleMem *mem)

{
  Group *pGVar1;
  int len;
  
  len = source->m_length + -0xc;
  pGVar1 = (Group *)Alloc__9SimpleMemii(mem,len,0);
  pGVar1->m_num_elements = source->m_num_elements;
  blockmove((undefined4 *)(source + 1),pGVar1 + 1,len);
  return pGVar1;
}



// decompiled code
// original method signature: 
// struct Group * /*$ra*/ CreateLiteGroupDataSize__15SerializedGroupP15SerializedGroupP9SimpleMemi(struct SerializedGroup *this /*$a0*/, struct SerializedGroup *source /*$s2*/, struct SimpleMem *mem /*$a2*/, int dataSize /*$a3*/)
 // line 186, offset 0x8009c2e4
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x8009C2E4
		// Variables:
	// 		int newLen; // $s1
	// 		struct Group *ret; // $s0

		/* begin block 1.1 */
			// Start line: 187
			// Start offset: 0x8009C2E4
			// Variables:
		// 		struct SerializedGroup *this; // $s2

			/* begin block 1.1.1 */
				// Start line: 187
				// Start offset: 0x8009C2E4
			/* end block 1.1.1 */
			// End offset: 0x8009C2E4
			// End Line: 187
		/* end block 1.1 */
		// End offset: 0x8009C2E4
		// End Line: 187

		/* begin block 1.2 */
			// Start line: 187
			// Start offset: 0x8009C2E4
			// Variables:
		// 		struct Group *this; // $s0

			/* begin block 1.2.1 */
				// Start line: 187
				// Start offset: 0x8009C2E4
			/* end block 1.2.1 */
			// End offset: 0x8009C2E4
			// End Line: 187
		/* end block 1.2 */
		// End offset: 0x8009C2E4
		// End Line: 187
	/* end block 1 */
	// End offset: 0x8009C2E4
	// End Line: 187

Group * CreateLiteGroupDataSize__15SerializedGroupP15SerializedGroupP9SimpleMemi
                  (SerializedGroup *this,SerializedGroup *source,SimpleMem *mem,int dataSize)

{
  Group *pGVar1;
  
  pGVar1 = (Group *)Alloc__9SimpleMemii(mem,dataSize + 4,0);
  pGVar1->m_num_elements = 0;
  blockmove((undefined4 *)(source + 1),pGVar1 + 1,dataSize + 4);
  return pGVar1;
}




