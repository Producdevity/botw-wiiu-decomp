typedef int s32;

extern "C" int fn_02945d94(void*);
extern "C" void fn_0383e968(void *, int, int, int);

extern "C" s32 data_1016c8e4;

extern "C" void fn_02945d9c(void *handle) {
    void **object = (void **)handle;
    if (fn_02945d94(object) != 0) {
        fn_0383e968(*object, (s32) &data_1016c8e4, 2, 0);
    }
}
