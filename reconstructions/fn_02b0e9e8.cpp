extern "C" int fn_02b0da48(int);
extern "C" int fn_02b0da78(int);
extern "C" int fn_02b0daa8(int);
extern "C" void fn_02b0e0c4(int, int);
extern "C" void fn_02b0e180(int, int);
extern "C" void fn_02b0e23c(int, int);

extern "C" void fn_02b0e9e8(int object, unsigned int kind) {
    switch (kind) {
    case 3:
        if (fn_02b0da78(object) != 0) {
            fn_02b0e180(object, -1);
            return;
        }
        return;
    case 2:
        if (fn_02b0da48(object) != 0) {
            fn_02b0e0c4(object, -1);
            return;
        }
        break;
    case 4:
        if (fn_02b0daa8(object) != 0) {
            fn_02b0e23c(object, -1);
        }
        break;
    }
}
