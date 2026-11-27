extern "C" void fn_0378da14(void *);
extern "C" bool fn_0378da88(void *);
extern "C" void fn_0378dc60(int, int);

extern "C" void fn_029aa1a8(void *arg0) {
    char* slot;
    if (fn_0378da88((char*) arg0 + 0x24) != 0) {
        slot = (char*) arg0 + 0x30;
        if (fn_0378da88(slot) == 0) {
            fn_0378dc60((int) slot, (int) arg0 + 0x24);
        } else {
            slot = (char*) arg0 + 0x3C;
            if (fn_0378da88(slot) == 0) {
                fn_0378dc60((int) slot, (int) arg0 + 0x24);
            }
        }
        fn_0378da14((char*) arg0 + 0x24);
    }
}
