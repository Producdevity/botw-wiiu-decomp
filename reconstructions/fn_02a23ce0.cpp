extern "C" int fn_02a22a60(void*, void*);
extern "C" void fn_02a23ca4(void*, void*);
extern "C" bool fn_0378da88(void *);

extern "C" void fn_02a23ce0(void *object, void *other) {
    if (fn_0378da88(other) != 0) {
        fn_02a23ca4(object, (void *)(fn_02a22a60(object, other)));
    }
}
