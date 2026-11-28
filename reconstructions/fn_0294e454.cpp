typedef unsigned char u8;
typedef int s32;

struct Base;
extern "C" unsigned char* fn_0294e3b8(void*);
extern "C" int fn_03396390(void*);

extern "C" u8 fn_0294e454(struct Base *object) {
    u8 *target;
    s32 result;

    target = fn_0294e3b8(object);
    result = 0;
    if ((target != 0) && (fn_03396390(target) != 0)) {
        result = 1;
    }
    return result;
}
