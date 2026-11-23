typedef int s32;

extern "C" int fn_03289108(void*);
extern "C" int fn_032893bc(void*);
extern "C" void fn_0339f71c(void*, void*);

extern "C" void fn_0328b7b0(void *arg0) {
    void *temp_r12;

    fn_0339f71c(arg0, (void *)(fn_03289108(arg0)));
    if (fn_032893bc(arg0) != 0) {
        temp_r12 = (*(void **)((char *)(arg0) + (0x398)));
        if (temp_r12 != 0) {
            (*(s32 *)((char *)(temp_r12) + (0x90))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x90))) | 4);
        }
    }
}
