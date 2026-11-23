typedef int s32;

extern "C" int fn_031cb284(void*);
extern "C" int data_1046d3ac;

extern "C" s32 fn_02c056b8(void) {
    if (((s32) data_1046d3ac != 0) && (fn_031cb284((void *) data_1046d3ac) != 0)) {
        return 1;
    }
    return 0;
}
