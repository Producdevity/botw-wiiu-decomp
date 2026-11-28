namespace {
struct Entry {
    char padding_0[4];
    unsigned short key;
};
}

extern "C" int fn_037bce6c(void* first, void* second) {
    if (first == 0) {
        return 1;
    }
    if (second != 0) {
        return ((Entry*)second)->key - ((Entry*)first)->key;
    }
    return -1;
}
