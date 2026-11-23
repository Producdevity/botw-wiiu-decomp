typedef int s32;

extern "C" int fn_0290f37c(int);
extern "C" int fn_0290fe58(void*);
extern "C" void fn_0290ffac(void*);
extern "C" void fn_0291005c(void*);

extern "C" s32 fn_02910118(void *arg0) {
    if (fn_0290fe58(arg0) != 0) {
        fn_0290ffac(arg0);
        return 1;
    }
    if (fn_0290f37c((s32) arg0) != 0) {
        fn_0291005c(arg0);
        return 1;
    }
    return 0;
}
