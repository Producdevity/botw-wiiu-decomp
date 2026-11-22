extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_04211384(void* buffer, unsigned int size);

struct ClearedBlock196 {
    unsigned short first;
    unsigned short second;
    unsigned char data[192];
};
typedef char ClearedBlock196Size[sizeof(ClearedBlock196) == 196 ? 1 : -1];

extern "C" ClearedBlock196* fn_031f9818(ClearedBlock196* storage) {
    if (storage || (storage = static_cast<ClearedBlock196*>(fn_0308e578(sizeof(ClearedBlock196))))) {
        storage->first = 0;
        storage->second = 0;
        fn_04211384(storage->data, sizeof(storage->data));
    }
    return storage;
}
