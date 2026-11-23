typedef unsigned char u8;
typedef int s32;

struct Base;
extern "C" const unsigned char* fn_0294e940(void*);

extern "C" void fn_02595354(void *arg0, s32 arg1) {
    void* const* vt1;
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(arg0) + (0xC)));
    ((s32 (*)(void *, u8 *, s32))(vt1 = *(void* const**)&(temp_r31))[79])(arg0, (u8 *)(fn_0294e940((*(struct Base **)((char *)(arg0) + (0))))), arg1);
}
