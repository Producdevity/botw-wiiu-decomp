typedef int s32;

extern "C" bool fn_03070fc4(void);
extern "C" void* data_1046bdd8;

extern "C" s32 data_10549db0;

extern "C" s32 *fn_03079638(void) {
    if ((fn_03070fc4() != 0) && (((char *)data_1046bdd8 + 0x20) != 0)) {
        return (s32 *)((char *)data_1046bdd8 + 0x70);
    }
    return &data_10549db0;
}
