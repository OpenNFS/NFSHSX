#include "NFS4.H"
#include "MEMCARD.H"

// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_init(int fMultitap /*$s1*/)
 // line 81, offset 0x8004f3e0
	/* begin block 1 */
		// Start line: 82
		// Start offset: 0x8004F3E0
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8004F45C
	// End Line: 118

void MCRD_init(int fMultitap)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_InitCard(int card /*$a0*/)
 // line 129, offset 0x8004f480
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8004F480
		// Variables:
	// 		struct CARDINFO_def *pCI; // $v1
	/* end block 1 */
	// End offset: 0x8004F4C8
	// End Line: 144

int iMCRD_InitCard(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_restore()
 // line 174, offset 0x8004f4d8
void MCRD_restore(void)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_getopts(struct MCRDOPTS_def *pOPT /*$a0*/)
 // line 215, offset 0x8004f51c
void MCRD_getopts(MCRDOPTS_def *pOPT)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_setopts(struct MCRDOPTS_def *pOPT /*$s1*/)
 // line 280, offset 0x8004f594
void MCRD_setopts(MCRDOPTS_def *pOPT)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_loadfile(int card /*$s2*/, struct MCRDFILE_def *pFILE /*$s4*/, int bNameHasProductCode /*$s1*/)
 // line 397, offset 0x8004f6b8
	/* begin block 1 */
		// Start line: 398
		// Start offset: 0x8004F6B8
		// Variables:
	// 		struct MCRDFILEINFO_def *pMFI; // $s3
	/* end block 1 */
	// End offset: 0x8004F708
	// End Line: 418

void MCRD_loadfile(int card,MCRDFILE_def *pFILE,int bNameHasProductCode)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DoFileLoad(int card /*$s7*/)
 // line 435, offset 0x8004f7a4
	/* begin block 1 */
		// Start line: 436
		// Start offset: 0x8004F7A4
		// Variables:
	// 		long cmd; // stack offset -48
	// 		long res; // stack offset -44
	// 		int i; // $s1
	// 		int error; // $v0
	// 		struct MCRDFILEINFO_def *pMFI; // $s2
	// 		struct shapetbl *s; // $s0
	/* end block 1 */
	// End offset: 0x8004FA20
	// End Line: 526

int iMCRD_DoFileLoad(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ MCRD_savefile(int card /*$s2*/, struct MCRDFILE_def *pFILE /*$s3*/)
 // line 663, offset 0x8004fa4c
	/* begin block 1 */
		// Start line: 664
		// Start offset: 0x8004FA4C
		// Variables:
	// 		struct MCRDFILEINFO_def *pMFI; // $s4
	// 		int nIcons; // $s2
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8004FC68
	// End Line: 749

int MCRD_savefile(int card,MCRDFILE_def *pFILE)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DoFileWrite(int card /*$s3*/)
 // line 751, offset 0x8004fc88
	/* begin block 1 */
		// Start line: 752
		// Start offset: 0x8004FC88
		// Variables:
	// 		long cmd; // stack offset -32
	// 		long res; // stack offset -28
	// 		int error; // $v0
	// 		struct MCRDFILEINFO_def *pMFI; // $s0
	/* end block 1 */
	// End offset: 0x8004FDD0
	// End Line: 854

int iMCRD_DoFileWrite(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DoFileDelete(int card /*$s2*/)
 // line 905, offset 0x8004fdec
	/* begin block 1 */
		// Start line: 906
		// Start offset: 0x8004FDEC
		// Variables:
	// 		int retval; // $s1
	// 		struct MCRDFILEINFO_def *pMFI; // $a1
	/* end block 1 */
	// End offset: 0x8004FE64
	// End Line: 929

int iMCRD_DoFileDelete(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ MCRD_handlecardevents(int card /*$s1*/)
 // line 971, offset 0x8004fe80
	/* begin block 1 */
		// Start line: 972
		// Start offset: 0x8004FE80
		// Variables:
	// 		int status; // $s0
	// 		struct CARDINFO_def *pCI; // $s2
	// 		unsigned long cmd; // stack offset -24
	// 		unsigned long res; // stack offset -20
	// 		int ret; // $v1
	/* end block 1 */
	// End offset: 0x800501B4
	// End Line: 1169

int MCRD_handlecardevents(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ MCRD_fileexists(int card /*$a0*/, char *name /*$s0*/)
 // line 1312, offset 0x800501cc
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x800501CC
		// Variables:
	// 		int i; // $s0
	// 		struct DIRENTRY *pDir; // $s1
	// 		char fullname[24]; // stack offset -40
	/* end block 1 */
	// End offset: 0x80050230
	// End Line: 1331

int MCRD_fileexists(int card,char *name)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// struct CARDINFO_def * /*$ra*/ MCRD_getcard(int card /*$a0*/)
 // line 1364, offset 0x80050244
CARDINFO_def * MCRD_getcard(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ iMCRD_timersub()
 // line 1536, offset 0x8005028c
	/* begin block 1 */
		// Start line: 1538
		// Start offset: 0x8005028C
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x800502B4
	// End Line: 1542

void iMCRD_timersub(void)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ garyMemCardGrabBlocks(int card /*$a0*/, int filenum /*$s1*/)
 // line 1544, offset 0x800502bc
	/* begin block 1 */
		// Start line: 1545
		// Start offset: 0x800502BC
		// Variables:
	// 		int i; // $v1
	// 		struct CARDINFO_def *pCI; // $v0
	// 		struct DIRENTRY *pDir; // $s0
	/* end block 1 */
	// End offset: 0x8005032C
	// End Line: 1561

int garyMemCardGrabBlocks(int card,int filenum)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_LoadCard(int card /*$s2*/)
 // line 1566, offset 0x80050344
	/* begin block 1 */
		// Start line: 1567
		// Start offset: 0x80050344
		// Variables:
	// 		int error; // $v0
	// 		int slot; // $a0
	// 		struct CARDINFO_def *pCI; // $s1
	// 		struct DIRENTRY *pDir; // $s0
	/* end block 1 */
	// End offset: 0x80050428
	// End Line: 1694

int iMCRD_LoadCard(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_FormatCard(int card /*$a0*/)
 // line 1696, offset 0x80050440
	/* begin block 1 */
		// Start line: 1697
		// Start offset: 0x80050440
		// Variables:
	// 		int result; // $s1
	// 		struct CARDINFO_def *pCI; // $s0
	/* end block 1 */
	// End offset: 0x800504A8
	// End Line: 1732

int iMCRD_FormatCard(int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_HandleError(int func /*$s0*/, int opResult /*$s2*/, int card /*$s3*/)
 // line 1737, offset 0x800504cc
	/* begin block 1 */
		// Start line: 1738
		// Start offset: 0x800504CC
		// Variables:
	// 		int code; // $s4
	// 		struct CARDINFO_def *pCI; // $s1

		/* begin block 1.1 */
			// Start line: 1813
			// Start offset: 0x800505F4
			// Variables:
		// 		int numberoftries; // $s0
		// 		int result; // $v1
		/* end block 1.1 */
		// End offset: 0x80050644
		// End Line: 1835
	/* end block 1 */
	// End offset: 0x800506C8
	// End Line: 1896

int iMCRD_HandleError(int func,int opResult,int card)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DefaultCBProc1()
 // line 1898, offset 0x800506e8
int iMCRD_DefaultCBProc1(void)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// short /*$ra*/ ascii2sjis(unsigned char ascii_code /*$a2*/)
 // line 2063, offset 0x800506f0
	/* begin block 1 */
		// Start line: 2064
		// Start offset: 0x800506F0
		// Variables:
	// 		unsigned short sjis_code; // $v1
	// 		unsigned char stmp; // $v1
	// 		unsigned char stmp2; // $a1
	/* end block 1 */
	// End offset: 0x80050808
	// End Line: 2097

short ascii2sjis(uchar ascii_code)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// unsigned char /*$ra*/ sjis2ascii(short sjis_code /*$a0*/)
 // line 2102, offset 0x80050810
	/* begin block 1 */
		// Start line: 2104
		// Start offset: 0x80050810
		// Variables:
	// 		int idx; // $a1
	// 		unsigned char bottom; // $a2
	/* end block 1 */
	// End offset: 0x800508B8
	// End Line: 2123

uchar sjis2ascii(short sjis_code)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}





