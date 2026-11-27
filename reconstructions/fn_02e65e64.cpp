typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_02c10bc4(void *, unsigned);
extern "C" int fn_02e57ce0(void*);
extern "C" int data_10467e08;

extern "C" u8 fn_02e65e64(void) {
    s32 resolvedAddress;

    if (((s32) data_10467e08 == 0) || (resolvedAddress = fn_02e57ce0((void *) data_10467e08), ((resolvedAddress == 0) != 0))) {
        return 0U;
    }
    return fn_02c10bc4((void *)(resolvedAddress + 0x550), 1U);
}
