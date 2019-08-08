#ifndef INPUT_H
#define INPUT_H

extern int * Input_StartUp__Fv(); // 0x8009C344

extern int Input_WingCommandMode__Fi(int player); // 0x8009C408

extern void Input_Update__Fv(); // 0x8009C478

extern void Input_Store__Fv(); // 0x8009D208

extern void Input_Fetch__Fi(int humanIndex); // 0x8009D294

extern char Input_Gear__Fci(char currentGear, int numGears); // 0x8009D2BC

extern int Input_Interface__FUli(unsigned long key, int debounce); // 0x8009D318

extern int Input_MainExitKey__Fv(); // 0x8009D3BC

#endif
