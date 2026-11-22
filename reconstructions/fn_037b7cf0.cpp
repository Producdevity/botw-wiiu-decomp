extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030e9980(void* storage, const void* source);
extern "C" const unsigned char data_1031b5d0[];

namespace {
struct WordPair {
    unsigned first;
    unsigned second;
};

struct Object {
    unsigned char base[12];
    const unsigned char* vtable;
    unsigned short slots[4];
    WordPair pair;
};
typedef char ObjectSize[sizeof(Object) == 32 ? 1 : -1];

inline WordPair* construct_pair(WordPair* pair) {
    if (!pair)
        pair = static_cast<WordPair*>(fn_0308e578(sizeof(WordPair)));
    if (pair) {
        pair->first = 0;
        pair->second = 0;
    }
    return pair;
}
}

extern "C" void* fn_037b7cf0(void* storage, const void* source) {
    Object* object = static_cast<Object*>(storage);
    if (!object) {
        object = static_cast<Object*>(fn_0308e578(sizeof(Object)));
        if (!object)
            return object;
    }
    fn_030e9980(object, source);
    object->vtable = data_1031b5d0;
    object->slots[0] = 0xffff;
    object->slots[1] = 0xffff;
    object->slots[2] = 0xffff;
    object->slots[3] = 0xffff;
    construct_pair(&object->pair);
    return object;
}
