#ifndef GROUP_H
#define GROUP_H

extern struct SerializedGroup * LocateNextGroupType__15SerializedGroupi(struct SerializedGroup *this, int type); // 0x8009C128

extern struct SerializedGroup * LocateGroupType__15SerializedGroupii(struct SerializedGroup *this, int type, int index); // 0x8009C150

extern struct SerializedGroup * LocateGroupNum__15SerializedGroupi(struct SerializedGroup *this, int index); // 0x8009C1C0

extern struct Group * LocateCreateGroupType__15SerializedGroupiP9SimpleMemi(struct SerializedGroup *this, int type, struct SimpleMem *mem, int index); // 0x8009C204

extern struct Group * CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem(struct SerializedGroup *this, struct SerializedGroup *source, struct SimpleMem *mem); // 0x8009C27C

extern struct Group * CreateLiteGroupDataSize__15SerializedGroupP15SerializedGroupP9SimpleMemi(struct SerializedGroup *this, struct SerializedGroup *source, struct SimpleMem *mem, int dataSize); // 0x8009C2E4

#endif
