namespace {
struct Entry {
    char padding_0[0x50];
    int index;
};
}

extern "C" void* fn_02b62bc8(void*);
extern "C" void* fn_02c1974c(void*, int);
extern "C" int fn_02c19788(void*);

extern "C" void* fn_02b75304(void* object) {
    Entry* entry = (Entry*)fn_02b62bc8(object);
    if (entry != 0) {
        int index = entry->index;
        if (index >= 0) {
            return fn_02c1974c(object, index);
        }
    }
    void* result = 0;
    if (fn_02c19788(object) != 0) {
        result = fn_02c1974c(object, 0);
    }
    return result;
}
