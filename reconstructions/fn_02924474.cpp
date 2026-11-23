#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048decc;
extern "C" RuntimeTag data_1048ded0;
extern "C" const RuntimeVTable data_10166c1c;
extern "C" unsigned data_1048cf60;
extern "C" RuntimeTag data_1048cf5c;
extern "C" const RuntimeVTable data_10166c0c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10166bfc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10166bec;

typedef Pointer<&data_1048decc, &data_1048ded0, &data_10166c1c> Type0;
typedef Pointer<&data_1048cf60, &data_1048cf5c, &data_10166c0c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10166bfc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10166bec> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02924474(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
