#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104892a8;
extern "C" RuntimeTag data_104892a4;
extern "C" const RuntimeVTable data_1006848c;
extern "C" unsigned data_10487958;
extern "C" RuntimeTag data_10487954;
extern "C" const RuntimeVTable data_1006847c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006846c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006845c;

typedef Pointer<&data_104892a8, &data_104892a4, &data_1006848c> Type0;
typedef Pointer<&data_10487958, &data_10487954, &data_1006847c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1006846c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1006845c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0226f940(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
