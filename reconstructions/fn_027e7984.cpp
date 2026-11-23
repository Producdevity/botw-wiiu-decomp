typedef int s32;

extern "C" void fn_0339d744(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10136a44;

extern "C" void fn_027e7984(void **arg0) {
    void *temp_r12;

    fn_0339d744(*arg0);
    temp_r12 = *arg0;
    (*(s32 *)((char *)(temp_r12) + (0x364))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x364))) & 0xFFFFFFDF);
    fn_037b8284(arg0, &data_10136a44, 0);
}
