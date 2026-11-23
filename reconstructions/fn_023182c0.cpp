extern "C" void* fn_03076b58(void* self);
extern "C" void fn_0307670c();
extern "C" bool fn_023182c0(void* self) {
    if (!fn_03076b58(self)) {
        fn_0307670c();
        return true;
    }
    return false;
}
