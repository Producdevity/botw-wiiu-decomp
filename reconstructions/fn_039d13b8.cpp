extern "C" int fn_039cf794(void*);
extern "C" int fn_039cf7c0(void*);
extern "C" int fn_039cf888(void*);
extern "C" void fn_03b365c8(int);
extern "C" void fn_03b3d648(void*);
extern "C" void fn_03a5cd7c(int);

extern "C" void fn_039d13b8(char* self) {
    if (fn_039cf794(self) != 0) {
        fn_03b365c8(*(int*)(self + 0x210));
    }
    if (fn_039cf7c0(self) != 0) {
        fn_03b3d648(*(void**)(self + 0x214));
    }
    if (fn_039cf888(self) != 0) {
        fn_03a5cd7c(*(int*)(self + 0x224));
    }
}
