typedef int s32;

extern "C" int fn_03601358(void*, void*);

extern "C" void fn_03601550(void *arg0, void *arg1) {
    struct { s32 f8; } sp;

    (*(s32 *)((char *)(arg0) + (0x21C))) = 3;
    sp.f8 = 0;
    if (fn_03601358(arg1, &sp.f8) != 0) {
        (*(s32 *)((char *)(arg0) + (0x21C))) = (s32) ((*(s32 *)((char *)(arg0) + (0x21C))) | sp.f8);
    }
}
