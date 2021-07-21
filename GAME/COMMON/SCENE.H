#ifndef SCENE_H
#define SCENE_H


extern void Scene_Init__Fi(int numObjDefs); // 0x800B5F7C

extern void Scene_DeInit__Fv(); // 0x800B5F90

extern void Scene_PurgeScene__Fv(); // 0x800B5FB0

extern int Scene_BuildCustomSceneList__Fv(); // 0x800B5FE4

extern void Scene_LoadSceneFile__Fi(int sceneFileIndex); // 0x800B6084

extern int GetPlaneY__FPC8coorddefN20(struct coorddef *norm, struct coorddef *pointOnPlane, struct coorddef *testPoint); // 0x800B6114


#endif
