typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03399724(void*);
extern "C" int fn_03399a80(void*);

extern "C" u8 fn_03399b54(void *object) {
    s32 result;

    result = 1;
    if ((fn_03399724(object) == 0) && (fn_03399a80(object) == 0)) {
        result = 0;
    }
    return result;
}
