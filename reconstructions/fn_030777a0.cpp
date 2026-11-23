extern "C" void fn_02fd7484(int, int);
extern "C" bool fn_03070ebc();
extern "C" int fn_030770b4(int, void*);

extern "C" int fn_030777a0(int arg0) {
    int sp8;

    if (fn_03070ebc() != 0) {
        sp8 = 0;
        if (fn_030770b4(6, &sp8) != 0) {
            fn_02fd7484(sp8, arg0);
            return 1;
        }
    }
    return 0;
}
