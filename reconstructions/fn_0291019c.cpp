typedef int s32;

extern "C" int fn_0290f37c(int);
extern "C" int fn_0290fe58(void*);
extern "C" void fn_0290ffac(void*);
extern "C" void fn_0291005c(void*);

extern "C" s32 fn_0291019c(void *object) {
    if (fn_0290fe58(object) != 0) {
        fn_0290ffac(object);
        return 1;
    }
    if (fn_0290f37c((s32) object) != 0) {
        fn_0291005c(object);
        return 1;
    }
    return 0;
}
