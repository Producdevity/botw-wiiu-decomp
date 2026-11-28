typedef unsigned int u32;

extern "C" unsigned int fn_02e1a9bc(int);
extern "C" int fn_02e1a9fc(int);

extern "C" u32 fn_02a7865c(void) {
    if (fn_02e1a9fc(0) == 0) {
        return 3U;
    }
    u32 mode = fn_02e1a9bc(0);
    switch (mode) {
    case 0:
        return mode;
    case 13:
        return 1U;
    case 14:
        return 2U;
    }
    return 3U;
}
