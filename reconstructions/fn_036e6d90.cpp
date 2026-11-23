extern "C" void fn_03a64798(int, int);

extern "C" void fn_036e6d90(void* object) {
    fn_03a64798(*(int*)object, *(int*)((char*)object + 4));
}
