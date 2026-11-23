#ifndef BOTW_OBJECT_HANDLE_PAIR_H
#define BOTW_OBJECT_HANDLE_PAIR_H

struct ObjectHandlePair {
    void* object;
    unsigned int token;
};
typedef char ObjectHandlePairSize[sizeof(ObjectHandlePair) == 8 ? 1 : -1];

extern "C" void fn_03ba0660(void* owner, void* key, ObjectHandlePair* result);
extern "C" ObjectHandlePair fn_03b91130(void* owner, void* key);

#endif
