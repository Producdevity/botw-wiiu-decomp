extern "C" int fn_03b84908(void*);
extern "C" int fn_03b84bbc(void);

extern "C" int fn_03b84bec(void) {
    int result = fn_03b84bbc();

    if (result == 0 || fn_03b84908((void *)result) == 0) {
        result = 0;
    }
    return result;
}
