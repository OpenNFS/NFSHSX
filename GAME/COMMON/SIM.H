#ifndef SIM_H
#define SIM_H


extern void Sim_StartUp__Fv(); // 0x800B6574

extern void Sim_Restart__Fv(); // 0x800B6688

extern void Sim_CleanUp__Fv(); // 0x800B6754

extern void Sim_FadeInSFX__Fv(); // 0x800B67F8

extern void Sim_ProcessSimSchedules__Fv(); // 0x800B6878

extern void Sim_ProcessPause__Fv(); // 0x800B6B9C

extern void Sim_CheckForPause__Fi(int checkInput); // 0x800B6CA0

extern void Sim_MainGameLoop__Fv(); // 0x800B6D4C


#endif
