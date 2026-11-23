typedef unsigned short u16;
typedef int s32;

extern "C" void *fn_03bde8d4(void **arg0) {
    u16 temp_r0;
    void *temp_r12;

    temp_r12 = *arg0;
    if (temp_r12 != 0) {
        temp_r0 = (*(u16 *)((char *)(temp_r12) + (6)));
        if (temp_r0 >= 0x300U) {
            return (char *)temp_r12 + (*(s32 *)((char *)(temp_r12) + (0x18))) + 8;
        }
        if ((s32) temp_r0 == 0x100) {
            return (char *)temp_r12 + (*(s32 *)((char *)(temp_r12) + (0x14))) + 8;
        }
        
        return 0;
    }
    return 0;
}
