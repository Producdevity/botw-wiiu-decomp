typedef int s32;

extern "C" void fn_0383e968(void *, int, int, int);
extern "C" int fn_0383f578(void*, int);

extern "C" s32 data_1011a410;

extern "C" void fn_026fd55c(void **arg0) {
    if (fn_0383f578((char *)arg0 + 0xFC, 0) == 0) {
        fn_0383e968(*arg0, (s32) &data_1011a410, 0, (s32) ((char *)arg0 + 0xFC));
    }
}
