typedef int s32;

extern "C" int fn_02a27aa8(int, void*);
extern "C" void* data_1046378c;

extern "C" void fn_0298a108(void *arg0) {
    void *temp_r10;
    void *temp_r3;

    temp_r3 = (char *)data_1046378c + 0x5C0;
    if ((temp_r3 == 0) || (fn_02a27aa8((s32) temp_r3, (*(void **)((char *)(arg0) + (0)))) == 0)) {
        temp_r10 = (*(void **)((char *)(arg0) + (0x48)));
        if (temp_r10 != 0) {
            (*(s32 *)((char *)(temp_r10) + (8))) = 2;
        }
    }
}
