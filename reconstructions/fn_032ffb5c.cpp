namespace {
struct Object {
    char padding_0[0x21];
    unsigned char flag;
};
}

extern "C" void fn_032ffb5c(void* arg0) {
    if (((Object*)arg0)->flag == 0) {
        ((Object*)arg0)->flag = 1;
    }
}
