typedef int s32;

extern "C" void fn_03317400(void*, void*);
extern "C" int fn_03317670(void*, void*);

extern "C" void *data_1046d780;

extern "C" void fn_03306390(void *arg0) {
    void *temp_r31;

    if ((s32) (*(s32 *)((char *)(arg0) + (0x104))) == 1) {
        temp_r31 = data_1046d780;
        if ((temp_r31 != 0) && (fn_03317670(temp_r31, (*(void **)((char *)(arg0) + (4)))) != 0)) {
            fn_03317400(temp_r31, 0);
        }
    }
}
