extern "C" int fn_02b29d28(void *object);

extern "C" int fn_02638124(void* object) {
    return fn_02b29d28(*(void **)object);
}
