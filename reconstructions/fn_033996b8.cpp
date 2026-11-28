typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0339943c(void);
struct InferredObject;
extern "C" unsigned int fn_03798bf0(const void*);

extern "C" u8 fn_033996b8(struct InferredObject *object) {
    s32 result = 0;
    if (object != 0) {
        fn_03798bf0(object);
        if (fn_0339943c() != 0) {
            result = 1;
        }
    }
    return result;
}
