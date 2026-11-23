extern "C" void fn_02f210a8(void*);
extern "C" void fn_02fc3420(void*);

extern "C" void fn_02fc35f4(void *arg0) {
    if ((void *) (*(void **)((char *)(arg0) + (0x21F8))) != 0) {
        fn_02fc3420(arg0);
        fn_02f210a8((*(void **)((char *)(arg0) + (0x21F8))));
    }
}
