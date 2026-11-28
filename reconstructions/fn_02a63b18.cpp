extern "C" unsigned int fn_02e1a9bc(int);
extern "C" int fn_02e1a9fc(int);

extern "C" unsigned int fn_02a63b18() {
    unsigned int mode;

    if (fn_02e1a9fc(0) != 0) {
        mode = fn_02e1a9bc(0);
        switch (mode) {
        case 0:
            return mode;
        case 15:
            return 1U;
        default:
            return 2U;
        }
    } else {
        return 2U;
    }
}
