namespace {
struct Object {
    char padding_0[0x4E8];
    int first;
    int second;
};
}

extern "C" void fn_03610fc4(void* object, int enabled, int value) {
    if (enabled != 0) {
        static_cast<Object*>(object)->first = value;
        static_cast<Object*>(object)->second = 1;
        return;
    }
    static_cast<Object*>(object)->first = -1;
    static_cast<Object*>(object)->second = -1;
}
