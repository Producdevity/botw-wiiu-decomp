extern "C" void fn_02296ad8(void*);
extern "C" void fn_030ea2cc(void*);
extern "C" void fn_037924b4(void*);
extern "C" const float data_1006f7a8;

extern "C" void fn_0229d3c0(char* self) {
    fn_02296ad8(self);
    if (**(int**)(self + 0x18) > 0) {
        if (!(*(float*)(self + 0x20) > data_1006f7a8)) {
            fn_030ea2cc(self);
            return;
        }
        fn_037924b4(self + 0x20);
    }
}
