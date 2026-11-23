extern "C" void fn_04347d28(int, int);

extern "C" void fn_03a74cf0(void* object) {
    fn_04347d28((*(int*)object) + (*(int*)((char*)object + 4)), *(int*)((char*)object + 20));
}
