extern "C" void fn_02ece85c(void*, unsigned);
extern "C" void fn_03008534(void*, unsigned);
extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030c18dc(void*, unsigned);
extern "C" char data_102398a0;
extern "C" char data_102398b0;
extern "C" char data_102398c8;

extern "C" void fn_02f96f88(void* object, int flags)
{
    if (object != 0) {
        *(void**)((char*)object + 0x10) = &data_102398a0;
        *(void**)((char*)object + 0xA8) = &data_102398b0;
        *(void**)((char*)object + 0xA4) = &data_102398c8;
        fn_030c18dc((char*)object + 0x1C04, 2);
        fn_02ece85c((char*)object + 0x1B6C, 2);
        fn_03008534(object, 0);
        if ((unsigned short)(flags & 1)) {
            fn_0308e6d0(object);
        }
    }
}
