typedef int s32;

extern "C" void fn_031ff300(void*, int, void*);
extern "C" unsigned char fn_0341d958(void);

extern "C" void *data_1046d59c;

extern "C" void fn_034cc770(s32 arg0) {
    if (fn_0341d958() == 0) {
        fn_031ff300(data_1046d59c, 5, (void *)(arg0 + 0x58));
    }
}
