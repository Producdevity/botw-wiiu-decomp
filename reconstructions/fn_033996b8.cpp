typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0339943c(void);
struct InferredObject;
extern "C" unsigned int fn_03798bf0(const void*);

extern "C" u8 fn_033996b8(struct InferredObject *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (arg0 != 0) {
        fn_03798bf0(arg0);
        if (fn_0339943c() != 0) {
            var_r31 = 1;
        }
    }
    return var_r31;
}
