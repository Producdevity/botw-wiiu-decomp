typedef int s32;

extern "C" bool fn_02ed2778(int);
extern "C" void fn_02ed27bc(void*, void*);
extern "C" int fn_03079898(void*);

extern "C" void fn_02ed2850(void *arg0) {
    if ((fn_03079898(0) != 0) && (fn_02ed2778((*(s32 *)((char *)(arg0) + (0xBC)))) != 0)) {
        fn_02ed27bc(arg0, 0);
    }
}
