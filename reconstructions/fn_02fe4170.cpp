extern "C" void fn_02e6d924(void*, void*);
extern "C" void fn_02fe3d80(void*, int);

extern "C" void fn_02fe4170(void *arg0, void *arg1) {
    fn_02fe3d80(arg0, 0);
    fn_02fe3d80(arg0, 2);
    fn_02e6d924((char *)arg0 + 0x1DF8, arg1);
}
