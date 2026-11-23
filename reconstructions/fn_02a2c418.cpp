typedef int s32;

extern "C" void fn_0340942c(void*, void*);
extern "C" unsigned fn_0340a8ac(void *);

extern "C" void *data_1046f428;

extern "C" void fn_02a2c418(s32 arg0) {
    if (fn_0340a8ac(data_1046f428) == 0) {
        fn_0340942c(data_1046f428, (void *)(arg0 + 0x1DC));
    }
}
