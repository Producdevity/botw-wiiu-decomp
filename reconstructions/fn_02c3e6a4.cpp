typedef int s32;

struct InferredObject;
extern "C" bool fn_031fa280(const void*);
struct Opaque_0341d94c;
extern "C" Opaque_0341d94c* fn_0341d94c(void);
extern "C" int fn_034eda4c(void*);

extern "C" void *data_1046ff74;

extern "C" s32 fn_02c3e6a4(void) {
    if ((fn_034eda4c(data_1046ff74) != 0) || (fn_031fa280((const InferredObject *)(fn_0341d94c())) != 0)) {
        return 1;
    }
    return 0;
}
