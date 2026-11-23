extern "C" void* fn_03076b58(void* self);
extern "C" void fn_03076630();

extern "C" bool fn_02317e44(void* self) {
    if (!fn_03076b58(self)) {
        fn_03076630();
        return true;
    }
    return false;
}
