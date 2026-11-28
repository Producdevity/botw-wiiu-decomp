extern "C" int fn_02e1ad8c(int);
extern "C" int fn_02e1ad9c(int);
extern "C" int fn_02e1adac(int);
extern "C" int fn_02e1adbc(int);
extern "C" int fn_02e1adcc(int);

extern "C" int fn_02da6180() {
    int level;

    if (fn_02e1adcc(0) != 0) {
        return 5;
    }
    if (fn_02e1adbc(0) != 0) {
        return 4;
    }
    if (fn_02e1adac(0) != 0) {
        return 3;
    }
    level = 2;
    if (fn_02e1ad9c(0) == 0) {
        level = fn_02e1ad8c(0);
    }
    return level;
}
