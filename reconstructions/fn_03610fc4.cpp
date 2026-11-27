namespace {
struct Object {
    char padding_0[0x4E8];
    int first;
    int second;
};
}

extern "C" void fn_03610fc4(void* arg0, int enabled, int value) {
    if (enabled != 0) {
        ((Object*)arg0)->first = value;
        ((Object*)arg0)->second = 1;
        return;
    }
    ((Object*)arg0)->first = -1;
    ((Object*)arg0)->second = -1;
}
