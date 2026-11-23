#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487614;
extern "C" RuntimeTag data_10487618;
extern "C" const RuntimeVTable data_1029ee14;
extern "C" unsigned data_10486d78;
extern "C" RuntimeTag data_10486e2c;
extern "C" const RuntimeVTable data_1029ee04;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029edf4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029ede4;

typedef Pointer<&data_10487614, &data_10487618, &data_1029ee14> Type0;
typedef Pointer<&data_10486d78, &data_10486e2c, &data_1029ee04> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1029edf4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1029ede4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03280334(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
