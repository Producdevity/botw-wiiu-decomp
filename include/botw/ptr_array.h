#ifndef BOTW_PTR_ARRAY_H
#define BOTW_PTR_ARRAY_H

// Pointer array with a signed count; out-of-range reads fall back to slot 0.
struct PtrArray {
    int count;
    void** data;
};
typedef char PtrArraySize[sizeof(PtrArray) == 8 ? 1 : -1];

inline void** ptr_array_slot(PtrArray* array, int index) {
    if ((unsigned)index < (unsigned)array->count) {
        return array->data + index;
    }
    return array->data;
}

#endif
