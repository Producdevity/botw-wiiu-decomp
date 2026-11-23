extern "C" void fn_02e6d924(void*, void*);
extern "C" void fn_02fe3d80(void*, int);

extern "C" void fn_02fe40f8(void* arg0, int arg1, int arg2) {
    if (arg1 == 1) {
        fn_02fe3d80(arg0, 8);
    } else if (arg1 == 2) {
        fn_02fe3d80(arg0, 1);
    }
    fn_02fe3d80(arg0, 2);
    fn_02e6d924((char*)arg0 + 0x1DF8, (void*)(arg2));
}
