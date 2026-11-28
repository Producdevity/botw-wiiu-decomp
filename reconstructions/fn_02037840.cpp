typedef int s32;

extern "C" s32 fn_02b6adf0(s32, s32);
extern "C" s32 fn_03394870(s32, s32);

extern "C" void fn_02037840(s32 object, s32 count) {
    if (count >= 2 && fn_03394870(object, 0xC2CB78AD) != 0) {
        fn_02b6adf0(object, count);
    }
}
