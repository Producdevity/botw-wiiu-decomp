typedef int s32;

extern "C" s32 fn_03394870(s32, s32);

extern "C" s32 fn_02735f68(s32 *object) {
    if ((fn_03394870(*object, 0x170CF1E2) == 0) || (fn_03394870(*object, 0x882953B0) != 0) || (fn_03394870(*object, 0xA40DD51C) != 0)) {
        return 0;
    }
    return 1;
}
