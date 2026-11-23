typedef int s32;

extern "C" void fn_02232060(void*);
extern "C" void fn_0339e0c0(void *, void *);
extern "C" void fn_0339e1a4(void*, void*);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_021ddb28(void *arg0) {
    s32 temp_r0;

    temp_r0 = (*(s32 *)((char *)(arg0) + (0x48)));
    if (temp_r0 == 2) {
        fn_02232060(arg0);
        return;
    }
    if (temp_r0 == 1) {
        fn_0339e0c0((*(void **)((char *)(arg0) + (0))), (void *)(data_10549dd0));
        fn_0339e1a4((*(void **)((char *)(arg0) + (0))), (void *)(data_10549dd0));
        (*(s32 *)((char *)(arg0) + (0x48))) = (s32) ((*(s32 *)((char *)(arg0) + (0x48))) + 1);
        return;
    }
    (*(s32 *)((char *)(arg0) + (0x48))) = 1;
}
