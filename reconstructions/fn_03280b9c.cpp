typedef int s32;

extern "C" void fn_037a2038(int);

extern "C" s32 fn_03280b9c(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == 0) {
        return 1;
    }
    fn_037a2038(temp_r3);
    return 0;
}
