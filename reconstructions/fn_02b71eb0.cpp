extern "C" int fn_03394870(int, int);
extern "C" int fn_0339488c(void*, void*);

extern "C" int fn_02b71eb0(int hash, void* other) {
    if ((fn_03394870(hash, -0x268A10F2) != 0 && fn_0339488c(other, (void*)0xD975EF0E) != 0) || (fn_03394870(hash, 0x1C516745) != 0 && fn_0339488c(other, (void*)0x1C516745) != 0)) {
        return 1;
    }
    return 0;
}
