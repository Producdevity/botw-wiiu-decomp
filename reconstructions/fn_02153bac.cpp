#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487df0;
extern "C" RuntimeTag data_10487df4;
extern "C" const RuntimeVTable data_1002f6fc;
extern "C" unsigned data_10487de8;
extern "C" RuntimeTag data_10487dec;
extern "C" const RuntimeVTable data_1002f6ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002f6dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002f6cc;

typedef Pointer<&data_10487df0, &data_10487df4, &data_1002f6fc> Type0;
typedef Pointer<&data_10487de8, &data_10487dec, &data_1002f6ec> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1002f6dc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1002f6cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02153bac(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
