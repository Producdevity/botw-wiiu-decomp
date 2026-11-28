namespace {
struct Node {
    unsigned char padding_0[0xB];
    unsigned char flags;
};
}

extern "C" int fn_02bd5618(void*);

extern "C" int fn_02bd5804(void* object) {
    int result = 1;
    if (fn_02bd5618(object) == 0) {
        result = ((Node*)object)->flags & 1;
    }
    return result;
}
