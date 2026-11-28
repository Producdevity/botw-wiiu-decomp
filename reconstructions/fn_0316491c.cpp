typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03164730(void*);

extern "C" u8 fn_0316491c(s32 base) {
    s32 first = fn_03164730((void *)(base + 0x4A8));
    s32 second = fn_03164730((void *)(base + 0x4F4));
    s32 result = 0;
    if ((first != 0) && (second != 0)) {
        result = 1;
    }
    return result;
}
