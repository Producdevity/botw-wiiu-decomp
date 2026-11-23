extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03a77fc8(void* self, int a, int b);
extern "C" void* fn_0434c000(void* dst, int value, unsigned size);

namespace {

struct Triple {
    int a;
    int b;
    int c;
};

inline void constructTriple(Triple* triple) {
    if (!triple) {
        triple = static_cast<Triple*>(fn_0308e578(sizeof(Triple)));
        if (!triple)
            return;
    }
    triple->a = 0;
    triple->b = 0;
    triple->c = 0;
}

struct Holder {
    Triple triple;
};

inline void constructHolder(Holder* holder) {
    if (!holder) {
        holder = static_cast<Holder*>(fn_0308e578(sizeof(Holder)));
        if (!holder)
            return;
    }
    constructTriple(&holder->triple);
}

struct Object {
    unsigned char base[168];
    int count;
    int capacity;
    Holder holder;
    unsigned char block[156];
};
typedef char ObjectSize[sizeof(Object) == 344 ? 1 : -1];

}

extern "C" Object* fn_03a7732c(Object* object) {
    if (!object) {
        object = static_cast<Object*>(fn_0308e578(sizeof(Object)));
        if (!object)
            return object;
    }
    fn_03a77fc8(object, 0, 0);
    object->count = 0;
    object->capacity = 2048;
    constructHolder(&object->holder);
    fn_0434c000(object->block, 0, sizeof(object->block));
    return object;
}
