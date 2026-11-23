#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cd98;
extern "C" RuntimeTag data_1048cd9c;
extern "C" const RuntimeVTable data_1012b7ac;
extern "C" unsigned data_1048b82c;
extern "C" RuntimeTag data_1048b828;
extern "C" const RuntimeVTable data_1012b79c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012b78c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012b77c;

typedef Pointer<&data_1048cd98, &data_1048cd9c, &data_1012b7ac> Type0;
typedef Pointer<&data_1048b82c, &data_1048b828, &data_1012b79c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1012b78c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1012b77c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0278055c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
