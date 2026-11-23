#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048e344;
extern "C" RuntimeTag data_1048e340;
extern "C" const RuntimeVTable data_10175678;
extern "C" unsigned data_1048b2b4;
extern "C" RuntimeTag data_1048b2b8;
extern "C" const RuntimeVTable data_10175668;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10175658;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10175648;

typedef Pointer<&data_1048e344, &data_1048e340, &data_10175678> Type0;
typedef Pointer<&data_1048b2b4, &data_1048b2b8, &data_10175668> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10175658> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10175648> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_029929e8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
