typedef int s32;

extern "C" int fn_02945d94(void*);
extern "C" void fn_0383e968(void *, int, int, int);

extern "C" s32 data_1016c908;

extern "C" void fn_02945fe8(void **arg0) {
    if (fn_02945d94(arg0) != 0) {
        fn_0383e968(*arg0, (s32) &data_1016c908, 2, 0);
    }
}
