extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02440ed4(void* object, void* arg1, void* arg2) {
    fn_030e9d18(*(const void**)object, arg1, arg2);
}
