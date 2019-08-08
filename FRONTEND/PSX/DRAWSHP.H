#ifndef DRAWSHP_H
#define DRAWSHP_H

extern void DrawShape_SubtractNFS4RectEdges__FR4RECT(struct RECT *rect); // 0x8004BE00

extern void DrawShape_NFS4RoundRectangle__FiR4RECTs(int textID, struct RECT *position, short selected); // 0x8004BFB0

extern void DrawShape_NFS4Rectangle__FR4RECT(struct RECT *position); // 0x8004C1BC

extern void DrawShape_NFS4TransRectangle__FR4RECTs(struct RECT *r, short opacity); // 0x8004C4DC

#endif
