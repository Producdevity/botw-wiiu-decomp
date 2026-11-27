namespace {
struct Entry {
    char padding_0[4];
    unsigned short key;
};
}

extern "C" int fn_037bce6c(void* arg0, void* arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg1 != 0) {
        return ((Entry*)arg1)->key - ((Entry*)arg0)->key;
    }
    return -1;
}
