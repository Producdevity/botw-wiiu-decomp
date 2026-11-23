#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b2f0;
extern "C" RuntimeTag data_1048b2ec;
extern "C" const RuntimeVTable data_100cae70;
extern "C" unsigned data_1048b2a0;
extern "C" RuntimeTag data_1048b29c;
extern "C" const RuntimeVTable data_100cae60;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100cae50;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100cae40;

typedef Pointer<&data_1048b2f0, &data_1048b2ec, &data_100cae70> Type0;
typedef Pointer<&data_1048b2a0, &data_1048b29c, &data_100cae60> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100cae50> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100cae40> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_024dca50(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
