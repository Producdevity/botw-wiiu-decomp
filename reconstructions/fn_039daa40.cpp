extern "C" bool fn_039d9944(const void*);
extern "C" int fn_039d9954(void*);
extern "C" void fn_03ab8b88(int, unsigned char);
extern "C" void fn_03ab52f4(void*, void*);

extern "C" void fn_039daa40(char* self, unsigned char* value) {
    if (fn_039d9944(self) != 0) {
        fn_03ab8b88(*(int*)(self + 0x228), *value);
    }
    if (fn_039d9954(self) != 0) {
        fn_03ab52f4(*(void**)(self + 0x22C), (void*)*value);
    }
}
