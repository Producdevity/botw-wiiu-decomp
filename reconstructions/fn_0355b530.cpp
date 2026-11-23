typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0355b530(void *arg0, s8 arg1) {
    void *temp_r12;

    temp_r12 = (*(void **)((char *)(arg0) + (0x398)));
    if (temp_r12 != 0) {
        if ((arg1 == 0) && ((s32) (*(u8 *)((char *)(arg0) + (0x545))) != 0)) {
            (*(s32 *)((char *)(temp_r12) + (0x90))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x90))) | 0x200);
            (*(s8 *)((char *)(arg0) + (0x544))) = arg1;
            return;
        }
        (*(s32 *)((char *)(temp_r12) + (0x90))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x90))) & 0xFFFFFDFF);
        
        (*(s8 *)((char *)(arg0) + (0x544))) = arg1;
        return;
    }
    (*(s8 *)((char *)(arg0) + (0x544))) = arg1;
}
