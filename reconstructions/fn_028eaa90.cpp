extern "C" void fn_0259766c(void* object);
extern "C" int fn_02b67054(void* owner, int value);

extern "C" void fn_028eaa90(void* object) {
    if (fn_02b67054(*(void**)object, 1) == 0) {
        *(int*)((char*)object + 0x5C) += 1;
    }
    fn_0259766c(object);
}
