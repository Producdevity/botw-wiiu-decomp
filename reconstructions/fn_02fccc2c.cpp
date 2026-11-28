extern "C" void fn_02e6bf5c(void* object, unsigned flags);
extern "C" void fn_03008534(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_02e6bbd8(void*, unsigned);
extern "C" char data_10244d00;
extern "C" char data_10244d10;
extern "C" char data_10244d28;

extern "C" void fn_02fccc2c(void* object, int flags)
{
    if (object != 0) {
        *(void**)((char*)object + 0x10) = &data_10244d00;
        *(void**)((char*)object + 0xA8) = &data_10244d10;
        *(void**)((char*)object + 0xA4) = &data_10244d28;
        fn_02e6bbd8((char*)object + 0x1BB0, 2);
        fn_02e6bf5c((char*)object + 0x1B8C, 2);
        fn_03008534(object, 0);
        if ((unsigned short)(flags & 1)) {
            fn_0308e6d0(object);
        }
    }
}

// TYPE-UNRESOLVED flags
// TYPE-UNRESOLVED flags