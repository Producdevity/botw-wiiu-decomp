#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488c10;
extern "C" RuntimeTag data_10488c14;
extern "C" const RuntimeVTable data_10055a98;
extern "C" unsigned data_10488c08;
extern "C" RuntimeTag data_10488c0c;
extern "C" const RuntimeVTable data_10055a88;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10055a78;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10055a68;

typedef Pointer<&data_10488c10, &data_10488c14, &data_10055a98> Type0;
typedef Pointer<&data_10488c08, &data_10488c0c, &data_10055a88> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10055a78> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10055a68> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02212998(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
