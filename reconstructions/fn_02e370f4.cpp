extern "C" void fn_02e1b02c(void*, void*);
extern "C" void fn_02e1b238(void*);
extern "C" void fn_02e1b438(void*);
extern "C" void fn_02e1b7fc(void*);
extern "C" void fn_02e1bad0(void*);

extern "C" void fn_02e370f4(signed char* object, void* other) {
    *object = 1;
    fn_02e1b02c(object + 4, other);
    fn_02e1b238(object + 0xC);
    fn_02e1b438(object + 0x14);
    fn_02e1b7fc(object + 0x1C);
    fn_02e1bad0(object + 0x24);
}
