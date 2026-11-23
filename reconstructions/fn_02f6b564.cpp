extern "C" void fn_02ea97b4(void*, int);
extern "C" void fn_02eaa2b4(void*, int);
extern "C" void fn_02eaa420(void*, int);
extern "C" void fn_02f22f20(void*, void*);
extern "C" void * data_104698f8;

extern "C" void fn_02f6b564(void *arg0, void *arg1) {
    if (arg1 == 0) {
        fn_02ea97b4(data_104698f8, 1);
        if ((void *) (*(void **)((char *)(arg0) + (0x21A8))) != 0) {
            goto block_9;
        }
    } else if (arg1 == (void *)1) {
        fn_02eaa2b4(data_104698f8, 1);
        if ((void *) (*(void **)((char *)(arg0) + (0x21A8))) != 0) {
            goto block_9;
        }
    } else {
        if (arg1 == (void *)2) {
            fn_02eaa420(data_104698f8, 1);
        }
        if ((void *) (*(void **)((char *)(arg0) + (0x21A8))) != 0) {
block_9:
            fn_02f22f20((*(void **)((char *)(arg0) + (0x21A8))), arg1);
        }
    }
}
