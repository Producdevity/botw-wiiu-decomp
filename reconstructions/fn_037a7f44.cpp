extern "C" const unsigned char data_10263910[];

namespace {
struct SafeString {
    const char* string;
    const unsigned char* vtable;
};
typedef char SafeStringSize[sizeof(SafeString) == 8 ? 1 : -1];
}

extern "C" void* fn_037a7ef0(void* owner, void* key);
extern "C" void* fn_034a9a78(void* object, const SafeString* name);

extern "C" void* fn_037a7f44(void* owner, void* key, const char* name) {
    void* object = fn_037a7ef0(owner, key);
    if (object) {
        SafeString string = {name, data_10263910};
        return fn_034a9a78(object, &string);
    }
    return 0;
}
