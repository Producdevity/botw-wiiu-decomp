extern "C" int fn_039d5d50(void*);
extern "C" int fn_039d3cfc(void*);
extern "C" int fn_039d3d28(void*);
extern "C" void fn_03b07154(void*);
extern "C" void fn_03b01294(void*);
extern "C" void fn_03980998(int);

extern "C" void fn_039d5df8(char* self) {
    if (fn_039d5d50(self) != 0) {
        fn_03b07154(*(void**)(self + 0x39C));
    }
    if (fn_039d3cfc(self) != 0) {
        fn_03b01294(*(void**)(self + 0x384));
    }
    if (fn_039d3d28(self) != 0) {
        fn_03980998(*(int*)(self + 0x388));
    }
}
