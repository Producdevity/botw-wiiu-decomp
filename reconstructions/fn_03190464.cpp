typedef int s32;

extern "C" void fn_03190464(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    s32 var_r0;

    if (arg0 == 0) {
        *arg2 = 0;
        *arg3 = 1;
        *arg4 = 0;
        *arg5 = 2;
        return;
    }
    var_r0 = arg0 + 1;
    *arg2 = arg0 - 1;
    *arg3 = var_r0;
    *arg4 = arg0;
    if (arg0 < (s32) (arg1 - 1)) {
        var_r0 = arg0 + 2;
    }
    *arg5 = var_r0;
}
