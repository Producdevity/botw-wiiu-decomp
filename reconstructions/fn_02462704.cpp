#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048afb8;
extern "C" RuntimeTag data_1048afbc;
extern "C" const RuntimeVTable data_100bc1ec;
extern "C" unsigned data_1048af2c;
extern "C" RuntimeTag data_1048af30;
extern "C" const RuntimeVTable data_100bc1dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100bc1cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100bc1bc;

typedef Pointer<&data_1048afb8, &data_1048afbc, &data_100bc1ec> Type0;
typedef Pointer<&data_1048af2c, &data_1048af30, &data_100bc1dc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100bc1cc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100bc1bc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02462704(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
