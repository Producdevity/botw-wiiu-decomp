namespace {
struct Object {
    char padding_0[0x20];
    short* target;
};
}

extern "C" void fn_03717e34(void* arg0) {
    short* target = ((Object*)arg0)->target;
    if (target != 0) {
        *target = 0;
    }
}
