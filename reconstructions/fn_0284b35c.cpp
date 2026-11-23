#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d610;
extern "C" RuntimeTag data_1048d614;
extern "C" const RuntimeVTable data_10144b6c;
extern "C" unsigned data_1048a240;
extern "C" RuntimeTag data_1048b98c;
extern "C" const RuntimeVTable data_10144b5c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10144b4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10144b3c;

typedef Pointer<&data_1048d610, &data_1048d614, &data_10144b6c> Type0;
typedef Pointer<&data_1048a240, &data_1048b98c, &data_10144b5c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10144b4c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10144b3c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0284b35c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
