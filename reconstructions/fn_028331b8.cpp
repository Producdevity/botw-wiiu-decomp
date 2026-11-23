#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d4b4;
extern "C" RuntimeTag data_1048d4b8;
extern "C" const RuntimeVTable data_101410fc;
extern "C" unsigned data_1048d0d8;
extern "C" RuntimeTag data_1048d0dc;
extern "C" const RuntimeVTable data_101410ec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101410dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101410cc;

typedef Pointer<&data_1048d4b4, &data_1048d4b8, &data_101410fc> Type0;
typedef Pointer<&data_1048d0d8, &data_1048d0dc, &data_101410ec> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101410dc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101410cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_028331b8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
