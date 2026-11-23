typedef signed char s8;

extern "C" void fn_02e1b02c(void*, void*);
extern "C" void fn_02e1b238(void*);
extern "C" void fn_02e1b438(void*);
extern "C" void fn_02e1b7fc(void*);
extern "C" void fn_02e1bad0(void*);

extern "C" void fn_02e370f4(s8 *arg0, void *arg1) {
    *arg0 = 1;
    fn_02e1b02c(arg0 + 4, arg1);
    fn_02e1b238(arg0 + 0xC);
    fn_02e1b438(arg0 + 0x14);
    fn_02e1b7fc(arg0 + 0x1C);
    fn_02e1bad0(arg0 + 0x24);
}
