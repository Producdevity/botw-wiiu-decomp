typedef int s32;

extern "C" void fn_0383e968(void *, int, int, int);
extern "C" int fn_0383f578(void*, int);

extern "C" s32 data_100a8140;

extern "C" void fn_023f1170(void **arg0) {
    if (fn_0383f578((char *)arg0 + 0x120, 1) == 0) {
        fn_0383e968(*arg0, (s32) &data_100a8140, 1, (s32) ((char *)arg0 + 0x120));
    }
}
