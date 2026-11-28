extern "C" int fn_02e18180(int);
extern "C" int fn_02e18190(int);
extern "C" int fn_02e181a0(int);
extern "C" int fn_02e181b0(int);

extern "C" int fn_02485dd8() {
    int count = 0;
    if (fn_02e181b0(0) != 0) {
        count = 1;
    }
    if (fn_02e181a0(0) != 0) {
        count += 1;
    }
    if (fn_02e18190(0) != 0) {
        count += 1;
    }
    if (fn_02e18180(0) != 0) {
        count += 1;
    }
    return count;
}
