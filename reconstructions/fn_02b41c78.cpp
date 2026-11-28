extern "C" int fn_02a2a398(void*, void*);
extern "C" void* data_1046378c;

extern "C" int fn_02b41c78(void* object, void* other) {
    if (data_1046378c != 0 && fn_02a2a398(other, object) != 0) {
        return 0;
    }
    return 1;
}
