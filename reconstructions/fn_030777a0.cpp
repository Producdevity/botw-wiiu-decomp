extern "C" void fn_02fd7484(int, int);
extern "C" bool fn_03070ebc();
extern "C" int fn_030770b4(int, void*);

extern "C" int fn_030777a0(int value) {
    int found;

    if (fn_03070ebc() != 0) {
        found = 0;
        if (fn_030770b4(6, &found) != 0) {
            fn_02fd7484(found, value);
            return 1;
        }
    }
    return 0;
}
