namespace {
struct Object {
    char padding_0[0x21];
    unsigned char flag;
};
}

extern "C" void fn_032ffb5c(void* object) {
    if (((Object*)object)->flag == 0) {
        ((Object*)object)->flag = 1;
    }
}
