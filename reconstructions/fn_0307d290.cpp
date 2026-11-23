typedef int s32;

extern "C" void fn_03059308(void*);
extern "C" bool fn_03070fc4(void);
extern "C" int fn_0307d1a4(void);
extern "C" void* data_1046bdd8;

extern "C" s32 fn_0307d290(void) {
    if ((fn_0307d1a4() != 0) && (fn_03070fc4() != 0)) {
        fn_03059308(data_1046bdd8);
        return 1;
    }
    return 0;
}
