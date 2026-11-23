typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02af3f8c(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_033bcc70(void*, int);

extern "C" s32 data_100027f8;
extern "C" s32 data_10002808;
extern "C" s32 data_10002820;

extern "C" void fn_02007998(void *arg0, u32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0))) = &data_100027f8;
        (*(s32 **)((char *)(arg0) + (0xF0))) = &data_10002808;
        (*(s32 **)((char *)(arg0) + (0xEC))) = &data_10002820;
        fn_033bcc70((char *)arg0 + 0x7CC, 2);
        fn_02af3f8c(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
