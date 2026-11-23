extern "C" void fn_02fd71c8(int, int);
extern "C" bool fn_03070ebc();
extern "C" int fn_030770b4(int, void*);

extern "C" int fn_03077504(int arg0) {
    int sp8;

    if (fn_03070ebc() != 0) {
        sp8 = 0;
        if (fn_030770b4(2, &sp8) != 0) {
            fn_02fd71c8(sp8, arg0);
            return 1;
        }
    }
    return 0;
}
