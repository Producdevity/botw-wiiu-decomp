typedef unsigned int u32;

extern "C" unsigned int fn_02e1a9bc(int);
extern "C" int fn_02e1a9fc(int);

extern "C" u32 fn_02a7865c(void) {
    u32 temp_r3;

    if (fn_02e1a9fc(0) != 0) {
        temp_r3 = fn_02e1a9bc(0);
        switch (temp_r3) {
        case 0:
            return temp_r3;
        case 13:
            return 1U;
        case 14:
            return 2U;
        default:
            return 3U;
        }
    } else {
        return 3U;
    }
}
