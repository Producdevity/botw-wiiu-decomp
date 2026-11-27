typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02c62258(void*);
struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

extern "C" u8 fn_02c623bc(struct InferredObject **object_slot) {
    s32 result = 0;
    if ((fn_02d82148(*object_slot) != 0) && (fn_02c62258(object_slot) != 0)) {
        result = 1;
    }
    return result;
}
