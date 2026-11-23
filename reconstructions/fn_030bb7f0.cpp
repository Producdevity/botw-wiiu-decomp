struct MutexOwner {
    char pad0[0x10];
    unsigned char mutex[0x2c];
};

// Coreinit OSFastMutex_Lock.
extern "C" void fn_0434c258(void*);

extern "C" void fn_030bb7f0(MutexOwner* owner) {
    fn_0434c258(owner->mutex);
}
