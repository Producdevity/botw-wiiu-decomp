#include "botw/memory.h"

struct Entry {
    unsigned words[2];
    unsigned char active;
    unsigned char remainder[11];
};

struct Object {
    Entry entries[16];
    unsigned range[3];
    unsigned count;
    unsigned capacity;
    unsigned position;
};

extern "C" void fn_03a8490c(Object* object) {
    if (object->range[0]) {
        for (int index = 0; index < 16; ++index) {
            Entry* entry = static_cast<unsigned>(index) < 16
                ? &object->entries[index] : &object->entries[0];
            entry->active = 0;
        }
        fn_03a4d6c8(object->range);
        object->count = 0;
        object->capacity = 0;
        object->position = 0;
    }
}
