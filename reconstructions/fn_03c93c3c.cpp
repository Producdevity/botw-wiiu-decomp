typedef int s32;

extern "C" int fn_03c95914(void*);

extern "C" s32 fn_03c93c3c(s32 *arg0) {
    s32 var_r3;

    var_r3 = fn_03c95914((char *)arg0 + 8);
    if (var_r3 == 0) {
        var_r3 = 0;
        *arg0 = -1;
    }
    return var_r3;
}
