typedef int s32;

extern "C" int fn_02ea9940(int, int);
extern "C" void fn_02f22fec(void*, int);
extern "C" void * data_104698f8;

extern "C" void fn_02f60148(void *arg0) {
    if ((void *) (*(void **)((char *)(arg0) + (0x21A8))) != 0) {
        if (fn_02ea9940((s32) data_104698f8, 0) != 0) {
            fn_02f22fec((*(void **)((char *)(arg0) + (0x21A8))), 0);
            return;
        }
        if (fn_02ea9940((s32) data_104698f8, 1) != 0) {
            fn_02f22fec((*(void **)((char *)(arg0) + (0x21A8))), 1);
        }
    }
}
