extern "C" void* fn_03076b58(void* self);
extern "C" void fn_03076a7c(void* value);
extern "C" bool fn_02312038(void* self) {
    void* value = fn_03076b58(self);
    if (value) {
        fn_03076a7c(value);
        return true;
    }
    return false;
}
