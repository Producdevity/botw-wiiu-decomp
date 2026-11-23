struct MutexOwner {
    char pad0[0x10];
    unsigned char mutex[0x2c];
};

// Coreinit OSFastMutex_Unlock.
extern "C" void fn_0434c268(void*);

extern "C" void fn_030bb7f8(MutexOwner* owner) {
    fn_0434c268(owner->mutex);
}
