extern "C" unsigned int fn_02e1a9bc(int);
extern "C" int fn_02e1a9fc(int);

extern "C" unsigned int fn_02a63b18() {
    unsigned int temp_r3;

    if (fn_02e1a9fc(0) != 0) {
        temp_r3 = fn_02e1a9bc(0);
        switch (temp_r3) {
        case 0:
            return temp_r3;
        case 15:
            return 1U;
        default:
            return 2U;
        }
    } else {
        return 2U;
    }
}
