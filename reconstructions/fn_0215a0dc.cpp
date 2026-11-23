#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487e60;
extern "C" RuntimeTag data_10487e64;
extern "C" const RuntimeVTable data_1003094c;
extern "C" unsigned data_10487e58;
extern "C" RuntimeTag data_10487e5c;
extern "C" const RuntimeVTable data_1003093c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003092c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003091c;

typedef Pointer<&data_10487e60, &data_10487e64, &data_1003094c> Type0;
typedef Pointer<&data_10487e58, &data_10487e5c, &data_1003093c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1003092c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1003091c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0215a0dc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
