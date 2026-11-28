extern "C" int fn_039d9980(void*);
extern "C" bool fn_039d9944(const void*);
extern "C" int fn_039d9954(void*);
extern "C" void fn_03a9d4f0(void*);
extern "C" void fn_03ab85d8(void*);
extern "C" void fn_03ab52f0(void*);

extern "C" void fn_039da410(char* self) {
    if (fn_039d9980(self) != 0) {
        fn_03a9d4f0(*(void**)(self + 0x220));
    }
    if (fn_039d9944(self) != 0) {
        fn_03ab85d8(*(void**)(self + 0x228));
    }
    if (fn_039d9954(self) != 0) {
        fn_03ab52f0(*(void**)(self + 0x22C));
    }
}
