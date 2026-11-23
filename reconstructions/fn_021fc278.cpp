#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488a08;
extern "C" RuntimeTag data_10488a0c;
extern "C" const RuntimeVTable data_10050584;
extern "C" unsigned data_104889f0;
extern "C" RuntimeTag data_104889f4;
extern "C" const RuntimeVTable data_10050574;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10050564;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10050554;

typedef Pointer<&data_10488a08, &data_10488a0c, &data_10050584> Type0;
typedef Pointer<&data_104889f0, &data_104889f4, &data_10050574> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10050564> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10050554> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021fc278(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
