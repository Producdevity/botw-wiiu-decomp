typedef unsigned char u8;
typedef int s32;

extern "C" int fn_024edf80(void*);
extern "C" int fn_02597930(void*);

extern "C" u8 fn_024ee4dc(void *object) {
    s32 result = 0;
    if ((fn_024edf80(object) == 0) && (fn_02597930(object) != 0)) {
        result = 1;
    }
    return result;
}
