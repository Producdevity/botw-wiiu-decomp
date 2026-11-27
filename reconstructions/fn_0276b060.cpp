typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0276ad94(void*);
extern "C" int fn_0276af68(void*);

extern "C" u8 fn_0276b060(void *object) {
    s32 result = 0;
    if ((fn_0276af68(object) != 0) && (fn_0276ad94(object) != 0)) {
        result = 1;
    }
    return result;
}
