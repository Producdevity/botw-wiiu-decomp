typedef int s32;

extern "C" int fn_0308e60c(int, void*, int, void*);
struct SizedRange;
extern "C" void fn_0308ea24(SizedRange *, int, void *);

extern "C" s32 data_1025e780;

extern "C" s32 fn_0308ea48(struct SizedRange *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 temp_r3;

    if (arg1 > 0) {
        temp_r3 = fn_0308e60c(arg1 * 4, arg2, arg3, &data_1025e780);
        if (temp_r3 != 0) {
            fn_0308ea24(arg0, arg1, (void *) temp_r3);
            return 1;
        }
    }
    return 0;
}
