typedef int s32;

extern "C" int fn_02945d94(void*);
extern "C" void fn_0383e968(void *, int, int, int);

extern "C" s32 data_1016c908;

extern "C" void fn_02945fe8(void **object) {
    if (fn_02945d94(object) != 0) {
        fn_0383e968(*object, (s32) &data_1016c908, 2, 0);
    }
}
