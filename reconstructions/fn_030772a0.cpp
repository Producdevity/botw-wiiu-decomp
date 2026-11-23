extern "C" bool fn_03070ebc();
extern "C" int fn_030770b4(int, void*);

extern "C" int fn_030772a0(signed char arg0) {
    void* sp8;

    if (fn_03070ebc() != 0) {
        sp8 = 0;
        if (fn_030770b4(0, &sp8) != 0) {
            (*(signed char*)((char*)sp8 + 0x1B98)) = arg0;
            return 1;
        }
    }
    return 0;
}
