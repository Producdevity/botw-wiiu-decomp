extern "C" int fn_03072538(void*, void*);
extern "C" int fn_03072870(void);

extern "C" int fn_02b7865c(void* object, void* other) {
    if (fn_03072538(object, other) == 0 && fn_03072870() != 0) {
        return 0;
    }
    return 1;
}
