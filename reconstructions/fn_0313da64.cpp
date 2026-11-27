typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0311f8b8(void*, int);

extern "C" u8 fn_0313da64(void **objectSlot) {
    s32 result;
    void *object;

    object = *objectSlot;
    result = 0;
    if ((object != 0) && (fn_0311f8b8(object, 0) == 0)) {
        result = 1;
    }
    return result;
}
