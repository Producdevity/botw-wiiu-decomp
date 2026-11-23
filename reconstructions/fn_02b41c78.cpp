typedef int s32;

extern "C" int fn_02a2a398(void*, void*);
extern "C" void* data_1046378c;

extern "C" s32 fn_02b41c78(void *arg0, void *arg1) {
    if (((void *) data_1046378c != 0) && (fn_02a2a398(arg1, arg0) != 0)) {
        return 0;
    }
    return 1;
}
