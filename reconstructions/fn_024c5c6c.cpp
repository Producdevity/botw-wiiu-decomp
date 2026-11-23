#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b1dc;
extern "C" RuntimeTag data_1048b1e0;
extern "C" const RuntimeVTable data_100c820c;
extern "C" unsigned data_1048b1d4;
extern "C" RuntimeTag data_1048b1d8;
extern "C" const RuntimeVTable data_100c81fc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100c81ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100c81dc;

typedef Pointer<&data_1048b1dc, &data_1048b1e0, &data_100c820c> Type0;
typedef Pointer<&data_1048b1d4, &data_1048b1d8, &data_100c81fc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100c81ec> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100c81dc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_024c5c6c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
